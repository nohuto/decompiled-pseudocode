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

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  char v11; // al
  int v12; // r12d
  signed int InformationToken; // ebx
  __int64 v14; // rdi
  int v15; // r14d
  char v16; // al
  wchar_t *v17; // rcx
  __int64 v18; // rdx
  int v19; // r11d
  int v20; // r14d
  __int64 v21; // rbx
  int v22; // r15d
  size_t v23; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v25; // rdi
  wchar_t v27; // ax
  wchar_t *v28; // rax
  bool v29; // zf
  wchar_t v30; // ax
  char v31; // [rsp+40h] [rbp-C0h]
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  int v36; // [rsp+5Ch] [rbp-A4h]
  int v37; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+88h] [rbp-78h] BYREF
  const WCHAR *v43; // [rsp+90h] [rbp-70h]
  UNICODE_STRING v44; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  PSID v46[12]; // [rsp+C0h] [rbp-40h] BYREF
  void *v47; // [rsp+120h] [rbp+20h] BYREF
  wchar_t Buffer[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR v49; // [rsp+380h] [rbp+280h] BYREF
  char v50; // [rsp+388h] [rbp+288h]
  WCHAR SourceString[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  Sid = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Buffer, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  v42 = 262146;
  v43 = L"\\";
  if ( !a4 || !a1 )
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
  *(_QWORD *)&v44.Length = 0LL;
  v44.Buffer = 0LL;
  v33 = 0;
  v35 = 0;
  if ( a2 )
  {
    v7 = a2;
    v33 = 1;
    goto LABEL_8;
  }
  InformationToken = NtQueryInformationToken(a1, 29LL, &v33, 4LL, v34);
  if ( InformationToken >= 0 )
  {
    if ( !v33 )
      goto LABEL_8;
    InformationToken = NtQueryInformationToken(a1, 31LL, &v47, 80LL, v34);
    if ( InformationToken >= 0 )
    {
      v7 = v47;
      if ( !v47 )
      {
        InformationToken = -1073741823;
        goto LABEL_37;
      }
LABEL_8:
      InformationToken = NtQueryInformationToken(a1, 42LL, &v35, 4LL, v34);
      if ( InformationToken < 0 )
        goto LABEL_37;
      if ( v35 )
      {
        InformationToken = NtQueryInformationToken(a1, 1LL, v46, 88LL, v34);
        if ( InformationToken < 0 )
          goto LABEL_37;
        InformationToken = RtlConvertSidToUnicodeString(&v44, v46[0], 1u);
        if ( InformationToken < 0 )
          goto LABEL_37;
      }
      InformationToken = NtQueryInformationToken(a1, 12LL, &v40, 4LL, v34);
      if ( InformationToken < 0 )
        goto LABEL_37;
      v14 = 260LL;
      if ( v33 )
      {
        InformationToken = RtlGetAppContainerSidType(v7, &v39);
        if ( InformationToken < 0 )
          goto LABEL_36;
        if ( v39 == 2 )
        {
          InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( InformationToken < 0 )
            goto LABEL_36;
        }
        else
        {
          InformationToken = RtlGetAppContainerParent((__int64)v7, (__int64 *)&Sid);
          if ( InformationToken < 0 )
            goto LABEL_36;
          InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
          if ( InformationToken < 0 )
            goto LABEL_36;
          InformationToken = RtlStringCchPrintfW(SourceString);
          if ( InformationToken < 0 )
            goto LABEL_36;
          RtlFreeAnsiString(&UnicodeString);
          RtlInitUnicodeString(&UnicodeString, SourceString);
          v31 = 0;
        }
      }
      InformationToken = NtQueryInformationToken(a1, 44LL, &v49, 288LL, v34);
      if ( InformationToken >= 0 )
      {
        v15 = v40;
        if ( v35 || v33 || (v29 = v15 == (unsigned int)RtlGetCurrentServiceSessionId(), v16 = 1, !v29) )
          v16 = 0;
        if ( v10 )
        {
          if ( !v12 )
            goto LABEL_21;
          v17 = Buffer;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v27 = *(wchar_t *)((char *)v17 + (char *)L"AppContainerNamedObjects" - (char *)Buffer);
            if ( !v27 )
              break;
            *v17++ = v27;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v17 = Buffer;
          if ( !v16 )
          {
LABEL_21:
            InformationToken = RtlStringCchPrintfW(Buffer);
LABEL_22:
            if ( InformationToken >= 0 )
            {
              v41 = 0LL;
              InformationToken = RtlStringCbLengthW(Buffer, 520LL, &v41);
              if ( InformationToken >= 0 )
              {
                v20 = v36;
                if ( v35 == v19 || v36 )
                  v21 = v41;
                else
                  v21 = v41 + v44.Length + 2LL;
                if ( v33 != v19 )
                  v21 += UnicodeString.Length + 2LL;
                v22 = v37;
                if ( v50 != (_BYTE)v19 && !v37 )
                {
                  RtlInitUnicodeString(&DestinationString, v49);
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
                  InformationToken = RtlAppendUnicodeToString(a4, Buffer);
                  if ( InformationToken >= 0 )
                  {
                    if ( !v35
                      || v20
                      || (InformationToken = RtlAppendUnicodeStringToString(a4, &v42), InformationToken >= 0)
                      && (InformationToken = RtlAppendUnicodeStringToString(a4, &v44), InformationToken >= 0) )
                    {
                      if ( !v33
                        || (InformationToken = RtlAppendUnicodeStringToString(a4, &v42), InformationToken >= 0)
                        && (InformationToken = RtlAppendUnicodeStringToString(a4, &UnicodeString), InformationToken >= 0) )
                      {
                        if ( v50 )
                        {
                          if ( !v22 )
                          {
                            InformationToken = RtlAppendUnicodeStringToString(a4, &v42);
                            if ( InformationToken >= 0 )
                              InformationToken = RtlAppendUnicodeStringToString(a4, &DestinationString);
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  InformationToken = -1073741670;
                }
              }
            }
            goto LABEL_36;
          }
          do
          {
            if ( v14 == -2147483386 )
              break;
            v30 = *(wchar_t *)((char *)v17 + (char *)L"\\BaseNamedObjects" - (char *)Buffer);
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
        InformationToken = v14 == 0 ? 0x80000005 : 0;
        *v28 = 0;
        goto LABEL_22;
      }
LABEL_36:
      v8 = Sid;
    }
  }
LABEL_37:
  RtlFreeAnsiString(&v44);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v31 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Sid);
  return (unsigned int)InformationToken;
}
