/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18001CB0C
 * Callers:
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800151A8 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     _lambda_8309522674f697363d2ec6af0121dec6_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x180064234 (_lambda_8309522674f697363d2ec6af0121dec6_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001D500 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18001D544 (-_Calculate_growth@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r13
  SIZE_T v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 *v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // rdi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r14
  unsigned __int64 v26; // [rsp+20h] [rbp-58h]
  void *v27; // [rsp+28h] [rbp-50h]
  _QWORD *v28; // [rsp+80h] [rbp+8h]
  _QWORD *v29; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v26 = std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Calculate_growth(a1, v7 + 1);
  v9 = 8 * v26;
  if ( v26 > v10 )
    v9 = -1LL;
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
  try
  {
    v12 = v11;
    v27 = (void *)v11;
    v13 = v6;
    v14 = (__int64 *)(8 * v6 + v11);
    v29 = v14 + 1;
    v15 = *a3;
    *v14 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v28 = v14;
    v16 = a1[1];
    v17 = *a1;
    if ( v4 == v16 )
    {
      if ( v17 != v16 )
      {
        v20 = v12 - (_QWORD)v17;
        do
        {
          v21 = *v17;
          *v17 = 0LL;
          *(__int64 *)((char *)v17++ + v20) = v21;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v4 )
      {
        v22 = v12 - (_QWORD)v17;
        do
        {
          v23 = *v17;
          *v17 = 0LL;
          *(__int64 *)((char *)v17++ + v22) = v23;
        }
        while ( v17 != v4 );
        v16 = a1[1];
      }
      v28 = (_QWORD *)v12;
      if ( v4 != v16 )
      {
        v17 = (__int64 *)(v12 + v13 * 8 - (_QWORD)v4);
        do
        {
          v24 = *v4;
          *v4 = 0LL;
          *(__int64 *)((char *)v17 + (_QWORD)v4++ + 8) = v24;
        }
        while ( v4 != v16 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(v17, v28, v29);
    std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)(8 * v26));
    throw;
  }
  v18 = *a1;
  if ( *a1 )
  {
    v25 = a1[1];
    if ( v18 != v25 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v18++);
      while ( v18 != v25 );
      v18 = *a1;
    }
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(((char *)a1[2] - (char *)v18) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *a1 = (__int64 *)v12;
  a1[1] = (__int64 *)(v12 + 8 * v8);
  a1[2] = (__int64 *)(v12 + 8 * v26);
  return (__int64)&(*a1)[v13];
}
