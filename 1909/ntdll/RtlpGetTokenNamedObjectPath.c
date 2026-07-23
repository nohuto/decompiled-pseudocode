/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x18000BCF8
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000B550 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x180082DE0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetAppContainerParent @ 0x18000B6A0 (RtlGetAppContainerParent.c)
 *     RtlStringCchPrintfW @ 0x18000C23C (RtlStringCchPrintfW.c)
 *     RtlStringCbLengthW @ 0x18000C2B4 (RtlStringCbLengthW.c)
 *     RtlGetAppContainerSidType @ 0x18000C330 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D2B0 (NtQueryInformationToken.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, void *a2, char a3, _UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  char v11; // al
  int v12; // r12d
  NTSTATUS AppContainerParent; // ebx
  __int64 v14; // rdi
  int v15; // r14d
  char v16; // al
  WCHAR *v17; // rcx
  __int64 v18; // rdx
  int v19; // r11d
  int v20; // r14d
  __int64 v21; // rbx
  int v22; // r15d
  size_t v23; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v25; // rdi
  WCHAR v27; // ax
  WCHAR *v28; // rax
  bool v29; // zf
  WCHAR v30; // ax
  char v31; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+54h] [rbp-ACh] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h]
  int v37; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v42; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING v43; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sid[12]; // [rsp+C0h] [rbp-40h] BYREF
  void *v46; // [rsp+120h] [rbp+20h] BYREF
  WCHAR Source[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR v48; // [rsp+380h] [rbp+280h] BYREF
  char v49; // [rsp+388h] [rbp+288h]
  WCHAR SourceString[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v42.Length = 262146;
  v42.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v31 = 1;
  v36 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3;
  v12 = a3 & 4;
  v37 = v11 & 8;
  *(_QWORD *)&a4->Length = 0LL;
  a4->Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  v43.Buffer = 0LL;
  TokenInformation = 0;
  v35 = 0;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
    goto LABEL_8;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
  if ( AppContainerParent >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_8;
    AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Fu, &v46, 0x50u, &ReturnLength);
    if ( AppContainerParent >= 0 )
    {
      v7 = v46;
      if ( !v46 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_37;
      }
LABEL_8:
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Au, &v35, 4u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_37;
      if ( v35 )
      {
        AppContainerParent = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &ReturnLength);
        if ( AppContainerParent < 0 )
          goto LABEL_37;
        AppContainerParent = RtlConvertSidToUnicodeString(&v43, Sid[0], 1u);
        if ( AppContainerParent < 0 )
          goto LABEL_37;
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0xCu, &v40, 4u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_37;
      v14 = 260LL;
      if ( TokenInformation )
      {
        AppContainerParent = RtlGetAppContainerSidType(v7, &AppContainerSidType);
        if ( AppContainerParent < 0 )
          goto LABEL_36;
        if ( AppContainerSidType == ParentAppContainerSidType )
        {
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
        }
        else
        {
          AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, AppContainerSidParent, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
          AppContainerParent = RtlStringCchPrintfW(SourceString);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
          RtlFreeAnsiString(&UnicodeString);
          RtlInitUnicodeString(&UnicodeString, SourceString);
          v31 = 0;
        }
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Cu, &v48, 0x120u, &ReturnLength);
      if ( AppContainerParent >= 0 )
      {
        v15 = v40;
        if ( v35 || TokenInformation || (v29 = v15 == RtlGetCurrentServiceSessionId(), v16 = 1, !v29) )
          v16 = 0;
        if ( v10 )
        {
          if ( !v12 )
            goto LABEL_21;
          v17 = Source;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v27 = *(WCHAR *)((char *)v17 + (char *)L"AppContainerNamedObjects" - (char *)Source);
            if ( !v27 )
              break;
            *v17++ = v27;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v17 = Source;
          if ( !v16 )
          {
LABEL_21:
            AppContainerParent = RtlStringCchPrintfW(Source);
LABEL_22:
            if ( AppContainerParent >= 0 )
            {
              v41 = 0LL;
              AppContainerParent = RtlStringCbLengthW(Source, 520LL, &v41);
              if ( AppContainerParent >= 0 )
              {
                v20 = v36;
                if ( v35 == v19 || v36 )
                  v21 = v41;
                else
                  v21 = v41 + v43.Length + 2LL;
                if ( TokenInformation != v19 )
                  v21 += UnicodeString.Length + 2LL;
                v22 = v37;
                if ( v49 != (_BYTE)v19 && !v37 )
                {
                  RtlInitUnicodeString(&DestinationString, v48);
                  v21 += DestinationString.Length + 2LL;
                }
                v23 = v21 + 2;
                StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v23, v18);
                v25 = StringRoutine;
                if ( StringRoutine )
                {
                  memset(StringRoutine, 0, v23);
                  *(_QWORD *)&a4->Length = 0LL;
                  a4->MaximumLength = v23;
                  a4->Buffer = v25;
                  AppContainerParent = RtlAppendUnicodeToString(a4, Source);
                  if ( AppContainerParent >= 0 )
                  {
                    if ( !v35
                      || v20
                      || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v42), AppContainerParent >= 0)
                      && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v43), AppContainerParent >= 0) )
                    {
                      if ( !TokenInformation
                        || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v42), AppContainerParent >= 0)
                        && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                            AppContainerParent >= 0) )
                      {
                        if ( v49 )
                        {
                          if ( !v22 )
                          {
                            AppContainerParent = RtlAppendUnicodeStringToString(a4, &v42);
                            if ( AppContainerParent >= 0 )
                              AppContainerParent = RtlAppendUnicodeStringToString(a4, &DestinationString);
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
            goto LABEL_36;
          }
          do
          {
            if ( v14 == -2147483386 )
              break;
            v30 = *(WCHAR *)((char *)v17 + (char *)L"\\BaseNamedObjects" - (char *)Source);
            if ( !v30 )
              break;
            *v17++ = v30;
            --v14;
          }
          while ( v14 );
        }
        v28 = v17 - 1;
        if ( v14 )
          v28 = v17;
        AppContainerParent = v14 == 0 ? 0x80000005 : 0;
        *v28 = 0;
        goto LABEL_22;
      }
LABEL_36:
      v8 = AppContainerSidParent;
    }
  }
LABEL_37:
  RtlFreeAnsiString(&v43);
  if ( AppContainerParent < 0 )
    RtlFreeAnsiString(a4);
  if ( v31 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
