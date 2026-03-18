/*
 * XREFs of InvalidateInertiaInfo @ 0x1C00077CC
 * Callers:
 *     NtUserReportInertia @ 0x1C00076E0 (NtUserReportInertia.c)
 *     CachePTPInertiaInfo @ 0x1C01A1370 (CachePTPInertiaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvalidateInertiaInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (dword_1C032AA08 & 1) != 0 && a2 == qword_1C032A988 && a1 == gInertiaInfo )
    dword_1C032AA08 &= ~1u;
  return result;
}
