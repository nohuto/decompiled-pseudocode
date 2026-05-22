/*
 * XREFs of ?SendCheckProtocol@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@UEAAXAEBU_GUID@@@Z @ 0x180017300
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::SendCheckProtocol(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        const struct _GUID *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rdx
  __int64 v4; // r10
  int v5; // eax
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (__int128)*a2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6[0] = *((unsigned int *)this + 9);
  v4 = *(_QWORD *)(v3 + 48);
  v6[1] = *((unsigned int *)this + 10);
  v7 = v2;
  v5 = CoreUICallSend(v4, v6, 2LL, 37LL, 0, &unk_18014A992, (unsigned int)&v7);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCD57,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x180017380LL);
  }
}
