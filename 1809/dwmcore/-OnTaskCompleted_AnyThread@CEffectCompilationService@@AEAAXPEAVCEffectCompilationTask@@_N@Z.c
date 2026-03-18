/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180078E28
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180076BE8 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180172B58 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z @ 0x180054E7C (-RemoveAt@-$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  char *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( !*((_BYTE *)this + 72) )
  {
    v6 = *((_DWORD *)this + 26);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *((_QWORD *)this + 10);
      do
      {
        if ( *(struct CEffectCompilationTask **)(v8 + 8 * v7) == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v6 );
      if ( (unsigned int)v7 < v6 )
      {
        if ( (unsigned int)v7 >= *((_DWORD *)this + 19) )
        {
          v9 = *((unsigned int *)this + 19);
          v10 = (unsigned int)v7;
          v7 = *(_QWORD *)(v8 + 8 * v7);
          *(_QWORD *)(v8 + 8 * v10) = *(_QWORD *)(v8 + 8 * v9);
          *(_QWORD *)(v8 + 8 * v9) = v7;
          LODWORD(v7) = ++*((_DWORD *)this + 19);
        }
        if ( a3 )
        {
          DynArray<CEffectCompilationTask *,0>::RemoveAt((__int64 *)this + 10, v7);
          --*((_DWORD *)this + 19);
        }
        SetEvent(*((HANDLE *)this + 3));
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
}
