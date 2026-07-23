/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800EC2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003214 @ 0x180003214 (sub_180003214.c)
 *     RtlCleanUpTEBLangLists @ 0x180005DD0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18001583C @ 0x18001583C (sub_18001583C.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800730B0 (RtlpGetSystemDefaultUILanguage.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x18009CD20 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x18009E0B0 (ZwDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009E4F0 (ZwGetMUIRegistryInfo.c)
 *     ZwIsUILanguageComitted @ 0x18009E690 (ZwIsUILanguageComitted.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800EE8B4 @ 0x1800EE8B4 (sub_1800EE8B4.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  wchar_t *Heap; // r15
  int SystemDefaultUILanguage; // ebx
  PLCID v3; // rdi
  char *v4; // r11
  ULONG v5; // r12d
  unsigned int v6; // edi
  char *v7; // r14
  NTSTATUS v8; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  HANDLE *v11; // rsi
  HANDLE v12; // rcx
  char *v14; // rax
  char *v15; // rbx
  __int64 v16; // rcx
  LANGID DefaultUILanguageId[4]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  char *v20; // [rsp+50h] [rbp-B8h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  PLCID Lcid; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING String; // [rsp+70h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-88h] BYREF
  __int64 v26; // [rsp+88h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v29; // [rsp+C8h] [rbp-40h] BYREF
  char v30; // [rsp+F8h] [rbp-10h] BYREF

  v0 = 0;
  Heap = 0LL;
  LOBYTE(DefaultUILanguageId[0]) = 0;
  KeyHandle = 0LL;
  ZwIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v3 = Lcid;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId[2], Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String.Buffer = (PWCH)&v30;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId[2], &String) || !v3 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_41;
  }
  v19 = 0LL;
  v20 = 0LL;
  SystemDefaultUILanguage = sub_180003214(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v26);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_41:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    v20 = v4;
    LOWORD(v19) = 2 * v26;
    WORD1(v19) = 2 * v26 + 2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SystemDefaultUILanguage = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( SystemDefaultUILanguage >= 0 )
    {
      Handle = 0LL;
      v5 = 0;
      v6 = 0;
      v7 = 0LL;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
      if ( !Heap )
      {
        SystemDefaultUILanguage = -1073741801;
        goto LABEL_41;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, Heap, 0x200u, &ResultLength);
            if ( v8 < 0 )
            {
LABEL_21:
              if ( Handle )
                ZwClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v8 != -2147483622 )
                SystemDefaultUILanguage = v8;
              if ( v7 )
              {
                if ( v6 )
                {
                  v11 = (HANDLE *)&v7[8 * v6];
                  do
                  {
                    --v11;
                    --v6;
                    v12 = *v11;
                    Handle = v12;
                    if ( v12 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        LOBYTE(DefaultUILanguageId[0]) = 1;
                        ZwDeleteKey(v12);
                        v12 = Handle;
                      }
                      ZwClose(v12);
                    }
                  }
                  while ( v6 );
                }
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
              }
              if ( SystemDefaultUILanguage >= 0 && LOBYTE(DefaultUILanguageId[0]) )
              {
                ZwGetMUIRegistryInfo(2u, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                sub_180012D4C();
                RtlEnterCriticalSection(&CriticalSection);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)qword_180166098, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( qword_180166098 )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_180166098);
                  qword_180166098 = 0LL;
                }
                RtlLeaveCriticalSection(&CriticalSection);
              }
              goto LABEL_41;
            }
            v9 = *((unsigned int *)Heap + 3);
            ++v5;
            if ( v9 + 24 <= 0x200 )
            {
              Heap[(v9 >> 1) + 8] = 0;
              if ( (int)sub_18001583C((__int64)Lcid, Heap + 8, 0, &v22) < 0 )
              {
                if ( wcsicmp(Heap + 8, String.Buffer) )
                  break;
              }
            }
          }
          v19 = 0LL;
          v20 = 0LL;
          if ( Heap != (wchar_t *)-16LL )
            break;
LABEL_17:
          v29.RootDirectory = KeyHandle;
          Handle = 0LL;
          v29.ObjectName = (PUNICODE_STRING)&v19;
          v29.Length = 48;
          v29.Attributes = 64;
          *(_OWORD *)&v29.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0xF003Fu, &v29) >= 0 )
          {
            if ( v7 )
            {
              if ( v6 >= v0 )
              {
                v14 = (char *)sub_1800EE8B4(v10, v0 + 10);
                v15 = v14;
                if ( !v14 )
                {
LABEL_20:
                  v8 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v14, v7, v0);
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
                v0 += 10;
                v7 = v15;
              }
            }
            else
            {
              v0 = 10;
              v7 = (char *)sub_1800EE8B4(v10, 10LL);
              if ( !v7 )
                goto LABEL_20;
            }
            v16 = v6++;
            *(_QWORD *)&v7[8 * v16] = Handle;
            Handle = 0LL;
          }
        }
        if ( (int)sub_180003214(Heap + 8, 0x7FFFLL, &v27) >= 0 )
        {
          v20 = (char *)(Heap + 8);
          LOWORD(v19) = 2 * v27;
          WORD1(v19) = 2 * v27 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
