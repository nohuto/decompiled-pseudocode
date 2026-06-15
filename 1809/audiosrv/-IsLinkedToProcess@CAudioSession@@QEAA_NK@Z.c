/*
 * XREFs of ?IsLinkedToProcess@CAudioSession@@QEAA_NK@Z @ 0x18002D11C
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CAudioSession::IsLinkedToProcess(CAudioSession *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  char v7; // bl

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 776);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 776));
  v5 = (_QWORD *)*((_QWORD *)this + 102);
  v6 = (_QWORD *)*((_QWORD *)this + 103);
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 40LL))(*v5) == a2 )
      break;
    ++v5;
  }
  v7 = 1;
LABEL_7:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v7;
}
