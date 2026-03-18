/*
 * XREFs of ?OnMessage@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x1800E4D90
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        const void *a2,
        int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 56LL),
             &IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Type,
             &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_mC$gak3dNtwldfQAUjQi8$oQItA_BamoGroup$eddace5b,
             56LL,
             this,
             a2,
             a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2726,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)result,
      v4);
    __debugbreak();
  }
  return result;
}
