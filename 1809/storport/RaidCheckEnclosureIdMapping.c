/*
 * XREFs of RaidCheckEnclosureIdMapping @ 0x1C003D0A8
 * Callers:
 *     ShimGetMsftId @ 0x1C0052230 (ShimGetMsftId.c)
 * Callees:
 *     StorCompareScsiDeviceId @ 0x1C0012E74 (StorCompareScsiDeviceId.c)
 */

_QWORD *__fastcall RaidCheckEnclosureIdMapping(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = EnclosureIdList;
  *a1 = 0LL;
  a1[1] = 0LL;
  while ( (__int64 *)v2 != &EnclosureIdList )
  {
    if ( !(unsigned int)StorCompareScsiDeviceId(a2, *(_QWORD *)(v2 + 16)) )
    {
      *(_OWORD *)a1 = *(_OWORD *)(v2 + 24);
      return a1;
    }
    v2 = *(_QWORD *)v2;
  }
  return a1;
}
