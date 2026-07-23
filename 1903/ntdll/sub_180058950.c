/*
 * XREFs of sub_180058950 @ 0x180058950
 * Callers:
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 * Callees:
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     sub_180013968 @ 0x180013968 (sub_180013968.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 *     sub_18007E254 @ 0x18007E254 (sub_18007E254.c)
 *     ZwQueryDefaultLocale @ 0x18009C980 (ZwQueryDefaultLocale.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

__int64 __fastcall sub_180058950(__int64 a1, int a2, unsigned __int16 a3, int a4, unsigned __int16 *a5)
{
  int v5; // r15d
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v10; // r8
  unsigned int v11; // r13d
  unsigned __int16 CurrentLocale; // bx
  int v13; // edx
  int v14; // ecx
  int v15; // esi
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  char v22; // al
  unsigned int v23; // r10d
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ecx
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  bool v32[4]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v33[2]; // [rsp+3Ch] [rbp-4Dh] BYREF
  unsigned int v34; // [rsp+40h] [rbp-49h]
  unsigned __int16 v35; // [rsp+44h] [rbp-45h] BYREF
  DWORD v36; // [rsp+48h] [rbp-41h] BYREF
  DWORD DefaultLocaleId; // [rsp+4Ch] [rbp-3Dh] BYREF
  DWORD Lcid; // [rsp+50h] [rbp-39h] BYREF
  int v39; // [rsp+54h] [rbp-35h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-31h] BYREF
  int v41; // [rsp+60h] [rbp-29h] BYREF
  const wchar_t *v42; // [rsp+68h] [rbp-21h]
  int v43; // [rsp+70h] [rbp-19h] BYREF
  const wchar_t *v44; // [rsp+78h] [rbp-11h]
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-9h] BYREF
  int v50; // [rsp+108h] [rbp+7Fh]

  v41 = 3801144;
  v42 = L"LdrResFallbackLangList Enter";
  v43 = 3670070;
  v44 = L"LdrResFallbackLangList Exit";
  v5 = 0;
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v7 = 2147353477LL;
  v8 = 2147353476LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v31 = 2147353476LL;
    sub_1800E0820(&v41, *(unsigned __int8 *)v31);
  }
  if ( !a5 )
  {
    v11 = -1073741811;
    goto LABEL_31;
  }
  *a5 = 0;
  LODWORD(v10) = 0;
  *((_BYTE *)a5 + 516) = 0;
  v11 = 0;
  v34 = 0;
  CurrentLocale = 0;
  v32[0] = 0;
  v36 = 0;
LABEL_6:
  v13 = a4;
  while ( 1 )
  {
    v14 = v10;
    v15 = v10;
    v10 = (unsigned int)(v10 + 1);
    v50 = v10;
    if ( !v14 )
    {
      CurrentLocale = a3;
      v5 = 1;
      goto LABEL_23;
    }
    v16 = v14 - 1;
    if ( !v16 )
      break;
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( !v18 )
      {
        if ( !a1 )
          goto LABEL_38;
        if ( (int)sub_180058D20(a1, a2, (unsigned int)&SourceString, (unsigned int)&v39, v13) < 0 )
          goto LABEL_37;
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        {
          v11 = -1073020923;
LABEL_37:
          LODWORD(v10) = v50;
LABEL_38:
          CurrentLocale = -4370;
          goto LABEL_6;
        }
        CurrentLocale = Lcid;
        v33[0] = Lcid;
        if ( (a4 & 0x100000) != 0 )
        {
          sub_1800136CC(v30, (__int64)NtCurrentTeb()->MergedPrefLanguages, 0, v33, v32);
          if ( v32[0] )
            CurrentLocale = -4370;
          else
            CurrentLocale = v33[0];
        }
        LODWORD(v10) = v50;
        v5 = (v39 & 1) != 0 ? 10 : 4;
        goto LABEL_23;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
              goto LABEL_31;
            CurrentLocale = 1033;
LABEL_24:
            v25 = *a5;
            v26 = 0;
            if ( !*a5 )
              goto LABEL_28;
            do
            {
              if ( a5[4 * v26 + 2] == CurrentLocale )
                break;
              ++v26;
            }
            while ( v26 < (unsigned int)v25 );
            if ( v26 >= (unsigned int)v25 )
            {
LABEL_28:
              if ( (unsigned int)v25 >= 0x40 )
                goto LABEL_31;
              a5[4 * v25 + 2] = CurrentLocale;
              *(_DWORD *)&a5[4 * (*a5)++ + 4] = v5;
            }
            goto LABEL_6;
          }
          CurrentLocale = -4370;
          v28 = ZwQueryDefaultLocale(0, &DefaultLocaleId);
          LODWORD(v10) = v50;
          v13 = a4;
          v11 = v28;
          if ( v28 >= 0 && DefaultLocaleId != v36 )
          {
            CurrentLocale = DefaultLocaleId;
            goto LABEL_23;
          }
        }
        else
        {
          CurrentLocale = -4370;
          v29 = ZwQueryDefaultLocale(1u, &v36);
          LODWORD(v10) = v50;
          v13 = a4;
          v11 = v29;
          if ( v29 >= 0 )
          {
            CurrentLocale = v36;
            goto LABEL_23;
          }
        }
      }
      else
      {
        v33[0] = -4370;
        if ( (~v13 & 0x80000) != 0 )
          goto LABEL_31;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_23;
        }
        CurrentLocale = v33[0];
      }
    }
    else
    {
      CurrentLocale = 0;
      v33[0] = 0;
      v22 = sub_180013968();
      v23 = v34;
      if ( v22 )
      {
        MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
        if ( v34 < MergedPrefLanguages[2] )
        {
          sub_1800136CC((__int64)MergedPrefLanguages, (__int64)NtCurrentTeb()->MergedPrefLanguages, v34, v33, v32);
          v23 = v34;
        }
        CurrentLocale = v33[0];
      }
      if ( !CurrentLocale )
      {
        LODWORD(v10) = v50;
        CurrentLocale = -4370;
        goto LABEL_6;
      }
      if ( v32[0] && (a4 & 0x100000) != 0 )
        CurrentLocale = -4370;
      v5 = 3;
      v34 = v23 + 1;
      LODWORD(v10) = v15;
LABEL_23:
      v13 = a4;
      if ( CurrentLocale != 0xEEEE )
        goto LABEL_24;
    }
  }
  if ( (v13 & 4) == 0 )
  {
    if ( (a3 & 0x3FF) != 0 )
    {
      *((_BYTE *)a5 + 516) = 1;
      if ( (int)sub_18007E254(CurrentLocale, &v35, v10) < 0 )
        goto LABEL_31;
      LODWORD(v10) = v15;
      CurrentLocale = v35;
      if ( !v35 )
        LODWORD(v10) = -1;
    }
    else
    {
      CurrentLocale = -4370;
    }
    v5 = 2;
    goto LABEL_23;
  }
  *((_BYTE *)a5 + 516) = 1;
LABEL_31:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    sub_1800E0820(&v43, *(unsigned __int8 *)v8);
  }
  return v11;
}
