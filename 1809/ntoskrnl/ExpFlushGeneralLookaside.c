/*
 * XREFs of ExpFlushGeneralLookaside @ 0x140128154
 * Callers:
 *     ExDeletePagedLookasideList @ 0x140128120 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x14016CF00 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

PSLIST_ENTRY __fastcall ExpFlushGeneralLookaside(__int64 a1, int a2)
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdx
  _QWORD *v6; // rbx

  result = RtlpInterlockedFlushSList((PSLIST_HEADER)a1);
  p_Next = &result->Next;
  if ( a2 )
  {
    if ( result )
    {
      do
      {
        v6 = (_QWORD *)*p_Next;
        (*(void (__fastcall **)(_QWORD *))(a1 + 56))(p_Next);
        p_Next = v6;
      }
      while ( v6 );
    }
    return 0LL;
  }
  return result;
}
