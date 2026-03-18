/*
 * XREFs of ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1801D671C
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801D67D0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801E5E88 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 */

void __fastcall CScrollAnimation::UpdateChainingDirection(CScrollAnimation *this, float a2)
{
  char v2; // r8
  unsigned int v4; // xmm0_4
  __int64 v5; // rcx
  float v6; // xmm0_4
  char v7; // r8
  __int64 v8; // rax
  struct CChainingHelper *ActiveChainingHelper; // rax
  __int64 v10; // rdx

  v2 = *((_BYTE *)this + 404);
  if ( (v2 & 1) != 0 )
  {
    *(float *)&v4 = a2 - *((float *)this + 98);
    v5 = 0LL;
    v6 = (float)(int)((__PAIR64__(*(float *)&v4 > 0.0, v4) - COERCE_UNSIGNED_INT(0.0)) >> 32);
    *((float *)this + 100) = v6;
    v7 = (v6 == 0.0) | v2 & 0xFE;
    *((_BYTE *)this + 404) = v7;
    if ( (v7 & 1) == 0 )
    {
      v8 = *((_QWORD *)this + 38);
      if ( v8 )
        v5 = *(_QWORD *)(v8 + 16);
      ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v5 + 192));
      v10 = *((int *)this + 73);
      *((_BYTE *)ActiveChainingHelper + 12 * v10) |= 4u;
      *((_DWORD *)ActiveChainingHelper + 3 * v10 + 2) = -805306369;
      *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
    }
  }
}
