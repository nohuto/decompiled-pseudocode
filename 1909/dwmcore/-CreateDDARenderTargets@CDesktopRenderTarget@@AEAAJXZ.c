/*
 * XREFs of ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B7F4
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B724 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1801A6290 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateDDARenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  const struct CDisplaySet *v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // rsi
  struct CDisplay *v9; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  const struct CDisplaySet *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v13);
  v4 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802BE2C0, 2u, CurrentDisplaySet, 0x260u, 0LL);
  }
  else
  {
    v5 = v13;
    v6 = 0;
    v7 = *((_DWORD *)v13 + 18);
    if ( v7 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        v9 = *(struct CDisplay **)(v8 + *((_QWORD *)v5 + 6));
        if ( *((_BYTE *)v9 + 319) )
        {
          if ( *((_BYTE *)v9 + 314) )
          {
            v11 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(this, v9);
            v4 = v11;
            if ( v11 < 0 )
              break;
          }
        }
        ++v6;
        v8 += 8LL;
        if ( v6 >= v7 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802BE2C0, 2u, v11, 0x26Eu, 0LL);
    }
  }
LABEL_6:
  ReleaseInterface<CDisplaySet const>(&v13);
  return v4;
}
