/*
 * XREFs of SdbReadGUIDTag @ 0x1408E8E8C
 * Callers:
 *     KsepDbGetDriverShims @ 0x14067EA64 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140848A68 (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1406CF668 (SdbReadBinaryTag.c)
 */

_OWORD *__fastcall SdbReadGUIDTag(_OWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, a1, 0x10u) )
  {
    AslLogCallPrintf(1LL);
    *a1 = *a4;
  }
  return a1;
}
