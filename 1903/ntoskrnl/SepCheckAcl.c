/*
 * XREFs of SepCheckAcl @ 0x14061CA18
 * Callers:
 *     SeCaptureAcl @ 0x14061C90C (SeCaptureAcl.c)
 * Callees:
 *     RtlValidAcl @ 0x1405DD490 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
