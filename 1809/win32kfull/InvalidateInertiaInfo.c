/*
 * XREFs of InvalidateInertiaInfo @ 0x1C000810C
 * Callers:
 *     NtUserReportInertia @ 0x1C0008010 (NtUserReportInertia.c)
 *     CachePTPInertiaInfo @ 0x1C01C2930 (CachePTPInertiaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvalidateInertiaInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (dword_1C0318928 & 1) != 0 && a2 == qword_1C03188A8 && a1 == gInertiaInfo )
    dword_1C0318928 &= ~1u;
  return result;
}
