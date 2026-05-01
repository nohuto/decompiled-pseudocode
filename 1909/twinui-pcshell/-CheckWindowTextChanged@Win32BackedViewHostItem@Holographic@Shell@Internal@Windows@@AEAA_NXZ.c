/*
 * XREFs of ?CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x18022DD8C
 * Callers:
 *     ?OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x180230A50 (-OnShellHookMessage@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJ_K_J@Z.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x180231FC0 (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005CFC4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::CheckWindowTextChanged(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this)
{
  int WindowTextW; // esi
  RTL_SRWLOCK *v3; // rdi
  char *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  char *v7; // rcx
  char v8; // si
  __int64 v9; // rdx
  WCHAR *v10; // rax
  signed __int64 v11; // rcx
  WCHAR v12; // r8
  int v13; // eax
  char *v15; // [rsp+38h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  WCHAR String[256]; // [rsp+58h] [rbp-B0h] BYREF

  memset_0(String, 0, sizeof(String));
  WindowTextW = GetWindowTextW(*((HWND *)this + 48), String, 256);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v15) = 0;
  v3 = (RTL_SRWLOCK *)((char *)this + 208);
  AcquireSRWLockShared((PSRWLOCK)this + 26);
  v4 = (char *)this + 216;
  std::wstring::operator=(&v15, (char *)this + 216);
  if ( this != (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)-208LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 26);
  if ( WindowTextW <= 0 )
    goto LABEL_20;
  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( String[v6] );
  v7 = (char *)&v15;
  if ( si128.m128i_i64[1] >= 8uLL )
    v7 = v15;
  v8 = 1;
  v9 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] != v6 )
    goto LABEL_15;
  v10 = String;
  if ( si128.m128i_i64[0] )
  {
    v11 = v7 - (char *)String;
    while ( 1 )
    {
      v12 = *(WCHAR *)((char *)v10 + v11);
      if ( v12 != *v10 )
        break;
      ++v10;
      if ( !--v9 )
        goto LABEL_13;
    }
    v13 = v12 < *v10 ? -1 : 1;
  }
  else
  {
LABEL_13:
    v13 = 0;
  }
  if ( !v13 )
  {
LABEL_20:
    v8 = 0;
  }
  else
  {
LABEL_15:
    AcquireSRWLockExclusive(v3);
    do
      ++v5;
    while ( String[v5] );
    std::wstring::assign(v4, String, v5);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
  std::wstring::_Tidy_deallocate(&v15);
  return v8;
}
