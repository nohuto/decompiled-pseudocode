/*
 * XREFs of SdbReadGUIDTag @ 0x1408E7BCC
 * Callers:
 *     KsepDbGetDriverShims @ 0x14067D8A4 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140847808 (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x1406CE3C8 (SdbReadBinaryTag.c)
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
