/*
 * XREFs of ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800DF450
 * Callers:
 *     _anonymous_namespace_::State::State @ 0x1800DF1F4 (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1800DF2F4 (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800DF380 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800DF3E8 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001DEA8 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x180030640 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttributionObserver *__fastcall CProcessAttributionManager::CreateObserver(
        CProcessAttributionManager *this)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rbx
  _BYTE *v5; // rdx
  __int64 *v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v10; // r14
  char *v11; // rax
  char *v12; // rsi
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = DefaultHeap::AllocClear(0x28uLL);
  v4 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v3);
  v2[1] = this;
  v17 = v2;
  *v2 = &CProcessAttributionManager::Observer::`vftable';
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v5 = (_BYTE *)*((_QWORD *)this + 4);
  if ( *((_BYTE **)this + 5) == v5 )
  {
    std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
      (__int64)this + 24,
      v5,
      &v17);
  }
  else
  {
    *(_QWORD *)v5 = v2;
    *((_QWORD *)this + 4) += 8LL;
  }
  v6 = *(__int64 **)this;
  v7 = 0LL;
  v8 = (unsigned __int64)(*((_QWORD *)this + 1) - *(_QWORD *)this + 7LL) >> 3;
  if ( *(_QWORD *)this > *((_QWORD *)this + 1) )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      v10 = *v6;
      ++*(_DWORD *)(*v6 + 160);
      v11 = (char *)operator new(0x70uLL);
      v12 = v11;
      if ( v11 )
        memset_0(v11, 0, 0x70uLL);
      else
        v12 = 0LL;
      *(_QWORD *)v12 = *(_QWORD *)v10;
      v13 = *(_QWORD *)(v10 + 112);
      v17 = v12;
      if ( v13 )
      {
        *(_OWORD *)(v12 + 8) = *(_OWORD *)(v13 + 24);
        v14 = *(_DWORD *)(v13 + 40);
      }
      else
      {
        *(_OWORD *)(v12 + 8) = *(_OWORD *)(v10 + 8);
        v14 = *(_DWORD *)(v10 + 24);
      }
      *((_DWORD *)v12 + 6) = v14;
      v15 = (_BYTE *)v4[3];
      if ( (_BYTE *)v4[4] == v15 )
      {
        std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
          (__int64)(v4 + 2),
          v15,
          &v17);
      }
      else
      {
        *(_QWORD *)v15 = v12;
        v4[3] += 8LL;
      }
      ++v6;
      ++v7;
    }
    while ( v7 != v8 );
  }
  return (struct CProcessAttributionObserver *)v4;
}
