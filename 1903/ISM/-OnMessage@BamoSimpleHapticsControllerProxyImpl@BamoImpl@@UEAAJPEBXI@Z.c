/*
 * XREFs of ?OnMessage@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x1800603F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerProxyImpl::OnMessage(
        BamoImpl::BamoSimpleHapticsControllerProxyImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 56LL),
             &ISimpleHapticsControllerProxy_Receive<BamoImpl::BamoSimpleHapticsControllerProxyImpl>::Type,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_Vb3lY4rj6PT$rR13OxCnMArNTww_BamoGroup$4b5cfcb6,
             239LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      12502LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18006045ELL);
  }
  return result;
}
