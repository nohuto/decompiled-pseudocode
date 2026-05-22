/*
 * XREFs of ?SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z @ 0x180099A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x18009AC70 (-SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetBooleanValue(BamoDataSourceStub *this, unsigned int a2, bool a3)
{
  BamoDataSourceStub *v4; // rbx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v4) = BamoImpl::BamoDataSourceStubImpl::SetBooleanValue((BamoDataSourceStub *)((char *)v4 + 8), a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v7);
  return (unsigned int)v4;
}
