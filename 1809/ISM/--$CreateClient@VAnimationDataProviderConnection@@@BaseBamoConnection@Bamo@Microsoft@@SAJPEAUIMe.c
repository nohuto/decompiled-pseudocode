/*
 * XREFs of ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18009C170
 * Callers:
 *     ??0AnimationDataProvider@@QEAA@XZ @ 0x18009B8D8 (--0AnimationDataProvider@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Get@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEBAPEBXXZ @ 0x180008E60 (-_Get@-$_Func_impl_no_alloc@V-$_Binder@U_Unforced@std@@P8MPCRawInputProvider@@EAAX_N@ZPEAV3@AEBU.c)
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180010FFC (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<AnimationDataProviderConnection>(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  void (__fastcall ***v12)(_QWORD); // rax
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a4 = 0LL;
  v7 = operator new(0xA0uLL);
  memset_0(v7, 0, 0xA0uLL);
  *v7 = &dataprovider_AutoBamos::BamoConnection::`vftable';
  *((_DWORD *)v7 + 4) = 1;
  v7[1] = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  v7[3] = v7;
  v7[4] = 0LL;
  *((_DWORD *)v7 + 10) = 0;
  v7[6] = 0LL;
  v7[7] = 0LL;
  v7[8] = 0LL;
  v7[9] = 0LL;
  v7[10] = 0LL;
  v7[11] = 0LL;
  *((_BYTE *)v7 + 96) = 0;
  v7[18] = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v7 + 13));
  v7[1] = &BamoImpl::MPCManagerBamo_AutoBamos::BamoConnectionImpl::`vftable';
  *v7 = &AnimationDataProviderConnection::`vftable';
  v8 = v7;
  v14 = *a2;
  v9 = std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,void,bool>::_Get((__int64)v7);
  v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
          v9,
          a1,
          0LL,
          &v14,
          L"System\\CompositionEngineDataProvider",
          0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v8 = 0LL;
    *a4 = v7;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x684,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v10);
  }
  if ( v8 )
  {
    v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    (**v12)(v12);
  }
  return v11;
}
