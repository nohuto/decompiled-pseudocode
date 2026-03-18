/*
 * XREFs of PspAttachSession @ 0x1406EC284
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 */

__int64 __fastcall PspAttachSession(unsigned int a1, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR SessionById; // rax
  void *v5; // rbx
  int v6; // edi

  SessionById = MmGetSessionById(a1);
  v5 = (void *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v6 = MmAttachSession(SessionById);
  if ( v6 < 0 )
    ObfDereferenceObject(v5);
  return (unsigned int)v6;
}
