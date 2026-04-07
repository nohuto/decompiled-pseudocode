/*
 * XREFs of ?CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z @ 0x18002D078
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002CAB4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x18007F004 (-CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A568 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x18007FA0C (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 */

__int64 __fastcall CDesktopManager::CheckInteropDCompDevice(CDesktopManager *this, bool *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  int v6; // eax
  bool v7; // al
  void *v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( *((_QWORD *)this + 27) )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27))(
           *((_QWORD *)this + 27),
           &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3,
           &v11);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x228u, v9);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 208LL))(v11, &v10);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x22Bu, v9);
      }
      else
      {
        v7 = 1;
        if ( !v10 )
        {
          CDesktopManager::HandleInteropDeviceLost();
          if ( !v10 )
            v7 = 0;
        }
        if ( a2 )
          *a2 = v7;
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v11);
  }
  return v2;
}
