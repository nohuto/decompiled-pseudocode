/*
 * XREFs of ?UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18009A29C
 * Callers:
 *     ?SetUniqueId@BamoDataProviderPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180098980 (-SetUniqueId@BamoDataProviderPrincipal@@UEAAXAEBU_LUID@@@Z.c)
 *     ?SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18009A040 (-SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCache(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // eax
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v8 = *((_QWORD *)this + 5);
    v3 = *(unsigned int *)(*((_QWORD *)a2 + 5) + 36LL);
    v6[1] = *((unsigned int *)this + 6);
    v6[0] = v3;
    v4 = CoreUICallSend(*(_QWORD *)(v2 + 48), v6, 2LL, 1LL, 2, &unk_18014BF20, (unsigned int)&v8);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
    {
      v5 = wil::verify_hresult<long>(v4);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D79,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v5);
      JUMPOUT(0x18009A337LL);
    }
  }
}
