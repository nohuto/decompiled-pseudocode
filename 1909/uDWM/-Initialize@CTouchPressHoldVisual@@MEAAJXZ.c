/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B0940
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180095CC4 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001AAC0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800255C0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rax

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 74) = 0;
    *((_DWORD *)this + 78) = 90;
    *((_DWORD *)this + 77) = 90;
    v4 = *(_QWORD *)((char *)this + 308);
    *(_QWORD *)((char *)this + 324) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
    *(_QWORD *)((char *)this + 316) = v4;
    *((_DWORD *)this + 83) = 100;
    CVisual::SetOpacity(this, 0.0);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x24u);
  }
  return v3;
}
