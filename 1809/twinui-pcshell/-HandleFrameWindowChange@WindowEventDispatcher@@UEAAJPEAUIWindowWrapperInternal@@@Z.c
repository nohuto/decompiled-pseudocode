/*
 * XREFs of ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x180058B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::HandleFrameWindowChange(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v5; // eax
  const char *v6; // r9
  bool v7; // r14
  __int64 v8; // r12
  _QWORD *v9; // rdi
  _QWORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 0LL;
  v4 = *((_QWORD *)this + 53);
  if ( v4 == (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 336LL))(a2) )
  {
    v5 = IsShellManagedWindow(v4);
    try
    {
      if ( v5 )
      {
        v7 = 0;
        v8 = 0LL;
        v9 = (_QWORD *)*((_QWORD *)this + 43);
        v10 = (_QWORD *)*((_QWORD *)this + 44);
        while ( v9 != v10 )
        {
          if ( *v9 )
          {
            v11 = (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 240LL))(*v9);
            if ( v4 == (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 336LL))(*v9) || v4 == v11 )
            {
              v8 = *v9;
              if ( *v9 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
              v7 = v4 == v11;
              break;
            }
            v7 = 0;
          }
          ++v9;
        }
        v3 = v8;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 320LL))(v8);
      }
      v12 = *((_QWORD *)this + 54);
      if ( v12 != v3 )
      {
        if ( v12 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 328LL))(v12, 0LL);
        if ( v3 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 328LL))(v3, 1LL);
      }
      v13 = *((_QWORD *)this + 54);
      *((_QWORD *)this + 54) = v3;
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      *((_QWORD *)this + 53) = v4;
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x683,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v6);
    }
  }
  return 0LL;
}
