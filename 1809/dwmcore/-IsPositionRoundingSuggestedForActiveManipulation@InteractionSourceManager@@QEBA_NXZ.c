/*
 * XREFs of ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801E55B4
 * Callers:
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801A33EC (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18019FDDC (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1801E5F44 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

char __fastcall InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation(
        InteractionSourceManager *this)
{
  bool HasActiveManipulation; // al
  InteractionSourceManager *v2; // r10
  char v3; // r9
  InteractionSourceManager *v4; // r10
  float v5; // xmm1_4
  InteractionSourceManager *v6; // r10
  float v7; // xmm1_4
  InteractionSourceManager *v8; // r10
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm4_4

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(this);
  v3 = 0;
  if ( HasActiveManipulation )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)InteractionSourceManager::TryGetActiveManipulation(v2) + 96)) & _xmm);
    if ( v5 < 0.1 )
    {
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)InteractionSourceManager::TryGetActiveManipulation(v4) + 97)) & _xmm);
      if ( v7 < 0.1 )
      {
        v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)InteractionSourceManager::TryGetActiveManipulation(v6)
                                                         + 99)
                                                       - 0.0)) & _xmm);
        if ( v9 <= 0.0000011920929 )
        {
          v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)InteractionSourceManager::TryGetActiveManipulation(v8)
                                                            + 100)
                                                          - 0.0)) & _xmm);
          if ( v11 >= v10 )
            return 1;
        }
      }
    }
  }
  return v3;
}
