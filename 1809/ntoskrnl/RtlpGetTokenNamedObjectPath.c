/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x14089600C
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1402EDFC0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x1408950F0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     RtlGetCurrentServiceSessionId @ 0x14016CC00 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x140655D20 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     RtlGetAppContainerParent @ 0x140894FC0 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, PSID Sid, char a3, UNICODE_STRING *a4)
{
  PSID v7; // r12
  PSID v8; // rdi
  int v10; // eax
  int v11; // esi
  char v12; // r15
  NTSTATUS appended; // ebx
  __int64 v14; // r15
  NTSTATUS AppContainerParent; // eax
  PULONG v16; // rsi
  PULONG v17; // rdi
  PULONG v18; // rbx
  ULONG CurrentServiceSessionId; // eax
  int v20; // r9d
  char v21; // al
  const wchar_t *v22; // rcx
  wchar_t *v23; // rcx
  wchar_t v24; // ax
  wchar_t *v25; // rax
  wchar_t *v26; // rdx
  wchar_t v27; // ax
  int v28; // esi
  __int64 v29; // rbx
  int v30; // r15d
  SIZE_T v31; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v33; // rdi
  NTSTATUS v34; // eax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v41; // [rsp+50h] [rbp-B0h] BYREF
  int TokenInformation; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h]
  int v45; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING pcbLength; // [rsp+78h] [rbp-88h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+88h] [rbp-78h] BYREF
  int v49; // [rsp+8Ch] [rbp-74h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sida[12]; // [rsp+B0h] [rbp-50h] BYREF
  void *v53; // [rsp+110h] [rbp+10h] BYREF
  wchar_t psz[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR SourceString; // [rsp+370h] [rbp+270h] BYREF
  char v56; // [rsp+378h] [rbp+278h]
  wchar_t pszDest[264]; // [rsp+490h] [rbp+390h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(psz, 0, 0x208uLL);
  memset(pszDest, 0, 0x208uLL);
  *(_DWORD *)&Source.Length = 262146;
  Source.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  DestinationString.Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&pcbLength.Length = a3 & 1;
  v39 = 0;
  v44 = a3 & 2;
  v10 = a3 & 8;
  v11 = a3 & 4;
  v45 = v10;
  *(_QWORD *)&a4->Length = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  a4->MaximumLength = 0;
  a4->Buffer = 0LL;
  DestinationString.MaximumLength = 0;
  UnicodeString.MaximumLength = 0;
  v12 = 1;
  v38 = 1;
  v49 = v11;
  TokenInformation = 0;
  if ( Sid )
  {
    v7 = Sid;
    v39 = 1;
    goto LABEL_5;
  }
  appended = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &v39, 4u, &v41);
  if ( appended >= 0 )
  {
    if ( !v39 )
      goto LABEL_5;
    appended = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, &v53, 0x50u, &v41);
    if ( appended >= 0 )
    {
      v7 = v53;
      if ( !v53 )
      {
        appended = -1073741823;
        goto LABEL_82;
      }
LABEL_5:
      appended = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &TokenInformation, 4u, &v41);
      if ( appended < 0 )
        goto LABEL_82;
      if ( TokenInformation )
      {
        appended = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v41);
        if ( appended < 0 )
          goto LABEL_82;
        appended = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
        if ( appended < 0 )
          goto LABEL_82;
      }
      appended = NtQueryInformationToken(TokenHandle, TokenSessionId, &v43, 4u, &v41);
      if ( appended < 0 )
        goto LABEL_82;
      v14 = 260LL;
      if ( v39 )
      {
        appended = RtlGetAppContainerSidType(v7, &AppContainerSidType);
        if ( appended >= 0 )
        {
          if ( AppContainerSidType == ParentAppContainerSidType )
          {
            appended = RtlConvertSidToUnicodeString(&DestinationString, v7, 1u);
            if ( appended >= 0 )
              goto LABEL_24;
          }
          else
          {
            AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
            v8 = AppContainerSidParent;
            appended = AppContainerParent;
            if ( AppContainerParent >= 0 )
            {
              appended = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u);
              if ( appended >= 0 )
              {
                v16 = RtlSubAuthoritySid(v7, 0xBu);
                v17 = RtlSubAuthoritySid(v7, 0xAu);
                v18 = RtlSubAuthoritySid(v7, 9u);
                LODWORD(ReturnLength) = *RtlSubAuthoritySid(v7, 8u);
                appended = RtlStringCchPrintfW(
                             pszDest,
                             0x104uLL,
                             L"%s\\%u-%u-%u-%u",
                             DestinationString.Buffer,
                             ReturnLength,
                             *v18,
                             *v17,
                             *v16);
                if ( appended >= 0 )
                {
                  RtlFreeAnsiString(&DestinationString);
                  RtlInitUnicodeString(&DestinationString, pszDest);
                  v8 = AppContainerSidParent;
                  v11 = v49;
                  v38 = 0;
                  goto LABEL_24;
                }
                v8 = AppContainerSidParent;
              }
            }
          }
        }
        v12 = 1;
        goto LABEL_82;
      }
LABEL_24:
      appended = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &SourceString, 0x120u, &v41);
      if ( appended < 0 )
      {
LABEL_67:
        v12 = v38;
        goto LABEL_82;
      }
      if ( TokenInformation || v39 )
      {
        v20 = v43;
      }
      else
      {
        CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
        v20 = v43;
        if ( v43 == CurrentServiceSessionId )
        {
          v21 = 1;
          goto LABEL_31;
        }
      }
      v21 = 0;
LABEL_31:
      if ( LOBYTE(pcbLength.Length) )
      {
        if ( !v11 )
        {
          appended = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
          goto LABEL_53;
        }
        v26 = psz;
        do
        {
          if ( v14 == -2147483386 )
            break;
          v27 = *(wchar_t *)((char *)v26 + (char *)L"AppContainerNamedObjects" - (char *)psz);
          if ( !v27 )
            break;
          *v26++ = v27;
          --v14;
        }
        while ( v14 );
        v25 = v26 - 1;
        if ( v14 )
          v25 = v26;
      }
      else
      {
        if ( !v21 )
        {
          v22 = L"AppContainerNamedObjects";
          if ( !v39 )
            v22 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v20;
          appended = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v22);
          goto LABEL_53;
        }
        v23 = psz;
        do
        {
          if ( v14 == -2147483386 )
            break;
          v24 = *(wchar_t *)((char *)v23 + (char *)L"\\BaseNamedObjects" - (char *)psz);
          if ( !v24 )
            break;
          *v23++ = v24;
          --v14;
        }
        while ( v14 );
        v25 = v23 - 1;
        if ( v14 )
          v25 = v23;
      }
      appended = -2147483643;
      *v25 = 0;
      if ( v14 )
        appended = 0;
LABEL_53:
      if ( appended >= 0 )
      {
        *(_QWORD *)&pcbLength.Length = 0LL;
        appended = RtlStringCbLengthW(psz, 0x208uLL, (size_t *)&pcbLength.Length);
        if ( appended >= 0 )
        {
          v28 = v44;
          if ( !TokenInformation || v44 )
            v29 = *(_QWORD *)&pcbLength.Length;
          else
            v29 = *(_QWORD *)&pcbLength.Length + UnicodeString.Length + 2LL;
          if ( v39 )
            v29 += DestinationString.Length + 2LL;
          v30 = v45;
          if ( v56 && !v45 )
          {
            RtlInitUnicodeString(&pcbLength, SourceString);
            v29 += pcbLength.Length + 2LL;
          }
          v31 = v29 + 2;
          StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v31);
          v33 = StringRoutine;
          if ( StringRoutine )
          {
            memset(StringRoutine, 0, v31);
            *(_QWORD *)&a4->Length = 0LL;
            a4->MaximumLength = v31;
            a4->Buffer = v33;
            appended = RtlAppendUnicodeToString(a4, psz);
            if ( appended >= 0 )
            {
              if ( !TokenInformation
                || v28
                || (appended = RtlAppendUnicodeStringToString(a4, &Source), appended >= 0)
                && (appended = RtlAppendUnicodeStringToString(a4, &UnicodeString), appended >= 0) )
              {
                if ( !v39
                  || (appended = RtlAppendUnicodeStringToString(a4, &Source), appended >= 0)
                  && (appended = RtlAppendUnicodeStringToString(a4, &DestinationString), appended >= 0) )
                {
                  if ( v56 )
                  {
                    if ( !v30 )
                    {
                      appended = RtlAppendUnicodeStringToString(a4, &Source);
                      if ( appended >= 0 )
                      {
                        v34 = RtlAppendUnicodeStringToString(a4, &pcbLength);
                        v8 = AppContainerSidParent;
                        appended = v34;
                        v12 = v38;
                        goto LABEL_82;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            appended = -1073741670;
          }
          v8 = AppContainerSidParent;
        }
      }
      goto LABEL_67;
    }
  }
LABEL_82:
  RtlFreeAnsiString(&UnicodeString);
  if ( appended < 0 )
    RtlFreeAnsiString(a4);
  if ( v12 )
    RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)appended;
}
