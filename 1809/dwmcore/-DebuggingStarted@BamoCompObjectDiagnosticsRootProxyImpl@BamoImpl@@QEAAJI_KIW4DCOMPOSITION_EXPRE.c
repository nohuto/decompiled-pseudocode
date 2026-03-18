/*
 * XREFs of ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801725D8
 * Callers:
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180172550 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18016FD2C (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::DebuggingStarted(
        Microsoft::BamoImpl::BamoProxyImpl *a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  unsigned int v4; // [rsp+60h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v5; // [rsp+68h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v8; // [rsp+A0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 24LL) + 40LL) )
  {
    v1 = -2018375660;
    v2 = 4004LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(a1, &v5, &v8, &v4);
  if ( v1 < 0 )
  {
    v2 = 4011LL;
    goto LABEL_3;
  }
  v6[0] = v8;
  v6[1] = v4;
  return CoreUICallSend(v5, v6, 2LL, 0LL, 1, &unk_1802914B2);
}
