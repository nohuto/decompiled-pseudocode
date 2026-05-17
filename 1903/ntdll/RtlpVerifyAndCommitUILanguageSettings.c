/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008AB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18001583C @ 0x18001583C (sub_18001583C.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlAdjustPrivilege @ 0x180078490 (RtlAdjustPrivilege.c)
 *     sub_18008AC6C @ 0x18008AC6C (sub_18008AC6C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwFlushInstallUILanguage @ 0x18009E310 (ZwFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x18009E4F0 (ZwGetMUIRegistryInfo.c)
 *     ZwQueryInstallUILanguage @ 0x18009F010 (ZwQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x18009FC90 (ZwShutdownSystem.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rbx
  __int16 v7; // ax
  int v9; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 v10; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h] BYREF
  const WCHAR *v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v14[688]; // [rsp+48h] [rbp-C0h] BYREF

  v10 = 0;
  memset(v14, 0, sizeof(v14));
  v5 = ZwQueryInstallUILanguage(&v10, v2, v3, v4);
  if ( v5 >= 0 )
  {
    v12 = (const WCHAR *)v14;
    LODWORD(v11) = 11141120;
    if ( RtlLCIDToCultureName(v10, (__int64)&v11)
      && (int)RtlpCreateProcessRegistryInfo(&v13) >= 0
      && (v6 = v13) != 0
      && (LOWORD(v9) = -1, v12)
      && (int)sub_18001583C(v13, v12, 0, &v9) >= 0
      && (v7 = *(_WORD *)(28LL * (__int16)v9 + *(_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL)), v7 >= 0)
      && (v7 & 7) != 4 )
    {
      v5 = ZwFlushInstallUILanguage(v10, 1LL);
      if ( v5 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        sub_18008AC6C();
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  if ( a1 && v5 )
  {
    if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v9) == -1073741700 )
      RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v9);
    v5 = ZwShutdownSystem(2LL);
    if ( v5 < 0 )
      return (unsigned int)-1073741616;
  }
  return (unsigned int)v5;
}
