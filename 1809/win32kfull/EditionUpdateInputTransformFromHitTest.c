/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1C0002170
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0002268 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C00022EC (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002358 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0073E64 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

__int64 __fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        struct tagWND *a2,
        struct tagWND *a3,
        int a4,
        struct tagWND *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  const struct tagWND *v6; // rdi
  __int64 v8; // rbx
  unsigned int v10; // ebp
  int v11; // eax
  struct tagINPUT_TRANSFORM *v12; // r13
  CInputQueueProp *v13; // r15
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *v15; // r14
  unsigned __int64 *v16; // r9
  void *v18; // r8
  CInputQueueProp *v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v6 = *(const struct tagWND **)(a1 + 72);
  v8 = 0LL;
  v10 = 0;
  v11 = CWindowProp::GetProp<CInputQueueProp>(v6, &v19);
  v12 = a6;
  if ( v11 )
  {
    v13 = v19;
    if ( *((_DWORD *)v19 + 6) )
    {
      if ( (unsigned int)CoreWindowProp::IsComponent(v6) )
      {
        a2 = v6;
      }
      else
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(v6);
        v15 = TopLevelWindow;
        if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
          a2 = v15;
      }
      CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v13, a2);
      if ( !v20 )
      {
        v10 = 1;
        if ( (unsigned int)InputTransform::StoreTransform(v6, a5, v12, v16) )
          InputTransform::SetCompositionInput(v6, a3, v18);
        else
          v10 = 0;
      }
    }
  }
  if ( v6 )
    v8 = *(_QWORD *)v6;
  return EtwTraceDITResolveDCompInputHandleToHwnd(a3, v8, *(_QWORD *)v12, v10);
}
