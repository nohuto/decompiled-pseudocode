/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801A6D2C
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1801A6144 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801A621C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CComposition **this,
        struct IMessageCallSendHost **a2,
        struct IMessageCallSendHost **a3)
{
  int ManipulationManager; // eax
  struct IMessageCallSendHost *v7; // rcx
  unsigned int v8; // edi
  struct CManipulationManager *v9; // rbx
  struct IMessageCallSendHost **v10; // rdi
  int v11; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct CManipulationManager *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v14);
  ManipulationManager = CComposition::GetManipulationManager(this[2], &v14);
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v13 = 881;
    v11 = ManipulationManager;
    goto LABEL_10;
  }
  *a2 = 0LL;
  v9 = v14;
  v10 = (struct IMessageCallSendHost **)((char *)v14 + 360);
  v7 = (struct IMessageCallSendHost *)*((_QWORD *)v14 + 45);
  if ( v7 )
  {
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v14 + 45);
    *a2 = *v10;
    v7 = *v10;
  }
  v8 = v7 == 0LL ? 0x80004005 : 0;
  if ( !v7 )
  {
    v13 = 883;
    goto LABEL_7;
  }
  v7 = (struct IMessageCallSendHost *)*((_QWORD *)v9 + 41);
  *a3 = v7;
  v8 = v7 == 0LL ? 0x80004005 : 0;
  if ( !v7 )
  {
    v13 = 885;
LABEL_7:
    v11 = v8;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, v11, v13);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v14);
  return v8;
}
