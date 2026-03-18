/*
 * XREFs of Isoch_ProcessTransferEventWithED0 @ 0x1C002AADC
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1C0029720 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_DDLDDi @ 0x1C00039B0 (WPP_RECORDER_SF_DDLDDi.c)
 *     WPP_RECORDER_SF_DDLi @ 0x1C0003B10 (WPP_RECORDER_SF_DDLi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0028E64 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_FindTrbMatch @ 0x1C00297F4 (Isoch_FindTrbMatch.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002B13C (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Stage_CompleteTD @ 0x1C002BB14 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C002D7C8 (Isoch_Transfer_CompleteStaleStages.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C002E27C (WPP_RECORDER_SF_DDL.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED0(__int64 a1, __int64 a2, char a3)
{
  char v6; // si
  int v7; // edx
  __int64 v8; // r9
  __int64 v9; // r8
  KIRQL v10; // dl
  KSPIN_LOCK *v11; // rcx
  KIRQL v12; // dl
  __int64 v13; // r10
  __int64 ****v14; // r15
  __int64 ***v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rcx
  int v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+60h] [rbp-38h] BYREF
  __int64 ****v22; // [rsp+68h] [rbp-30h] BYREF
  char v23; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+A8h] [rbp+10h] BYREF
  char v25; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 0;
  WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL), 4u, *(_DWORD *)(a1 + 8) & 0xFFFFFF, 0x28u, v19);
  v9 = *(unsigned __int8 *)(a1 + 11);
  if ( (unsigned __int8)v9 >= 0xEu )
  {
    if ( (unsigned __int8)v9 <= 0xFu )
    {
      LOBYTE(v9) = a3;
      Isoch_ProcessTransferRingEmptyEvent(a2, a1, v9);
      return v6;
    }
    if ( (_BYTE)v9 == 20 )
    {
      WPP_RECORDER_SF_DDLi(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
        v9,
        v8,
        v20);
      ((void (__fastcall *)(__int64, _QWORD))qword_1C00506B0)(
        UcxDriverGlobals,
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 24LL));
      if ( !*(_QWORD *)a1 )
        return v6;
    }
    else if ( (_BYTE)v9 == 23 )
    {
      ++*(_DWORD *)(a2 + 264);
      if ( !*(_QWORD *)a1 )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_DDL(
          *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
          v7,
          *(unsigned __int8 *)(a1 + 11),
          41,
          v20,
          *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
          *(_BYTE *)(a1 + 11));
        return v6;
      }
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_BYTE *)(a2 + 104) = v10;
  if ( (*(_DWORD *)(a2 + 328) & 0x40) == 0 )
  {
    Isoch_FindTrbMatch(a2, (signed __int64 *)a1, (__int64 *)&v22, &v21, &v24);
    v11 = (KSPIN_LOCK *)(a2 + 96);
    v12 = *(_BYTE *)(a2 + 104);
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
    {
      KeReleaseSpinLock(v11, v12);
      v14 = v22;
      if ( !v22 )
        return v6;
      v15 = *v22;
      Isoch_CompleteStaleTransfers(a2, *v22, a3);
      LOBYTE(v16) = a3;
      Isoch_Transfer_CompleteStaleStages(v17, v15, v14, v16);
      Isoch_Stage_CompleteTD((_DWORD)v14, *(unsigned __int8 *)(a1 + 11), v24, 0, (__int64)&v23, (__int64)&v25, a3);
    }
    else
    {
      *(_DWORD *)(a2 + 328) |= 0x40u;
      KeReleaseSpinLock(v11, v12);
      if ( v22 )
        Isoch_Stage_CompleteTD((_DWORD)v22, *(unsigned __int8 *)(a1 + 11), v24, 0, (__int64)&v23, (__int64)&v25, a3);
      v13 = *(_QWORD *)(a2 + 56);
      _m_prefetchw((const void *)(v13 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD **)v13,
          *(_QWORD *)(v13 + 8),
          *(_QWORD *)(v13 + 24),
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v13 + 32));
        if ( (_InterlockedXor((volatile signed __int32 *)(v13 + 32), 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v13 + 288));
      }
    }
    return 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v10);
  return v6;
}
