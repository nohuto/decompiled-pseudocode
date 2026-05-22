/*
 * XREFs of ?GetGripStatus@ISMHeatFrameworkHost@@QEAAJPEBUHeatPanelInfo@@PEAUHeatGripStatus@@@Z @ 0x18003A058
 * Callers:
 *     ?RequestGripStatusForPanel@HeatGripServiceHost@@MEAAJPEAVBamoHeatGripServiceStub@@AEBUHeatPanelInfo@@@Z @ 0x180039720 (-RequestGripStatusForPanel@HeatGripServiceHost@@MEAAJPEAVBamoHeatGripServiceStub@@AEBUHeatPanelI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::GetGripStatus(
        ISMHeatFrameworkHost *this,
        const struct HeatPanelInfo *a2,
        struct HeatGripStatus *a3,
        const char *a4)
{
  char v4; // al
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // xmm0_4
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  *(_QWORD *)v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x139,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      a4);
    __debugbreak();
  }
  v12 = *(_QWORD *)a2;
  v13 = *((_DWORD *)a2 + 2);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v6 + 72LL))(v6, &v12, v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x142,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    v4 = v11[0];
  }
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x145,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      a4);
    JUMPOUT(0x18003A140LL);
  }
  v10 = v11[1];
  *(_BYTE *)a3 = v4;
  result = 0LL;
  *((_DWORD *)a3 + 1) = v10;
  return result;
}
