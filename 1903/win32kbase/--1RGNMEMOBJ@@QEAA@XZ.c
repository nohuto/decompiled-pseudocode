/*
 * XREFs of ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C008FD80
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     GreCreateRectRgn @ 0x1C00AE1D0 (GreCreateRectRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall RGNMEMOBJ::~RGNMEMOBJ(REGION **this)
{
  if ( *((_DWORD *)this + 2) == 1 )
  {
    REGION::vDeleteREGION(*this);
    *this = 0LL;
  }
}
