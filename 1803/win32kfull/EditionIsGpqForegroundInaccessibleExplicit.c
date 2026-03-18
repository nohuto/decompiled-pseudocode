/*
 * XREFs of EditionIsGpqForegroundInaccessibleExplicit @ 0x1C00FD1B0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 */

__int64 __fastcall EditionIsGpqForegroundInaccessibleExplicit(int a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  if ( !a1 )
    return 0LL;
  if ( !gpqForeground )
    return 0LL;
  if ( a4 )
    return 0LL;
  v4 = *(_QWORD *)(gpqForeground + 428LL);
  if ( !gbEnforceUIPI )
    return 0LL;
  if ( (unsigned int)a3 > (unsigned int)v4 )
    return 0LL;
  if ( (_DWORD)a3 == (_DWORD)v4 )
  {
    v4 >>= 32;
    v5 = HIDWORD(a3);
    if ( (_DWORD)v5 == (_DWORD)v4 || (_DWORD)v4 == -1 || (_DWORD)v5 == -1 )
      return 0LL;
  }
  MSGLUA_GPQFOREGROUND(v4);
  return 1LL;
}
