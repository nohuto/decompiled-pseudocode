/*
 * XREFs of ?SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D1120
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D117C (-SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetMatrix3x2Value(
        BamoDataSourceStub *this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  BamoDataSourceStub *v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v4) = BamoImpl::BamoDataSourceStubImpl::SetMatrix3x2Value((BamoDataSourceStub *)((char *)v4 + 8), a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v4;
}
