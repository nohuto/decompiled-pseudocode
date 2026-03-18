/*
 * XREFs of WinSqmStartSession @ 0x1C00BE3DC
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00BD638 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00BD830 (-RegisterWinSqmProvider@@YAKXZ.c)
 *     WinSqmEventWrite @ 0x1C00BE09C (WinSqmEventWrite.c)
 */

__int64 WinSqmStartSession()
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int128 v4; // xmm0
  __int64 v5; // rcx
  ULONG v6; // eax
  unsigned int v7; // [rsp+28h] [rbp-29h] BYREF
  int v8; // [rsp+30h] [rbp-21h] BYREF
  _DWORD Sid[4]; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+48h] [rbp-9h] BYREF

  Sid[0] = 257;
  v7 = 0;
  v8 = 401412;
  Sid[1] = 83886080;
  Sid[2] = 18;
  memset(UserData, 0, sizeof(UserData));
  if ( (dword_1C01A28B8 & 2) == 0 && (unsigned int)IsSessionDisabled(&Win32kSQMSession, 0x62004u) )
  {
    dword_1C01A28B8 |= 2u;
    return -1LL;
  }
  v1 = Win32AllocPool(40LL, 0x6D715355u);
  v3 = v1;
  if ( !v1 )
    return -1LL;
  v4 = xmmword_1C019F140;
  *(_DWORD *)(v1 + 16) = 40;
  *(_OWORD *)v1 = v4;
  v5 = v7;
  *(_DWORD *)(v1 + 20) = v7;
  *(GUID *)(v1 + 24) = Win32kSQMSession;
  if ( !RegHandle && (unsigned int)RegisterWinSqmProvider(v5, v2) )
  {
    Win32FreePool(v3);
    return -1LL;
  }
  UserData[0].Ptr = (ULONGLONG)&Win32kSQMSession;
  UserData[1].Ptr = (ULONGLONG)&unk_1C01A62B4;
  *(_QWORD *)&UserData[0].Size = 16LL;
  *(_QWORD *)&UserData[1].Size = 4LL;
  v6 = RtlLengthSid(Sid);
  UserData[2].Reserved = 0;
  UserData[2].Size = v6;
  UserData[2].Ptr = (ULONGLONG)Sid;
  UserData[3].Ptr = (ULONGLONG)&v8;
  *(_QWORD *)&UserData[3].Size = 4LL;
  UserData[4].Ptr = (ULONGLONG)&v7;
  *(_QWORD *)&UserData[4].Size = 4LL;
  WinSqmEventWrite(&SQM_START_SESSION, 5u, UserData);
  return v3;
}
