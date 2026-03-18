/*
 * XREFs of xxxClearWakeMask @ 0x1C01C3D00
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateInputHangInfo @ 0x1C00341E0 (xxxUpdateInputHangInfo.c)
 */

__int64 xxxClearWakeMask()
{
  __int64 result; // rax

  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(gptiCurrent + 1152LL) )
    xxxUpdateInputHangInfo(0LL, 1);
  result = 1LL;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 0;
  *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x400u;
  return result;
}
