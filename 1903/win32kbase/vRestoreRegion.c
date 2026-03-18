/*
 * XREFs of vRestoreRegion @ 0x1C0127210
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall vRestoreRegion(__int64 a1)
{
  REGION *v2; // rcx
  bool v3; // zf
  REGION *v4; // rcx

  v2 = *(REGION **)(*(_QWORD *)a1 + 168LL);
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 8))-- == 1;
    if ( v3 )
      REGION::vDeleteREGION(v2);
  }
  v4 = *(REGION **)(*(_QWORD *)a1 + 160LL);
  if ( v4 )
  {
    v3 = (*((_DWORD *)v4 + 8))-- == 1;
    if ( v3 )
      REGION::vDeleteREGION(v4);
  }
}
