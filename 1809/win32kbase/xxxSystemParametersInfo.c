/*
 * XREFs of xxxSystemParametersInfo @ 0x1C00688C0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C006B700 (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C00F20E0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     CreateProfileUserName @ 0x1C0046DA0 (CreateProfileUserName.c)
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x1C0068988 (ApiSetEditionxxxSystemParametersInfoWorker.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C00F52D4 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C0107EA0 (EtwTraceSPIBlockedByFiltering.c)
 *     ApiSetEditionPersistUserSPI @ 0x1C01627F8 (ApiSetEditionPersistUserSPI.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1C0163BB4 (ApiSetEditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, _DWORD *a3, unsigned int a4)
{
  char IsWin32KFilterEnabled; // al
  unsigned int v7; // r10d
  char v8; // r15
  int v9; // esi
  unsigned __int8 v10; // bl
  int v12; // r9d
  __int64 ProfileUserName; // r14
  char *v14; // rdi
  unsigned int v15; // [rsp+30h] [rbp-29h] BYREF
  _DWORD *v16; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]

  v15 = a1;
  v16 = a3;
  IsWin32KFilterEnabled = PsIsWin32KFilterEnabled();
  v7 = v15;
  if ( IsWin32KFilterEnabled && !(unsigned int)IsSPIActionAllowedForFilteredProcess(v15) )
  {
    EtwTraceSPIBlockedByFiltering(v7);
    if ( dword_1C01C75D8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C75D8, 0x400000000000uLL) )
    {
      v20 = 0;
      v18 = &v15;
      v19 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C75D8, &unk_1C019DDE6, 0LL, 0LL, 3u, &pData);
    }
    return 0LL;
  }
  v8 = a4 & 1;
  v9 = a4 & 2;
  v10 = 0;
  switch ( v7 )
  {
    case 0x201Eu:
      goto LABEL_19;
    case 0x201Fu:
      goto LABEL_14;
    case 0x2020u:
      goto LABEL_19;
    case 0x2021u:
LABEL_14:
      ProfileUserName = CreateProfileUserName((__int64)&pData);
      v14 = (char *)&gpviCPUserPreferences[4 * ((v15 - 0x2000) >> 1) + 4];
      if ( v8
        && (unsigned int)ApiSetEditionPersistUserSPI(
                           ProfileUserName,
                           *((_DWORD *)v14 + 1),
                           *((_QWORD *)v14 + 1),
                           v12,
                           (__int64)&v16) )
      {
        v10 = 1;
        *(_DWORD *)v14 = (_DWORD)v16;
      }
      if ( ProfileUserName )
        PopAndFreeAlwaysW32ThreadLock(&pData);
      goto LABEL_20;
  }
  if ( v7 != 8230 )
  {
    if ( v7 != 8231 )
      return ApiSetEditionxxxSystemParametersInfoWorker(v7, a2, v16, a4);
    goto LABEL_14;
  }
LABEL_19:
  v10 = 1;
  *v16 = gpviCPUserPreferences[4 * ((v7 - 0x2000) >> 1) + 4];
LABEL_20:
  if ( v10 )
  {
    if ( v9 )
      ApiSetEditionxxxBroadcastSPIChange(v15);
  }
  return v10;
}
