/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D7E34
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18019F3A8 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D61A4 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, unsigned int *a2, int a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  int v8; // xmm3_4
  int v9; // xmm1_4
  int v10; // xmm4_4
  int v11; // xmm2_4
  int v12; // xmm0_4
  int v13; // eax

  v4 = CScrollAnimation::Initialize(a1, a2, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x24u);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 304);
    if ( v7 )
      v7 = *(_QWORD *)(v7 + 16);
    v8 = *(_DWORD *)(v7 + 560);
    v6 = 0;
    v9 = *(_DWORD *)(v7 + 556);
    v10 = *(_DWORD *)(v7 + 544);
    v11 = *(_DWORD *)(v7 + 540);
    v12 = *(_DWORD *)(v7 + 536);
    v13 = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(a1 + 464) = v9;
    *(_DWORD *)(a1 + 460) = v8;
    *(_DWORD *)(a1 + 420) = v13;
    *(_DWORD *)(a1 + 520) = v12;
    *(_DWORD *)(a1 + 524) = v11;
    *(_DWORD *)(a1 + 528) = v10;
  }
  return v6;
}
