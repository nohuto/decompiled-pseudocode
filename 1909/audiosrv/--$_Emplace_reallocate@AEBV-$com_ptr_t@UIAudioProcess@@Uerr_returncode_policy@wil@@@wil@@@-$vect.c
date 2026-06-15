/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18003E388
 * Callers:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180021FB0 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003E2E8 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     _lambda_bd83ce2b5745fe94b238edc07ed8abe2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800CC600 (_lambda_bd83ce2b5745fe94b238edc07ed8abe2_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r12
  __int64 *v5; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  SIZE_T v13; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // rdi
  unsigned __int64 v20; // rcx
  void *v21; // rax
  SIZE_T v22; // r8
  __int64 v23; // rax
  SIZE_T v24; // rdx
  __int64 v25; // rax
  SIZE_T v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // r14
  __int64 v29; // [rsp+20h] [rbp-58h]

  v5 = a2;
  v7 = a2 - *a1;
  v8 = a1[1] - *a1;
  if ( v8 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v9 = v8 + 1;
  v10 = a1[2] - *a1;
  v11 = v10 >> 1;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v12 = v8 + 1;
  }
  else
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  v29 = 8 * v12;
  v13 = 8 * v12;
  if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
    v13 = -1LL;
  if ( v13 >= 0x1000 )
  {
    v20 = v13 + 39;
    if ( v13 + 39 < v13 )
      v20 = -1LL;
    v21 = operator new(v20);
    if ( !v21 )
    {
      _o__invalid_parameter_noinfo_noreturn();
LABEL_23:
      v22 = v13 - (_QWORD)v17;
      do
      {
        v23 = *v17;
        *v17 = 0LL;
        *(__int64 *)((char *)v17++ + v22) = v23;
      }
      while ( v17 != v16 );
      goto LABEL_14;
    }
    v13 = ((unsigned __int64)v21 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
    *(_QWORD *)(v13 - 8) = v21;
  }
  else if ( v13 )
  {
    ProcessHeap = GetProcessHeap();
    v13 = (SIZE_T)HeapAlloc(ProcessHeap, 0, v13);
  }
  v3 = v7;
  v15 = *a3;
  *(_QWORD *)(8 * v7 + v13) = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = a1[1];
  v17 = *a1;
  if ( v5 == v16 )
  {
    if ( v17 == v16 )
      goto LABEL_14;
    goto LABEL_23;
  }
  if ( v17 != v5 )
  {
    v24 = v13 - (_QWORD)v17;
    do
    {
      v25 = *v17;
      *v17 = 0LL;
      *(__int64 *)((char *)v17++ + v24) = v25;
    }
    while ( v17 != v5 );
    v16 = a1[1];
  }
  if ( v5 != v16 )
  {
    v26 = v13 + v3 * 8 - (_QWORD)v5;
    do
    {
      v27 = *v5;
      *v5 = 0LL;
      *(__int64 *)((char *)v5++ + v26 + 8) = v27;
    }
    while ( v5 != v16 );
  }
LABEL_14:
  v18 = *a1;
  if ( *a1 )
  {
    v28 = a1[1];
    if ( v18 != v28 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v18++);
      while ( v18 != v28 );
      v18 = *a1;
    }
    std::_Deallocate<16,0>(v18, ((char *)a1[2] - (char *)v18) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = (__int64 *)v13;
  a1[1] = (__int64 *)(v13 + 8 * v9);
  a1[2] = (__int64 *)(v13 + v29);
  return (__int64)&(*a1)[v3];
}
