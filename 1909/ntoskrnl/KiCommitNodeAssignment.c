/*
 * XREFs of KiCommitNodeAssignment @ 0x14018757C
 * Callers:
 *     KiConfigureInitialNodes @ 0x1401860B8 (KiConfigureInitialNodes.c)
 *     KxInitializeProcessorState @ 0x14074E7BC (KxInitializeProcessorState.c)
 *     KePerformGroupConfiguration @ 0x1409EDA90 (KePerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall KiCommitNodeAssignment(__int64 a1)
{
  __int16 v1; // bx
  __int16 v2; // ax
  __int64 *v3; // rdx
  __int64 v4; // r10
  __int64 *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rcx
  char v8; // r9
  __int64 v9; // rcx
  char v10; // r8
  __int16 result; // ax

  v1 = *(_WORD *)(a1 + 144);
  v2 = word_14046814C;
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    v5 = KeNodeBlock;
    v6 = (unsigned __int16)KeNumberNodes;
    do
    {
      v7 = *v5;
      v8 = *(_BYTE *)(*v5 + 181);
      if ( (v8 & 2) != 0 && *(_WORD *)(v7 + 144) == v1 )
      {
        *(_WORD *)(v7 + 144) = v2;
        *(_BYTE *)(v7 + 181) = v8 | 4;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    do
    {
      v9 = *v3;
      v10 = *(_BYTE *)(*v3 + 181);
      if ( (v10 & 4) == 0 && (v10 & 2) != 0 && *(_WORD *)(v9 + 144) == v2 )
        *(_WORD *)(v9 + 144) = v1;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  result = v2 + 1;
  word_14046814C = result;
  return result;
}
