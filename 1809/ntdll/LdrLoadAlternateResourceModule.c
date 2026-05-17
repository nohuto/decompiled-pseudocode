/*
 * XREFs of LdrLoadAlternateResourceModule @ 0x1800815E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003F110 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003F388 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     LdrpCompareServiceChecksum @ 0x18008181C (LdrpCompareServiceChecksum.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall LdrLoadAlternateResourceModule(unsigned __int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  __int64 v10; // r12
  int v11; // esi
  int v12; // r8d
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  char v15; // al
  unsigned int v16; // r11d
  unsigned __int16 *MergedPrefLanguages; // rcx
  unsigned __int16 v18; // bx
  unsigned int v19; // ecx
  _QWORD *v20; // r14
  _QWORD *v21; // r8
  int AlternateResourceModule; // eax
  _DWORD *RcConfig; // rax
  char v25; // al
  _WORD *v26; // rax
  bool v27[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-CCh]
  unsigned int v29; // [rsp+38h] [rbp-C8h]
  int v30; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v33; // [rsp+48h] [rbp-B8h]
  _QWORD *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _WORD v38[64]; // [rsp+80h] [rbp-80h] BYREF

  v28 = 0;
  v34 = a2;
  v33 = a1;
  memset(v38, 0, sizeof(v38));
  v7 = v33;
  v32 = 0;
  v8 = 0LL;
  v29 = 0;
  v9 = 0LL;
  v36 = 0LL;
  v10 = 0LL;
  v11 = -1073020927;
  if ( !v33 || !a2 )
    return 3221225485LL;
  v27[0] = 0;
  v12 = a4 & 0x1000000;
  v30 = a4 & 0x1000000;
LABEL_4:
  while ( 2 )
  {
    v13 = v28;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = v13;
        if ( v12 )
          break;
        v28 = v13 + 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            v20 = v34;
            goto LABEL_20;
          }
          RcConfig = LdrpGetRcConfig(v7, v8, 1, 1);
          v13 = v28;
          v8 = v29;
          v12 = v30;
          v9 = RcConfig;
          v7 = v33;
          if ( RcConfig )
          {
            if ( *RcConfig == -20054323 && (RcConfig[6] & 2) != 0 )
            {
              if ( RcConfig[31] )
              {
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
                v25 = RtlCultureNameToLCID(&DestinationString.Length, &v35);
                v13 = v28;
                v8 = v29;
                v12 = v30;
                v7 = v33;
                if ( v25 )
                {
                  v18 = v35;
                  v31[0] = v35;
                  if ( (a4 & 0x80u) == 0 && (v9[5] & 0x100) != 0 )
                  {
                    GetLCIDFromLangListNodeWithLICCheck(v28, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v31, v27);
                    v13 = v28;
                    v8 = v29;
                    v12 = v30;
                    v7 = v33;
                    if ( v27[0] )
                      v18 = -4370;
                    else
                      v18 = v31[0];
                  }
                  goto LABEL_13;
                }
              }
            }
          }
        }
        else
        {
          v31[0] = 0;
          v15 = LdrpSetThreadPreferredLangList();
          v16 = v32;
          if ( v15
            && (MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages,
                v32 < MergedPrefLanguages[2]) )
          {
            GetLCIDFromLangListNodeWithLICCheck(
              (__int64)MergedPrefLanguages,
              (__int64)NtCurrentTeb()->MergedPrefLanguages,
              v32,
              v31,
              v27);
            v16 = v32;
            v18 = v31[0];
          }
          else
          {
            v18 = 0;
          }
          v13 = v28;
          v8 = v29;
          v12 = v30;
          v7 = v33;
          if ( v18 )
          {
            if ( (a4 & 0x80u) == 0 && v27[0] )
            {
              if ( (v9 || (v9 = LdrpGetRcConfig(v33, v29, 0, 1)) != 0LL) && *v9 == -20054323 )
              {
                v16 = v32;
                if ( (v9[5] & 0x100) != 0 )
                  v18 = -4370;
              }
              else
              {
                v16 = v32;
              }
            }
            v8 = v29;
            v12 = v30;
            v13 = v14;
            v7 = v33;
            v32 = v16 + 1;
            v28 = v14;
            goto LABEL_13;
          }
        }
      }
      v18 = -3346;
LABEL_13:
      if ( v18 != 0xEEEE )
      {
        v19 = 0;
        if ( (_DWORD)v8 )
        {
          v26 = v38;
          while ( *v26 != v18 )
          {
            ++v19;
            ++v26;
            if ( v19 >= (unsigned int)v8 )
              goto LABEL_15;
          }
          goto LABEL_4;
        }
LABEL_15:
        v20 = v34;
        if ( (unsigned int)v8 >= 0x40 )
          goto LABEL_20;
        v29 = v8 + 1;
        v21 = v34;
        v38[(unsigned int)v8] = v18;
        AlternateResourceModule = LdrLoadAlternateResourceModuleEx(v7, v18, v21, a3, a4);
        v12 = v30;
        v11 = AlternateResourceModule;
        if ( v30 )
          goto LABEL_20;
        v13 = v28;
        v8 = v29;
        v7 = v33;
        if ( AlternateResourceModule >= 0 )
          break;
      }
    }
    if ( (a4 & 0x80u) != 0 && !(unsigned __int8)LdrpCompareServiceChecksum(v33, *v20) )
    {
      if ( !v10 )
      {
        v10 = *v20;
        if ( a3 )
          v36 = *a3;
        else
          v36 = 0LL;
      }
      v8 = v29;
      v11 = -1073020927;
      v12 = v30;
      v7 = v33;
      continue;
    }
    break;
  }
LABEL_20:
  if ( v11 < 0 && (a4 & 0x80u) != 0 && v10 )
  {
    *v20 = v10;
    if ( a3 )
      *a3 = v36;
    return 0;
  }
  return (unsigned int)v11;
}
