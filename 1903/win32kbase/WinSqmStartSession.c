/*
 * XREFs of WinSqmStartSession @ 0x1C00A3FD8
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WinSqmEventWrite @ 0x1C00A4150 (WinSqmEventWrite.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C00A4194 (-RegisterWinSqmProvider@@YAKXZ.c)
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C00A4230 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 WinSqmStartSession()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int128 v2; // xmm0
  ULONG v3; // eax
  int v5; // [rsp+28h] [rbp-39h] BYREF
  int v6; // [rsp+30h] [rbp-31h] BYREF
  _DWORD Sid[4]; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+58h] [rbp-9h] BYREF

  Sid[0] = 257;
  v5 = 0;
  v6 = 401412;
  Sid[1] = 83886080;
  Sid[2] = 18;
  memset(UserData, 0, sizeof(UserData));
  if ( (dword_1C0215B38 & 2) == 0 && (unsigned int)IsSessionDisabled(&Win32kSQMSession, 0x62004u) )
  {
    dword_1C0215B38 |= 2u;
  }
  else
  {
    v0 = Win32AllocPool(40LL, 0x6D715355u);
    v1 = v0;
    if ( v0 )
    {
      v2 = xmmword_1C0210498;
      *(_DWORD *)(v0 + 16) = 40;
      *(_OWORD *)v0 = v2;
      *(_DWORD *)(v0 + 20) = v5;
      *(GUID *)(v0 + 24) = Win32kSQMSession;
      if ( RegHandle || !RegisterWinSqmProvider() )
      {
        UserData[0].Ptr = (ULONGLONG)&Win32kSQMSession;
        UserData[1].Ptr = (ULONGLONG)&unk_1C0218554;
        *(_QWORD *)&UserData[0].Size = 16LL;
        *(_QWORD *)&UserData[1].Size = 4LL;
        v3 = RtlLengthSid(Sid);
        UserData[2].Ptr = (ULONGLONG)Sid;
        UserData[2].Size = v3;
        UserData[2].Reserved = 0;
        UserData[3].Ptr = (ULONGLONG)&v6;
        *(_QWORD *)&UserData[3].Size = 4LL;
        UserData[4].Ptr = (ULONGLONG)&v5;
        *(_QWORD *)&UserData[4].Size = 4LL;
        WinSqmEventWrite(&SQM_START_SESSION, 5u, UserData);
        return v1;
      }
      Win32FreePool(v1);
    }
  }
  return -1LL;
}
