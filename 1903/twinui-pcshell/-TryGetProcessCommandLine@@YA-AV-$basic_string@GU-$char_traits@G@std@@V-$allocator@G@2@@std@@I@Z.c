/*
 * XREFs of ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1800B0010
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x1800AFF94 (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001D85C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x18020C7B0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=16
__m128i *__fastcall TryGetProcessCommandLine(__m128i *a1, DWORD a2)
{
  char *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  ULONG ProcessInformationLength; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch]
  _QWORD *v9; // [rsp+38h] [rbp-48h]
  void *v10[3]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v11; // [rsp+58h] [rbp-28h] BYREF
  __m128i si128; // [rsp+68h] [rbp-18h]

  v10[1] = (void *)-2LL;
  v10[2] = a1;
  v8 = 0;
  v3 = (char *)OpenProcess(0x1000u, 0, a2);
  v10[0] = v3;
  if ( (unsigned __int64)(v3 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (ProcessInformationLength = 0,
        NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, 0LL, 0, &ProcessInformationLength) != -1073741820) )
  {
LABEL_9:
    a1[1].m128i_i64[0] = 0LL;
    a1[1].m128i_i64[1] = 0LL;
    a1[1].m128i_i64[0] = 0LL;
    a1[1].m128i_i64[1] = 7LL;
    a1->m128i_i16[0] = 0;
    v8 = 1;
    goto LABEL_10;
  }
  v4 = LocalAlloc(0x40u, ProcessInformationLength);
  v5 = v4;
  v9 = v4;
  if ( !v4 )
  {
    v5 = 0LL;
LABEL_7:
    v9 = 0LL;
    if ( v5 )
      LocalFree(v5);
    goto LABEL_9;
  }
  if ( NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, v4, ProcessInformationLength, 0LL) )
    goto LABEL_7;
  std::wstring::wstring(&v11, v5[1], (unsigned __int64)*(unsigned __int16 *)v5 >> 1);
  a1[1].m128i_i64[0] = 0LL;
  a1[1].m128i_i64[1] = 0LL;
  *a1 = v11;
  a1[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v11.m128i_i16[0] = 0;
  v8 = 1;
  std::wstring::_Tidy_deallocate(&v11);
  v9 = 0LL;
  LocalFree(v5);
LABEL_10:
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(v10);
  return a1;
}
