/*
 * XREFs of ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B50E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18007A960 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18007AF80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x1800B514C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::RestoreState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  struct CDrawingContext *v4; // rdx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx

  CWatermarkStack<float,64,2,10>::Pop((char *)a2 + 3264);
  v5 = CExternalLayer::RestoreState(this, v4);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x74u, 0LL);
  }
  else
  {
    v8 = CDrawingContext::FlushD2D(a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x75u, 0LL);
    }
    else if ( g_LockAndReadLayer )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 216LL))(
        *((_QWORD *)this + 1),
        *((_QWORD *)a2 + 48),
        ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
    }
  }
  return v7;
}
