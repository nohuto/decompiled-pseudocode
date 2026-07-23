/*
 * XREFs of ObInitializeFastReference @ 0x14064FBA4
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14064F9D4 (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x140749D14 (SeAssignPrimaryToken.c)
 *     PspLocateSystemDll @ 0x14075732C (PspLocateSystemDll.c)
 *     SepInitializationPhase0 @ 0x1409AE8C0 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
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
