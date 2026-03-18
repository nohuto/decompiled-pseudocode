/*
 * XREFs of ?SendAckProxyReference@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAXI_N@Z @ 0x1800E59F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::SendAckProxyReference(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        int a2,
        unsigned __int8 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v9[0] = *((unsigned int *)this + 9);
  v4 = *(_QWORD *)(v3 + 48);
  v9[1] = *((unsigned int *)this + 10);
  LODWORD(v8) = a3;
  LOWORD(v6) = 5;
  v5 = CoreUICallSend(v4, v9, 2LL, 6LL, v6, &unk_1802BA8BD, a2, v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2747,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5,
      v7);
    __debugbreak();
  }
}
