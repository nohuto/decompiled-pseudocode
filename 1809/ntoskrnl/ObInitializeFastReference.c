/*
 * XREFs of ObInitializeFastReference @ 0x14064E9E4
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14064E814 (PspInitializeProcessSecurity.c)
 *     SeAssignPrimaryToken @ 0x140748B24 (SeAssignPrimaryToken.c)
 *     PspLocateSystemDll @ 0x14075613C (PspLocateSystemDll.c)
 *     SepInitializationPhase0 @ 0x1409AD8C0 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140111ED0 (ObReferenceObjectExWithTag.c)
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
