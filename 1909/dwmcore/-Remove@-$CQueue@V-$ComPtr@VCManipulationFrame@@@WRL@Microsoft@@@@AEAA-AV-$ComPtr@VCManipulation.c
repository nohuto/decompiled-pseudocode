/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800D81A8
 * Callers:
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800D815C (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180237660 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802382EC (-ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180236600 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_QWORD *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(__int64 a1, _QWORD *a2, char a3, int *a4)
{
  void **v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rcx

  *a2 = 0LL;
  EnterCriticalSection(&stru_18033D5A8);
  if ( a3 )
  {
    v7 = (void **)CGlobalManipulationManager::s_InputQueue;
    v8 = *(_QWORD *)CGlobalManipulationManager::s_InputQueue;
    if ( *((void ***)CGlobalManipulationManager::s_InputQueue + 1) == &CGlobalManipulationManager::s_InputQueue
      && *(void **)(v8 + 8) == CGlobalManipulationManager::s_InputQueue )
    {
      CGlobalManipulationManager::s_InputQueue = *(void **)CGlobalManipulationManager::s_InputQueue;
      *(_QWORD *)(v8 + 8) = &CGlobalManipulationManager::s_InputQueue;
      goto LABEL_5;
    }
LABEL_10:
    __fastfail(3u);
  }
  v7 = (void **)qword_18033D598;
  v11 = *(_QWORD **)(qword_18033D598 + 8);
  if ( *(void ***)qword_18033D598 != &CGlobalManipulationManager::s_InputQueue || *v11 != qword_18033D598 )
    goto LABEL_10;
  qword_18033D598 = *(_QWORD *)(qword_18033D598 + 8);
  *v11 = &CGlobalManipulationManager::s_InputQueue;
LABEL_5:
  if ( v7 == &CGlobalManipulationManager::s_InputQueue )
  {
    v9 = dword_18033D5A0;
  }
  else
  {
    v12 = (__int64 *)(v7 + 2);
    Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(a2, v7 + 2);
    if ( v7 )
    {
      v13 = *v12;
      if ( *v12 )
      {
        *v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      operator delete(v7);
    }
    v9 = --dword_18033D5A0;
  }
  if ( a4 )
    *a4 = v9;
  LeaveCriticalSection(&stru_18033D5A8);
  return a2;
}
