/*
 * XREFs of PpmPerfRegisterHvCap @ 0x14087C730
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x140271590 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigurePerfStateCap @ 0x140276A80 (HvlConfigurePerfStateCap.c)
 */

__int64 __fastcall PpmPerfRegisterHvCap(__int64 a1)
{
  int LpIndexFromApicId; // ecx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  if ( (HvlEnlightenments & 8) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4));
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  return HvlConfigurePerfStateCap(LpIndexFromApicId, &v4);
}
