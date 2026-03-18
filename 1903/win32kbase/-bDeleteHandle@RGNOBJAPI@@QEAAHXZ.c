/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0017470
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0017500 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C00174C0 (HmgRemoveObject.c)
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
