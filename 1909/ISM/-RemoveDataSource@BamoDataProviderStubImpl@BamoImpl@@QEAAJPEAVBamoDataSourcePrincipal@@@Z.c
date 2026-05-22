/*
 * XREFs of ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1800D0854
 * Callers:
 *     ?CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x1800CF744 (-CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 *     ?RemoveDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1800D07F0 (-RemoveDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18007A394 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800D0574 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderStubImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderStubImpl *this,
        struct BamoDataSourcePrincipal *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL) + 40LL) )
  {
    v3 = -2018375660;
    v4 = 7627LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
      (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
      a2);
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v10, &v8, &v9);
  if ( v3 < 0 )
  {
    v4 = 7635LL;
    goto LABEL_3;
  }
  v6[0] = v8;
  v6[1] = v9;
  return CoreUICallSend(v10, v6, 2LL, 1LL);
}
