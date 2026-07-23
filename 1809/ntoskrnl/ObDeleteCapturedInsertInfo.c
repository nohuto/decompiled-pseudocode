/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x1405B8BB0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 */

PSLIST_ENTRY __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PSLIST_ENTRY result; // rax

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a1 - 16);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 32);
      if ( v5 )
      {
        LOBYTE(v4) = *(_BYTE *)(v4 + 16);
        LOBYTE(a3) = 1;
        SeReleaseSecurityDescriptor(v5, v4, a3);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
        v4 = *(_QWORD *)(a1 - 16);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        result = RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v4);
      }
      else
      {
        ++P->FreeMisses;
        result = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64))P->FreeEx)(v4);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
  return result;
}
