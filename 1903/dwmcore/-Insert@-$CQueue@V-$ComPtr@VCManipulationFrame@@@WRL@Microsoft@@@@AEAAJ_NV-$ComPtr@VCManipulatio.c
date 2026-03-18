/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1802383F8
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802399FC (-ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180237D10 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v4 = 0;
  EnterCriticalSection(&stru_1803404C8);
  if ( byte_1803404C4 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007045B, 0x97u, 0LL);
  }
  else
  {
    v6 = operator new(0x18uLL);
    v8 = v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(v8 + 2, a3);
      v9 = (_QWORD *)qword_1803404B8;
      if ( *(void ***)qword_1803404B8 != &CGlobalManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v8 = &CGlobalManipulationManager::s_InputQueue;
      v8[1] = v9;
      *v9 = v8;
      ++dword_1803404C0;
      qword_1803404B8 = (__int64)v8;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection(&stru_1803404C8);
  v10 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v4;
}
