/*
 * XREFs of MWaitIdle @ 0x1C0001190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MWaitIdle(const void **a1)
{
  __int64 result; // rax

  _mm_monitor(a1[1], 0, 0);
  result = *(unsigned int *)a1;
  _mm_mwait(*((_DWORD *)a1 + 1), result);
  return result;
}
