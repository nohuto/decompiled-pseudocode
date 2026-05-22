/*
 * XREFs of ?OnInput@BamoAttachableInputObjectSampleProxy@@UEAAJ_J0PEBG@Z @ 0x18005FD10
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x18005FD7C (-OnInput@BamoAttachableInputObjectSampleProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z.c)
 */

__int64 __fastcall BamoAttachableInputObjectSampleProxy::OnInput(
        BamoAttachableInputObjectSampleProxy *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  BamoAttachableInputObjectSampleProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoAttachableInputObjectSampleProxyImpl::OnInput(
                  (BamoAttachableInputObjectSampleProxy *)((char *)v5 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v5;
}
