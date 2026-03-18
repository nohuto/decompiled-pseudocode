/*
 * XREFs of PsGetNextProcessEx @ 0x1406E5190
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
 */

void *__fastcall PsGetNextProcessEx(_QWORD *Object)
{
  void *NextProcess; // rax
  void *v3; // rbx

  if ( Object )
  {
    ObfReferenceObjectWithTag(Object, 0x6E457350u);
    ObfDereferenceObject(Object);
  }
  NextProcess = (void *)PsGetNextProcess(Object);
  v3 = NextProcess;
  if ( NextProcess )
  {
    ObfReferenceObject(NextProcess);
    ObfDereferenceObjectWithTag(v3, 0x6E457350u);
  }
  return v3;
}
