/*
 * XREFs of ?reset@?$auto_rc@VDMMVIDEOPRESENTSOURCESET@@@@QEAAXPEAVDMMVIDEOPRESENTSOURCESET@@@Z @ 0x1C001F76C
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C00536FC (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C016AC38 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DMMVIDEOPRESENTSOURCESET>::reset(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned __int64 result; // rax

  v5 = *a1;
  if ( v5 && a2 != v5 )
    result = ReferenceCounted::Release((ReferenceCounted *)(v5 + 64), a2, a3);
  *a1 = a2;
  return result;
}
