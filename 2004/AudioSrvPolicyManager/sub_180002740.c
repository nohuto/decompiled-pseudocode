/*
 * XREFs of sub_180002740 @ 0x180002740
 * Callers:
 *     sub_180002880 @ 0x180002880 (sub_180002880.c)
 * Callees:
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

char __fastcall sub_180002740(LPCWSTR lpModuleName, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  CHAR *i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  _BYTE *v15; // rax
  HMODULE phModule; // [rsp+20h] [rbp-148h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-138h] BYREF

  v6 = 0LL;
  phModule = 0LL;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
    {
      if ( a2 )
        *a2 = 0;
      return 0;
    }
    v6 = phModule;
  }
  if ( a2 )
    *a2 = lpModuleName != 0LL ? (_DWORD)lpModuleName - (_DWORD)v6 : 0;
  if ( a3 )
  {
    if ( !GetModuleFileNameA(v6, Filename, 0x104u) )
      return 0;
    v10 = -1LL;
    do
      ++v10;
    while ( Filename[v10] );
    for ( i = &Filename[v10]; i > Filename && *(i - 1) != 92; --i )
      ;
    if ( (unsigned __int64)(a4 - 1) > 0x7FFFFFFE )
    {
      if ( a4 )
        *a3 = 0;
    }
    else
    {
      v12 = 2147483646 - a4;
      v13 = i - a3;
      do
      {
        if ( !(v12 + a4) )
          break;
        v14 = a3[v13];
        if ( !v14 )
          break;
        *a3++ = v14;
        --a4;
      }
      while ( a4 );
      v15 = a3 - 1;
      if ( a4 )
        v15 = a3;
      *v15 = 0;
    }
  }
  return 1;
}
