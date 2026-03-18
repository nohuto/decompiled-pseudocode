/*
 * XREFs of ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0021420
 * Callers:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00A9968 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0022EF0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0023970 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 */

__int64 __fastcall XDCOBJ::SaveAttributes(DC **this)
{
  DC *v1; // rdi
  struct _DC_ATTR *UserAttr; // rax

  v1 = *this;
  if ( (*((_DWORD *)*this + 11) & 2) != 0 )
    return 1LL;
  if ( *((_DWORD *)this + 3)
    || (UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)this)) == 0LL
    || (unsigned int)DC::SaveAttributes(v1, UserAttr) )
  {
    *((_DWORD *)*this + 11) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  return 0LL;
}
