/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801EA540
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801EBA7C (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801E9E6C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rax

  EnterCriticalSection(&stru_1803089A8);
  v5 = 0;
  if ( byte_1803089A4 )
  {
    v5 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147023781, 0x98u);
  }
  else
  {
    v7 = operator new(0x18uLL);
    if ( v7 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v7[2] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))v7 + 2, a3);
      v8 = (_QWORD *)qword_180308998;
      if ( *(void ***)qword_180308998 != &CManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v7 = &CManipulationManager::s_InputQueue;
      v7[1] = v8;
      *v8 = v7;
      ++dword_1803089A0;
      qword_180308998 = (__int64)v7;
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x9Bu);
    }
  }
  LeaveCriticalSection(&stru_1803089A8);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(a3);
  return v5;
}
