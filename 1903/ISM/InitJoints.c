/*
 * XREFs of InitJoints @ 0x1800F514C
 * Callers:
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800F3AC0 (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_JPEAUISpatia.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitJoints(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  v1 = (__int64 *)&unk_1801E00A8;
  v2 = 26LL;
  do
  {
    result = *v1;
    v1 += 4;
    *(_OWORD *)(result + a1) = xmmword_1801AA430;
    *(_OWORD *)(result + a1 + 16) = xmmword_1801AA440;
    *(_DWORD *)(result + a1 + 32) = 1;
    --v2;
  }
  while ( v2 );
  return result;
}
