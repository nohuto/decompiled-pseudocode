/*
 * XREFs of vRestoreRegion @ 0x1C006E890
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall vRestoreRegion(__int64 a1)
{
  REGION *v2; // rcx
  REGION *v3; // rcx
  bool v4; // zf

  v2 = *(REGION **)(*(_QWORD *)a1 + 168LL);
  if ( v2 )
  {
    v4 = (*((_DWORD *)v2 + 8))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION(v2);
  }
  v3 = *(REGION **)(*(_QWORD *)a1 + 160LL);
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 8))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION(v3);
  }
}
