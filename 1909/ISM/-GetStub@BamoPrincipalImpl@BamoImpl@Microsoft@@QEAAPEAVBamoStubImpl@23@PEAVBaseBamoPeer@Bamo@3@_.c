/*
 * XREFs of ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x1800CFF64
 * Callers:
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1800CFA60 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x1800CFCC0 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 * Callees:
 *     ?FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z @ 0x1800058F0 (-FindStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEBAPEAVBamoStubImpl@23@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer *a2)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax

  v3 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)a2 + 8LL))(a2);
  result = (unsigned __int64)Microsoft::BamoImpl::BamoPrincipalImpl::FindStub(this, *(_DWORD *)(v3 + 36));
  if ( result )
    result &= -(__int64)(*(_BYTE *)(result + 32) != 0);
  return result;
}
