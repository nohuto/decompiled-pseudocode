/*
 * XREFs of ?SetFullRegion@CRegion@@UEAAXXZ @ 0x1C0095530
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetFullRegion(CRegion *this)
{
  REGION *v2; // rcx

  v2 = (REGION *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    REGION::vDeleteREGION(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 1;
}
