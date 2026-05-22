/*
 * XREFs of ?OnMessage@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x180017070
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        const void *a2,
        int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 56LL),
             &IBamoPeer_ISMBamos_AutoBamos_Receive<BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl>::Type,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_W5F7ibfRa_dGUOpJCFjzCM2nBDk_BamoGroup$86a4239f,
             202LL,
             this,
             a2,
             a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCD12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)result);
    JUMPOUT(0x1800170DDLL);
  }
  return result;
}
