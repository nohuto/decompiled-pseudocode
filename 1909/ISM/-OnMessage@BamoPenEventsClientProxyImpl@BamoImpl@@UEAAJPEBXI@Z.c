/*
 * XREFs of ?OnMessage@BamoPenEventsClientProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x180032390
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoPenEventsClientProxyImpl::OnMessage(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 56LL),
             &IPenEventsClientProxy_Receive<BamoImpl::BamoPenEventsClientProxyImpl>::Type,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_Vb3lY4rj6PT$rR13OxCnMArNTww_BamoGroup$4b5cfcb6,
             239LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      11097LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)result);
    JUMPOUT(0x1800323FELL);
  }
  return result;
}
