/*
 * XREFs of ?SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D117C
 * Callers:
 *     ?CallSetMatrix3x2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800CFA6C (-CallSetMatrix3x2ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsof.c)
 *     ?SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D1120 (-SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A5D4 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetMatrix3x2Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  struct IMessageCallSendHost *v9; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v14; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v15; // [rsp+B8h] [rbp+38h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 9475LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v9, &v14, &v15);
  if ( v4 < 0 )
  {
    v5 = 9482LL;
    goto LABEL_3;
  }
  v7 = *(_OWORD *)&a3->m11;
  v10[0] = v14;
  v8 = *(_QWORD *)&a3->m[2][0];
  v10[1] = v15;
  v11 = v7;
  v12 = v8;
  return CoreUICallSend(v9, v10, 2LL, 5LL);
}
