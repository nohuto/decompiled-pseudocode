/*
 * XREFs of ?SendMaterializeProxy@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180129460
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateDevicesRemoteCache@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180036344 (-UpdateDevicesRemoteCache@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoPenDeviceManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoPenDeviceManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  v10 = *(unsigned int *)(v3 + 36);
  v11 = *(unsigned int *)(v3 + 40);
  v7 = CoreUICallSend(a2, &v10, 2LL, 57LL);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10067LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  BamoImpl::BamoPenDeviceManagerPrincipalImpl::UpdateDevicesRemoteCache(this, a3);
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10081LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v10 = *(unsigned int *)(v3 + 36);
  v11 = *(unsigned int *)(v3 + 40);
  v9 = CoreUICallSend(a2, &v10, 2LL, 57LL);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      10092LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
}
