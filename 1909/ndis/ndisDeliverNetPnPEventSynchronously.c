/*
 * XREFs of ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974
 * Callers:
 *     ndisNotifyBindFailure @ 0x1C003A804 (ndisNotifyBindFailure.c)
 *     ndisIMCheckDeviceInstance @ 0x1C0080108 (ndisIMCheckDeviceInstance.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C01052A0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00FB6F0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ndisInvokeNetPnPEvent @ 0x1C00FC890 (ndisInvokeNetPnPEvent.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00FCAEC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FCBA4 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0123E24 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // rbp
  __int64 v7; // r12
  void *v8; // r13
  unsigned __int64 v9; // rbx
  struct NDISWATCHDOG__ *Watchdog; // rax
  void *v11; // rdx
  struct NDISWATCHDOG__ *v12; // r15
  unsigned int v13; // eax
  _DWORD *v14; // rbx
  __int64 (__fastcall *v16)(__int64, __int64); // rax

  v3 = 0;
  v5 = a2;
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 32);
  else
    v7 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      14,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      v5,
      *(_DWORD *)(a3 + 8));
  }
  if ( *(_BYTE *)(a1 + 56) < 6u )
    v8 = 0LL;
  else
    v8 = *(void **)(a1 + 128);
  v9 = *(int *)(a3 + 8);
  Watchdog = ndisAllocateWatchdog();
  v11 = (void *)v5;
  if ( !v5 )
    v11 = (void *)a1;
  v12 = Watchdog;
  ndisArmWatchdog(Watchdog, v11, 2, v8, 0x41EB0u, v9);
  if ( *(_BYTE *)(a1 + 56) >= 6u )
  {
    v13 = ndisInvokeNetPnPEvent(a1, v5, a3);
    v14 = (_DWORD *)(a3 + 8);
LABEL_11:
    v3 = v13;
    goto LABEL_12;
  }
  v16 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 128);
  v14 = (_DWORD *)(a3 + 8);
  if ( v16 )
  {
    v13 = v16(v7, a3 + 8);
    goto LABEL_11;
  }
LABEL_12:
  if ( v3 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog(v12, *(struct _KEVENT **)(a3 + 32));
    v3 = *(_DWORD *)(a3 + 40);
  }
  if ( v12 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xFu,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      v5,
      *v14,
      v3);
  return v3;
}
