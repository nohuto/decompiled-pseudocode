/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800EC3D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringLengthWorkerW @ 0x180003214 (RtlStringLengthWorkerW.c)
 *     RtlCleanUpTEBLangLists @ 0x180005DD0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x180012D4C (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001583C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180073650 (RtlpGetSystemDefaultUILanguage.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E870 (_wcsicmp.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009D4D0 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x18009E860 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009ECA0 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x18009EE40 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800EE9A4 (_MuiRegAllocArray_0.c)
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
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v3 = Lcid;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId[2], Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String.Buffer = (wchar_t *)&v30;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId[2], &String) || !v3 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_41;
  }
  v19 = 0LL;
  v20 = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v26);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_41:
    if ( KeyHandle )
      NtClose(KeyHandle);
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
    SystemDefaultUILanguage = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
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
            v8 = NtEnumerateKey(KeyHandle, v5, KeyBasicInformation, Heap, 0x200u, &ResultLength);
            if ( v8 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
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
                        NtDeleteKey(v12);
                        v12 = Handle;
                      }
                      NtClose(v12);
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
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection(&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection(&RegistryInfoCritSect);
              }
              goto LABEL_41;
            }
            v9 = *((unsigned int *)Heap + 3);
            ++v5;
            if ( v9 + 24 <= 0x200 )
            {
              Heap[(v9 >> 1) + 8] = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Lcid, Heap + 8, 0, &v22) < 0 )
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
          if ( NtOpenKey(&Handle, 0xF003Fu, &v29) >= 0 )
          {
            if ( v7 )
            {
              if ( v6 >= v0 )
              {
                v14 = (char *)MuiRegAllocArray_0(v10, v0 + 10);
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
              v7 = (char *)MuiRegAllocArray_0(v10, 10LL);
              if ( !v7 )
                goto LABEL_20;
            }
            v16 = v6++;
            *(_QWORD *)&v7[8 * v16] = Handle;
            Handle = 0LL;
          }
        }
        if ( (int)RtlStringLengthWorkerW(Heap + 8, 0x7FFFLL, &v27) >= 0 )
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
