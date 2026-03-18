/*
 * XREFs of ?SendAckProxyReference@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@UEAAXI_N@Z @ 0x1801897E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::SendAckProxyReference(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        int a2,
        unsigned __int8 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v8[0] = *((unsigned int *)this + 9);
  v4 = *(_QWORD *)(v3 + 48);
  v8[1] = *((unsigned int *)this + 10);
  LODWORD(v7) = a3;
  LOWORD(v6) = 4;
  v5 = CoreUICallSend(v4, v8, 2LL, 1LL, v6, &unk_1802BC175, a2, v7);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1098,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
}
