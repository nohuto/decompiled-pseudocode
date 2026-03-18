/*
 * XREFs of ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0006714 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C014F7FC (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(CHidInput *this)
{
  struct DelayZonePalmRejection *Instance; // rax
  DelayZonePalmRejection *v2; // rbx

  Instance = DelayZonePalmRejection::GetInstance();
  v2 = Instance;
  if ( *((_BYTE *)Instance + 9) )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)Instance + 14),
      4u,
      0xDu,
      0xBu,
      (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids);
    *((_BYTE *)v2 + 9) = 0;
    DelayZonePalmRejection::DispatchBufferedInputFrames(v2);
  }
  return 0LL;
}
