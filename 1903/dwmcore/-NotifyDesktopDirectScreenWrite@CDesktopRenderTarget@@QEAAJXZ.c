/*
 * XREFs of ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x1801A884C
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801A7970 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x1800D2498 (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801A91C8 (-NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyDesktopDirectScreenWrite(CDesktopRenderTarget *this)
{
  unsigned int v1; // ebx
  struct CHwndRenderTarget *Primary; // rdi
  signed int v3; // eax
  __int64 v4; // rcx
  _QWORD v6[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v7; // [rsp+40h] [rbp-58h]
  __int128 v8; // [rsp+50h] [rbp-48h]
  _OWORD v9[3]; // [rsp+60h] [rbp-38h] BYREF

  v1 = 0;
  Primary = CDesktopRenderTarget::GetPrimary(this);
  if ( Primary )
  {
    memset_0(v6, 0, 0x30uLL);
    v6[1] = 0LL;
    LODWORD(v6[0]) = 3;
    v9[1] = v7;
    v9[0] = v6[0];
    v9[2] = v8;
    v3 = CHwndRenderTarget::NotifyMetaData(Primary, v9);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x6EDu, 0LL);
  }
  return v1;
}
