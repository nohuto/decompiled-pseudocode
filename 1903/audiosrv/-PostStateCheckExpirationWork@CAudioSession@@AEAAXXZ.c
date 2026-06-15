/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18004DA00
 * Callers:
 *     ?PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ @ 0x18004D9B0 (-PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CD720 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSession::PostStateCheckExpirationWork(CAudioSession *this)
{
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
    ThreadPool,
    *((_QWORD *)this + 76));
}
