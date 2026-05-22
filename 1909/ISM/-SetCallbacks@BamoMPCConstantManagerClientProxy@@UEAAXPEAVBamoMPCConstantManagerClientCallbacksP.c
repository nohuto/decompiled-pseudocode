/*
 * XREFs of ?SetCallbacks@BamoMPCConstantManagerClientProxy@@UEAAXPEAVBamoMPCConstantManagerClientCallbacksPrincipal@@@Z @ 0x1801140B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800235E8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023AA4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ @ 0x180114B40 (-UpdateCallbacksRemoteCache@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoMPCConstantManagerClientProxy::SetCallbacks(
        BamoMPCConstantManagerClientProxy *this,
        struct BamoMPCConstantManagerClientCallbacksPrincipal *a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl *v3; // rsi
  __int64 v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+40h] [rbp+8h] BYREF

  v3 = (BamoMPCConstantManagerClientProxy *)((char *)this + 8);
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v4 = *((_QWORD *)v3 + 4);
  *((_QWORD *)v3 + 4) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct BamoMPCConstantManagerClientCallbacksPrincipal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateCallbacksRemoteCache(v3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
}
