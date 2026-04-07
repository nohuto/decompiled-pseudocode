/*
 * XREFs of ?CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z @ 0x18002CB88
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002C5EC (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x1800789C4 (-CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180079328 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CDesktopManager::CheckInteropDCompDevice(CDesktopManager *this, bool *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  int v6; // eax
  bool v7; // al
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( *((_QWORD *)this + 27) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(
           *((_QWORD *)this + 27),
           &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3,
           &v10);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x23Du);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 208LL))(v10, &v9);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x240u);
      }
      else
      {
        v7 = 1;
        if ( !v9 )
        {
          CDesktopManager::HandleInteropDeviceLost();
          if ( !v9 )
            v7 = 0;
        }
        if ( a2 )
          *a2 = v7;
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v10);
  }
  return v2;
}
