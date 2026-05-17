/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003C58C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18004CD34 (RtlUpdateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x18007E580 (RtlAdjustPrivilege.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x1800A0680 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A0ED0 (ZwSetValueKey.c)
 *     NtFlushInstallUILanguage @ 0x1800A1EF0 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A20D0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A2BF0 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A3870 (ZwShutdownSystem.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  _QWORD *v6; // rbx
  __int16 v7; // ax
  bool v8; // sf
  int v10; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v11; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h] BYREF
  const WCHAR *v14; // [rsp+60h] [rbp-A8h]
  _BYTE v15[8]; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  int v17; // [rsp+80h] [rbp-88h] BYREF
  __int64 v18; // [rsp+88h] [rbp-80h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+98h] [rbp-70h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  _BYTE v22[688]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v23[12]; // [rsp+368h] [rbp+260h] BYREF
  int v24; // [rsp+374h] [rbp+26Ch]

  v11 = 0;
  memset(v22, 0, sizeof(v22));
  v5 = NtQueryInstallUILanguage(&v11, v2, v3, v4);
  if ( v5 >= 0 )
  {
    v14 = (const WCHAR *)v22;
    LODWORD(v13) = 11141120;
    if ( RtlLCIDToCultureName(v11, (__int64)&v13)
      && (int)RtlpCreateProcessRegistryInfo((__int64 *)&Handle) >= 0
      && (v6 = Handle) != 0LL
      && (LOWORD(v10) = -1, v14)
      && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Handle, v14, 0, &v10) >= 0
      && (v7 = *(_WORD *)(28LL * (__int16)v10 + *(_QWORD *)(v6[3] + 16LL)), v7 >= 0)
      && (v7 & 7) != 4 )
    {
      v5 = NtFlushInstallUILanguage(v11, 1LL);
      if ( v5 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  if ( !a1 )
    goto LABEL_12;
  v8 = v5 < 0;
  if ( !v5 )
  {
LABEL_13:
    if ( v8 )
      return (unsigned int)v5;
    goto LABEL_14;
  }
  if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v10) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v10);
  v5 = ZwShutdownSystem(2LL);
  if ( v5 < 0 )
  {
    v5 = -1073741616;
LABEL_12:
    v8 = v5 < 0;
    goto LABEL_13;
  }
LABEL_14:
  Handle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  p_DestinationString = &DestinationString;
  v17 = 48;
  v18 = 0LL;
  v20 = 64;
  v21 = 0LL;
  if ( (int)ZwCreateKey(&Handle, 131103LL, &v17, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v10 = 1;
    if ( (int)NtQueryValueKey(Handle, &v13, 2LL, v23, 20, v15) >= 0 )
      v10 = v24 + 1;
    ZwSetValueKey(Handle, &v13, 0LL, 4LL, &v10, 4);
    NtClose(Handle);
  }
  return (unsigned int)v5;
}
