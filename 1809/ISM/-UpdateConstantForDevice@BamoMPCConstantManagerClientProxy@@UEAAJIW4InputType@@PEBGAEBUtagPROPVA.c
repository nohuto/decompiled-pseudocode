/*
 * XREFs of ?UpdateConstantForDevice@BamoMPCConstantManagerClientProxy@@UEAAJIW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x1800DDAA0
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
__int64 __fastcall BamoMPCConstantManagerClientProxy::UpdateConstantForDevice(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 a6)
{
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v11; // rax
  int v12; // eax
  unsigned int v14; // [rsp+68h] [rbp-29h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+70h] [rbp-21h] BYREF
  volatile signed __int32 *v16[2]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v17[2]; // [rsp+88h] [rbp-9h] BYREF
  __int128 v18; // [rsp+98h] [rbp+7h]
  __int64 v19; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+4Fh]
  unsigned int v21; // [rsp+E8h] [rbp+57h] BYREF

  v16[1] = (volatile signed __int32 *)-2LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    v16,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 24LL) + 40LL) )
  {
    if ( a6 )
    {
      v11 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a6 + 32LL))(a6);
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v11,
        *(struct Microsoft::BamoImpl::BaseBamoPeerImpl **)(a1 + 24));
    }
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)(a1 + 8),
            &v15,
            &v21,
            &v14);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v18 = *a5;
      v19 = *((_QWORD *)a5 + 2);
      v17[0] = v21;
      v17[1] = v14;
      v8 = CoreUICallSend(v15, v17, 2LL, 1LL, 0, &unk_18014AFA8, a2);
      goto LABEL_9;
    }
    v9 = (unsigned int)v12;
    v10 = 6881LL;
  }
  else
  {
    v8 = -2018375660;
    v9 = 2276591636LL;
    v10 = 6873LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
    (const char *)v9);
LABEL_9:
  Microsoft::BamoImpl::InternalLock::~InternalLock(v16);
  return v8;
}
