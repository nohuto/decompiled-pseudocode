/*
 * XREFs of ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0006714 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C014F7FC (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::PreProcessInput(CHidInput *this, void *a2, char a3)
{
  __int64 v4; // rax
  struct DelayZonePalmRejection *Instance; // rax
  DelayZonePalmRejection *v6; // rbx

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
  v6 = Instance;
  if ( *((_BYTE *)Instance + 9) )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)Instance + 14),
      4u,
      0xDu,
      0xBu,
      (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids);
    *((_BYTE *)v6 + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(v6);
  }
  return 0LL;
}
