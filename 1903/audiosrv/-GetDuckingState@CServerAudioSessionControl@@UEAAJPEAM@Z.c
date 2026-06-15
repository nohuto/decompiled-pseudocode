/*
 * XREFs of ?GetDuckingState@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x1800D2780
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetDuckingState(CServerAudioSessionControl *this, float *a2)
{
  __int64 v2; // rbx
  float v4; // xmm6_4
  __int64 v5; // rax
  bool v6; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]

  v2 = *((_QWORD *)this + 9);
  v4 = FLOAT_1_0;
  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v2 + 432);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *(_QWORD *)(v2 + 472);
  if ( v5 )
    v4 = fminf(*(float *)(v5 + 56), 1.0);
  v6 = v9 == 0;
  *a2 = v4;
  if ( !v6 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
