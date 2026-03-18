/*
 * XREFs of ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x1800DFA68
 * Callers:
 *     ?ResetTokenThread@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800CED30 (-ResetTokenThread@CGlobalSurfaceManager@@UEAAJXZ.c)
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800DF954 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x18004C848 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::CreateTokenThread(CGlobalSurfaceManager *this)
{
  HANDLE Thread; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( *((_BYTE *)this + 352) )
  {
    v4 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004004, 0x1A6u, 0LL);
  }
  else
  {
    wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 60,
      (void (__fastcall ***)(_QWORD))qword_18033CC08);
    Thread = CreateThread(0LL, 0LL, CGlobalSurfaceManager::s_TokenThreadMain, this, 4u, 0LL);
    *((_QWORD *)this + 42) = Thread;
    if ( Thread )
    {
      SetThreadDescription(Thread, L"DWM Token Thread");
      SetThreadPriority(*((HANDLE *)this + 42), 15);
      ResumeThread(*((HANDLE *)this + 42));
      return 0;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, 0x8007000E, 0x1B6u, 0LL);
    }
  }
  return v4;
}
