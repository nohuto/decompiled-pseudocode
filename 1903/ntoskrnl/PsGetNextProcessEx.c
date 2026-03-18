/*
 * XREFs of PsGetNextProcessEx @ 0x1406E41B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
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
