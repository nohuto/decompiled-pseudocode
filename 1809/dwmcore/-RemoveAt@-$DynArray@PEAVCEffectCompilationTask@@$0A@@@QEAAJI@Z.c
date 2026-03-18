/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z @ 0x180054E7C
 * Callers:
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180054DDC (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180078E28 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CEffectCompilationTask *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, 0x19Cu);
  }
  else
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v8 = v4++;
        *(_QWORD *)(v6 + 8 * v8) = *(_QWORD *)(v6 + 8LL * v4);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  return v3;
}
