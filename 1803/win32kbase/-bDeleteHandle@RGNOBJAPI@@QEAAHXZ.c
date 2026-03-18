/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C002428C
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C003F690 (HmgRemoveObject.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this)
{
  HRGN v2; // rcx

  v2 = (HRGN)*((_QWORD *)this + 1);
  if ( v2 == hrgnDefault || HmgRemoveObject((int)v2, 1, 0, 0, 4, 0LL) != *(_QWORD *)this )
    return 0LL;
  *((_QWORD *)this + 1) = 0LL;
  return 1LL;
}
