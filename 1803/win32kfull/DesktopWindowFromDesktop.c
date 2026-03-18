/*
 * XREFs of DesktopWindowFromDesktop @ 0x1C00F2610
 * Callers:
 *     xxxDesktopRecalc @ 0x1C00F2340 (xxxDesktopRecalc.c)
 *     SnapshotWindowRects @ 0x1C01A5050 (SnapshotWindowRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopWindowFromDesktop(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
      return *(_QWORD *)(v2 + 24);
  }
  return result;
}
