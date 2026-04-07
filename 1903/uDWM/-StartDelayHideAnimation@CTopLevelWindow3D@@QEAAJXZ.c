/*
 * XREFs of ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008E44C
 * Callers:
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800232FC (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180026C70 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000DFD0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F830 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021D48 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartDelayHideAnimation(CTopLevelWindow3D *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int started; // eax

  v2 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 400LL), 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_DWORD *)this + 92) != 8 )
    {
      v4 = CTopLevelWindow3D::StopAnimation((__int64)this);
      v3 = v4;
      if ( v4 >= 0 )
      {
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 8u);
        v3 = started;
        if ( started < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x17Eu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x17Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x179u);
  }
  return v3;
}
