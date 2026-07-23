/*
 * XREFs of PspGetSystemDllSecureHandle @ 0x1409F9298
 * Callers:
 *     PspInitPhase3 @ 0x1409E0584 (PspInitPhase3.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     PspReferenceSystemDll @ 0x140678CE8 (PspReferenceSystemDll.c)
 *     MmGetSectionStrongImageReference @ 0x14085D5A8 (MmGetSectionStrongImageReference.c)
 */

__int64 __fastcall PspGetSystemDllSecureHandle(signed __int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  unsigned __int64 v5; // rdi
  unsigned int SectionStrongImageReference; // ebx

  v4 = (void *)PspReferenceSystemDll(a1);
  v5 = (unsigned __int64)v4;
  if ( !v4 )
    return 3221225480LL;
  SectionStrongImageReference = MmGetSectionStrongImageReference(0LL, 0, v4, a2);
  ObFastDereferenceObject(a1, v5);
  return SectionStrongImageReference;
}
