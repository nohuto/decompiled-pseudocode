/*
 * XREFs of ?OnMessage@BamoAsyncResult_PROPVARIANT_PrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x1800E9990
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_PROPVARIANT_PrincipalImpl::OnMessage(
        BamoImpl::BamoAsyncResult_PROPVARIANT_PrincipalImpl *this,
        const void *a2,
        int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 56LL),
             &IAsyncResult_PROPVARIANT_Principal_Receive<BamoImpl::BamoAsyncResult_PROPVARIANT_PrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_KN1bQRXcg1OiTYyDlHuINQyWz_I_BamoGroup$ada5be3c,
             88LL,
             this,
             a2,
             a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x17DC,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)result);
    JUMPOUT(0x1800E99FDLL);
  }
  return result;
}
