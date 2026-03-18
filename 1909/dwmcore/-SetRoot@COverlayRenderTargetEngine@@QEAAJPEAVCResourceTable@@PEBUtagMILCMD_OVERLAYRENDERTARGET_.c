/*
 * XREFs of ?SetRoot@COverlayRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x1801A3B50
 * Callers:
 *     ?ProcessSetRoot@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_SETROOT@@@Z @ 0x18019FF5C (-ProcessSetRoot@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z @ 0x180024408 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::SetRoot(
        COverlayRenderTargetEngine *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_OVERLAYRENDERTARGET_SETROOT *a3)
{
  struct CComposition **Resource; // rax
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int VisualTree; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct CVisualTree *v13; // [rsp+50h] [rbp+18h] BYREF

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( !v5 || (Resource = (struct CComposition **)CResourceTable::GetResource((__int64)a2, v5, 0xBDu)) != 0LL )
  {
    VisualTree = CVisual::GetVisualTree(Resource, &v13, (__int64)a3, 1);
    v8 = VisualTree;
    if ( VisualTree < 0 )
    {
      v12 = 80;
    }
    else
    {
      VisualTree = (*(__int64 (__fastcall **)(COverlayRenderTargetEngine *, struct CVisualTree *))(*(_QWORD *)this
                                                                                                 + 336LL))(
                     this,
                     v13);
      v8 = VisualTree;
      if ( VisualTree >= 0 )
      {
        *((_BYTE *)this + 196) = 1;
        return v8;
      }
      v12 = 81;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, VisualTree, v12, 0LL);
    return v8;
  }
  v8 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x88980403, 0x48u, 0LL);
  return v8;
}
