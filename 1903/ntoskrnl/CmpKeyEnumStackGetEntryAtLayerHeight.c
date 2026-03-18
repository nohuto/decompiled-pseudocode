/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140838C08
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14083833C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1408384B8 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackCleanup @ 0x14083857C (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408385E4 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140838C84 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackReset @ 0x140838D20 (CmpKeyEnumStackReset.c)
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
