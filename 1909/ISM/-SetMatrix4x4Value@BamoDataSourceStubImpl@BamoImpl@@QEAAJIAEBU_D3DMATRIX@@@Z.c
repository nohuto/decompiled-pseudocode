/*
 * XREFs of ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x1800D107C
 * Callers:
 *     ?CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBU_D3DMATRIX@@@Z @ 0x1800CF870 (-CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsof.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x1800D1020 (-SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A394 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        __int64 a2,
        const struct _D3DMATRIX *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  struct IMessageCallSendHost *v11; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v13; // [rsp+60h] [rbp+7h]
  __int128 v14; // [rsp+70h] [rbp+17h]
  __int128 v15; // [rsp+80h] [rbp+27h]
  __int128 v16; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v18; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v19; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL) + 40LL) )
  {
    v4 = -2018375660;
    v5 = 9497LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v11, &v18, &v19);
  if ( v4 < 0 )
  {
    v5 = 9504LL;
    goto LABEL_3;
  }
  v7 = *(_OWORD *)&a3->_11;
  v8 = *(_OWORD *)&a3->_21;
  v12[0] = v18;
  v12[1] = v19;
  v13 = v7;
  v9 = *(_OWORD *)&a3->_31;
  v14 = v8;
  v10 = *(_OWORD *)&a3->_41;
  v15 = v9;
  v16 = v10;
  return CoreUICallSend(v11, v12, 2LL, 5LL);
}
