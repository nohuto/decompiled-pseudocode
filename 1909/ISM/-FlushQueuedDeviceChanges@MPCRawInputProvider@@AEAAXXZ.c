/*
 * XREFs of ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800940F0
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800945E0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x180094728 (-OnInputReceived@MPCRawInputProvider@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B0AC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___ @ 0x180093440 (_lambda_7f3c0264f4cfe5c0819e572d89a9031e_--operator()_std--shared_ptr_LegacyDeviceInfo___.c)
 *     ??4?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180093E4C (--4-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x180094020 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x180094A34 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCRawInputProvider::FlushQueuedDeviceChanges(MPCRawInputProvider *this)
{
  const char *v2; // r9
  __int64 v3; // rdi
  int ***v4; // rax
  int **v5; // r15
  int **v6; // rbx
  int **v7; // r12
  int **v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  __int64 *i; // r14
  int **v16; // r14
  int **v17; // r14
  std::_Ref_count_base *v18; // rcx
  int **j; // rbx
  __int64 v20; // r15
  unsigned int *v21; // r14
  unsigned __int64 v22; // rbx
  int **k; // rbx
  std::_Ref_count_base *v24; // rcx
  __int128 v25; // [rsp+28h] [rbp-38h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int128 *v30; // [rsp+A0h] [rbp+40h] BYREF
  __int128 *v31; // [rsp+A8h] [rbp+48h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      273LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v2);
    __debugbreak();
  }
  v27 = 0LL;
  v3 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v30 = (__int128 *)((char *)this + 96);
  v4 = (int ***)((char *)this + 136);
  v5 = 0LL;
  v6 = 0LL;
  if ( &v27 == (__int128 *)((char *)this + 136) )
  {
    v8 = (int **)*((_QWORD *)&v27 + 1);
    v7 = (int **)v27;
  }
  else
  {
    v6 = *v4;
    v7 = *v4;
    *(_QWORD *)&v27 = *v4;
    *v4 = 0LL;
    v5 = (int **)*((_QWORD *)this + 18);
    v8 = v5;
    *((_QWORD *)&v27 + 1) = v5;
    *((_QWORD *)this + 18) = 0LL;
    v3 = *((_QWORD *)this + 19);
    v28 = v3;
    *((_QWORD *)this + 19) = 0LL;
  }
  v9 = (_QWORD *)((char *)this + 160);
  if ( &v25 != (__int128 *)((char *)this + 160) )
  {
    v10 = v25;
    *(_QWORD *)&v25 = *v9;
    *v9 = v10;
    v11 = *((_QWORD *)&v25 + 1);
    *((_QWORD *)&v25 + 1) = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = v11;
    v12 = v26;
    v26 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = v12;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock((struct _RTL_CRITICAL_SECTION **)&v30);
  v31 = &v25;
  v30 = &v25;
  while ( v6 != v5
       && !lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___((_QWORD **)&v30, v6) )
    v6 += 2;
  if ( v6 != v5 )
  {
    for ( i = (__int64 *)(v6 + 2); i != (__int64 *)v5; i += 2 )
    {
      if ( !lambda_7f3c0264f4cfe5c0819e572d89a9031e_::operator()_std::shared_ptr_LegacyDeviceInfo___(
              (_QWORD **)&v31,
              (int **)i) )
      {
        std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(v6, i);
        v6 += 2;
      }
    }
  }
  v16 = v8;
  if ( v6 != v8 )
  {
    v17 = v6;
    do
    {
      v18 = (std::_Ref_count_base *)v17[1];
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      v17 += 2;
    }
    while ( v17 != v8 );
    v8 = v6;
    *((_QWORD *)&v27 + 1) = v6;
    v16 = v6;
  }
  for ( j = v7; j != v16; j += 2 )
    MPCRawInputProvider::AttachDeviceImpl((__int64)this, j, v13, v14);
  v20 = 0LL;
  v21 = (unsigned int *)v25;
  v22 = (unsigned __int64)(*((_QWORD *)&v25 + 1) - v25 + 3) >> 2;
  if ( (unsigned __int64)v25 > *((_QWORD *)&v25 + 1) )
    v22 = 0LL;
  if ( v22 )
  {
    do
    {
      MPCRawInputProvider::RemoveDeviceImpl(this, *v21++);
      ++v20;
    }
    while ( v20 != v22 );
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)&v25);
  if ( v7 )
  {
    for ( k = v7; k != v8; k += 2 )
    {
      v24 = (std::_Ref_count_base *)k[1];
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v3 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
