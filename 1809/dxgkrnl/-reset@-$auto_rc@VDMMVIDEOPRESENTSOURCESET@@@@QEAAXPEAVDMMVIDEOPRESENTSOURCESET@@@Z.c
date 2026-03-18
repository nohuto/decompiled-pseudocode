/*
 * XREFs of ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C001F1EC
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C004C4C4 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDEOPRESENTSOURCESET>::reset(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v4 + 64));
  *a1 = a2;
  return result;
}
