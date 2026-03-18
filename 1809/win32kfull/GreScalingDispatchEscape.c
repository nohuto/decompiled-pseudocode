/*
 * XREFs of GreScalingDispatchEscape @ 0x1C02827D4
 * Callers:
 *     NtGdiExtEscape @ 0x1C008BDD0 (NtGdiExtEscape.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreScalingDispatchEscape(unsigned __int64 a1)
{
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  return 3221225659LL;
}
