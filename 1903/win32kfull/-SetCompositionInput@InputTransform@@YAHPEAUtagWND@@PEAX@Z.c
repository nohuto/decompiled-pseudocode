/*
 * XREFs of ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0005A5C
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0005870 (EditionUpdateInputTransformFromHitTest.c)
 *     SetManipulationInputTargetTransform @ 0x1C01F6950 (SetManipulationInputTargetTransform.c)
 * Callees:
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C0005C04 (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall InputTransform::SetCompositionInput(InputTransform *this, struct tagWND *a2, void *a3)
{
  struct tagINPUTTRANSFORMLIST *inited; // rax
  struct CompositionInputObject **v5; // rbx
  CompositionObject *v6; // rcx
  struct CompositionInputObject **v7; // r9
  unsigned int v8; // ebx

  inited = InitInputTransformList(this);
  if ( !inited )
    return 0;
  v5 = (struct CompositionInputObject **)((char *)inited + 96);
  v6 = (CompositionObject *)*((_QWORD *)inited + 12);
  if ( v6 )
  {
    CompositionObject::Release(v6);
    *v5 = 0LL;
  }
  v7 = v5;
  v8 = 1;
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, v7) < 0 )
    return 0;
  return v8;
}
