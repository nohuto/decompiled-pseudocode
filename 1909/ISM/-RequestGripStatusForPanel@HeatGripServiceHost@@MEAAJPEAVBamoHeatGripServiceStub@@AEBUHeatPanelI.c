/*
 * XREFs of ?RequestGripStatusForPanel@HeatGripServiceHost@@MEAAJPEAVBamoHeatGripServiceStub@@AEBUHeatPanelInfo@@@Z @ 0x18007A600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z @ 0x18007B060 (-GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z.c)
 */

__int64 __fastcall HeatGripServiceHost::RequestGripStatusForPanel(
        HeatGripServiceHost *this,
        struct BamoHeatGripServiceStub *a2,
        const struct HeatPanelInfo *a3)
{
  ISMHeatFrameworkHost *v3; // rcx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (ISMHeatFrameworkHost *)*((_QWORD *)this + 7);
  v10 = 0uLL;
  v11 = 0LL;
  if ( v3 && !(unsigned int)ISMHeatFrameworkHost::GetGripStatus(v3, a3, (struct HeatGripStatus *)&v11) )
  {
    v6 = *((_DWORD *)a3 + 2);
    *(_QWORD *)((char *)&v10 + 4) = *(_QWORD *)a3;
    HIDWORD(v10) = v6;
    LOBYTE(v10) = 1;
  }
  v7 = (*(__int64 (__fastcall **)(char *, __int128 *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, &v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatgripservicehost.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
