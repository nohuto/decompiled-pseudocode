/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180009BCC
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800092B0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x1800291B4 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D935C (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009E8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  _QWORD *v19; // rdi
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // [rsp+20h] [rbp-58h]
  unsigned __int64 v29; // [rsp+88h] [rbp+10h]
  __int64 v30; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  v29 = v11;
  v12 = 8 * v11;
  v30 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v15 = (__int64 *)(v13 + 8 * v6);
  v28 = v15 + 1;
  v16 = *a3;
  *v15 = *a3;
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 12));
  v17 = (__int64 *)a1[1];
  v18 = (__int64 *)*a1;
  if ( v4 == v17 )
  {
    if ( v18 != v17 )
    {
      try
      {
        v21 = v13 - (_QWORD)v18;
        do
        {
          v22 = *v18;
          *v18 = 0LL;
          *(__int64 *)((char *)v18++ + v21) = v22;
        }
        while ( v18 != v17 );
      }
      catch ( ... )
      {
        std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Destroy(v18, v13 + 8 * v6, v28);
        std::_Deallocate<16,0>(v13, 8 * v29);
        throw;
      }
    }
  }
  else
  {
    if ( v18 != v4 )
    {
      v23 = v13 - (_QWORD)v18;
      do
      {
        v24 = *v18;
        *v18 = 0LL;
        *(__int64 *)((char *)v18++ + v23) = v24;
      }
      while ( v18 != v4 );
      v17 = (__int64 *)a1[1];
    }
    if ( v4 != v17 )
    {
      v25 = v13 + v14 - (_QWORD)v4;
      do
      {
        v26 = *v4;
        *v4 = 0LL;
        *(__int64 *)((char *)v4++ + v25 + 8) = v26;
      }
      while ( v4 != v17 );
    }
  }
  v19 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v27 = (_QWORD *)a1[1];
    if ( v19 != v27 )
    {
      do
      {
        if ( *v19 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(*v19);
        ++v19;
      }
      while ( v19 != v27 );
      v19 = (_QWORD *)*a1;
    }
    std::_Deallocate<16,0>(v19, (a1[2] - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = v13 + 8 * v8;
  a1[2] = v13 + v30;
  return v14 + *a1;
}
