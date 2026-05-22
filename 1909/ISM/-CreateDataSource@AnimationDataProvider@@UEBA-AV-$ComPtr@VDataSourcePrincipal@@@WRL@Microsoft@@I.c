/*
 * XREFs of ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1800CFA60
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052670 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180064EC8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ??0DataSourcePrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x1800CE648 (--0DataSourcePrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x1800CFF64 (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 */

// Hidden C++ exception states: #wind=2
DataSourcePrincipal **__fastcall AnimationDataProvider::CreateDataSource(
        __int64 a1,
        DataSourcePrincipal **a2,
        unsigned int a3)
{
  __int64 v6; // rdi
  struct Microsoft::Bamo::BaseBamoPeer *v7; // rbx
  char *v8; // rbp
  bool v9; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rax
  const char *v11; // r9
  DataSourcePrincipal *v12; // rbx
  const char *v13; // r9
  const char *v14; // r9
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _LUID Luid; // [rsp+60h] [rbp+8h] BYREF
  DataSourcePrincipal **v19; // [rsp+68h] [rbp+10h]
  DataSourcePrincipal *v20; // [rsp+78h] [rbp+20h]

  v19 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(struct Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v6 + 32) + 24LL));
  v8 = 0LL;
  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::GetStub((Microsoft::BamoImpl::BamoPrincipalImpl *)(v6 + 16), v7, v9);
  if ( Stub )
    v8 = (char *)Stub - 16;
  if ( !v8 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      151LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v11);
    __debugbreak();
  }
  *a2 = 0LL;
  v20 = (DataSourcePrincipal *)operator new(0x48uLL);
  v12 = DataSourcePrincipal::DataSourcePrincipal(v20, *(struct dataprovider_AutoBamos::BamoConnection **)(a1 + 16));
  if ( *a2 )
    (*(void (__fastcall **)(DataSourcePrincipal *))(*(_QWORD *)*a2 + 8LL))(*a2);
  *a2 = v12;
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      154LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v13);
    __debugbreak();
  }
  if ( !AllocateLocallyUniqueId(&Luid) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0xA2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v14);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, struct _LUID *))(*((_QWORD *)*a2 + 1) + 104LL))((__int64)*a2 + 8, &Luid);
  (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)*a2 + 1) + 120LL))((__int64)*a2 + 8, a3);
  v15 = (*(__int64 (__fastcall **)(char *, DataSourcePrincipal *))(*((_QWORD *)v8 + 1) + 24LL))(v8 + 8, *a2);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      173LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  return a2;
}
