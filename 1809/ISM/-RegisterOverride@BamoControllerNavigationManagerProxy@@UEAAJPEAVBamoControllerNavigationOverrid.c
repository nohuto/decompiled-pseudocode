/*
 * XREFs of ?RegisterOverride@BamoControllerNavigationManagerProxy@@UEAAJPEAVBamoControllerNavigationOverridePrincipal@@@Z @ 0x180012E10
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
__int64 __fastcall BamoControllerNavigationManagerProxy::RegisterOverride(
        BamoControllerNavigationManagerProxy *this,
        struct BamoControllerNavigationOverridePrincipal *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v7; // rax
  int v8; // eax
  volatile signed __int32 *v10[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+88h] [rbp+20h] BYREF

  v10[1] = (volatile signed __int32 *)-2LL;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL) + 40LL) )
  {
    if ( a2 )
    {
      v7 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoControllerNavigationOverridePrincipal *))(*(_QWORD *)a2 + 32LL))(a2);
      LODWORD(a2) = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
                      v7,
                      *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 3));
    }
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (BamoControllerNavigationManagerProxy *)((char *)this + 8),
           &v15,
           &v13,
           &v14);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v11[0] = v13;
      v11[1] = v14;
      v4 = CoreUICallSend(
             v15,
             v11,
             2LL,
             5LL,
             1,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_W5F7ibfRa_dGUOpJCFjzCM2nBDk_BamoGroup$86a4239f,
             (_DWORD)a2);
      goto LABEL_9;
    }
    v5 = (unsigned int)v8;
    v6 = 39863LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 2276591636LL;
    v6 = 39855LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
    (const char *)v5);
LABEL_9:
  Microsoft::BamoImpl::InternalLock::~InternalLock(v10);
  return v4;
}
