/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1C0005870
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C00059E0 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0005A5C (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0005ADC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0021730 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqi @ 0x1C01DC8B4 (WPP_RECORDER_SF_qqi.c)
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
  unsigned int v10; // r13d
  int v11; // eax
  struct tagINPUT_TRANSFORM *v12; // r12
  CInputQueueProp *v13; // r14
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *v15; // rbp
  unsigned __int64 *v16; // r9
  int v17; // edx
  int v18; // ecx
  void *v19; // r8
  int v20; // r9d
  int v21; // edx
  int v22; // ecx
  CInputQueueProp *v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v6 = *(const struct tagWND **)(a1 + 80);
  v8 = 0LL;
  v10 = 0;
  v11 = CWindowProp::GetProp<CInputQueueProp>(v6, &v24);
  v12 = a6;
  if ( v11 )
  {
    v13 = v24;
    if ( *((_DWORD *)v24 + 6) )
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
      if ( !v25 )
      {
        v10 = 1;
        if ( (unsigned int)InputTransform::StoreTransform(v6, a5, v12, v16) )
        {
          if ( !(unsigned int)InputTransform::SetCompositionInput(v6, a3, v19)
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qq(
              v22,
              v21,
              16,
              33,
              (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids,
              (char)v6,
              (char)a3);
          }
        }
        else
        {
          v10 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqi(v18, v17, (_DWORD)v19, v20);
        }
      }
    }
  }
  if ( v6 )
    v8 = *(_QWORD *)v6;
  return EtwTraceDITResolveDCompInputHandleToHwnd(a3, v8, *(_QWORD *)v12, v10);
}
