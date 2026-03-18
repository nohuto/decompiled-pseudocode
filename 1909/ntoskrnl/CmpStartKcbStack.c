/*
 * XREFs of CmpStartKcbStack @ 0x1405FE000
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833358 (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  PVOID v4; // rsi
  __int64 result; // rax
  SIZE_T v8; // rbp
  PVOID TransientPoolWithTag; // rax

  v4 = 0LL;
  if ( a2 < 2 || a2 == 1 )
    goto LABEL_2;
  v8 = 8LL * (unsigned int)(a2 - 1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v8, 0x35364D43u, a4);
  v4 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v8);
LABEL_2:
    *(_WORD *)a1 = a2;
    *(_WORD *)(a1 + 2) = -1;
    result = 0LL;
    *(_QWORD *)(a1 + 24) = v4;
    return result;
  }
  return 3221225626LL;
}
