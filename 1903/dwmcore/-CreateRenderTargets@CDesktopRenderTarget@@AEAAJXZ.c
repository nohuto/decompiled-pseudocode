/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AF968
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180093420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFA38 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800AFD38 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFE88 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7D78 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateRenderTargets(CDesktopRenderTarget *this)
{
  signed int CurrentDisplaySet; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // edx
  const struct _TlgProvider_t *v7; // rcx
  UINT32 cData; // [rsp+20h] [rbp-19h]
  int v9; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-5h] BYREF
  struct CDisplaySet *v11; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  unsigned int *v13; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+6Ch] [rbp+33h]
  int *v16; // [rsp+70h] [rbp+37h]
  int v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+7Ch] [rbp+43h]

  v10 = 0;
  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
  v9 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 158;
  }
  else
  {
    v4 = *((unsigned int *)v11 + 18);
    v10 = v4;
    if ( !(_DWORD)v4 )
    {
      v9 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802C0180, 2u, 0x88980006, 0xA7u, 0LL);
      goto LABEL_15;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this);
      v9 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
        goto LABEL_5;
      cData = 172;
    }
    else
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets2(this);
      v9 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
      {
LABEL_5:
        CurrentDisplaySet = CDesktopRenderTarget::CreateDDARenderTargets(this);
        v9 = CurrentDisplaySet;
        if ( CurrentDisplaySet >= 0 )
          goto LABEL_6;
        cData = 179;
        goto LABEL_14;
      }
      cData = 176;
    }
  }
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802C0180, 2u, CurrentDisplaySet, cData, 0LL);
LABEL_15:
  if ( v9 < 0 )
    CDesktopRenderTarget::ReleaseRenderTargets(this);
LABEL_6:
  if ( v10 >= 2 && dword_18033A208 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A208, 0x400000000000uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v10;
    v16 = &v9;
    v14 = 4;
    v17 = 4;
    TlgWrite(v7, &unk_1802DB2DD, 0LL, 0LL, 4u, &pData);
  }
  ReleaseInterface<CDisplaySet const>(&v11, v5);
  return (unsigned int)v9;
}
