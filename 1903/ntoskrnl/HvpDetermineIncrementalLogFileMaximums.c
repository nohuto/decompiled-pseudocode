/*
 * XREFs of HvpDetermineIncrementalLogFileMaximums @ 0x14083FFD8
 * Callers:
 *     HvAnalyzeLogFiles @ 0x14083F4E8 (HvAnalyzeLogFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x1408400C0 (HvpIsLogEntryHeaderCoherent.c)
 *     HvpReadLogEntryHeader @ 0x140840580 (HvpReadLogEntryHeader.c)
 */

__int64 __fastcall HvpDetermineIncrementalLogFileMaximums(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  _DWORD v10[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v10, 0, sizeof(v10));
  *a3 = 0;
  v8 = 512;
  *a4 = 0;
  do
  {
    result = HvpReadLogEntryHeader(v8, a1, a2, v10);
    if ( (_DWORD)result == -1073741807 )
      break;
    if ( (int)result < 0 )
      return result;
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(v10, v8, 0LL) )
      break;
    if ( v10[4] > *a4 )
      *a4 = v10[4];
    if ( v10[3] > *a3 )
      *a3 = v10[3];
    v8 += v10[1];
  }
  while ( v8 + 40 >= v8 );
  return 0LL;
}
