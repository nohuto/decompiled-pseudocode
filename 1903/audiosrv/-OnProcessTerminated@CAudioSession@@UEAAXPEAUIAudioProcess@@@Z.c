/*
 * XREFs of ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x1800430D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSession::OnProcessTerminated(CAudioSession *this, struct IAudioProcess *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 83LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  if ( *((_DWORD *)this + 102) == 2 )
  {
    if ( this != (CAudioSession *)-616LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  }
  else
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *((_QWORD *)this + 76));
    if ( this != (CAudioSession *)-616LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  }
}
