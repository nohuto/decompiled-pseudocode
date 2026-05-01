/*
 * XREFs of ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18005C500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall NotificationDispatcher::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v5; // rbx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r15
  _QWORD *i; // r14
  unsigned __int64 j; // rdi
  __int64 v11; // rcx
  LONG_PTR v13; // [rsp+20h] [rbp-58h]

  if ( a2 != 1025 )
    return DefWindowProcW(a1, a2, a3, a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v5 = WindowLongPtrW;
  v13 = WindowLongPtrW;
  if ( WindowLongPtrW )
  {
    _InterlockedIncrement((volatile signed __int32 *)(WindowLongPtrW + 36));
    v5 = WindowLongPtrW;
  }
  if ( v5 && !*(_BYTE *)(v5 + 88) )
  {
    *(_BYTE *)(v5 + 88) = 1;
    AcquireSRWLockExclusive((PSRWLOCK)(v5 + 80));
    v6 = *(_QWORD **)(v5 + 48);
    v7 = *(_QWORD *)(v5 + 56);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    if ( v5 != -80 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v5 + 80));
    v8 = &v6[v7];
    for ( i = v6; i != v8; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, 0LL);
    *(_BYTE *)(v5 + 88) = 0;
    AcquireSRWLockShared((PSRWLOCK)(v5 + 80));
    if ( *(_QWORD *)(v5 + 56) )
      PostMessageW(*(HWND *)(v5 + 40), 0x401u, 0LL, 0LL);
    if ( v5 != -80 )
      ReleaseSRWLockShared((PSRWLOCK)(v5 + 80));
    if ( v6 )
    {
      for ( j = 0LL; j < v7; ++j )
      {
        v11 = v6[j];
        if ( v11 )
        {
          v6[j] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      CoTaskMemFree(v6);
    }
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 36), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v13 + 72LL))(v13, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
