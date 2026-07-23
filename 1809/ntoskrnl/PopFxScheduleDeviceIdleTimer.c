/*
 * XREFs of PopFxScheduleDeviceIdleTimer @ 0x1400FE014
 * Callers:
 *     PopFxProcessWork @ 0x1400FE410 (PopFxProcessWork.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14018E2F8 (PopFxUpdateDeviceIdleTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     RtlULongLongSub @ 0x1400FE0E4 (RtlULongLongSub.c)
 */

char __fastcall PopFxScheduleDeviceIdleTimer(__int64 a1)
{
  char v2; // r10
  ULONGLONG v3; // rax
  ULONGLONG v4; // rcx
  ULONG v5; // r9d
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 8) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 488);
    v4 = v3 + *(_QWORD *)(a1 + 480);
    if ( v4 >= v3 )
    {
      pullResult = v4;
      if ( MEMORY[0xFFFFF78000000008] < v4 && RtlULongLongSub(v4, MEMORY[0xFFFFF78000000008], &pullResult) >= 0 )
      {
        if ( pullResult / 0x186A0 > 0xFFFFFFFF )
          v5 = -1;
        else
          v5 = pullResult / 0x186A0;
        KeSetCoalescableTimer((PKTIMER)(a1 + 352), (LARGE_INTEGER)-(__int64)pullResult, 0, v5, (PKDPC)(a1 + 416));
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 4u);
        return 1;
      }
    }
  }
  return v2;
}
