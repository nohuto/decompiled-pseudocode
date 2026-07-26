/*
 * XREFs of ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1C0123570
 * Callers:
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C010945C (ndisValidateMiniportDriverCharacteristicsHeader.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031294 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingLogoFailure(__int64 a1, __int64 a2, __int64 a3)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  _DWORD *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  __int64 v11; // [rsp+80h] [rbp+27h]
  _DWORD v12[2]; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]
  __int64 v15; // [rsp+D0h] [rbp+77h] BYREF

  v15 = a3;
  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v5 = 1;
      v7 = &v5;
      v9 = v12;
      v11 = *(_QWORD *)v4->Data4;
      v12[0] = LOWORD(v4->Data1);
      v13 = &v15;
      v8 = 4LL;
      v10 = 2LL;
      v12[1] = 0;
      v14 = 8LL;
      TlgWrite(&hProvider, &unk_1C00D25A6, v3, v4, 6u, &pData);
    }
  }
}
