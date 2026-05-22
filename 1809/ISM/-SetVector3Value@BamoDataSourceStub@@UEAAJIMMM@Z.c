/*
 * XREFs of ?SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z @ 0x180099B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x18009AF0C (-SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetVector3Value(
        BamoDataSourceStub *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5)
{
  BamoDataSourceStub *v6; // rbx
  volatile signed __int32 *v8; // [rsp+60h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v8,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v6) = BamoImpl::BamoDataSourceStubImpl::SetVector3Value(
                  (BamoDataSourceStub *)((char *)v6 + 8),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v8);
  return (unsigned int)v6;
}
