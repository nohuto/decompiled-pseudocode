/*
 * XREFs of HvpDetermineIncrementalLogFileMaximums @ 0x140807DB0
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1408072D4 (HvAnalyzeLogFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvpIsLogEntryHeaderCoherent @ 0x140807E8C (HvpIsLogEntryHeaderCoherent.c)
 *     HvpReadLogEntryHeader @ 0x14080834C (HvpReadLogEntryHeader.c)
 */

__int64 __fastcall HvpDetermineIncrementalLogFileMaximums(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  _BYTE v10[4]; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+24h] [rbp-54h]
  unsigned int v12; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v13; // [rsp+30h] [rbp-48h]

  *a3 = 0;
  *a4 = 0;
  v8 = 512;
  do
  {
    result = HvpReadLogEntryHeader(v8, a1, a2, v10);
    if ( (_DWORD)result == -1073741807 )
      break;
    if ( (int)result < 0 )
      return result;
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(v10, v8, 0LL) )
      break;
    if ( v13 > *a4 )
      *a4 = v13;
    if ( v12 > *a3 )
      *a3 = v12;
    v8 += v11;
  }
  while ( v8 + 40 >= v8 );
  return 0LL;
}
