/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x1801DCA98
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180207CE0 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180207DF0 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x1801D7AD0 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 */

__int64 __fastcall CInteractionTracker::UpdateCenterPointForState(
        __int64 a1,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // r15
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  signed int v13; // eax
  __int64 v14; // rcx
  const void *retaddr; // [rsp+48h] [rbp+0h]

  if ( a4 == 1 )
  {
    v8 = 148LL;
  }
  else
  {
    if ( a4 != 2 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v8 = 156LL;
  }
  v9 = a1 + v8;
  v10 = CInteractionTracker::CalculateCenterPointForAxis((float *)a1, a2, a3, a4, 0, (void *)(a1 + v8));
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x166Fu, 0LL);
  }
  else
  {
    v13 = CInteractionTracker::CalculateCenterPointForAxis((float *)a1, a2, a3, a4, 1u, (void *)(v9 + 4));
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1671u, 0LL);
    }
    else if ( a4 == 1 )
    {
      *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 148);
    }
  }
  return v12;
}
