/*
 * XREFs of ?SendRequestDisposeProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x1800626E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::SendRequestDisposeProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this)
{
  __int64 v1; // r8
  __int64 v2; // r10
  int v3; // eax
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v4[0] = *((unsigned int *)this + 9);
  v2 = *(_QWORD *)(v1 + 48);
  v4[1] = *((unsigned int *)this + 10);
  v3 = CoreUICallSend(v2, v4, 2LL, 57LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      17801LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
}
