/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x14018F208
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiProcessTupleStartFromHandle(void *a1, void *a2)
{
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Object = a1;
  v3 = ObReferenceObjectByHandle(a2, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
  if ( v3 < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    v3 = 0;
    qword_140463868 = (ULONG_PTR)Object;
    CmpRegistryProcess = (__int64)a2;
  }
  return (unsigned int)v3;
}
