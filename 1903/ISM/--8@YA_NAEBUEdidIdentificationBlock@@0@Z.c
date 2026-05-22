/*
 * XREFs of ??8@YA_NAEBUEdidIdentificationBlock@@0@Z @ 0x1800D23A4
 * Callers:
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x1800D2498 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 *     ?GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z @ 0x1800D26D8 (-GetHMonitorFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(__int64 a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && *(_WORD *)(a1 + 2) == *(_WORD *)(a2 + 2)
      && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
      && *(_WORD *)(a1 + 8) == *(_WORD *)(a2 + 8);
}
