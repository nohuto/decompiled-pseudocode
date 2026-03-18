/*
 * XREFs of SetManipulationInputTargetTransform @ 0x1C01BDBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0004A78 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F4B38 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetManipulationInputTargetTransform(
        __int64 a1,
        struct tagWND *a2,
        void *a3,
        struct tagWND *a4,
        __int64 a5,
        int a6)
{
  __int64 v9; // rbx

  if ( a6 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 72);
  if ( a2 )
  {
    if ( !*(_QWORD *)(v9 + 264) )
      InputTransform::SetCompositionInput(*(InputTransform **)(a1 + 72), a2, a3);
  }
  return InputTransform::OnInput((struct _EX_PUSH_LOCK **)v9, (struct tagWND *)a3, a4, a4);
}
