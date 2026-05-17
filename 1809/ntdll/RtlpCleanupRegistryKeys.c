/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x1800EF6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlCleanUpTEBLangLists @ 0x18003A5D0 (RtlCleanUpTEBLangLists.c)
 *     RtlpInitMuiCriticalSection @ 0x18003B9B0 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003C58C (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180046030 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18004BA00 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlStringLengthWorkerW @ 0x1800534A8 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800918E0 (_wcsicmp.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A0920 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1800A1C90 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A20D0 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1800A2270 (NtIsUILanguageComitted.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     _MuiRegAllocArray_0 @ 0x1800F19F0 (_MuiRegAllocArray_0.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  unsigned __int64 Heap; // r15
  int SystemDefaultUILanguage; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // r11
  int v7; // r12d
  unsigned int v8; // edi
  char *v9; // r14
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  HANDLE *v13; // rsi
  HANDLE v14; // rcx
  char *v16; // rax
  char *v17; // rbx
  __int64 v18; // rcx
  char v19; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v20; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h]
  HANDLE v22; // [rsp+48h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+88h] [rbp-80h] BYREF
  __int64 v30; // [rsp+90h] [rbp-78h] BYREF
  int v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 *v33; // [rsp+A8h] [rbp-60h]
  int v34; // [rsp+B0h] [rbp-58h]
  __int128 v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+C8h] [rbp-40h]
  HANDLE v37; // [rsp+D0h] [rbp-38h]
  __int64 *v38; // [rsp+D8h] [rbp-30h]
  int v39; // [rsp+E0h] [rbp-28h]
  __int128 v40; // [rsp+E8h] [rbp-20h]
  char v41; // [rsp+F8h] [rbp-10h] BYREF

  v0 = 0;
  Heap = 0LL;
  v19 = 0;
  v22 = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v26);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v5 = v26;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v20, v26, v3, v4);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String2 = (wchar_t *)&v41;
  LODWORD(v27) = 11272192;
  if ( !RtlLCIDToCultureName(v20, (__int64)&v27) || !v5 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_41;
  }
  v23 = 0LL;
  v24 = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v29);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_41:
    if ( v22 )
      NtClose(v22);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    v24 = v6;
    LOWORD(v23) = 2 * v29;
    WORD1(v23) = 2 * v29 + 2;
    v22 = 0LL;
    v33 = &v23;
    v31 = 48;
    v32 = 0LL;
    v34 = 64;
    v35 = 0LL;
    SystemDefaultUILanguage = NtOpenKey();
    if ( SystemDefaultUILanguage >= 0 )
    {
      Handle = 0LL;
      v7 = 0;
      v8 = 0;
      v9 = 0LL;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 512LL);
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
            v10 = NtEnumerateKey();
            if ( v10 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v10 != -2147483622 )
                SystemDefaultUILanguage = v10;
              if ( v9 )
              {
                if ( v8 )
                {
                  v13 = (HANDLE *)&v9[8 * v8];
                  do
                  {
                    --v13;
                    --v8;
                    v14 = *v13;
                    Handle = v14;
                    if ( v14 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        v19 = 1;
                        NtDeleteKey();
                        v14 = Handle;
                      }
                      NtClose(v14);
                    }
                  }
                  while ( v8 );
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
              }
              if ( SystemDefaultUILanguage >= 0 && v19 )
              {
                ZwGetMUIRegistryInfo();
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
              }
              goto LABEL_41;
            }
            v11 = *(unsigned int *)(Heap + 12);
            ++v7;
            if ( v11 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v11 >> 1) + 16) = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v26, (const WCHAR *)(Heap + 16), 0, &v25) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          v23 = 0LL;
          v24 = 0LL;
          if ( Heap != -16LL )
            break;
LABEL_17:
          v37 = v22;
          Handle = 0LL;
          v38 = &v23;
          v36 = 48;
          v39 = 64;
          v40 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            if ( v9 )
            {
              if ( v8 >= v0 )
              {
                v16 = (char *)MuiRegAllocArray_0(v12, v0 + 10);
                v17 = v16;
                if ( !v16 )
                {
LABEL_20:
                  v10 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v16, v9, v0);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
                v0 += 10;
                v9 = v17;
              }
            }
            else
            {
              v0 = 10;
              v9 = (char *)MuiRegAllocArray_0(v12, 10LL);
              if ( !v9 )
                goto LABEL_20;
            }
            v18 = v8++;
            *(_QWORD *)&v9[8 * v18] = Handle;
            Handle = 0LL;
          }
        }
        if ( (int)RtlStringLengthWorkerW((_WORD *)(Heap + 16), 0x7FFFLL, &v30) >= 0 )
        {
          v24 = Heap + 16;
          LOWORD(v23) = 2 * v30;
          WORD1(v23) = 2 * v30 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
