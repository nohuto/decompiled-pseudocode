/*
 * XREFs of ?SetVector4Value@BamoDataSourceStub@@UEAAJIMMMM@Z @ 0x1800D1B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetVector4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1800D1BD8 (-SetVector4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetVector4Value(
        BamoDataSourceStub *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  BamoDataSourceStub *v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v7) = BamoImpl::BamoDataSourceStubImpl::SetVector4Value(
                  (BamoDataSourceStub *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v7;
}
