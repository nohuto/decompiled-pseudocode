/*
 * XREFs of KiCommitNodeAssignment @ 0x14017E978
 * Callers:
 *     KiConfigureInitialNodes @ 0x14017E2E8 (KiConfigureInitialNodes.c)
 *     KxInitializeProcessorState @ 0x14072AFF4 (KxInitializeProcessorState.c)
 *     KePerformGroupConfiguration @ 0x1409B6C1C (KePerformGroupConfiguration.c)
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
  v2 = word_14043D964;
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    v5 = KeNodeBlock;
    v6 = (unsigned __int16)KeNumberNodes;
    do
    {
      v7 = *v5;
      v8 = *(_BYTE *)(*v5 + 173);
      if ( (v8 & 2) != 0 && *(_WORD *)(v7 + 144) == v1 )
      {
        *(_WORD *)(v7 + 144) = v2;
        *(_BYTE *)(v7 + 173) = v8 | 4;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    do
    {
      v9 = *v3;
      v10 = *(_BYTE *)(*v3 + 173);
      if ( (v10 & 4) == 0 && (v10 & 2) != 0 && *(_WORD *)(v9 + 144) == v2 )
        *(_WORD *)(v9 + 144) = v1;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  result = v2 + 1;
  word_14043D964 = result;
  return result;
}
