/*
 * XREFs of InitCreateSystemThreadsMsg @ 0x1C00B1650
 * Callers:
 *     VideoPortCallout @ 0x1C00A5730 (VideoPortCallout.c)
 * Callees:
 *     CSTPush @ 0x1C00A7B20 (CSTPush.c)
 */

__int64 __fastcall InitCreateSystemThreadsMsg(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = CSTPush(a2, a3);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 4) = 0;
    result = 1LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)a1 = 28311944;
    *(_DWORD *)(a1 + 48) = 197636;
  }
  return result;
}
