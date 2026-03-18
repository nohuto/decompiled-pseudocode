/*
 * XREFs of AuthzBasepQueryInternalSecurityAttributesToken @ 0x14061B2D8
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x14061AD0C (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x14061B0B8 (SepGetTokenAccessInformationBufferSize.c)
 * Callees:
 *     AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x14061B360 (AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x14061B438 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepQueryInternalSecurityAttributesToken(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  if ( !a1 || !a4 || a3 && !a2 )
    return 3221225485LL;
  *a4 = 0;
  result = AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize(a1, &v10);
  if ( (int)result >= 0 )
  {
    v9 = v10;
    if ( a3 >= v10 )
      result = AuthzBasepCopyoutInternalSecurityAttributes(a1, a2, a3);
    else
      result = 3221225507LL;
    *a4 = v9;
  }
  return result;
}
