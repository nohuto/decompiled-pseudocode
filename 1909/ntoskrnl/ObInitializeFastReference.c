/*
 * XREFs of ObInitializeFastReference @ 0x14068556C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1406853A0 (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x14074AEAC (SeAssignPrimaryToken.c)
 *     PspLocateSystemDll @ 0x14075FCC0 (PspLocateSystemDll.c)
 *     SepInitializationPhase0 @ 0x140A014A0 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14010A6B0 (ObReferenceObjectExWithTag.c)
 */

ULONG_PTR __fastcall ObInitializeFastReference(ULONG_PTR *a1, ULONG_PTR a2)
{
  ULONG_PTR result; // rax

  result = 0LL;
  if ( a2 )
  {
    ObReferenceObjectExWithTag(a2, 15);
    result = a2 + 15;
  }
  *a1 = result;
  return result;
}
