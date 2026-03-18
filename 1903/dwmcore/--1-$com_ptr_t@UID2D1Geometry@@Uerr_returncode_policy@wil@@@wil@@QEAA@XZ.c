/*
 * XREFs of ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028300
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18000CB60 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18000CC04 (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800282CC (--1CRegionShape@@UEAA@XZ.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016DB2C (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ??1CWARPDrawListEntry@@EEAA@XZ @ 0x1801BA954 (--1CWARPDrawListEntry@@EEAA@XZ.c)
 *     ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801BBF88 (-Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
