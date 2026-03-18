/*
 * XREFs of ?SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x18015F1DC
 * Callers:
 *     ?ProcessSetRoot@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x18014BBD8 (-ProcessSetRoot@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_SE.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x18008F748 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::SetRoot(
        COverlayRenderTargetEngine *this,
        struct CResourceTable *a2,
        const struct MILCMD_OVERLAYRENDERTARGET_SETROOT *a3)
{
  struct CComposition **Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int VisualTree; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CVisualTree *v13; // [rsp+50h] [rbp+18h] BYREF

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CComposition **)CResourceTable::GetResource((__int64)a2, v5, 0x9Du)) != 0LL )
  {
    VisualTree = CVisual::GetVisualTree(Resource, &v13, (__int64)a3, 1);
    v8 = VisualTree;
    if ( VisualTree < 0 )
    {
      v12 = 76;
    }
    else
    {
      VisualTree = (*(__int64 (__fastcall **)(COverlayRenderTargetEngine *, struct CVisualTree *))(*(_QWORD *)this
                                                                                                 + 200LL))(
                     this,
                     v13);
      v8 = VisualTree;
      if ( VisualTree >= 0 )
      {
        *((_BYTE *)this + 196) = 1;
        return v8;
      }
      v12 = 77;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, VisualTree, v12);
    return v8;
  }
  v8 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x44u);
  return v8;
}
