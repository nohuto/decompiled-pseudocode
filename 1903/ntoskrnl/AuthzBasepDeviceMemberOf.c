/*
 * XREFs of AuthzBasepDeviceMemberOf @ 0x140346FFC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140086AE4 (SepSidInTokenSidHash.c)
 *     AuthzBasepGetNextValue @ 0x1400969A0 (AuthzBasepGetNextValue.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall AuthzBasepDeviceMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v10; // di
  int NextValue; // eax
  int v12; // ebx
  size_t v13; // r8
  __int64 v14; // rdx
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
    v14 = *(_QWORD *)(a2 + 1096);
    if ( v14 )
      v15 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v14 + 32 + (a4 != 0 ? 0x110 : 0)), 0LL, v18, a3, a4, 0, 0);
    else
      v15 = 0;
    if ( a5 )
    {
      v10 &= v15;
      if ( !v10 )
        goto LABEL_15;
    }
    else
    {
      v10 |= v15;
      if ( v10 )
        goto LABEL_15;
    }
  }
  v12 = 0;
LABEL_15:
  if ( v12 >= 0 )
    *a6 = v10;
  return (unsigned int)v12;
}
