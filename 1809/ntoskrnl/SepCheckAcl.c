/*
 * XREFs of SepCheckAcl @ 0x1405BE9A0
 * Callers:
 *     SeCaptureAcl @ 0x1405BE894 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
