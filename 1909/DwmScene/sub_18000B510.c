/*
 * XREFs of sub_18000B510 @ 0x18000B510
 * Callers:
 *     sub_18000B0D0 @ 0x18000B0D0 (sub_18000B0D0.c)
 * Callees:
 *     sub_18000CAF8 @ 0x18000CAF8 (sub_18000CAF8.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

char __fastcall sub_18000B510(LPCWSTR lpModuleName, _DWORD *a2, __int64 a3, __int64 a4)
{
  HMODULE v6; // rcx
  __int64 v10; // rax
  CHAR *i; // r8
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
    sub_18000CAF8(a3, a4);
  }
  return 1;
}
