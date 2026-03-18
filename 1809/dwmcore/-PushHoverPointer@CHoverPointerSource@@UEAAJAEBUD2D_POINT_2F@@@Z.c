/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x180020C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHoverPointerSource::PushHoverPointer(CHoverPointerSource *this, const struct D2D_POINT_2F *a2)
{
  int v2; // edi
  struct IMessageCallSendHost *v5; // rbx
  int ManipulationManager; // eax
  unsigned int v7; // ecx
  __int64 v8; // r14
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  struct CManipulationManager *v10; // [rsp+90h] [rbp+38h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+98h] [rbp+40h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  CHoverPointerSource *v13; // [rsp+A8h] [rbp+50h] BYREF

  v2 = 0;
  if ( *((float *)this + 16) != a2->x || *((float *)this + 17) != a2->y )
  {
    *((struct D2D_POINT_2F *)this + 8) = *a2;
    if ( CMit::s_pMessageSession
      && !CMit::s_pMessageCallSendHost
      && (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
    {
      RaiseFailFastException(0LL, 0LL, 0);
    }
    v5 = CMit::s_pMessageCallSendHost;
    v11 = CMit::s_pMessageCallSendHost;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v11);
    if ( v5 )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v10);
      ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 3), &v10);
      v2 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ManipulationManager, 0x4Cu);
      }
      else
      {
        v8 = *((_QWORD *)v10 + 44);
        v2 = v8 == 0 ? 0x80004005 : 0;
        if ( v8 )
        {
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 8LL))((char *)this + 8);
          v12 = *((_QWORD *)this + 8);
          v13 = this;
          v9[0] = v8;
          v2 = CoreUICallSend(v5, v9, 1LL, 9LL, 4, &unk_18027641C, &v13, &v12);
          if ( v2 < 0 )
            (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 16LL))((char *)this + 8);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v2, 0x4Du);
        }
      }
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v10);
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v11);
  }
  return (unsigned int)v2;
}
