/*
 * XREFs of ?UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180095044
 * Callers:
 *     ??0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180091960 (--0SystemCursorController@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x180094620 (-SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z.c)
 *     ?SendMaterializeProxy@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800950F0 (-SendMaterializeProxy@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSen.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCache(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  float v3; // xmm0_4
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // eax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v3 = *((float *)this + 10);
    v4 = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v7[1] = *((unsigned int *)this + 6);
    v7[0] = v4;
    v5 = CoreUICallSend(*(_QWORD *)(v2 + 48), v7, 2LL, 33LL, 0, &unk_18014AA21, LODWORD(v3));
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
    {
      v6 = wil::verify_hresult<long>(v5);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5CE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v6);
      JUMPOUT(0x1800950DELL);
    }
  }
}
