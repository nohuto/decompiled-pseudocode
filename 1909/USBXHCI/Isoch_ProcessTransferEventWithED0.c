/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1C002F5E4
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C002E0E0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C000451C (WPP_RECORDER_SF_DDLDDi.c)
 *     WPP_RECORDER_SF_DDLi @ 0x1C000467C (WPP_RECORDER_SF_DDLi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C002D7F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C002E1B4 (Isoch_FindTrbMatch.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002FC78 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Stage_CompleteTD @ 0x1C0030774 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0032470 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C0032F2C (WPP_RECORDER_SF_DDL.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // rdi
  char v7; // bp
  __int64 v8; // r8
  KIRQL v9; // dl
  KSPIN_LOCK *v10; // rcx
  KIRQL v11; // dl
  __int64 v12; // r10
  __int64 ****v13; // r14
  __int64 ***v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+60h] [rbp-38h] BYREF
  __int64 ****v20; // [rsp+68h] [rbp-30h] BYREF
  char v21; // [rsp+A0h] [rbp+8h] BYREF
  int v22; // [rsp+A8h] [rbp+10h] BYREF
  char v23; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a2;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), 4u, *(unsigned __int8 *)(a1 + 11), 0x28u, v18);
  v8 = *(unsigned __int8 *)(a1 + 11);
  if ( (unsigned __int8)v8 >= 0xEu )
  {
    if ( (unsigned __int8)v8 <= 0xFu )
    {
      LOBYTE(v8) = a3;
      Isoch_ProcessTransferRingEmptyEvent(v5, a1, v8);
      return v7;
    }
    if ( (_BYTE)v8 == 20 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDLi(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          v8,
          a4,
          v18);
      ((void (__fastcall *)(__int64, _QWORD))qword_1C00576F0)(
        UcxDriverGlobals,
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 24LL));
      if ( !*(_QWORD *)a1 )
        return v7;
    }
    else if ( (_BYTE)v8 == 23 )
    {
      ++*(_DWORD *)(v5 + 264);
      if ( !*(_QWORD *)a1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_DDL(
            *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
            a2,
            *(unsigned __int8 *)(a1 + 11),
            41,
            v18,
            *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
            *(_BYTE *)(a1 + 11));
        }
        return v7;
      }
    }
  }
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_BYTE *)(v5 + 104) = v9;
  if ( (*(_DWORD *)(v5 + 328) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(v5, (signed __int64 *)a1, (__int64 *)&v20, &v19, &v22);
    v10 = (KSPIN_LOCK *)(v5 + 96);
    v11 = *(_BYTE *)(v5 + 104);
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
    {
      KeReleaseSpinLock(v10, v11);
      v13 = v20;
      if ( !v20 )
        return v7;
      v14 = *v20;
      Isoch_CompleteStaleTransfers(v5, *v20, a3);
      LOBYTE(v15) = a3;
      Isoch_Transfer_CompleteStaleStages(v16, v14, v13, v15);
      Isoch_Stage_CompleteTD((_DWORD)v13, *(unsigned __int8 *)(a1 + 11), v22, 0, (__int64)&v21, (__int64)&v23, a3);
    }
    else
    {
      *(_DWORD *)(v5 + 328) |= 0x40u;
      KeReleaseSpinLock(v10, v11);
      if ( v20 )
        Isoch_Stage_CompleteTD((_DWORD)v20, *(unsigned __int8 *)(a1 + 11), v22, 0, (__int64)&v21, (__int64)&v23, a3);
      v12 = *(_QWORD *)(v5 + 56);
      _m_prefetchw((const void *)(v12 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v12,
          *(_QWORD *)(v12 + 8),
          *(_QWORD *)(v12 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v12 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v12 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v12 + 288));
      }
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v9);
  return v7;
}
