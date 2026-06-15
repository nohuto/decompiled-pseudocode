/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18003666C
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002BF6C (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180035D50 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D8EFC (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800369E4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046F9C (--1-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800CA084 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D8740 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 *v15; // r10
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rdi
  _QWORD *v28; // r14
  __int64 v30; // [rsp+98h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  v30 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v15 = (__int64 *)(v13 + 8 * v6);
  v16 = v15 + 1;
  v17 = *a3;
  *v15 = *a3;
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(v17);
  v18 = (__int64 *)a1[1];
  v19 = (__int64 *)*a1;
  if ( a2 == v18 )
  {
    if ( v19 != v18 )
    {
      v20 = v13 - (_QWORD)v19;
      do
      {
        v21 = *v19;
        *v19 = 0LL;
        *(__int64 *)((char *)v19++ + v20) = v21;
      }
      while ( v19 != v18 );
    }
  }
  else
  {
    v22 = (_QWORD *)v13;
    while ( v19 != a2 )
    {
      v23 = *v19;
      *v19 = 0LL;
      *v22++ = v23;
      ++v19;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(v22, v22);
    v24 = (__int64 *)a1[1];
    if ( a2 != v24 )
    {
      v25 = (__int64 *)((char *)a2 + (_QWORD)&v16[v14 / 0xFFFFFFFFFFFFFFF8uLL] - v13 - 8);
      do
      {
        v26 = *v25;
        *v25 = 0LL;
        *v16++ = v26;
        ++v25;
      }
      while ( v25 != v24 );
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(v16, v16);
  }
  v27 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v28 = (_QWORD *)a1[1];
    if ( v27 != v28 )
    {
      do
        wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>::~com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>(v27++);
      while ( v27 != v28 );
      v27 = (_QWORD *)*a1;
    }
    std::_Deallocate<16,0>(v27, (a1[2] - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = v13 + 8 * v8;
  a1[2] = v13 + v30;
  return v14 + *a1;
}
