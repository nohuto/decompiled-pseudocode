/*
 * XREFs of ?UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18003F574
 * Callers:
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x18003EE20 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrinc.c)
 *     ?SendMaterializeProxy@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18003F690 (-SendMaterializeProxy@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180012414 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCache(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  Microsoft::BamoImpl::BamoPrincipalImpl *v8; // rbx
  struct Microsoft::BamoImpl::BaseBamoPeerImpl *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v4 + 40) )
  {
    v5 = *((_QWORD *)this + 5);
    if ( v5 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 16LL);
      v8 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      v9 = (struct Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v6 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v8, v9);
    }
    else
    {
      v6 = 0;
    }
    v10 = *((unsigned int *)this + 6);
    v14[0] = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v11 = *(_QWORD *)(v4 + 48);
    v14[1] = v10;
    v12 = CoreUICallSend(v11, v14, 2LL, 3LL, 0, &unk_18014AFCD, v6);
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2018375675 )
    {
      v13 = wil::verify_hresult<long>(v12);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C86,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)v13);
      JUMPOUT(0x18003F67CLL);
    }
  }
}
