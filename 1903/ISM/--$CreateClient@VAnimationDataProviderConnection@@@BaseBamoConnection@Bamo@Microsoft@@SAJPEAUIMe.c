/*
 * XREFs of ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x1800245C0
 * Callers:
 *     ?RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ @ 0x180024510 (-RuntimeClassInitialize@AnimationDataProvider@@UEAAJXZ.c)
 * Callees:
 *     ?_Get@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEBAPEBXXZ @ 0x18000E0A0 (-_Get@-$_Func_impl_no_alloc@V-$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZPEAV3@AEBU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180022244 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x1800246B8 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180024780 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<AnimationDataProviderConnection>(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  Microsoft::Bamo::BaseBamoConnection *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  char v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  v7 = operator new(0xA0uLL);
  memset_0(v7, 0, 0xA0uLL);
  *v7 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(v7 + 1),
    (struct Microsoft::Bamo::BaseBamoConnection *)v7);
  v7[1] = &BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::`vftable';
  *v7 = &AnimationDataProviderConnection::`vftable';
  v8 = (Microsoft::Bamo::BaseBamoConnection *)v7;
  v9 = std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,void,bool>::_Get((__int64)v7);
  v14 = *a2;
  v13 = 0;
  v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
          v9,
          a1,
          0LL,
          &v14,
          L"System\\CompositionEngineDataProvider",
          v13,
          -2LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x684,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v8 = 0LL;
    *a4 = v7;
    v11 = 0;
  }
  if ( v8 )
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  return v11;
}
