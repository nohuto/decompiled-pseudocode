/*
 * XREFs of ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x18001FB18
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x1800054E8 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CPlaybackManager::CreateInstance(struct CPlaybackManager **a1)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v3; // rax
  unsigned int v4; // ebx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = 0;
  if ( v3 )
  {
    v3[2] = 1;
    *(_QWORD *)v3 = &CPlaybackManager::`vftable'{for `CUnknown'};
    *((_QWORD *)v3 + 2) = &CPlaybackManager::`vftable'{for `ISessionInternalEvents'};
    v3[6] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    *a1 = (struct CPlaybackManager *)v3;
  }
  else
  {
    v4 = -2147024882;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_1f870d16066833bfd0de78f1b1f0ec8d_Traceguids, -2147024882);
    }
    AudPolicyLogError("CPlaybackManager::CreateInstance", 59, -2147024882);
  }
  return v4;
}
