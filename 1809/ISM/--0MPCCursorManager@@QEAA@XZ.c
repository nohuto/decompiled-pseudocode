/*
 * XREFs of ??0MPCCursorManager@@QEAA@XZ @ 0x18004C80C
 * Callers:
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18003FD94 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

MPCCursorManager *__fastcall MPCCursorManager::MPCCursorManager(
        MPCCursorManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct ISMTestMode *v5; // rax
  HMODULE LibraryW; // rax
  const char *v22; // r9
  HMODULE v23; // r14
  HMODULE v24; // rsi
  DWORD LastError; // ebx
  FARPROC ProcAddress; // rax
  const char *v27; // r9
  const char *v28; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)this = 0uLL;
  *((_OWORD *)this + 1) = 0u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_WORD *)this + 32) = 0;
  *((_BYTE *)this + 66) = 0;
  v5 = ISMTestMode::s_instance;
  *((_DWORD *)this + 15) = 1;
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    __debugbreak();
  }
  if ( !*(_BYTE *)v5 )
  {
    if ( ((1LL << gdwDeviceFamily) & 0xA) == 0 )
      goto LABEL_14;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX >= 0 )
      goto LABEL_9;
    _RAX = 0x40000000LL;
    __asm { cpuid }
    if ( __PAIR64__(_RCX, _RBX) != *(_QWORD *)"Microsoft Hv" )
      goto LABEL_9;
    if ( (_DWORD)_RDX != *(_DWORD *)"t Hv" )
      goto LABEL_9;
    if ( (int)_RAX < 1073741827 )
      goto LABEL_9;
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (_RBX & 0x1000) == 0 )
    {
LABEL_14:
      if ( ((1LL << gdwDeviceFamily) & 0x400) != 0 )
      {
        if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
        {
          wil::details::in1diag3::FailFast_GetLastError(
            retaddr,
            (void *)0x38,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
            v28);
          __debugbreak();
        }
        *((_BYTE *)this + 66) = 1;
      }
    }
    else
    {
LABEL_9:
      LibraryW = LoadLibraryW(L"User32.dll");
      v23 = (HMODULE)*((_QWORD *)this + 5);
      v24 = LibraryW;
      if ( v23 )
      {
        LastError = GetLastError();
        FreeLibrary(v23);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 5) = v24;
      if ( !v24 )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x2F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v22);
        __debugbreak();
      }
      ProcAddress = GetProcAddress(v24, "ShowSystemCursor");
      *((_QWORD *)this + 6) = ProcAddress;
      if ( !ProcAddress )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x32,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v27);
        JUMPOUT(0x18004C9E8LL);
      }
      *((_BYTE *)this + 64) = 1;
    }
  }
  return this;
}
