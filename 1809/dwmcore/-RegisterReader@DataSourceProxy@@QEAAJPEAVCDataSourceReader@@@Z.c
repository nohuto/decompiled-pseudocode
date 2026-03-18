/*
 * XREFs of ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016FE44
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x180078AEC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x18015386C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180194030 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETL.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x180153270 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x18016F584 (-DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::RegisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _QWORD *v5; // rdx
  __int64 Unique; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWeakResourceReference *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( DataSourceProxy::DoesReaderHaveAccess(this, a2) )
  {
    v11 = 0LL;
    CWeakReference<CVisual>::Create(a2, &v11);
    v5 = (_QWORD *)*((_QWORD *)this + 26);
    if ( *((_QWORD **)this + 27) == v5 )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
        (__int64 *)this + 25,
        v5,
        &v11);
    }
    else
    {
      *v5 = v11;
      *((_QWORD *)this + 26) += 8LL;
    }
    *((_BYTE *)a2 + 72) |= 1u;
    Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
    v7 = *((_QWORD *)this + 24);
    v8 = Unique;
    ++*(_DWORD *)(v7 + 64);
    v9 = v7 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v7 + 8) + 72LL))(v7 + 8, *(unsigned int *)(v7 + 64));
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
