/*
 * XREFs of ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x1803CDD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@@@QEAA@XZ @ 0x180108F84 (--1-$CCoSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHel.c)
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1803CD644 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 */

__int64 __fastcall AppResizeData::RecomputeDropTargets(AppResizeData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>::~CCoSimpleArray<RecoveredWindowForViewWrapper,4294967294,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>>((__int64)this + 32);
  v2 = AppResizeData::ComputeDropTargets((AppResizeData *)((char *)this - 24));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
