/*
 * XREFs of KiUncommitNodeAssignment @ 0x1402904C0
 * Callers:
 *     KiRemoveProcessorFromGroupDatabase @ 0x14029044C (KiRemoveProcessorFromGroupDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUncommitNodeAssignment(__int64 a1)
{
  __int16 v1; // r9
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rax
  char v5; // dl
  __int64 result; // rax

  v1 = *(_WORD *)(a1 + 144);
  if ( KeNumberNodes )
  {
    v2 = KeNodeBlock;
    v3 = (unsigned __int16)KeNumberNodes;
    do
    {
      v4 = *v2;
      v5 = *(_BYTE *)(*v2 + 173);
      if ( (v5 & 2) != 0 && *(_WORD *)(v4 + 144) == v1 )
        *(_BYTE *)(v4 + 173) = v5 & 0xFB;
      ++v2;
      *(_DWORD *)(v4 + 128) = 0;
      --v3;
    }
    while ( v3 );
  }
  result = 0xFFFFLL;
  --word_14043D964;
  return result;
}
