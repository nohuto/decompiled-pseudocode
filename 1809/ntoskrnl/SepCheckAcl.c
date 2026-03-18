/*
 * XREFs of SepCheckAcl @ 0x1405BD9A0
 * Callers:
 *     SeCaptureAcl @ 0x1405BD894 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x140631700 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
