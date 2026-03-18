/*
 * XREFs of ObInitializeFastReference @ 0x140691FFC
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140691E30 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x14075B53C (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x140780318 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x140A00F84 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14010AAE0 (ObReferenceObjectExWithTag.c)
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
