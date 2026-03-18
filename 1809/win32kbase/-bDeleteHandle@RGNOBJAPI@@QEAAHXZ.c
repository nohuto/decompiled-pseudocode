/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C001D5A4
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C001CCF0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this)
{
  HRGN v2; // rcx

  v2 = (HRGN)*((_QWORD *)this + 5);
  if ( v2 == hrgnDefault || HmgRemoveObject((int)v2, 1, 0, 0, 4, 0LL) != *(_QWORD *)this )
    return 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return 1LL;
}
