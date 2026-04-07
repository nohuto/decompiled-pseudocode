/*
 * XREFs of ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x1800267C0
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180026870 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x1800267F8 (-DisablePrefiltering@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::Initialize(CTopLevelWindow3D *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v5; // [rsp+28h] [rbp-10h]

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x57u, v5);
  else
    CVisual::DisablePrefiltering(this);
  return v3;
}
