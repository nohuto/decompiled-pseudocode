/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B724
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800990E0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B18C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18002B42C (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B7F4 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A64B8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateRenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  unsigned int v3; // ecx
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // [rsp+20h] [rbp-19h]
  int v7; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-5h] BYREF
  struct CDisplaySet *v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  int *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  v8 = 0;
  v9 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v9);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 158;
  }
  else
  {
    v8 = *((_DWORD *)v9 + 18);
    if ( !v8 )
    {
      v7 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(0, &dword_1802BE2C0, 2u, -2003304442, 0xA7u, 0LL);
      goto LABEL_15;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this);
      v7 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
        goto LABEL_5;
      cData = 172;
    }
    else
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets2(this);
      v7 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
      {
LABEL_5:
        CurrentDisplaySet = CDesktopRenderTarget::CreateDDARenderTargets(this);
        v7 = CurrentDisplaySet;
        if ( CurrentDisplaySet >= 0 )
          goto LABEL_6;
        cData = 179;
        goto LABEL_14;
      }
      cData = 176;
    }
  }
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802BE2C0, 2u, CurrentDisplaySet, cData, 0LL);
LABEL_15:
  if ( v7 < 0 )
    CDesktopRenderTarget::ReleaseRenderTargets(this);
LABEL_6:
  if ( v8 >= 2 && dword_180337208 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337208, 0x400000000000uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v14 = &v7;
    v12 = 4;
    v15 = 4;
    TlgWrite(v5, &unk_1802D943D, 0LL, 0LL, 4u, &pData);
  }
  ReleaseInterface<CDisplaySet const>(&v9);
  return (unsigned int)v7;
}
