/*
 * XREFs of ?AddReaderToReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x180187F98
 * Callers:
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801CC870 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180153A88 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x180160F90 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 */

void __fastcall DataProviderManager::AddReaderToReadyList(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        const char *a4)
{
  _BYTE *v5; // rdx
  char *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDataSourceReader *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( (*((_BYTE *)a2 + 72) & 1) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1CD,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      a4);
    __debugbreak();
  }
  v5 = (_BYTE *)*((_QWORD *)this + 14);
  v6 = (char *)this + 104;
  if ( *((_BYTE **)v6 + 2) == v5 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>((__int64)v6, v5, &v8);
  }
  else
  {
    *(_QWORD *)v5 = a2;
    *((_QWORD *)v6 + 1) += 8LL;
  }
  *((_BYTE *)a2 + 72) |= 2u;
}
