/*
 * XREFs of ?SetConstantForDeviceToDefault@BamoMPCConstantManagerClientProxy@@UEAAJIPEBGPEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x1800DD550
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
__int64 __fastcall BamoMPCConstantManagerClientProxy::SetConstantForDeviceToDefault(
        BamoMPCConstantManagerClientProxy *this,
        int a2,
        const unsigned __int16 *a3,
        struct BamoAsyncHRESULTPrincipal *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v10; // rax
  int v11; // eax
  unsigned int v13; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+58h] [rbp-30h] BYREF
  volatile signed __int32 *v15[2]; // [rsp+60h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF

  v15[1] = (volatile signed __int32 *)-2LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    v15,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    if ( a4 )
    {
      v10 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoAsyncHRESULTPrincipal *))(*(_QWORD *)a4 + 32LL))(a4);
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v10,
        *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 3));
    }
    v11 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (BamoMPCConstantManagerClientProxy *)((char *)this + 8),
            &v14,
            &v18,
            &v13);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v16[0] = v18;
      v16[1] = v13;
      v7 = CoreUICallSend(v14, v16, 2LL, 1LL, 4, &unk_18014AFC4, a2);
      goto LABEL_9;
    }
    v8 = (unsigned int)v11;
    v9 = 6979LL;
  }
  else
  {
    v7 = -2018375660;
    v8 = 2276591636LL;
    v9 = 6971LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
    (const char *)v8);
LABEL_9:
  Microsoft::BamoImpl::InternalLock::~InternalLock(v15);
  return v7;
}
