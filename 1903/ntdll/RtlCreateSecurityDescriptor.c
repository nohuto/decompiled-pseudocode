/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18000FFD0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000E960 (RtlCheckTokenCapability.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     RtlCheckTokenMembershipEx @ 0x180013340 (RtlCheckTokenMembershipEx.c)
 *     RtlCreateAndSetSD @ 0x1800686E0 (RtlCreateAndSetSD.c)
 *     sub_1800862C4 @ 0x1800862C4 (sub_1800862C4.c)
 *     sub_1800868A8 @ 0x1800868A8 (sub_1800868A8.c)
 * Callees:
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall RtlCreateSecurityDescriptor(_BYTE *a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  memset(a1, 0, 0x28uLL);
  result = 0LL;
  *a1 = 1;
  return result;
}
