/*
 * XREFs of ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1801966F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800E2EDC (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800E2F10 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18019673C (-OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarStub::OnRegisterError(BamoDataProviderRegistrarStub *this, unsigned int a2)
{
  BamoDataProviderRegistrarStub *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v3) = BamoImpl::BamoDataProviderRegistrarStubImpl::OnRegisterError(
                  (BamoDataProviderRegistrarStub *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v5);
  return (unsigned int)v3;
}
