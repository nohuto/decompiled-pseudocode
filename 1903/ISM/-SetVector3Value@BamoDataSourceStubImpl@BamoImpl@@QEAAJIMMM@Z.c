/*
 * XREFs of ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1800D1A2C
 * Callers:
 *     ?CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMM@Z @ 0x1800CFBE4 (-CallSetVector3ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z @ 0x1800D19B0 (-SetVector3Value@BamoDataSourceStub@@UEAAJIMMM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A5D4 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetVector3Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        float a3,
        float a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // [rsp+50h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v11; // [rsp+A0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 9378LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v8, &v11, &v7);
  if ( v4 < 0 )
  {
    v5 = 9385LL;
    goto LABEL_3;
  }
  v9[0] = v11;
  v9[1] = v7;
  return CoreUICallSend(v8, v9, 2LL, 5LL);
}
