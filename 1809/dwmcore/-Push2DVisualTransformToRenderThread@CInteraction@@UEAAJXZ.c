/*
 * XREFs of ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x18019C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x180096374 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x18019C030 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CInteraction::Push2DVisualTransformToRenderThread(CInteraction *this)
{
  int ManipulationManager; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct CManipulationManager *v5; // rbx
  __int64 v6; // rbx
  unsigned int v8; // [rsp+20h] [rbp-69h]
  struct _D3DMATRIX v9; // [rsp+80h] [rbp-9h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+F0h] [rbp+67h] BYREF
  struct CManipulationManager *v11; // [rsp+F8h] [rbp+6Fh] BYREF
  CInteraction *v12; // [rsp+100h] [rbp+77h]
  __int64 v13; // [rsp+108h] [rbp+7Fh] BYREF

  v11 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v11);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v11);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v8 = 728;
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v10);
  v5 = v11;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v11, &v10);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v8 = 730;
    goto LABEL_10;
  }
  v6 = *((_QWORD *)v5 + 44);
  v4 = v6 == 0 ? 0x80004005 : 0;
  if ( !v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v4, 0x2DDu);
    goto LABEL_11;
  }
  (**(void (__fastcall ***)(CInteraction *))this)(this);
  CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)((char *)this + 1252), &v9);
  v12 = this;
  v13 = v6;
  ManipulationManager = CoreUICallSend(v10, &v13, 1LL, 9LL, 3, &unk_180276414);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v8 = 742;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, ManipulationManager, v8);
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 536LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 3) + 536LL),
    0LL,
    0x4000LL);
LABEL_11:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v10);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v11);
  return v4;
}
