/*
 * XREFs of ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x18005C770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::HandleFrameWindowChange(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  int v5; // eax
  const char *v6; // r9
  bool v7; // r15
  _QWORD *v8; // rsi
  _QWORD *v9; // r13
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)this + 52);
  if ( v3 == (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2) )
  {
    v4 = 0LL;
    v5 = IsShellManagedWindow(v3);
    try
    {
      if ( v5 )
      {
        v7 = 0;
        v8 = (_QWORD *)*((_QWORD *)this + 42);
        v9 = (_QWORD *)*((_QWORD *)this + 43);
        while ( v8 != v9 )
        {
          if ( *v8 )
          {
            v10 = (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 256LL))(*v8);
            if ( v3 == (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 352LL))(*v8) || v3 == v10 )
            {
              v4 = *v8;
              if ( *v8 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
              v7 = v3 == v10;
              break;
            }
          }
          ++v8;
        }
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 336LL))(v4);
      }
      v11 = *((_QWORD *)this + 53);
      if ( v11 != v4 )
      {
        if ( v11 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 344LL))(v11, 0LL);
        if ( v4 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, 1LL);
      }
      v12 = *((_QWORD *)this + 53);
      *((_QWORD *)this + 53) = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      *((_QWORD *)this + 52) = v3;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x71B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v6);
    }
  }
  return 0LL;
}
