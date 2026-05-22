/*
 * XREFs of ?UpdateMagnifierServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C630
 * Callers:
 *     ?SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C190 (-SendMaterializeProxy@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAV.c)
 *     ?UpdateMagnifierServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18001C610 (-UpdateMagnifierServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubIm.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180012414 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateMagnifierServerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  Microsoft::BamoImpl::BamoPrincipalImpl *v8; // rbx
  struct Microsoft::BamoImpl::BaseBamoPeerImpl *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  v5 = 0;
  if ( *(_QWORD *)(v4 + 40) )
  {
    v6 = *((_QWORD *)this + 7);
    if ( v6 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL);
      v8 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      v9 = (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v5 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v8, v9);
    }
    v10 = *((unsigned int *)this + 6);
    v14[0] = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v11 = *(_QWORD *)(v4 + 48);
    v14[1] = v10;
    v12 = CoreUICallSend(
            v11,
            v14,
            2LL,
            26LL,
            2,
            &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_W5F7ibfRa_dGUOpJCFjzCM2nBDk_BamoGroup$86a4239f,
            v5);
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2018375675 )
    {
      v13 = wil::verify_hresult<long>(v12);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBAD1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)v13);
      JUMPOUT(0x18001C734LL);
    }
  }
}
