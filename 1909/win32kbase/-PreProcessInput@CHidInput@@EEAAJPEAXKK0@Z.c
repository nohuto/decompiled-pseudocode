/*
 * XREFs of ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017D340
 * Callers:
 *     <none>
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0024120 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0035C58 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01804C8 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, void *a2, char a3)
{
  __int64 v4; // rax
  int v5; // edx
  struct DelayZonePalmRejection *Instance; // rbx

  if ( (a3 & 0x1C) != 0 )
  {
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 48) )
      {
        HMAssignmentUnlock((__int64 *)(v4 + 48));
        *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) = 0LL;
        v4 = *((_QWORD *)this + 2);
      }
      if ( *(_QWORD *)(v4 + 56) )
      {
        HMAssignmentUnlock((__int64 *)(v4 + 56));
        *(_QWORD *)(*((_QWORD *)this + 2) + 56LL) = 0LL;
      }
    }
  }
  Instance = DelayZonePalmRejection::GetInstance();
  if ( *((_BYTE *)Instance + 9) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v5, 8, 11, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids);
    }
    *((_BYTE *)Instance + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(Instance);
  }
  return 0LL;
}
