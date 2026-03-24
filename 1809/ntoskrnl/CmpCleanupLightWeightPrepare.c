/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x140693838
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140693544 (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069375C (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmListGetNextElement @ 0x1406948C0 (CmListGetNextElement.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406948EC (CmpCleanupLightWeightUoWData.c)
 */

void __fastcall CmpCleanupLightWeightPrepare(__int64 a1)
{
  __int64 v1; // rbx
  __int64 NextElement; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = 0LL;
    v1 = a1 + 16;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v1, &v3, 0LL);
      if ( !NextElement )
        break;
      CmpCleanupLightWeightUoWData(NextElement);
    }
  }
}
