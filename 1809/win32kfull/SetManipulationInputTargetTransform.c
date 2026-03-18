/*
 * XREFs of SetManipulationInputTargetTransform @ 0x1C01E0750
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C00022EC (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00D64E4 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall SetManipulationInputTargetTransform(__int64 a1, struct tagWND *a2, void *a3, __int64 a4, int a5)
{
  InputTransform *v7; // rbx

  if ( a5 )
    return 0LL;
  v7 = *(InputTransform **)(a1 + 72);
  if ( a2 )
  {
    if ( !*((_QWORD *)v7 + 32) )
      InputTransform::SetCompositionInput(*(InputTransform **)(a1 + 72), a2, a3);
  }
  return InputTransform::OnInput(v7, (struct tagWND *)a3);
}
