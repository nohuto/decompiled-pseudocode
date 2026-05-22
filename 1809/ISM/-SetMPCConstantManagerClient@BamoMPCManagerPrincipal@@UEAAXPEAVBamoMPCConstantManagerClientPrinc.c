/*
 * XREFs of ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x18003EE20
 * Callers:
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18003CA58 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18003F574 (-UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoMPCManagerPrincipal::SetMPCConstantManagerClient(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoMPCConstantManagerClientPrincipal *a2)
{
  BamoImpl::BamoMPCManagerPrincipalImpl *v3; // rdi
  __int64 v4; // rbx
  __int64 i; // rbx
  volatile signed __int32 *v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = (BamoImpl::BamoMPCManagerPrincipalImpl *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  v4 = *((_QWORD *)v3 + 5);
  *((_QWORD *)v3 + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoMPCConstantManagerClientPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  for ( i = *((_QWORD *)v3 + 4); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_BYTE *)(i + 32) )
      BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCache(
        v3,
        (struct Microsoft::BamoImpl::BamoStubImpl *)i);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v6);
}
