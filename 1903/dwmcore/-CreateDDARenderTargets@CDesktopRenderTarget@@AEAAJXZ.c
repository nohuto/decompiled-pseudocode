/*
 * XREFs of ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AFA38
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800AF968 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1801A7B50 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateDDARenderTargets(CDesktopRenderTarget *this)
{
  signed int CurrentDisplaySet; // eax
  struct CDisplay *v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CDisplaySet *v6; // r14
  unsigned int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // rsi
  signed int v11; // eax
  __int64 v12; // rcx
  CDisplaySet *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v13);
  v5 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802C0180, 2u, CurrentDisplaySet, 0x260u, 0LL);
  }
  else
  {
    v6 = v13;
    v7 = 0;
    v8 = *((_DWORD *)v13 + 18);
    if ( v8 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        v3 = *(struct CDisplay **)(v9 + *((_QWORD *)v6 + 6));
        if ( *((_BYTE *)v3 + 319) )
        {
          if ( *((_BYTE *)v3 + 314) )
          {
            v11 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(this, v3);
            v5 = v11;
            if ( v11 < 0 )
              break;
          }
        }
        ++v7;
        v9 += 8LL;
        if ( v7 >= v8 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802C0180, 2u, v11, 0x26Eu, 0LL);
    }
  }
LABEL_6:
  ReleaseInterface<CDisplaySet const>(&v13, (unsigned int)v3);
  return v5;
}
