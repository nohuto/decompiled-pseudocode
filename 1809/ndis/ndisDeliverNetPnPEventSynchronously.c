/*
 * XREFs of ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20
 * Callers:
 *     ndisNotifyBindFailure @ 0x1C00BE2E0 (ndisNotifyBindFailure.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00BE9D0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00EB3C8 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPNotifyBinding @ 0x1C010D39C (ndisPnPNotifyBinding.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C011525C (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqLD @ 0x1C0068D6C (WPP_SF_qqLD.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B79D0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00C2C18 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00C2CD0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ndisInvokeNetPnPEvent @ 0x1C00C2ED4 (ndisInvokeNetPnPEvent.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C01039C4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // r12
  void *v8; // r13
  unsigned __int64 v9; // rbx
  struct _NDIS_REFCOUNT_BLOCK *Watchdog; // rax
  void *v11; // rdx
  struct NDISWATCHDOG__ *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  _DWORD *v16; // rbx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // [rsp+20h] [rbp-38h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v3 = 0;
  if ( a2 )
    v7 = a2[4];
  else
    v7 = 0LL;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qqd(0xEu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, a2, *(_DWORD *)(a3 + 8));
  if ( *((_BYTE *)a1 + 56) < 6u )
    v8 = 0LL;
  else
    v8 = (void *)a1[16];
  v9 = *(int *)(a3 + 8);
  Watchdog = (struct _NDIS_REFCOUNT_BLOCK *)ndisAllocateWatchdog();
  v11 = a2;
  if ( !a2 )
    v11 = a1;
  v12 = (struct NDISWATCHDOG__ *)Watchdog;
  ndisArmWatchdog(Watchdog, v11, (_NDIS_REFCOUNT_STACK_ENTRY)2, v8, (_NDIS_REFCOUNT_STACK_ENTRY)270000, v9);
  if ( *((_BYTE *)a1 + 56) >= 6u )
  {
    v15 = ndisInvokeNetPnPEvent(a1, a2, a3);
    v16 = (_DWORD *)(a3 + 8);
LABEL_11:
    v3 = v15;
    goto LABEL_12;
  }
  v18 = (__int64 (__fastcall *)(__int64, __int64))a1[16];
  v16 = (_DWORD *)(a3 + 8);
  if ( v18 )
  {
    v15 = v18(v7, a3 + 8);
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
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    LODWORD(v20) = v3;
    LODWORD(v19) = *v16;
    WPP_SF_qqLD(v14, v13, a1, a2, v19, v20);
  }
  return v3;
}
