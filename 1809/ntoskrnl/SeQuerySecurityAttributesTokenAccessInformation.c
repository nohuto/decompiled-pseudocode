/*
 * XREFs of SeQuerySecurityAttributesTokenAccessInformation @ 0x140169B20
 * Callers:
 *     <none>
 * Callees:
 *     SepTokenFromAccessInformation @ 0x140015830 (SepTokenFromAccessInformation.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6AA8 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall SeQuerySecurityAttributesTokenAccessInformation(
        unsigned int **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v10; // rdx
  _BYTE v12[1184]; // [rsp+40h] [rbp-4E8h] BYREF

  memset(v12, 0, 0x498uLL);
  if ( a5 )
  {
    if ( a4 )
    {
LABEL_3:
      SepTokenFromAccessInformation(a1, (__int64)v12);
      return SepInternalQuerySecurityAttributesTokenEx((__int64)v12, v10, a2, a3, 0, a4, a5, a6);
    }
  }
  else if ( !a4 )
  {
    goto LABEL_3;
  }
  return 3221225485LL;
}
