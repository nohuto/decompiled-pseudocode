/*
 * XREFs of ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x18015A5FC
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180159830 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x180081478 (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18015B01C (-NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyDesktopDirectScreenWrite(CDesktopRenderTarget *this)
{
  unsigned int v1; // ebx
  struct CHwndRenderTarget *Primary; // rdi
  int v3; // eax
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v7; // [rsp+40h] [rbp-19h]
  __int128 v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+60h] [rbp+7h]
  _OWORD v10[3]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+47h]

  v1 = 0;
  Primary = CDesktopRenderTarget::GetPrimary(this);
  if ( Primary )
  {
    memset_0(v6, 0, 0x38uLL);
    v6[1] = 0LL;
    LODWORD(v6[0]) = 3;
    v10[1] = v7;
    v10[0] = v6[0];
    v11 = v9;
    v10[2] = v8;
    v3 = CHwndRenderTarget::NotifyMetaData(Primary, v10);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x6BDu);
  }
  return v1;
}
