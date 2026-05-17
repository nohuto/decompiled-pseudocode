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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A0700 (NtQueryInformationToken.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // r13
  char v10; // r15
  int v11; // r12d
  int InformationToken; // ebx
  __int64 v13; // r13
  char v14; // r14
  int v15; // esi
  bool v16; // al
  __int64 v17; // rbx
  int v18; // r12d
  size_t v19; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v21; // rsi
  wchar_t *v23; // rdx
  wchar_t v24; // ax
  wchar_t *v25; // rcx
  wchar_t v26; // ax
  wchar_t *v27; // rax
  int appended; // eax
  bool v29; // [rsp+40h] [rbp-C0h]
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v32[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v41; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PSID v43[12]; // [rsp+B0h] [rbp-50h] BYREF
  void *v44; // [rsp+110h] [rbp+10h] BYREF
  wchar_t Buffer[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v46; // [rsp+370h] [rbp+270h] BYREF
  char v47; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  v7 = 0LL;
  Sid = 0LL;
  v8 = 0LL;
  memset(Buffer, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  v40 = 262146;
  v41 = L"\\";
  if ( !a4 || !a1 )
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
  v31 = 0;
  v33 = 0;
  if ( a2 )
  {
    v7 = a2;
    v31 = 1;
  }
  else
  {
    InformationToken = NtQueryInformationToken(a1, 29LL, &v31, 4LL, v32);
    if ( InformationToken < 0 )
      goto LABEL_60;
    if ( v31 )
    {
      InformationToken = NtQueryInformationToken(a1, 31LL, &v44, 80LL, v32);
      if ( InformationToken < 0 )
        goto LABEL_60;
      v7 = v44;
      if ( !v44 )
      {
        InformationToken = -1073741823;
        goto LABEL_60;
      }
    }
  }
  InformationToken = NtQueryInformationToken(a1, 42LL, &v33, 4LL, v32);
  if ( InformationToken < 0 )
    goto LABEL_60;
  if ( v33 )
  {
    InformationToken = NtQueryInformationToken(a1, 1LL, v43, 88LL, v32);
    if ( InformationToken < 0 )
      goto LABEL_60;
    InformationToken = RtlConvertSidToUnicodeString(&v39, v43[0], 1u);
    if ( InformationToken < 0 )
      goto LABEL_60;
  }
  InformationToken = NtQueryInformationToken(a1, 12LL, &v37, 4LL, v32);
  if ( InformationToken < 0 )
    goto LABEL_60;
  v13 = 260LL;
  if ( v31 )
  {
    InformationToken = RtlGetAppContainerSidType(v7, &v36);
    if ( InformationToken >= 0 )
    {
      if ( v36 == 2 )
      {
        InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
        v14 = 1;
        if ( InformationToken < 0 )
          goto LABEL_36;
        goto LABEL_15;
      }
      InformationToken = RtlGetAppContainerParent((__int64)v7, (unsigned __int64 *)&Sid);
      if ( InformationToken >= 0 )
      {
        InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
        if ( InformationToken >= 0 )
        {
          InformationToken = RtlStringCchPrintfW(SourceString);
          if ( InformationToken >= 0 )
          {
            RtlFreeAnsiString(&UnicodeString);
            RtlInitUnicodeString(&UnicodeString, SourceString);
            v14 = 0;
            goto LABEL_15;
          }
        }
      }
    }
    v8 = Sid;
LABEL_60:
    v14 = 1;
    goto LABEL_37;
  }
  v14 = 1;
LABEL_15:
  InformationToken = NtQueryInformationToken(a1, 44LL, &v46, 288LL, v32);
  if ( InformationToken >= 0 )
  {
    v15 = v37;
    v16 = !v33 && !v31 && v15 == (unsigned int)RtlGetCurrentServiceSessionId();
    if ( v10 )
    {
      if ( !v11 )
        goto LABEL_21;
      InformationToken = 0;
      v23 = Buffer;
      while ( v13 != -2147483386 )
      {
        v24 = *(wchar_t *)((char *)v23 + (char *)L"AppContainerNamedObjects" - (char *)Buffer);
        if ( !v24 )
          break;
        *v23++ = v24;
        if ( !--v13 )
        {
          --v23;
          InformationToken = -2147483643;
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
        InformationToken = RtlStringCchPrintfW(Buffer);
        goto LABEL_22;
      }
      v25 = Buffer;
      do
      {
        if ( v13 == -2147483386 )
          break;
        v26 = *(wchar_t *)((char *)v25 + (char *)L"\\BaseNamedObjects" - (char *)Buffer);
        if ( !v26 )
          break;
        *v25++ = v26;
        --v13;
      }
      while ( v13 );
      v27 = v25 - 1;
      InformationToken = -2147483643;
      if ( v13 )
      {
        v27 = v25;
        InformationToken = 0;
      }
      *v27 = 0;
    }
LABEL_22:
    if ( InformationToken >= 0 )
    {
      v38 = 0LL;
      InformationToken = RtlStringCbLengthW(Buffer, 520LL, &v38);
      if ( InformationToken >= 0 )
      {
        if ( v33 && v29 )
          v17 = v38 + v39.Length + 2LL;
        else
          v17 = v38;
        if ( v31 )
          v17 += UnicodeString.Length + 2LL;
        v18 = v34;
        if ( v47 && !v34 )
        {
          RtlInitUnicodeString(&DestinationString, v46);
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
          InformationToken = RtlAppendUnicodeToString(&a4->Length, Buffer);
          if ( InformationToken >= 0 )
          {
            if ( !v33
              || !v29
              || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v40), InformationToken >= 0)
              && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v39), InformationToken >= 0) )
            {
              if ( !v31
                || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v40),
                    InformationToken >= 0)
                && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&UnicodeString),
                    InformationToken >= 0) )
              {
                if ( v47 )
                {
                  if ( !v18 )
                  {
                    InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&v40);
                    if ( InformationToken >= 0 )
                    {
                      appended = RtlAppendUnicodeStringToString(&a4->Length, (__int16 *)&DestinationString);
                      v8 = Sid;
                      InformationToken = appended;
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
          InformationToken = -1073741670;
        }
      }
    }
  }
LABEL_36:
  v8 = Sid;
LABEL_37:
  RtlFreeAnsiString(&v39);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v14 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Sid);
  return (unsigned int)InformationToken;
}
