/*
 * XREFs of ?Init@InputThreadState@CInputThread@@QEAAXXZ @ 0x1C008E9D0
 * Callers:
 *     ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C008E8BC (-DeclareThreadAsInput@CInputThread@@QEAA_NXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

void __fastcall CInputThread::InputThreadState::Init(CInputThread::InputThreadState *this)
{
  _QWORD *ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentThreadWin32Thread; // rax

  ThreadWin32Thread = (_QWORD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  *((_QWORD *)this + 2) = *ThreadWin32Thread;
  *((_DWORD *)this + 6) = (unsigned int)PsGetCurrentThreadId();
  *(_DWORD *)this = 1;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v4, v3, v5);
  if ( CurrentThreadWin32Thread )
    *(_DWORD *)(CurrentThreadWin32Thread + 48) = 1;
}
