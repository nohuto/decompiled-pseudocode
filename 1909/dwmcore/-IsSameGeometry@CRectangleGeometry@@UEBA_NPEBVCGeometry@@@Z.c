/*
 * XREFs of ?IsSameGeometry@CRectangleGeometry@@UEBA_NPEBVCGeometry@@@Z @ 0x1800D2C60
 * Callers:
 *     <none>
 * Callees:
 *     ??8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z @ 0x18001A2B4 (--8CRoundedRectangleGeometryData@@QEBA_NAEBU0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRectangleGeometry::IsSameGeometry(CRectangleGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 136LL) )
    return CRoundedRectangleGeometryData::operator==((__int64)this + 136, (__int64)a2 + 136) != 0;
  return v2;
}
