/*
 * XREFs of ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00E33C0
 * Callers:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C00E3398 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::SaveAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( !*((_DWORD *)this + 3) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
    {
      if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
        return 0;
    }
  }
  return result;
}
