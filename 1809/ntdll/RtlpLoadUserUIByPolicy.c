/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x18004C4C0
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18003C454 (RtlpMuiRegCreateLanguageList.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18004C41C (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004C444 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FF964 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x180100DEC (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 LanguageList; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  char *v14; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+50h] [rbp-30h] BYREF
  char *v17; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  __int128 v20; // [rsp+70h] [rbp-10h]
  unsigned __int8 v21; // [rsp+B8h] [rbp+38h] BYREF
  __int16 v22; // [rsp+C8h] [rbp+48h] BYREF

  v14 = 0LL;
  Handle = 0LL;
  v21 = 0;
  v22 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v17 = a1;
    }
    else
    {
      v8 = OpenGlobalizationUserSettingsKey(0x2000000u, 0, v6, v7, (__int64)&v14);
      if ( v8 < 0 )
        goto LABEL_6;
      v17 = v14;
    }
    Handle = 0LL;
    p_DestinationString = &DestinationString;
    v16 = 48;
    v19 = 64;
    v20 = 0LL;
    v8 = NtOpenKey(&Handle, 131097LL, &v16);
    if ( v8 >= 0 )
    {
      v8 = RtlpLoadPolicyLanguageSpec(Handle, a2, &v21, &v22);
      if ( !v8 )
      {
        v11 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v11 + 4) < *(_WORD *)(v11 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(v11 + 24) + 6LL * *(unsigned __int16 *)(v11 + 4)) = v21;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v22;
            goto LABEL_6;
          }
          LanguageList = RtlpMuiRegGrowLanguageList(*a3, v10);
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1, 0, a2);
        }
        *a3 = LanguageList;
        v11 = LanguageList;
        if ( !LanguageList )
        {
          v8 = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_6:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v14 )
    CloseGlobalizationUserSettingsKey(v14);
  return (unsigned int)v8;
}
