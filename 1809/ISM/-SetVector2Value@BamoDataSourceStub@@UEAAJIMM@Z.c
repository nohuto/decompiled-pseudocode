/*
 * XREFs of ?SetVector2Value@BamoDataSourceStub@@UEAAJIMM@Z @ 0x180099B10
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetVector2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMM@Z @ 0x18009AE1C (-SetVector2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMM@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetVector2Value(BamoDataSourceStub *this, unsigned int a2, float a3, float a4)
{
  BamoDataSourceStub *v5; // rbx
  volatile signed __int32 *v7; // [rsp+50h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDataSourceStubImpl::SetVector2Value((BamoDataSourceStub *)((char *)v5 + 8), a2, a3, a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v7);
  return (unsigned int)v5;
}
