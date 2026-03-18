/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008AD10
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800C8740 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008ADE4 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800D82D8 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800D842C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180159B38 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
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
    cData = 146;
  }
  else
  {
    v8 = *((_DWORD *)v9 + 18);
    if ( !v8 )
    {
      v7 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(0, &dword_1802925D8, 2u, -2003304442, 0x9Bu);
      goto LABEL_15;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1257LL) )
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this);
      v7 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
        goto LABEL_5;
      cData = 160;
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
        cData = 167;
        goto LABEL_14;
      }
      cData = 164;
    }
  }
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802925D8, 2u, CurrentDisplaySet, cData);
LABEL_15:
  if ( v7 < 0 )
    CDesktopRenderTarget::ReleaseRenderTargets(this);
LABEL_6:
  if ( v8 >= 2 && dword_180305EB8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305EB8, 0x400000000000uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v14 = &v7;
    v12 = 4;
    v15 = 4;
    TlgWrite(v5, &unk_1802B3BE1, 0LL, 0LL, 4u, &pData);
  }
  ReleaseInterface<CDisplaySet const>(&v9);
  return (unsigned int)v7;
}
