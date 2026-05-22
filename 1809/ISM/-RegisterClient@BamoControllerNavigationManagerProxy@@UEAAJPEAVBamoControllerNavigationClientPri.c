/*
 * XREFs of ?RegisterClient@BamoControllerNavigationManagerProxy@@UEAAJPEAVBamoControllerNavigationClientPrincipal@@@Z @ 0x180012CE0
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
__int64 __fastcall BamoControllerNavigationManagerProxy::RegisterClient(
        BamoControllerNavigationManagerProxy *this,
        struct BamoControllerNavigationClientPrincipal *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // edi
  Microsoft::BamoImpl::BamoPrincipalImpl *v8; // rax
  int v9; // eax
  volatile signed __int32 *v11[2]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v14; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v16; // [rsp+98h] [rbp+20h] BYREF

  v11[1] = (volatile signed __int32 *)-2LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    if ( a2 )
    {
      v8 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationClientPrincipal *))(*(_QWORD *)a2 + 32LL))(a2);
      v7 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
             v8,
             *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 3));
    }
    else
    {
      v7 = 0;
    }
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoControllerNavigationManagerProxy *)((char *)this + 8),
           &v16,
           &v14,
           &v15);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v12[0] = v14;
      v12[1] = v15;
      v4 = CoreUICallSend(
             v16,
             v12,
             2LL,
             5LL,
             0,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_W5F7ibfRa_dGUOpJCFjzCM2nBDk_BamoGroup$86a4239f,
             v7);
      goto LABEL_10;
    }
    v5 = (unsigned int)v9;
    v6 = 39841LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 2276591636LL;
    v6 = 39833LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v5);
LABEL_10:
  Microsoft::BamoImpl::InternalLock::~InternalLock(v11);
  return v4;
}
