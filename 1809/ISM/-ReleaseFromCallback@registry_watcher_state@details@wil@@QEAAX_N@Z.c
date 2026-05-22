/*
 * XREFs of ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x1800F5740
 * Callers:
 *     _lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_ @ 0x1800F5800 (_lambda_1f7d91c801a964f38e999207b709b9ee_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800F5B68 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

void __fastcall wil::details::registry_watcher_state::ReleaseFromCallback(
        wil::details::registry_watcher_state *this,
        char a2)
{
  RTL_SRWLOCK *v2; // rsi
  struct _TP_WAIT *v5; // rcx
  unsigned int v6; // edx
  DWORD LastError; // ebx

  v2 = (RTL_SRWLOCK *)((char *)this + 144);
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 35, 0xFFFFFFFF) == 1 )
  {
    v5 = (struct _TP_WAIT *)*((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = 0LL;
    CloseThreadpoolWait(v5);
    if ( v2 )
    {
      LastError = GetLastError();
      ReleaseSRWLockExclusive(v2);
      SetLastError(LastError);
    }
    if ( this )
      wil::details::registry_watcher_state::`scalar deleting destructor'(this, v6);
  }
  else
  {
    if ( a2 )
      SetThreadpoolWait(*((PTP_WAIT *)this + 16), *((HANDLE *)this + 15), 0LL);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
