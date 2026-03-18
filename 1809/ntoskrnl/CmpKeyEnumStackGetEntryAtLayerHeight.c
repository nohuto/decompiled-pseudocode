/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1407FF888
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x1407FEECC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1407FEF60 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1407FF0E0 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x1407FF1A0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1407FF208 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1407FF904 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackReset @ 0x1407FF9A0 (CmpKeyEnumStackReset.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)a2;
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(v2 - 2) << 7);
  else
    return a1 + (v2 << 7) + 88;
}
