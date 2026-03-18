/*
 * XREFs of ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801982B4
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800E3FEC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801896D4 (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801CE010 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18002B314 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180162680 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1801894C4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x180197CB4 (-DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::RegisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _BYTE *v5; // rdx
  __int64 v6; // rbx
  __int64 Unique; // rax
  __int64 v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWeakResourceReference *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( DataSourceProxy::DoesReaderHaveAccess(this, a2) )
  {
    v10 = 0LL;
    CWeakReference<CVisual>::Create(a2, &v10);
    v5 = (_BYTE *)*((_QWORD *)this + 26);
    if ( *((_BYTE **)this + 27) == v5 )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(
        (__int64)this + 200,
        v5,
        &v10);
    }
    else
    {
      *(_QWORD *)v5 = v10;
      *((_QWORD *)this + 26) += 8LL;
    }
    *((_BYTE *)a2 + 72) |= 1u;
    v6 = *((_QWORD *)this + 24);
    Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
    ++*(_DWORD *)(v6 + 64);
    v8 = Unique;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v6 + 8) + 72LL))(v6 + 8, *(unsigned int *)(v6 + 64));
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v6 + 8) + 24LL))(v6 + 8, v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
