/*
 * XREFs of SetVacb @ 0x14026B074
 * Callers:
 *     CcDereferenceFileOffset @ 0x14026A5D4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14026A7A0 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AAAC (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1400224B0 (CcSetVacbLargeOffset.c)
 */

char __fastcall SetVacb(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  char v4; // r10

  v4 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    return CcSetVacbLargeOffset(a1, a2, a3, a4);
  if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
  return v4;
}
