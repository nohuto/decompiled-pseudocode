/*
 * XREFs of ?SetAllConstantsForDeviceToDefault@BamoMPCConstantManagerClientProxy@@UEAAJIPEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x1800DD420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180012414 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1800127B8 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoMPCConstantManagerClientProxy::SetAllConstantsForDeviceToDefault(
        BamoMPCConstantManagerClientProxy *this,
        int a2,
        struct BamoAsyncHRESULTPrincipal *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v9; // rax
  int v10; // eax
  struct IMessageCallSendHost *v12; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v13[2]; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+20h] BYREF

  v13[1] = (volatile signed __int32 *)-2LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    if ( a3 )
    {
      v9 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoAsyncHRESULTPrincipal *))(*(_QWORD *)a3 + 32LL))(a3);
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v9,
        *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 3));
    }
    v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (BamoMPCConstantManagerClientProxy *)((char *)this + 8),
            &v12,
            &v16,
            &v17);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v14[0] = v16;
      v14[1] = v17;
      v6 = CoreUICallSend(v12, v14, 2LL, 1LL, 5, &unk_18014AFC9, a2);
      goto LABEL_9;
    }
    v7 = (unsigned int)v10;
    v8 = 7002LL;
  }
  else
  {
    v6 = -2018375660;
    v7 = 2276591636LL;
    v8 = 6994LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
    (const char *)v7);
LABEL_9:
  Microsoft::BamoImpl::InternalLock::~InternalLock(v13);
  return v6;
}
