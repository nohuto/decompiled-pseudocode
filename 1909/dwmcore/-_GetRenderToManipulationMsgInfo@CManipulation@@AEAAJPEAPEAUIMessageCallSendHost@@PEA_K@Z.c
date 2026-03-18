/*
 * XREFs of ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801E27C8
 * Callers:
 *     ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1801E1B38 (-SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801E1C1C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A833C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 */

__int64 __fastcall CManipulation::_GetRenderToManipulationMsgInfo(
        CManipulation *this,
        struct IMessageCallSendHost **a2,
        unsigned __int64 *a3)
{
  CComposition *v3; // rbx
  signed int ManipulationManager; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct IMessageCallSendHost **v9; // rbx
  struct IMessageCallSendHost *v10; // rcx
  unsigned __int64 v11; // rcx
  struct CManipulationManager *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (CComposition *)*((_QWORD *)this + 2);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v13);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v13);
  v8 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ManipulationManager, 0x375u, 0LL);
  }
  else
  {
    *a2 = 0LL;
    v9 = (struct IMessageCallSendHost **)((char *)v13 + 64);
    v10 = (struct IMessageCallSendHost *)*((_QWORD *)v13 + 8);
    if ( v10
      && (Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v13 + 8), *a2 = *v9,
                                                                                            (v10 = *v9) != 0LL) )
    {
      v11 = *((_QWORD *)v13 + 4);
      *a3 = v11;
      if ( v11 )
      {
        v8 = 0;
      }
      else
      {
        v8 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x80004005, 0x379u, 0LL);
      }
    }
    else
    {
      v8 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, 0x80004005, 0x377u, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v13);
  return v8;
}
