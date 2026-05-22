/*
 * XREFs of ?OnMessage@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAJPEBXI@Z @ 0x18007EA00
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::OnMessage(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        const void *a2)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 56LL),
             &IBamoPeer_MPCManagerBamo_AutoBamos_Receive<BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl>::Type,
             &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_gc15dAH_HRGm2aFEmVnIJumkvZI_BamoGroup$3abff530,
             18LL);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2810LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.Common.bamo.h",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
