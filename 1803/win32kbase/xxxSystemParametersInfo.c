/*
 * XREFs of xxxSystemParametersInfo @ 0x1C005C030
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C00BA130 (NtUserSystemParametersInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     ApiSetEditionxxxSystemParametersInfoWorker @ 0x1C005C0E0 (ApiSetEditionxxxSystemParametersInfoWorker.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     CreateProfileUserName @ 0x1C00A7F70 (CreateProfileUserName.c)
 *     ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C00BE558 (-IsSPIActionAllowedForFilteredProcess@@YAHI@Z.c)
 *     EtwTraceSPIBlockedByFiltering @ 0x1C00DA200 (EtwTraceSPIBlockedByFiltering.c)
 *     ApiSetEditionPersistUserSPI @ 0x1C013F16C (ApiSetEditionPersistUserSPI.c)
 *     ApiSetEditionxxxBroadcastSPIChange @ 0x1C0140574 (ApiSetEditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall xxxSystemParametersInfo(unsigned int a1, unsigned int a2, _DWORD *a3, unsigned int a4)
{
  char IsWin32KFilterEnabled; // al
  unsigned int v7; // r10d
  char v8; // r14
  int v9; // esi
  unsigned __int8 v10; // bl
  const GUID *v12; // r9
  int v13; // r9d
  __int64 v14; // r15
  char *v15; // rdi
  unsigned int v16; // [rsp+30h] [rbp-29h] BYREF
  _DWORD *v17; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v19; // [rsp+60h] [rbp+7h]
  int v20; // [rsp+68h] [rbp+Fh]
  int v21; // [rsp+6Ch] [rbp+13h]

  v16 = a1;
  v17 = a3;
  IsWin32KFilterEnabled = PsIsWin32KFilterEnabled();
  v7 = v16;
  if ( IsWin32KFilterEnabled && !(unsigned int)IsSPIActionAllowedForFilteredProcess(v16) )
  {
    EtwTraceSPIBlockedByFiltering(v7);
    if ( dword_1C019A240 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019A240, 0x400000000000uLL) )
    {
      v21 = 0;
      v19 = &v16;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C019A240, &unk_1C0178253, 0LL, v12, 3u, &pData);
    }
    return 0LL;
  }
  v8 = a4 & 1;
  v9 = a4 & 2;
  v10 = 0;
  if ( v7 != 8222 )
  {
    if ( v7 == 8223 )
    {
LABEL_12:
      v14 = CreateProfileUserName(&pData);
      v15 = (char *)&gpviCPUserPreferences[4 * ((v16 - 0x2000) >> 1) + 4];
      if ( v8
        && (unsigned int)ApiSetEditionPersistUserSPI(
                           v14,
                           *((_DWORD *)v15 + 1),
                           *((_QWORD *)v15 + 1),
                           v13,
                           (__int64)&v17) )
      {
        v10 = 1;
        *(_DWORD *)v15 = (_DWORD)v17;
      }
      if ( v14 )
        PopAndFreeAlwaysW32ThreadLock(&pData);
      goto LABEL_18;
    }
    if ( v7 != 8224 )
    {
      if ( v7 != 8225 )
        return ApiSetEditionxxxSystemParametersInfoWorker(v7, a2, v17, a4);
      goto LABEL_12;
    }
  }
  v10 = 1;
  *v17 = gpviCPUserPreferences[4 * ((v7 - 0x2000) >> 1) + 4];
LABEL_18:
  if ( v10 )
  {
    if ( v9 )
      ApiSetEditionxxxBroadcastSPIChange(v16);
  }
  return v10;
}
