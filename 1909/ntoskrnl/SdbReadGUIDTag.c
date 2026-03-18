/*
 * XREFs of SdbReadGUIDTag @ 0x140923DA4
 * Callers:
 *     KsepDbGetDriverShims @ 0x14070C710 (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140882388 (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbReadBinaryTag @ 0x14070ADF0 (SdbReadBinaryTag.c)
 */

_QWORD *__fastcall SdbReadGUIDTag(_QWORD *a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( !(unsigned int)SdbReadBinaryTag(a2, a3, (__int64)a1, 0x10u) )
  {
    AslLogCallPrintf(1LL);
    *(_OWORD *)a1 = *a4;
  }
  return a1;
}
