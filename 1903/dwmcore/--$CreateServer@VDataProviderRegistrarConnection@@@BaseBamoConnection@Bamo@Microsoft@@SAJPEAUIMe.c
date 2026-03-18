/*
 * XREFs of ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800E17B0
 * Callers:
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800E1494 (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetImpl@BamoPeer@dataprovider_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ @ 0x1800D9A50 (-GetImpl@BamoPeer@dataprovider_AutoBamos@@EEBAPEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@XZ.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800E1894 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800E18F8 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180177B7C (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateServer<DataProviderRegistrarConnection>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // rdi
  __int64 v9; // r8
  Microsoft::Bamo::BaseBamoConnection *v10; // rbx
  struct Microsoft::BamoImpl::BaseBamoPeerImpl *Impl; // rax
  int v12; // eax
  unsigned int v13; // esi
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v8 = DefaultHeap::AllocClear(0xA0uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v9);
  *v8 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v8 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v8);
  v8[1] = &BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::`vftable';
  v10 = (Microsoft::Bamo::BaseBamoConnection *)v8;
  v8[19] = 0LL;
  *v8 = &DataProviderRegistrarConnection::`vftable';
  Impl = dataprovider_AutoBamos::BamoPeer::GetImpl((dataprovider_AutoBamos::BamoPeer *)v8);
  v15 = *a3;
  v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(Impl, a1, a2, &v15);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x658,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      (int)L"System\\CompositionEngineDataProvider");
  }
  else
  {
    v10 = 0LL;
    *a5 = v8;
    v13 = 0;
  }
  if ( v10 )
    Microsoft::Bamo::BaseBamoConnection::Release(v10);
  return v13;
}
