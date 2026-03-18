/*
 * XREFs of ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1400056B0
 * Callers:
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x140005660 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1400058C0 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 */

char __fastcall wil::details::GetModuleInformation(LPCWSTR lpModuleName, _DWORD *a2, char *a3, char *a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  const char *i; // r8
  HMODULE phModule; // [rsp+20h] [rbp-158h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-148h] BYREF

  v6 = 0LL;
  phModule = 0LL;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
      return 0;
    v6 = phModule;
  }
  if ( a2 )
  {
    if ( lpModuleName )
      LODWORD(lpModuleName) = (_DWORD)lpModuleName - (_DWORD)v6;
    *a2 = (_DWORD)lpModuleName;
  }
  if ( a3 )
  {
    if ( !GetModuleFileNameA(v6, Filename, 0x104u) )
      return 0;
    v10 = -1LL;
    do
      ++v10;
    while ( Filename[v10] );
    for ( i = &Filename[v10]; i > Filename; --i )
    {
      if ( *(i - 1) == 92 )
        break;
    }
    StringCchCopyA(a3, (unsigned __int64)a4, i);
  }
  return 1;
}
