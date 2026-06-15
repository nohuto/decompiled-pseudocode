/*
 * XREFs of ?Initialize@CApplication@@IEAAJPEBG_K@Z @ 0x18000DED8
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18000DA90 (-CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z.c)
 * Callees:
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D6F4 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplication::Initialize(CApplication *this, const unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 **v3; // rsi
  void *v5; // rbp
  DWORD LastError; // ebx
  signed int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  BOOL v12; // eax
  __int64 v13; // rax
  signed int v14; // eax

  v3 = (unsigned __int16 **)((char *)this + 24);
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v5);
    SetLastError(LastError);
  }
  *v3 = 0LL;
  v9 = CoAllocString(a2, v3);
  if ( v9 >= 0 )
  {
    v10 = CApplication::s_lastAppToken + 1;
    *((_QWORD *)this + 80) = a3;
    *((_DWORD *)this + 4) = v10;
    v11 = *a2;
    CApplication::s_lastAppToken = v10;
    v12 = v11 != 0;
    *((_DWORD *)this + 149) = v12;
    *((_DWORD *)this + 148) = v12;
    if ( !v11 )
    {
      *((_DWORD *)this + 52) = 1;
      *((_DWORD *)this + 54) = 2;
      *((_DWORD *)this + 81) = 2;
      *((_DWORD *)this + 82) = 2;
    }
    v13 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
            ThreadPool,
            CApplication::SoundLevelChangeCompletionCallback,
            this);
    *((_QWORD *)this + 33) = v13;
    if ( v13 )
    {
      return 0;
    }
    else
    {
      v14 = GetLastError();
      v9 = (unsigned __int16)v14 | 0x80070000;
      if ( v14 <= 0 )
        return (unsigned int)v14;
    }
  }
  return (unsigned int)v9;
}
