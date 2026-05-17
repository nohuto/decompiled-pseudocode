/*
 * XREFs of sub_180112230 @ 0x180112230
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 */

__int64 __fastcall sub_180112230(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax

  *a4 = 0;
  if ( a3 < 0x38 )
    return 3221225507LL;
  result = ZwQueryInformationThread();
  if ( (int)result < 0 || (result = ZwQueryInformationThread(), (int)result < 0) )
    *a4 = 0;
  else
    *a4 += 8;
  return result;
}
