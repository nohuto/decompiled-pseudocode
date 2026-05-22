/*
 * XREFs of ?AttachHeatFramework@ISMHeatFrameworkHost@@QEAAJPEAUIHeatFramework@@@Z @ 0x18007AF4C
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180126458 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::AttachHeatFramework(ISMHeatFrameworkHost *this, struct IHeatFramework *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
    else
    {
      *((_QWORD *)this + 5) = a2;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
