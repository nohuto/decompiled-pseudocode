/*
 * XREFs of _SetWaitForQueueAttach @ 0x1C01A23B0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C003B2C0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetWaitForQueueAttach(int a1)
{
  __int64 result; // rax

  if ( (a1 != 0) != a1 )
    return 0LL;
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1200LL) ^= (*(_DWORD *)(gptiCurrent + 1200LL) ^ (a1 << 10)) & 0x400;
  return result;
}
