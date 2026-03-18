/*
 * XREFs of ?AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180199C54
 * Callers:
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180199BC0 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18019819C (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::AnimationStarted(
        Microsoft::BamoImpl::BamoProxyImpl *a1,
        int a2,
        __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-88h]
  unsigned int v9; // [rsp+70h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+78h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v13; // [rsp+B0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 24LL) + 40LL) )
  {
    v5 = -2018375660;
    v6 = 4031LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(a1, &v10, &v13, &v9);
  if ( v5 < 0 )
  {
    v6 = 4038LL;
    goto LABEL_3;
  }
  v11[0] = v13;
  v11[1] = v9;
  LOWORD(v8) = 2;
  return CoreUICallSend(v10, v11, 2LL, 0LL, v8, &unk_1802BE00A, a2, a3);
}
