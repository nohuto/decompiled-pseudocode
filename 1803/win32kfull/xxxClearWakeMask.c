/*
 * XREFs of xxxClearWakeMask @ 0x1C01A23F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateInputHangInfo @ 0x1C0048CD0 (xxxUpdateInputHangInfo.c)
 */

__int64 xxxClearWakeMask()
{
  __int64 result; // rax

  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(gptiCurrent + 1144LL) )
    xxxUpdateInputHangInfo(0LL, 1);
  result = 1LL;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 10LL) = 0;
  *(_DWORD *)(gptiCurrent + 1200LL) &= ~0x400u;
  return result;
}
