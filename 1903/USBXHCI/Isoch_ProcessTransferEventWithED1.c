/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x1C002F924
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C002E0E0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C000451C (WPP_RECORDER_SF_DDLDDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     TR_AttemptStateChange @ 0x1C00284E8 (TR_AttemptStateChange.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C002D7F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_MapTransfers @ 0x1C002E8DC (Isoch_MapTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0030774 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x1C0030D7C (Isoch_Stage_Find.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0032470 (Isoch_Transfer_CompleteStaleStages.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2, char a3)
{
  KIRQL v6; // al
  int v7; // edx
  __int64 ****v8; // r12
  KIRQL v9; // dl
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // r10
  __int64 ***v12; // rbx
  int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rdx
  int v19; // [rsp+20h] [rbp-78h]
  unsigned int v20; // [rsp+30h] [rbp-68h]
  char v21; // [rsp+A0h] [rbp+8h] BYREF
  int v22; // [rsp+A8h] [rbp+10h] BYREF

  v22 = 0;
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), 5u, *(unsigned __int8 *)(a1 + 11), 0x1Bu, v19);
  if ( (*(_QWORD *)a1 & 3) == 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v7 = *(_DWORD *)(a2 + 328);
    *(_BYTE *)(a2 + 104) = v6;
    if ( (v7 & 0x40) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v6);
      return 0;
    }
    v8 = (__int64 ****)Isoch_Stage_Find(a2, a1, a1);
    v9 = *(_BYTE *)(a2 + 104);
    v10 = (KSPIN_LOCK *)(a2 + 96);
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
    {
      KeReleaseSpinLock(v10, v9);
      if ( !v8 )
        return 0;
      v12 = *v8;
      v13 = *(_DWORD *)(a1 + 8) & 0xFFFFFF;
      Isoch_CompleteStaleTransfers(a2, *v8, a3);
      LOBYTE(v14) = a3;
      Isoch_Transfer_CompleteStaleStages(v15, v12, v8, v14);
      LOBYTE(v16) = 1;
      Isoch_Stage_CompleteTD((_DWORD)v8, *(unsigned __int8 *)(a1 + 11), v13, v16, (__int64)&v21, (__int64)&v22, a3);
    }
    else
    {
      *(_DWORD *)(a2 + 328) |= 0x40u;
      KeReleaseSpinLock(v10, v9);
      Isoch_Stage_CompleteTD(
        (_DWORD)v8,
        *(unsigned __int8 *)(a1 + 11),
        *(_DWORD *)(a1 + 8) & 0xFFFFFF,
        0,
        (__int64)&v21,
        (__int64)&v22,
        a3);
      v11 = *(_QWORD *)(a2 + 56);
      _m_prefetchw((const void *)(v11 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v11,
          *(_QWORD *)(v11 + 8),
          *(_QWORD *)(v11 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v11 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v11 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v11 + 288));
      }
    }
    if ( !v21 )
      return 0;
    _InterlockedExchange((volatile __int32 *)(a2 + 344), 1);
    if ( (unsigned int)TR_AttemptStateChange(a2, 2, 3) != 2 )
    {
      if ( v22 || (unsigned int)TR_AttemptStateChange(a2, 4, 3) != 4 )
        return 0;
      (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
        WPP_MAIN_CB.Dpc.ProcessorHistory,
        *(_QWORD *)(a2 + 320),
        0LL);
    }
    LOBYTE(v17) = a3;
    Isoch_MapTransfers(a2, v17);
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = *(_WORD *)(a1 + 14) & 0x1F;
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
      2u,
      v20,
      0x1Cu,
      (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
      *(unsigned __int8 *)(a1 + 15),
      v20,
      *(_QWORD *)a1);
  }
  Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
  return 0;
}
