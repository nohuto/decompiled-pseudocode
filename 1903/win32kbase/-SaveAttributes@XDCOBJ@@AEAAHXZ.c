/*
 * XREFs of ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C00BDAB4
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0025390 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0019DB0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C001E7F0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 */

__int64 __fastcall XDCOBJ::SaveAttributes(DC **this)
{
  DC *v1; // rdi
  struct _DC_ATTR *UserAttr; // rax
  __int64 result; // rax

  v1 = *this;
  if ( (*((_DWORD *)*this + 11) & 2) != 0 )
    return 1LL;
  if ( *((_DWORD *)this + 3)
    || (UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)this)) == 0LL
    || (result = DC::SaveAttributes(v1, UserAttr), (_DWORD)result) )
  {
    *((_DWORD *)*this + 11) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  return result;
}
