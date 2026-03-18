/*
 * XREFs of ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180060EFC
 * Callers:
 *     _anonymous_namespace_::State::State @ 0x18006089C (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x180060E00 (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x180060E94 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUObserver@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x18001B510 (--$_Emplace_reallocate@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProce.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@QEAPEAU23@AEBQEAU23@@Z @ 0x1800E4360 (--$_Emplace_reallocate@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEA.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttributionObserver *__fastcall CProcessAttributionManager::CreateObserver(
        CProcessAttributionManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _BYTE *v4; // rdx
  __int64 *v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v9; // r14
  char *v10; // rax
  char *v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  _QWORD *v14; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = WPF::ProcessHeapImpl::AllocClear(0x28uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v2[1] = this;
  v16 = v2;
  *v2 = &CProcessAttributionManager::Observer::`vftable';
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v4 = (_BYTE *)*((_QWORD *)this + 4);
  if ( *((_BYTE **)this + 5) == v4 )
  {
    std::vector<CProcessAttributionManager::Observer *>::_Emplace_reallocate<CProcessAttributionManager::Observer * const &>(
      (const void **)this + 3,
      v4,
      &v16);
  }
  else
  {
    *(_QWORD *)v4 = v2;
    *((_QWORD *)this + 4) += 8LL;
  }
  v5 = *(__int64 **)this;
  v6 = 0LL;
  v7 = (unsigned __int64)(*((_QWORD *)this + 1) - *(_QWORD *)this + 7LL) >> 3;
  if ( *(_QWORD *)this > *((_QWORD *)this + 1) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v9 = *v5;
      ++*(_DWORD *)(*v5 + 124);
      v10 = (char *)operator new(0x70uLL);
      v11 = v10;
      if ( v10 )
        memset_0(v10, 0, 0x70uLL);
      else
        v11 = 0LL;
      *(_QWORD *)v11 = *(_QWORD *)v9;
      v12 = *(_QWORD *)(v9 + 112);
      v16 = v11;
      if ( v12 )
      {
        *(_OWORD *)(v11 + 8) = *(_OWORD *)(v12 + 24);
        v13 = *(_DWORD *)(v12 + 40);
      }
      else
      {
        *(_OWORD *)(v11 + 8) = *(_OWORD *)(v9 + 8);
        v13 = *(_DWORD *)(v9 + 24);
      }
      *((_DWORD *)v11 + 6) = v13;
      v14 = (_QWORD *)v3[3];
      if ( (_QWORD *)v3[4] == v14 )
      {
        std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Emplace_reallocate<CProcessAttributionManager::ProcessAttributionRecord * const &>(
          v3 + 2,
          v14,
          &v16);
      }
      else
      {
        *v14 = v11;
        v3[3] += 8LL;
      }
      ++v5;
      ++v6;
    }
    while ( v6 != v7 );
  }
  return (struct CProcessAttributionObserver *)v3;
}
