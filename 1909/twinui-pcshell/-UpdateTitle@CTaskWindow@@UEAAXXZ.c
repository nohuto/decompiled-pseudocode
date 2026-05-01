/*
 * XREFs of ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x18003A3B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0dz @ 0x18003A560 (McTemplateU0dz.c)
 *     StringCopyWorkerW @ 0x18003AA60 (StringCopyWorkerW.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003AAB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18003AB30 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::UpdateTitle(CTaskWindow *this)
{
  unsigned __int128 v2; // rax
  __int64 v3; // rcx
  HWND v4; // rbp
  void *v5; // rcx
  unsigned __int64 v6; // rdi
  wchar_t *v7; // rax
  size_t *v8; // r8
  const unsigned __int16 *v9; // r14
  unsigned __int64 v10; // rsi
  size_t v11; // [rsp+20h] [rbp-458h]
  unsigned __int16 **v12; // [rsp+20h] [rbp-458h]
  unsigned __int64 *v13; // [rsp+28h] [rbp-450h]
  unsigned int v14; // [rsp+30h] [rbp-448h]
  LPARAM lParam; // [rsp+40h] [rbp-438h] BYREF
  wchar_t pszSrc[260]; // [rsp+48h] [rbp-430h] BYREF
  wchar_t pszDest[256]; // [rsp+250h] [rbp-228h] BYREF

  v4 = (HWND)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
  if ( v4 )
  {
    v5 = (void *)*((_QWORD *)this + 8);
    if ( v5 )
      CoTaskMemFree(v5);
    v6 = -1LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = -1LL;
    *((_QWORD *)this + 10) = -1LL;
    pszDest[0] = 0;
    memset_0(&lParam, 0, 0x208uLL);
    if ( (int)StringCchPrintfW(pszSrc, 0xFFuLL, L"ApplicationView_CustomWindowTitle#%u#", (unsigned int)v4) >= 0 )
    {
      v3 = 255LL;
      v7 = pszSrc;
      do
      {
        if ( !*v7 )
          break;
        ++v7;
        --v3;
      }
      while ( v3 );
      lParam = v3 ? 255 - v3 : 0LL;
      if ( v3 )
      {
        if ( !EnumPropsExW(v4, ApplicationViewTitleEnum, (LPARAM)&lParam)
          && StringCopyWorkerW(pszDest, 0xFFuLL, v8, pszSrc, v11) >= 0 )
        {
          v9 = &pszDest[lParam];
          do
            ++v6;
          while ( v9[v6] );
          v10 = v6 + 1;
          *((_QWORD *)this + 8) = 0LL;
          if ( v6 + 1 >= v6 )
          {
            v2 = v10 * (unsigned __int128)2uLL;
            if ( is_mul_ok(v10, 2uLL) )
            {
              *(_QWORD *)&v2 = CoTaskMemAlloc(2 * v10);
              *((_QWORD *)this + 8) = v2;
              if ( (_QWORD)v2 )
                StringCchCopyNExW((unsigned __int16 *)v2, v6 + 1, v9, v6, v12, v13, v14);
            }
          }
        }
      }
    }
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dz(v3, *((_QWORD *)&v2 + 1), (unsigned int)v4, *((_QWORD *)this + 8));
}
