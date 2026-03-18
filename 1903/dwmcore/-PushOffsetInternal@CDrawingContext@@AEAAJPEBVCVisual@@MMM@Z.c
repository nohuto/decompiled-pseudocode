/*
 * XREFs of ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180170A38
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004EEE0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003BB8C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180064380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18006E36C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801703B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x18021D838 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 */

__int64 __fastcall CDrawingContext::PushOffsetInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        float a4,
        float a5)
{
  int *v5; // rbp
  char v7; // si
  char v8; // r14
  signed int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  float *TopByReference; // rax
  signed int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  const struct CVisual *v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = a2;
  *((_QWORD *)&v19 + 1) = 0LL;
  v5 = (int *)((char *)this + 448);
  LODWORD(v19) = 4;
  v7 = 0;
  v8 = 0;
  v9 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)this + 112, &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x16A0u, 0LL);
  }
  else
  {
    v7 = 1;
    v12 = CMatrixStack::PushOffset((CDrawingContext *)((char *)this + 480), a3, a4, a5);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x16A6u, 0LL);
    }
    else
    {
      v8 = 1;
      TopByReference = (float *)CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
      LOBYTE(v20) = (unsigned __int8)CMILMatrix::Is2DAffine<0>(TopByReference) == 0;
      v15 = CWatermarkStack<bool,64,2,10>::Push((unsigned int *)this + 128, &v20);
      v11 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x16ACu, 0LL);
      else
        *((_BYTE *)this + 6344) = 1;
    }
  }
  if ( v11 < 0 )
  {
    if ( v8 )
    {
      v17 = *((_DWORD *)this + 120);
      if ( v17 )
        *((_DWORD *)this + 120) = v17 - 1;
    }
    if ( v7 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v5, 0LL);
  }
  return (unsigned int)v11;
}
