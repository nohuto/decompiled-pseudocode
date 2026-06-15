/*
 * XREFs of ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCVolumeGainStage@@@Z @ 0x1800CD0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CAudioSession::AddDuckingManagerGainStage(CAudioSession *this, struct CVolumeGainStage *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm1_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 56);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 36));
    v5 = *((_QWORD *)this + 56);
    v6 = *((float *)a2 + 14);
    if ( *(float *)(v5 + 56) > v6 && !*(_BYTE *)(v5 + 32) )
      *(float *)(v5 + 56) = v6;
  }
  else
  {
    *((_QWORD *)this + 56) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 13);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
