/*
 * XREFs of ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C000489C
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0004870 (EditionUpdateInputTransformFromHitTest.c)
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C00049F8 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0004A78 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0004AD8 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0035280 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

void __fastcall UpdateInputTransformFromHitTest(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        int a4,
        struct tagINPUT_TRANSFORM *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
  int v11; // eax
  const struct tagINPUT_TRANSFORM *v12; // r13
  CInputQueueProp *v13; // r14
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *v15; // r15
  unsigned __int64 *v16; // r9
  void *v17; // r8
  CInputQueueProp *v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+20h]

  v19 = a4;
  v7 = 0LL;
  v8 = 0;
  v11 = CWindowProp::GetProp<CInputQueueProp>(a1, &v18);
  v12 = a6;
  if ( v11 )
  {
    v13 = v18;
    if ( *((_DWORD *)v18 + 6) )
    {
      if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      {
        a2 = a1;
      }
      else
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
        v15 = TopLevelWindow;
        if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
          a2 = v15;
      }
      CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v13, a2);
      if ( !v19 )
      {
        v8 = 1;
        if ( InputTransform::StoreTransform(a1, a5, v12, v16) )
          InputTransform::SetCompositionInput(a1, a3, v17);
        else
          v8 = 0;
      }
    }
  }
  if ( a1 )
    v7 = *(_QWORD *)a1;
  EtwTraceDITResolveDCompInputHandleToHwnd(a3, v7, *(_QWORD *)v12, v8);
}
