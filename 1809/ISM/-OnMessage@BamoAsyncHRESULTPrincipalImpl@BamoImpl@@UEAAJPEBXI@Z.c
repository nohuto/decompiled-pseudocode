/*
 * XREFs of ?OnMessage@BamoAsyncHRESULTPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x1800EA050
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncHRESULTPrincipalImpl::OnMessage(
        BamoImpl::BamoAsyncHRESULTPrincipalImpl *this,
        const void *a2,
        int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 56LL),
             &IAsyncHRESULTPrincipal_Receive<BamoImpl::BamoAsyncHRESULTPrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_JDDlkUxZTIoeRRRsFd6I6MjXKbU_BamoGroup$21dcf589,
             3LL,
             this,
             a2,
             a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4AC,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCAsyncHelpers.bamo.h",
      (const char *)(unsigned int)result);
    JUMPOUT(0x1800EA0BDLL);
  }
  return result;
}
