/*
 * XREFs of ?s_OnTimer@CTimer@LambdaHelpers@@CAXPEAUHWND__@@I_KK@Z @ 0x180237540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LambdaHelpers::CTimer::s_OnTimer(HWND a1, __int64 a2, __int64 a3)
{
  struct LambdaHelpers::CTimer *v4; // rbx
  struct LambdaHelpers::CTimer *v5; // rdi

  v4 = 0LL;
  AcquireSRWLockShared(&LambdaHelpers::CTimer::s_rwLock);
  v5 = LambdaHelpers::CTimer::s_pTimerList;
  if ( LambdaHelpers::CTimer::s_pTimerList )
  {
    do
    {
      if ( *((_QWORD *)v5 + 4) == a3 )
        break;
      v5 = (struct LambdaHelpers::CTimer *)*((_QWORD *)v5 + 5);
    }
    while ( v5 );
    if ( v5 )
    {
      (*(void (__fastcall **)(struct LambdaHelpers::CTimer *))(*(_QWORD *)v5 + 8LL))(v5);
      v4 = v5;
    }
  }
  ReleaseSRWLockShared(&LambdaHelpers::CTimer::s_rwLock);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct LambdaHelpers::CTimer *))(*(_QWORD *)v4 + 32LL))(v4);
    (*(void (__fastcall **)(struct LambdaHelpers::CTimer *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
