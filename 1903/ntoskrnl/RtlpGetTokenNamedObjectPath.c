/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x1408D2CBC
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x14030C5F0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x1408D2030 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     RtlGetCurrentServiceSessionId @ 0x140180CE0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x14067FA50 (RtlGetAppContainerSidType.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 *     RtlGetAppContainerParent @ 0x1408D1F00 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, char a3, UNICODE_STRING *a4)
{
  PSID v7; // r12
  PSID v8; // r14
  char v10; // si
  int v11; // eax
  int v12; // edi
  NTSTATUS AppContainerParent; // ebx
  __int64 v15; // r14
  ULONG CurrentServiceSessionId; // eax
  int v17; // r9d
  char v18; // al
  PULONG v19; // rsi
  PULONG v20; // rdi
  PULONG v21; // rbx
  const wchar_t *v22; // rcx
  NTSTATUS v23; // eax
  wchar_t *v24; // rcx
  wchar_t v25; // ax
  wchar_t *v26; // rax
  wchar_t *v27; // rdx
  wchar_t v28; // ax
  int v29; // esi
  size_t v30; // rbx
  int v31; // r14d
  SIZE_T v32; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v34; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  size_t pcbLength; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch]
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v51; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sida[12]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v53[10]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t psz[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR SourceString; // [rsp+380h] [rbp+280h] BYREF
  char v56; // [rsp+388h] [rbp+288h]
  wchar_t pszDest[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  AppContainerSidParent = 0LL;
  memset(v53, 0, sizeof(v53));
  memset(psz, 0, 0x208uLL);
  memset(pszDest, 0, 0x208uLL);
  memset(Sida, 0, 0x58uLL);
  *(_QWORD *)&Source.Length = 262146LL;
  *(_QWORD *)&v51.Length = 0LL;
  v51.Buffer = 0LL;
  Source.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v37 = 1;
  v43 = a3 & 2;
  v10 = a3 & 1;
  LODWORD(pcbLength) = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v44 = v11;
  TokenInformation = 0;
  v41 = 0;
  *(_QWORD *)&a4->Length = 0LL;
  v48 = v12;
  a4->Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( Sid )
  {
    v7 = Sid;
    TokenInformation = 1;
    goto LABEL_17;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v40);
  if ( AppContainerParent >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_17;
    AppContainerParent = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, v53, 0x50u, &v40);
    if ( AppContainerParent >= 0 )
    {
      v7 = (PSID)v53[0];
      if ( !v53[0] )
      {
        AppContainerParent = -1073741823;
        goto LABEL_10;
      }
LABEL_17:
      AppContainerParent = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v41, 4u, &v40);
      if ( AppContainerParent < 0 )
        goto LABEL_10;
      if ( v41 )
      {
        AppContainerParent = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v40);
        if ( AppContainerParent < 0 )
          goto LABEL_10;
        AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
        if ( AppContainerParent < 0 )
          goto LABEL_10;
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, TokenSessionId, &v42, 4u, &v40);
      if ( AppContainerParent < 0 )
        goto LABEL_10;
      v15 = 260LL;
      if ( TokenInformation )
      {
        AppContainerParent = RtlGetAppContainerSidType(v7, &AppContainerSidType);
        if ( AppContainerParent < 0 )
          goto LABEL_35;
        if ( AppContainerSidType == ParentAppContainerSidType )
        {
          AppContainerParent = RtlConvertSidToUnicodeString(&DestinationString, v7, 1u);
          if ( AppContainerParent >= 0 )
            goto LABEL_26;
          goto LABEL_35;
        }
        AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
        if ( AppContainerParent < 0
          || (AppContainerParent = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u),
              AppContainerParent < 0)
          || (v19 = RtlSubAuthoritySid(v7, 0xBu),
              v20 = RtlSubAuthoritySid(v7, 0xAu),
              v21 = RtlSubAuthoritySid(v7, 9u),
              LODWORD(ReturnLength) = *RtlSubAuthoritySid(v7, 8u),
              AppContainerParent = RtlStringCchPrintfW(
                                     pszDest,
                                     0x104uLL,
                                     L"%s\\%u-%u-%u-%u",
                                     DestinationString.Buffer,
                                     ReturnLength,
                                     *v21,
                                     *v20,
                                     *v19),
              AppContainerParent < 0) )
        {
LABEL_35:
          v8 = AppContainerSidParent;
          goto LABEL_10;
        }
        RtlFreeAnsiString(&DestinationString);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v12 = v48;
        v10 = pcbLength;
        v37 = 0;
      }
LABEL_26:
      AppContainerParent = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &SourceString, 0x120u, &v40);
      if ( AppContainerParent < 0 )
      {
LABEL_73:
        v8 = AppContainerSidParent;
        goto LABEL_10;
      }
      if ( v41 || TokenInformation )
      {
        v17 = v42;
      }
      else
      {
        CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
        v17 = v42;
        if ( v42 == CurrentServiceSessionId )
        {
          v18 = 1;
          goto LABEL_38;
        }
      }
      v18 = 0;
LABEL_38:
      if ( v10 )
      {
        if ( !v12 )
        {
          v23 = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
LABEL_52:
          AppContainerParent = v23;
LABEL_60:
          if ( AppContainerParent >= 0 )
          {
            pcbLength = 0LL;
            AppContainerParent = RtlStringCbLengthW(psz, 0x208uLL, &pcbLength);
            if ( AppContainerParent >= 0 )
            {
              v29 = v43;
              if ( !v41 || v43 )
                v30 = pcbLength;
              else
                v30 = UnicodeString.Length + pcbLength + 2;
              if ( TokenInformation )
                v30 += DestinationString.Length + 2LL;
              v31 = v44;
              if ( v56 && !v44 )
              {
                RtlInitUnicodeString(&v51, SourceString);
                v30 += v51.Length + 2LL;
              }
              v32 = v30 + 2;
              StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v32);
              v34 = StringRoutine;
              if ( StringRoutine )
              {
                memset(StringRoutine, 0, v32);
                *(_QWORD *)&a4->Length = 0LL;
                a4->MaximumLength = v32;
                a4->Buffer = v34;
                AppContainerParent = RtlAppendUnicodeToString(a4, psz);
                if ( AppContainerParent >= 0 )
                {
                  if ( !v41
                    || v29
                    || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &Source), AppContainerParent >= 0)
                    && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerParent >= 0) )
                  {
                    if ( !TokenInformation
                      || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &Source), AppContainerParent >= 0)
                      && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &DestinationString),
                          AppContainerParent >= 0) )
                    {
                      if ( v56 )
                      {
                        if ( !v31 )
                        {
                          AppContainerParent = RtlAppendUnicodeStringToString(a4, &Source);
                          if ( AppContainerParent >= 0 )
                            AppContainerParent = RtlAppendUnicodeStringToString(a4, &v51);
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                AppContainerParent = -1073741670;
              }
            }
          }
          goto LABEL_73;
        }
        v27 = psz;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v28 = *(wchar_t *)((char *)v27 + (char *)L"AppContainerNamedObjects" - (char *)psz);
          if ( !v28 )
            break;
          *v27++ = v28;
          --v15;
        }
        while ( v15 );
        v26 = v27 - 1;
        if ( v15 )
          v26 = v27;
      }
      else
      {
        if ( !v18 )
        {
          v22 = L"AppContainerNamedObjects";
          if ( !TokenInformation )
            v22 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v17;
          v23 = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v22);
          goto LABEL_52;
        }
        v24 = psz;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v25 = *(wchar_t *)((char *)v24 + (char *)L"\\BaseNamedObjects" - (char *)psz);
          if ( !v25 )
            break;
          *v24++ = v25;
          --v15;
        }
        while ( v15 );
        v26 = v24 - 1;
        if ( v15 )
          v26 = v24;
      }
      *v26 = 0;
      AppContainerParent = v15 == 0 ? 0x80000005 : 0;
      goto LABEL_60;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&UnicodeString);
  if ( AppContainerParent < 0 )
    RtlFreeAnsiString(a4);
  if ( v37 )
    RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)AppContainerParent;
}
