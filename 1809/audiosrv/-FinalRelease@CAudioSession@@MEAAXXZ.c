/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180014FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800150AC (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800320C0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x1800AEB44 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // rax
  unsigned __int16 v5[1024]; // [rsp+30h] [rbp-818h] BYREF

  if ( *((_BYTE *)this + 984) )
  {
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 4) + 64LL))((char *)this - 32);
    StringCchPrintfW(v5, 0x400uLL, L"Session %ws is missing a transition to inactive", v4, -2LL);
    LogProductionAssert(0x7206F6uLL, v5);
  }
  if ( *((_QWORD *)this + 71) )
  {
    CAudioSession::CancelInactiveTimer((CAudioSession *)((char *)this - 32));
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 71));
    *((_QWORD *)this + 71) = 0LL;
  }
  v2 = (_QWORD *)*((_QWORD *)this + 98);
  v3 = (_QWORD *)*((_QWORD *)this + 99);
  while ( v2 != v3 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 32LL))(*v2, (char *)this - 32);
    ++v2;
  }
  if ( *((_QWORD *)this + 72) )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 64LL))(ThreadPool);
    *((_QWORD *)this + 72) = 0LL;
  }
}
