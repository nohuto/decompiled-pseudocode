/*
 * XREFs of ?SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z @ 0x180099AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x18009AD34 (-SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetScalarValue(BamoDataSourceStub *this, unsigned int a2, float a3)
{
  BamoDataSourceStub *v4; // rbx
  volatile signed __int32 *v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v6,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v4) = BamoImpl::BamoDataSourceStubImpl::SetScalarValue((BamoDataSourceStub *)((char *)v4 + 8), a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v6);
  return (unsigned int)v4;
}
