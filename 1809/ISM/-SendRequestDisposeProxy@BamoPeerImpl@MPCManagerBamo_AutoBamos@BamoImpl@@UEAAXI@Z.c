/*
 * XREFs of ?SendRequestDisposeProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI@Z @ 0x18003E550
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::SendRequestDisposeProxy(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  int v4; // eax
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v5[0] = *((unsigned int *)this + 9);
  v3 = *(_QWORD *)(v2 + 48);
  v5[1] = *((unsigned int *)this + 10);
  v4 = CoreUICallSend(v3, v5, 2LL, 0LL, 8, &unk_18014B005, a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x524,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.Common.bamo.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18003E5C5LL);
  }
}
