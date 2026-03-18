/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x1800AB1B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1800AB28C (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800ABB70 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // r14
  int v4; // edi
  struct CCompositionSurfaceInfo *v5; // rbx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0;
  v5 = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Start);
  if ( !v3 )
    goto LABEL_6;
  v8 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
         (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 16LL),
         v3,
         &v12);
  v11 = v8;
  v4 = v8;
  if ( v8 >= 0 )
  {
    v5 = v12;
LABEL_6:
    CCompositionSurfaceBitmap::UpdateSurfaceInfo(this, v5);
    *((_BYTE *)this + 158) = *((_BYTE *)a3 + 16) != 0;
    *((_BYTE *)this + 159) = *((_BYTE *)a3 + 17) != 0;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x316u, 0LL);
  v5 = v12;
LABEL_7:
  if ( v5 )
    (*(void (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)v5 + 16LL))(v5);
  TranslateDXGIorD3DErrorInContext(v4, 11, &v11);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop);
  return v11;
}
