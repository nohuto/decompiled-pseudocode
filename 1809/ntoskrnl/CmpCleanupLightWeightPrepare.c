/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x1406949F8
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14069491C (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpCleanupLightWeightUoWData @ 0x140695AAC (CmpCleanupLightWeightUoWData.c)
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
