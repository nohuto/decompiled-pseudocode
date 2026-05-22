/*
 * XREFs of ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18009A444
 * Callers:
 *     ?RemoveDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180098C20 (-RemoveDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x18009A250 (-CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180012414 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderStubImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderStubImpl *this,
        struct BamoDataSourcePrincipal *a2)
{
  __int64 v2; // r9
  unsigned int v4; // ebx
  __int64 v5; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // rax
  int v7; // eax
  __int64 v8; // r10
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL) + 40LL) )
  {
    if ( a2 )
    {
      v6 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct BamoDataSourcePrincipal *))(*(_QWORD *)a2 + 32LL))(a2);
      v7 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
             v6,
             *((struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 5));
      v2 = *((_QWORD *)this + 5);
      LODWORD(a2) = v7;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL);
    if ( *((_BYTE *)this + 32) && *(_QWORD *)(v8 + 40) )
    {
      v9 = *((_QWORD *)this + 3);
      v11[0] = *(unsigned int *)(v2 + 36);
      v11[1] = *(unsigned int *)(v9 + 24);
      return CoreUICallSend(*(_QWORD *)(v8 + 48), v11, 2LL, 1LL, 1, &unk_18014BF1D, (_DWORD)a2);
    }
    v4 = -2018375675;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
      (const char *)0x87B20805LL);
    v5 = 7635LL;
  }
  else
  {
    v4 = -2018375660;
    v5 = 7627LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)v4);
  return v4;
}
