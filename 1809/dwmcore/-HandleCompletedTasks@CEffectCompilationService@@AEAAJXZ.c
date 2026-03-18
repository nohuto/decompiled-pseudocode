/*
 * XREFs of ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180054DDC
 * Callers:
 *     _lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_::_lambda_invoker_cdecl_ @ 0x18007B160 (_lambda_6c2a3186a1eef4a9e99997b9c70e4e2b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180054C28 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z @ 0x180054E7C (-RemoveAt@-$DynArray@PEAVCEffectCompilationTask@@$0A@@@QEAAJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CEffectCompilationService::HandleCompletedTasks(CEffectCompilationService *this)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_DWORD *)this + 19) )
  {
    do
    {
      v2 = 0LL;
      v3 = **((_QWORD **)this + 10);
      *(_BYTE *)(v3 + 92) = 1;
      if ( *(_DWORD *)(v3 + 40) )
      {
        do
        {
          CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(*(_QWORD *)(v3 + 16) + 8 * v2));
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
      }
      *(_DWORD *)(v3 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v3 + 16, 8LL);
      DynArray<CEffectCompilationTask *,0>::RemoveAt((char *)this + 80, 0LL);
    }
    while ( (*((_DWORD *)this + 19))-- != 1 );
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return 0LL;
}
