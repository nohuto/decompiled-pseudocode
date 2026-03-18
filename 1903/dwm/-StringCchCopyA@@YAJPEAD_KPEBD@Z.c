/*
 * XREFs of ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1400058C0
 * Callers:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1400056B0 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  char v6; // al
  char *v7; // rax
  __int64 result; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    result = (unsigned int)v3;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = a1[v5];
        if ( !v6 )
          break;
        *a1++ = v6;
        --a2;
      }
      while ( a2 );
    }
    v7 = a1 - 1;
    if ( a2 )
      v7 = a1;
    *v7 = 0;
    result = 2147942522LL;
    if ( a2 )
      return 0LL;
  }
  return result;
}
