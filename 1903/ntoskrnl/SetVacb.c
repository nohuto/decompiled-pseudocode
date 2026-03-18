/*
 * XREFs of SetVacb @ 0x14007A558
 * Callers:
 *     CcGetVacbMiss @ 0x140076C40 (CcGetVacbMiss.c)
 *     CcDereferenceFileOffset @ 0x14027E054 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x14027E21C (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x14007ACE4 (CcSetVacbLargeOffset.c)
 */

char __fastcall SetVacb(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // r8

  v5 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v5 = CcSetVacbLargeOffset(a1, a2, a3, a4);
  }
  else if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
  }
  if ( a3 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 540));
    else
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 540));
  }
  return v5;
}
