/*
 * XREFs of ?CreateMUID@ShellFeedsAvailabilityHelpers@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C6BB0
 * Callers:
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003AAB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall ShellFeedsAvailabilityHelpers::CreateMUID(char *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 v5; // r8
  int Data2; // [rsp+28h] [rbp-79h]
  int Data3; // [rsp+30h] [rbp-71h]
  int v8; // [rsp+38h] [rbp-69h]
  int v9; // [rsp+40h] [rbp-61h]
  int v10; // [rsp+48h] [rbp-59h]
  int v11; // [rsp+50h] [rbp-51h]
  int v12; // [rsp+58h] [rbp-49h]
  int v13; // [rsp+60h] [rbp-41h]
  int v14; // [rsp+68h] [rbp-39h]
  int v15; // [rsp+70h] [rbp-31h]
  GUID pguid; // [rsp+78h] [rbp-29h] BYREF
  wchar_t Buffer[40]; // [rsp+88h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v2 = CoCreateGuid(&pguid);
  if ( v2 < 0 )
  {
    v3 = 211LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedsavailabilityhelpers.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v15 = pguid.Data4[7];
  v14 = pguid.Data4[6];
  v13 = pguid.Data4[5];
  v12 = pguid.Data4[4];
  v11 = pguid.Data4[3];
  v10 = pguid.Data4[2];
  v9 = pguid.Data4[1];
  v8 = pguid.Data4[0];
  Data3 = pguid.Data3;
  Data2 = pguid.Data2;
  v2 = StringCchPrintfW(
         Buffer,
         38LL,
         L"%08x%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x",
         pguid.Data1,
         Data2,
         Data3,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15);
  if ( v2 < 0 )
  {
    v3 = 227LL;
    goto LABEL_3;
  }
  v5 = -1LL;
  do
    ++v5;
  while ( Buffer[v5] );
  std::wstring::assign(a1, Buffer, v5);
  return 0LL;
}
