/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801EC234
 * Callers:
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800EB6E4 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801EAF8C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801EBA7C (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801E9E6C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 (__fastcall ****__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD),
        char a3,
        int *a4))(_QWORD)
{
  __int64 *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int v10; // eax

  *a2 = 0LL;
  EnterCriticalSection(&stru_1803089A8);
  if ( a3 )
  {
    v7 = (__int64 *)CManipulationManager::s_InputQueue;
    v8 = *(_QWORD *)CManipulationManager::s_InputQueue;
    if ( *((void ***)CManipulationManager::s_InputQueue + 1) == &CManipulationManager::s_InputQueue
      && *(void **)(v8 + 8) == CManipulationManager::s_InputQueue )
    {
      CManipulationManager::s_InputQueue = *(void **)CManipulationManager::s_InputQueue;
      *(_QWORD *)(v8 + 8) = &CManipulationManager::s_InputQueue;
      goto LABEL_8;
    }
LABEL_16:
    __fastfail(3u);
  }
  v7 = (__int64 *)qword_180308998;
  v9 = *(_QWORD **)(qword_180308998 + 8);
  if ( *(void ***)qword_180308998 != &CManipulationManager::s_InputQueue || *v9 != qword_180308998 )
    goto LABEL_16;
  qword_180308998 = *(_QWORD *)(qword_180308998 + 8);
  *v9 = &CManipulationManager::s_InputQueue;
LABEL_8:
  if ( v7 == (__int64 *)&CManipulationManager::s_InputQueue )
  {
    v10 = dword_1803089A0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a2, v7 + 2);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v7 + 2);
      operator delete(v7);
    }
    v10 = --dword_1803089A0;
  }
  if ( a4 )
    *a4 = v10;
  LeaveCriticalSection(&stru_1803089A8);
  return a2;
}
