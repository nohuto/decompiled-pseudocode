/*
 * XREFs of ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x1800D167C
 * Callers:
 *     ?CallSetScalarValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IM@Z @ 0x1800CFB5C (-CallSetScalarValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@.c)
 *     ?SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z @ 0x1800D1620 (-SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A5D4 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetScalarValue(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        float a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  struct IMessageCallSendHost *v6; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v7[3]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v9; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 9331LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v6, &v9, &v10);
  if ( v3 < 0 )
  {
    v4 = 9338LL;
    goto LABEL_3;
  }
  v7[0] = v9;
  v7[1] = v10;
  return CoreUICallSend(v6, v7, 2LL, 5LL);
}
