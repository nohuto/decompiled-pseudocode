/*
 * XREFs of ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x1800D0E8C
 * Callers:
 *     ?CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I_N@Z @ 0x1800CF9C8 (-CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z @ 0x1800D0E30 (-SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A5D4 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetBooleanValue(BamoImpl::BamoDataSourceStubImpl *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  struct IMessageCallSendHost *v4; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v5[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v7; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL) + 40LL) )
  {
    v1 = -2018375660;
    v2 = 9309LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v4, &v7, &v8);
  if ( v1 < 0 )
  {
    v2 = 9316LL;
    goto LABEL_3;
  }
  v5[0] = v7;
  v5[1] = v8;
  return CoreUICallSend(v4, v5, 2LL, 5LL);
}
