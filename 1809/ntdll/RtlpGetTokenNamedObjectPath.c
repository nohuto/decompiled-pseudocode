/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x18004AB60
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18004B240 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x18004CA10 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     RtlGetAppContainerParent @ 0x18004AA90 (RtlGetAppContainerParent.c)
 *     RtlStringCchPrintfW @ 0x18004B0C8 (RtlStringCchPrintfW.c)
 *     RtlStringCbLengthW @ 0x18004B140 (RtlStringCbLengthW.c)
 *     RtlGetAppContainerSidType @ 0x18004B1C0 (RtlGetAppContainerSidType.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A0720 (NtQueryInformationToken.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, void *a2, char a3, _UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // r13
  char v10; // r15
  int v11; // r12d
  NTSTATUS AppContainerParent; // ebx
  __int64 v13; // r13
  char v14; // r14
  int v15; // esi
  bool v16; // al
  __int64 v17; // rbx
  int v18; // r12d
  SIZE_T v19; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v21; // rsi
  WCHAR *v23; // rdx
  WCHAR v24; // ax
  WCHAR *v25; // rcx
  WCHAR v26; // ax
  WCHAR *v27; // rax
  NTSTATUS appended; // eax
  bool v29; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h]
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING v39; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v40; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  void *v43; // [rsp+110h] [rbp+10h] BYREF
  WCHAR Source[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v45; // [rsp+370h] [rbp+270h] BYREF
  char v46; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  v7 = 0LL;
  AppContainerSidParent = 0LL;
  v8 = 0LL;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v40.Length = 262146;
  v40.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v10 = a3 & 1;
  v29 = (a3 & 2) == 0;
  UnicodeString.Buffer = 0LL;
  v34 = a3 & 8;
  v11 = a3 & 4;
  v39.Buffer = 0LL;
  *(_QWORD *)&a4->Length = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  a4->MaximumLength = 0;
  a4->Buffer = 0LL;
  UnicodeString.MaximumLength = 0;
  v39.MaximumLength = 0;
  TokenInformation = 0;
  v33 = 0;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
  }
  else
  {
    AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_60;
    if ( TokenInformation )
    {
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Fu, &v43, 0x50u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_60;
      v7 = v43;
      if ( !v43 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_60;
      }
    }
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Au, &v33, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_60;
  if ( v33 )
  {
    AppContainerParent = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &ReturnLength);
    if ( AppContainerParent < 0 )
      goto LABEL_60;
    AppContainerParent = RtlConvertSidToUnicodeString(&v39, Sid[0], 1u);
    if ( AppContainerParent < 0 )
      goto LABEL_60;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0xCu, &v37, 4u, &ReturnLength);
  if ( AppContainerParent < 0 )
    goto LABEL_60;
  v13 = 260LL;
  if ( TokenInformation )
  {
    AppContainerParent = RtlGetAppContainerSidType(v7, &AppContainerSidType);
    if ( AppContainerParent >= 0 )
    {
      if ( AppContainerSidType == ParentAppContainerSidType )
      {
        AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
        v14 = 1;
        if ( AppContainerParent < 0 )
          goto LABEL_36;
        goto LABEL_15;
      }
      AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
      if ( AppContainerParent >= 0 )
      {
        AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, AppContainerSidParent, 1u);
        if ( AppContainerParent >= 0 )
        {
          AppContainerParent = RtlStringCchPrintfW(SourceString);
          if ( AppContainerParent >= 0 )
          {
            RtlFreeAnsiString(&UnicodeString);
            RtlInitUnicodeString(&UnicodeString, SourceString);
            v14 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    v8 = AppContainerSidParent;
LABEL_60:
    v14 = 1;
    goto LABEL_37;
  }
  v14 = 1;
LABEL_15:
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Cu, &v45, 0x120u, &ReturnLength);
  if ( AppContainerParent >= 0 )
  {
    v15 = v37;
    v16 = !v33 && !TokenInformation && v15 == RtlGetCurrentServiceSessionId();
    if ( v10 )
    {
      if ( !v11 )
        goto LABEL_21;
      AppContainerParent = 0;
      v23 = Source;
      while ( v13 != -2147483386 )
      {
        v24 = *(WCHAR *)((char *)v23 + (char *)L"AppContainerNamedObjects" - (char *)Source);
        if ( !v24 )
          break;
        *v23++ = v24;
        if ( !--v13 )
        {
          --v23;
          AppContainerParent = -2147483643;
          break;
        }
      }
      *v23 = 0;
    }
    else
    {
      if ( !v16 )
      {
LABEL_21:
        AppContainerParent = RtlStringCchPrintfW(Source);
        goto LABEL_22;
      }
      v25 = Source;
      do
      {
        if ( v13 == -2147483386 )
          break;
        v26 = *(WCHAR *)((char *)v25 + (char *)L"\\BaseNamedObjects" - (char *)Source);
        if ( !v26 )
          break;
        *v25++ = v26;
        --v13;
      }
      while ( v13 );
      v27 = v25 - 1;
      AppContainerParent = -2147483643;
      if ( v13 )
      {
        v27 = v25;
        AppContainerParent = 0;
      }
      *v27 = 0;
    }
LABEL_22:
    if ( AppContainerParent >= 0 )
    {
      v38 = 0LL;
      AppContainerParent = RtlStringCbLengthW(Source, 520LL, &v38);
      if ( AppContainerParent >= 0 )
      {
        if ( v33 && v29 )
          v17 = v38 + v39.Length + 2LL;
        else
          v17 = v38;
        if ( TokenInformation )
          v17 += UnicodeString.Length + 2LL;
        v18 = v34;
        if ( v46 && !v34 )
        {
          RtlInitUnicodeString(&DestinationString, v45);
          v17 += DestinationString.Length + 2LL;
        }
        v19 = v17 + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v19);
        v21 = StringRoutine;
        if ( StringRoutine )
        {
          memset(StringRoutine, 0, v19);
          *(_QWORD *)&a4->Length = 0LL;
          a4->MaximumLength = v19;
          a4->Buffer = v21;
          AppContainerParent = RtlAppendUnicodeToString(a4, Source);
          if ( AppContainerParent >= 0 )
          {
            if ( !v33
              || !v29
              || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40), AppContainerParent >= 0)
              && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v39), AppContainerParent >= 0) )
            {
              if ( !TokenInformation
                || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40), AppContainerParent >= 0)
                && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerParent >= 0) )
              {
                if ( v46 )
                {
                  if ( !v18 )
                  {
                    AppContainerParent = RtlAppendUnicodeStringToString(a4, &v40);
                    if ( AppContainerParent >= 0 )
                    {
                      appended = RtlAppendUnicodeStringToString(a4, &DestinationString);
                      v8 = AppContainerSidParent;
                      AppContainerParent = appended;
                      goto LABEL_37;
                    }
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
  }
LABEL_36:
  v8 = AppContainerSidParent;
LABEL_37:
  RtlFreeAnsiString(&v39);
  if ( AppContainerParent < 0 )
    RtlFreeAnsiString(a4);
  if ( v14 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
