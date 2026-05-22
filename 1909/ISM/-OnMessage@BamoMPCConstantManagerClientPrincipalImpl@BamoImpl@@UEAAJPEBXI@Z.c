/*
 * XREFs of ?OnMessage@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18008A450
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::OnMessage(
        BamoImpl::BamoMPCConstantManagerClientPrincipalImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 56LL),
             &IMPCConstantManagerClientPrincipal_Receive<BamoImpl::BamoMPCConstantManagerClientPrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_nrBMrAg5NTgCm$JCjwlFNbjgJH4_BamoGroup$e67122a2,
             86LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8083LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
