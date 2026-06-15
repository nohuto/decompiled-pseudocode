/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x1800158FC
 * Callers:
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180003470 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ @ 0x180015894 (-PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800BEF30 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::PostStateCheckExpirationWork(CAudioSession *this)
{
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)this + 76));
}
