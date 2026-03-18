/*
 * XREFs of AuthzBasepMemberOf @ 0x140346BA0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepSidInToken @ 0x140086EB8 (SepSidInToken.c)
 *     AuthzBasepGetNextValue @ 0x1400D3CC0 (AuthzBasepGetNextValue.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall AuthzBasepMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v10; // di
  int NextValue; // eax
  int v12; // ebx
  size_t v13; // r8
  __int64 v14; // r9
  char v15; // al
  void *v17[6]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v18[80]; // [rsp+70h] [rbp-88h] BYREF

  memset(v17, 0, 0x28uLL);
  *a6 = 0;
  v10 = a5 != 0;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, (__int64)v17);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return (unsigned int)v12;
    v13 = LODWORD(v17[3]);
    if ( LODWORD(v17[3]) >= 0x44 )
      v13 = 68LL;
    memmove(v18, v17[4], v13);
    LOBYTE(v14) = a3;
    v15 = SepSidInToken(a2, 0LL, (__int64)v18, v14, a4, 0, 0);
    if ( a5 )
    {
      v10 &= v15;
      if ( !v10 )
        goto LABEL_12;
    }
    else
    {
      v10 |= v15;
      if ( v10 )
        goto LABEL_12;
    }
  }
  v12 = 0;
LABEL_12:
  if ( v12 >= 0 )
    *a6 = v10;
  return (unsigned int)v12;
}
