/*
 * XREFs of ??1CEffectCompilationService@@UEAA@XZ @ 0x18018A940
 * Callers:
 *     ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x18018AAD0 (--_GCEffectCompilationService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180018228 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAXXZ @ 0x18018AB18 (-clear@-$list@U-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V-$allocator@.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180198C6C (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationService::~CEffectCompilationService(CEffectCompilationService *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 i; // rbx
  __int64 v4; // rcx
  void **v5; // rbx
  __int64 v6; // rsi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 72) = 1;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
    CEffectCompilationTask::Cancel_RenderThread(*(CEffectCompilationTask **)(*((_QWORD *)this + 10) + 8 * i));
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2));
    CloseHandle(*((HANDLE *)this + 3));
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (void **)((char *)this + 176);
  while ( *((_QWORD *)this + 26) )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back((__int64)this + 176);
  v6 = *((_QWORD *)this + 24);
  while ( v6 )
  {
    --v6;
    v7 = *(void **)(*((_QWORD *)this + 23) + 8 * v6);
    if ( v7 )
      std::_Deallocate<16,0>(v7, 0x10uLL);
  }
  v8 = (void *)*((_QWORD *)this + 23);
  if ( v8 )
    std::_Deallocate<16,0>(v8, 8LL * *((_QWORD *)this + 24));
  v9 = *v5;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  std::_Deallocate<16,0>(v9, 0x10uLL);
  *v5 = 0LL;
  v10 = (void *)*((_QWORD *)this + 17);
  if ( v10 )
  {
    std::_Deallocate<16,0>(v10, (*((_QWORD *)this + 19) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::clear((char *)this + 120);
  std::_Deallocate<16,0>(*((void **)this + 15), 0x28uLL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  DeleteCriticalSection(v1);
}
