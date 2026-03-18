/*
 * XREFs of Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C0030FA8
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C00307E8 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0030AC8 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     StageQueue_Release @ 0x1C0023648 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0031E20 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0032D6C (Bulk_Transfer_CompleteCancelable.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

void __fastcall Bulk_ProcessTransferEventWithHaltedCompletion(
        __int64 a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        char a5)
{
  KSPIN_LOCK *v5; // rbp
  size_t v6; // r14
  KIRQL v10; // al
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  KIRQL v16; // dl
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v5 = (KSPIN_LOCK *)(a1 + 96);
  v6 = a4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 324) |= 4u;
  *(_BYTE *)(a1 + 104) = v10;
  *(_DWORD *)(a1 + 352) = 1;
  KeReleaseSpinLock(v5, v10);
  v11 = *(_QWORD *)(a1 + 56);
  _m_prefetchw((const void *)(v11 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 32), 0x20u) & 0x20) != 0 )
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD **)v11,
      *(_QWORD *)(v11 + 8),
      *(_QWORD *)(v11 + 24),
      0x2000000LL,
      "Received duplicate Transfer Event TRB with Halted Completion Code",
      0LL,
      0LL);
  else
    ESM_AddEvent((PVOID)(v11 + 288));
  v13 = *a2;
  *(_DWORD *)(v13 + 108) += v6;
  v14 = *(_QWORD *)(v13 + 48);
  *(_DWORD *)(v13 + 68) = a3;
  if ( (*(_DWORD *)(v14 + 32) & 1) != 0 && *(_DWORD *)(v13 + 76) == 2 )
    memmove((void *)a2[8], *(const void **)(a2[9] + 16), v6);
  LOBYTE(v12) = a5;
  Bulk_Stage_FreeScatterGatherList(a1, a2, v12);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v5);
  v15 = *a2;
  if ( *((_BYTE *)a2 + 44) )
  {
    IoFreeMdl((PMDL)a2[6]);
    a2[6] = 0LL;
    *((_BYTE *)a2 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)a2 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v15 + 128), (unsigned __int8 *)a2);
  ++*(_DWORD *)(v13 + 116);
  Bulk_Transfer_CompleteCancelable(a1, v13, 0xFFFFFFFFLL, 0LL);
  v16 = *(_BYTE *)(a1 + 104);
  --*(_DWORD *)(a1 + 348);
  --*(_DWORD *)(a1 + 352);
  v17 = *(_DWORD *)(a1 + 324);
  KeReleaseSpinLock(v5, v16);
  if ( (v17 & 2) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v18 + 37)
      || (v19 = *(_QWORD *)(v18 + 136),
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 20)) == *(_DWORD *)(v19 + 8)) )
    {
      ESM_AddEvent((PVOID)(v18 + 288));
    }
  }
}
