/*
 * XREFs of ?Initialize@CApplication@@IEAAJPEBG_K@Z @ 0x180011138
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180010CF0 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180019274 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplication::Initialize(CApplication *this, const unsigned __int16 *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  void *v4; // r14
  DWORD LastError; // ebx
  __int64 v9; // r9
  signed int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  BOOL v13; // eax
  __int64 v14; // rax
  signed int v15; // eax

  v3 = (_QWORD *)((char *)this + 24);
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v4);
    SetLastError(LastError);
  }
  *v3 = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a2[v9] );
  v10 = _AllocStringWorker<CTCoAllocPolicy>(this, a2, a2);
  if ( v10 >= 0 )
  {
    v11 = CApplication::s_lastAppToken + 1;
    *((_QWORD *)this + 79) = a3;
    *((_DWORD *)this + 4) = v11;
    v12 = *a2;
    CApplication::s_lastAppToken = v11;
    v13 = v12 != 0;
    *((_DWORD *)this + 149) = v13;
    *((_DWORD *)this + 148) = v13;
    if ( !v12 )
    {
      *((_DWORD *)this + 52) = 1;
      *((_DWORD *)this + 54) = 2;
      *((_DWORD *)this + 81) = 2;
      *((_DWORD *)this + 82) = 2;
    }
    v14 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
            ThreadPool,
            CApplication::SoundLevelChangeCompletionCallback,
            this);
    *((_QWORD *)this + 33) = v14;
    if ( v14 )
    {
      return 0;
    }
    else
    {
      v15 = GetLastError();
      v10 = (unsigned __int16)v15 | 0x80070000;
      if ( v15 <= 0 )
        return (unsigned int)v15;
    }
  }
  return (unsigned int)v10;
}
