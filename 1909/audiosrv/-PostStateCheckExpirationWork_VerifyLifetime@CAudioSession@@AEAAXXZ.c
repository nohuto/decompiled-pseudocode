/*
 * XREFs of ?PostStateCheckExpirationWork_VerifyLifetime@CAudioSession@@AEAAXXZ @ 0x18004E8C0
 * Callers:
 *     ?InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18004E8B0 (-InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18004E910 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 */

void __fastcall CAudioSession::PostStateCheckExpirationWork_VerifyLifetime(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 616);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  if ( *((_DWORD *)this + 102) != 2 )
    CAudioSession::PostStateCheckExpirationWork(this);
  if ( v1 )
    LeaveCriticalSection(v1);
}
