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
  __int64 Heap; // r15
  int SystemDefaultUILanguage; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 v6; // r11
  int v7; // r12d
  unsigned int v8; // edi
  char *v9; // r14
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // rsi
  char *v15; // rax
  char *v16; // rbx
  __int64 v17; // rcx
  char v18; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h]
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  __int64 v23; // [rsp+58h] [rbp-B0h]
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  wchar_t *String2; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h] BYREF
  int v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int64 *v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+B0h] [rbp-58h]
  __int128 v34; // [rsp+B8h] [rbp-50h]
  int v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 *v37; // [rsp+D8h] [rbp-30h]
  int v38; // [rsp+E0h] [rbp-28h]
  __int128 v39; // [rsp+E8h] [rbp-20h]
  char v40; // [rsp+F8h] [rbp-10h] BYREF

  v0 = 0;
  Heap = 0LL;
  v18 = 0;
  v23 = 0LL;
  ZwIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v25);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  v5 = v25;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v19, v25, v3, v4);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_41;
  String2 = (wchar_t *)&v40;
  LODWORD(v26) = 11272192;
  if ( !RtlLCIDToCultureName(v19, (__int64)&v26) || !v5 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_41;
  }
  v21 = 0LL;
  v22 = 0LL;
  SystemDefaultUILanguage = sub_180003214(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v28);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_41:
    if ( v23 )
      ZwClose();
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    v22 = v6;
    LOWORD(v21) = 2 * v28;
    WORD1(v21) = 2 * v28 + 2;
    v30 = 48;
    v32 = &v21;
    v31 = 0LL;
    v33 = 64;
    v34 = 0LL;
    SystemDefaultUILanguage = ZwOpenKey();
    if ( SystemDefaultUILanguage >= 0 )
    {
      v20 = 0LL;
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
            v10 = ZwEnumerateKey();
            if ( v10 < 0 )
            {
LABEL_21:
              if ( v20 )
                ZwClose();
              SystemDefaultUILanguage = 0;
              if ( v10 != -2147483622 )
                SystemDefaultUILanguage = v10;
              if ( v9 )
              {
                if ( v8 )
                {
                  v13 = &v9[8 * v8];
                  do
                  {
                    v13 -= 8;
                    --v8;
                    v20 = *(_QWORD *)v13;
                    if ( v20 )
                    {
                      if ( SystemDefaultUILanguage >= 0 )
                      {
                        v18 = 1;
                        ZwDeleteKey();
                      }
                      ZwClose();
                    }
                  }
                  while ( v8 );
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
              }
              if ( SystemDefaultUILanguage >= 0 && v18 )
              {
                ZwGetMUIRegistryInfo();
                RtlCleanUpTEBLangLists();
                sub_180012D4C();
                RtlEnterCriticalSection((__int64)&unk_180163D00);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(qword_180166098, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( qword_180166098 )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_180166098);
                  qword_180166098 = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&unk_180163D00);
              }
              goto LABEL_41;
            }
            v11 = *(unsigned int *)(Heap + 12);
            ++v7;
            if ( v11 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v11 >> 1) + 16) = 0;
              if ( (int)sub_18001583C(v25, (const WCHAR *)(Heap + 16), 0, &v24) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          v21 = 0LL;
          v22 = 0LL;
          if ( Heap != -16 )
            break;
LABEL_17:
          v36 = v23;
          v20 = 0LL;
          v37 = &v21;
          v35 = 48;
          v38 = 64;
          v39 = 0LL;
          if ( (int)ZwOpenKey() >= 0 )
          {
            if ( v9 )
            {
              if ( v8 >= v0 )
              {
                v15 = (char *)sub_1800EE8B4(v12, v0 + 10);
                v16 = v15;
                if ( !v15 )
                {
LABEL_20:
                  v10 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v15, v9, v0);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9);
                v0 += 10;
                v9 = v16;
              }
            }
            else
            {
              v0 = 10;
              v9 = (char *)sub_1800EE8B4(v12, 10LL);
              if ( !v9 )
                goto LABEL_20;
            }
            v17 = v8++;
            *(_QWORD *)&v9[8 * v17] = v20;
            v20 = 0LL;
          }
        }
        if ( (int)sub_180003214((_WORD *)(Heap + 16), 0x7FFFLL, &v29) >= 0 )
        {
          v22 = Heap + 16;
          LOWORD(v21) = 2 * v29;
          WORD1(v21) = 2 * v29 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
