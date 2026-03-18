/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801D84B0
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18019F3A8 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D61A4 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTracker *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  int v7; // xmm3_4
  int v8; // xmm1_4
  int v9; // xmm4_4
  int v10; // xmm2_4
  int v11; // xmm0_4
  int v12; // eax

  v3 = CScrollAnimation::Initialize((__int64)this, (unsigned int *)a2, 2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x28u);
  }
  else
  {
    v6 = *((_QWORD *)this + 38);
    if ( v6 )
      v6 = *(_QWORD *)(v6 + 16);
    v7 = *(_DWORD *)(v6 + 568);
    v5 = 0;
    v8 = *(_DWORD *)(v6 + 564);
    v9 = *(_DWORD *)(v6 + 544);
    v10 = *(_DWORD *)(v6 + 540);
    v11 = *(_DWORD *)(v6 + 536);
    v12 = *((_DWORD *)this + 73);
    *((_DWORD *)this + 116) = v8;
    *((_DWORD *)this + 115) = v7;
    *((_DWORD *)this + 105) = v12;
    *((_DWORD *)this + 130) = v11;
    *((_DWORD *)this + 131) = v10;
    *((_DWORD *)this + 132) = v9;
  }
  return v5;
}
