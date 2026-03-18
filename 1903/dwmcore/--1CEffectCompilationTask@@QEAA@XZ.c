/*
 * XREFs of ??1CEffectCompilationTask@@QEAA@XZ @ 0x18019A3F8
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x18002F5A0 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x18018C380 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_18018C380.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18019A494 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x18019A52C (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(CEffectCompilationTask *this)
{
  __int64 v2; // rbx
  unsigned int v3; // edx
  OLECHAR *v4; // rcx
  CCompiledEffectCache *v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel_RenderThread(this);
  v2 = *((_QWORD *)this + 1);
  v8 = *((_QWORD *)this + 6);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 104LL))(v8);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
    (_QWORD *)(v2 + 112),
    &v7);
  v4 = (OLECHAR *)*((_QWORD *)this + 10);
  if ( v4 )
    SysFreeString(v4);
  v5 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
  if ( v5 )
    CCompiledEffectCache::`scalar deleting destructor'(v5, v3);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
