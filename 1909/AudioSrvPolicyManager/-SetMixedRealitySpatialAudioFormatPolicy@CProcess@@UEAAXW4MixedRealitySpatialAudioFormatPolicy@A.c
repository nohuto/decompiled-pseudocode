/*
 * XREFs of ?SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180014680
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800349FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::SetMixedRealitySpatialAudioFormatPolicy(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  DWORD CurrentThreadId; // eax
  __int128 v12; // [rsp+30h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 728);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 728));
  if ( *(_DWORD *)(a1 + 768) != a2 )
  {
    *(_DWORD *)(a1 + 768) = a2;
    v5 = *(_QWORD **)(a1 + 776);
    v6 = *(_QWORD **)(a1 + 784);
    while ( v5 != v6 )
    {
      v7 = 0LL;
      *(_QWORD *)&v12 = *v5;
      DWORD2(v12) = *(_DWORD *)(a1 + 176);
      v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( v8 )
      {
        v10 = Microsoft::WRL::Details::ModuleBase::module_;
        v8[3] = 1;
        *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( v10 )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
        v7 = v9;
        *(_QWORD *)v9 = off_180039AC0;
        *((_OWORD *)v9 + 1) = v12;
      }
      CurrentThreadId = GetCurrentThreadId();
      SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v7, 0LL);
      if ( v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
      ++v5;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
