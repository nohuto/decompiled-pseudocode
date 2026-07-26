/*
 * XREFs of ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A37F0
 * Callers:
 *     ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0118D40 (-ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C002F4DC (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisCancelOidRequestInternal @ 0x1C0069DF4 (ndisCancelOidRequestInternal.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00FB6F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FCBA4 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0118A9C (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C01239B8 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisMReenumerateFailedAdapterInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // r14
  unsigned __int64 *p_Lock; // rbx
  KIRQL v4; // al
  unsigned int PnPFlags; // ecx
  int v6; // edx
  __int64 v7; // rsi
  __int64 MiniportFatalErrorTimestampIndex; // rax
  unsigned __int64 v9; // rbp
  __int64 LastMiniportFatalErrorReason; // rax
  KIRQL v11; // al
  struct NDISWATCHDOG__ *Watchdog; // rax
  ULONG VerifierFlags; // [rsp+70h] [rbp+8h] BYREF
  ULONG v14; // [rsp+78h] [rbp+10h] BYREF

  IfBlock = a1->IfBlock;
  p_Lock = &a1->Lock;
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = 0LL;
  PnPFlags = a1->PnPFlags;
  if ( (PnPFlags & 0x100) != 0 )
  {
    KeReleaseSpinLock(p_Lock, v4);
  }
  else
  {
    a1->WSyncFlags |= 4u;
    a1->PnPFlags = PnPFlags | 0x100;
    KeReleaseSpinLock(p_Lock, v4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        17,
        66,
        (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
        (char)a1);
    }
    ndisLogMiniportEvent((__int64)a1, IfBlock->LastMiniportFatalErrorReason);
    v7 = MEMORY[0xFFFFF78000000008];
    MiniportFatalErrorTimestampIndex = IfBlock->MiniportFatalErrorTimestampIndex;
    v9 = IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex];
    IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex] = MEMORY[0xFFFFF78000000008];
    LastMiniportFatalErrorReason = (unsigned __int16)IfBlock->LastMiniportFatalErrorReason;
    IfBlock->MiniportFatalErrorTimestampIndex = ((unsigned int)IfBlock->MiniportFatalErrorTimestampIndex + 1) % 3;
    DbgkWerCaptureLiveKernelDump(
      L"NDIS",
      350LL,
      1LL,
      a1,
      a1->PhysicalDeviceObject,
      LastMiniportFatalErrorReason,
      a1,
      ndisFailedAdapterLiveDumpCallback,
      0);
    if ( ndisMAllowSilentReenumerate(a1) )
    {
      v9 = 0LL;
    }
    else
    {
      VerifierFlags = 0;
      if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 && (VerifierFlags & 0x200000) != 0 )
      {
        v14 = 0;
        if ( MmIsVerifierEnabled(&v14) < 0 || (v14 & 0x400000) == 0 )
          NT_ASSERT(
            "*** An NDIS miniport driver has encountered a fatal error
    This is NOT a break in NDIS.sys
    The most c"
            "ommon causes of these types of breaks are hung/unresponsive miniport firmware,
    failed power transitions,"
            " or failing MiniportRestart.
");
      }
    }
    ndisCancelOidRequestInternal((__int64)a1, 0LL, 0, 1u);
    if ( v9 && v7 - v9 <= 0x23C34600 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc(p_Lock);
      a1->WSyncFlags &= ~4u;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(p_Lock, v11);
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
    }
    else
    {
      if ( a1->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi && !ndisBugCheckOnReenumerationTimeout )
      {
        ndisDisarmWatchdog(a1->ReenumerateWatchdog.m_ptr);
        Watchdog = ndisAllocateWatchdog();
        wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
          &a1->ReenumerateWatchdog.m_ptr,
          Watchdog);
        ndisArmWatchdog(a1->ReenumerateWatchdog.m_ptr, a1, 0x27u, 0LL, 0x88B8u, 0LL);
      }
      ((void (__fastcall *)(void *, __int64, _QWORD))a1->ReenumerateSelfInterface->DeviceReset)(
        a1->ReenumerateSelfInterface->Context,
        1LL,
        0LL);
    }
  }
}
