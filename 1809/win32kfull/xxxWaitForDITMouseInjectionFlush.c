/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1C011CAA8
 * Callers:
 *     xxxSendInput @ 0x1C00AE874 (xxxSendInput.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F1F8C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     xxxRemoveQueueCompletion @ 0x1C00BC4C0 (xxxRemoveQueueCompletion.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxWaitForDITMouseInjectionFlush()
{
  BOOL v0; // ebx
  __int64 v1; // rdx
  __int64 i; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int16 v6; // si
  NTSTATUS v7; // ebx
  __int64 result; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  while ( gbMouseInjectionBlockedOnDIT == 1 )
  {
    ++gcDITMouseInjectionWaiters;
    LeaveCrit();
    KeWaitForSingleObject(gpsemDITMouseInjectionWaiters, UserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  gbMouseInjectionBlockedOnDIT = 1;
  LeaveCrit();
  v0 = (unsigned __int8)InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter) != 0;
  EnterCrit(0LL, 1LL);
  if ( v0 )
  {
    v5 = *(_QWORD *)(gptiCurrent + 448LL);
    *(_DWORD *)(gptiCurrent + 1208LL) |= 0x400000u;
    v6 = *(_WORD *)(v5 + 10);
    Object[0] = gpkeDITMouseInjectionResponseEvent;
    Object[1] = *(PVOID *)(gptiCurrent + 1392LL);
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = 64;
    while ( 1 )
    {
      UserSessionSwitchLeaveCrit(i, v1, v3, v4);
      v7 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      EnterCrit(0LL, 1LL);
      if ( v7 != 1 )
        break;
      xxxRemoveQueueCompletion();
      for ( i = *(_QWORD *)(gptiCurrent + 448LL); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(gptiCurrent + 448LL) )
        xxxReceiveMessage(gptiCurrent);
      *(_WORD *)(i + 10) = 64;
    }
    *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v6;
    *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x400000u;
  }
  gbMouseInjectionBlockedOnDIT = 0;
  result = gcDITMouseInjectionWaiters;
  if ( gcDITMouseInjectionWaiters )
  {
    KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
    result = gcDITMouseInjectionWaiters;
    gcDITMouseInjectionWaiters = 0;
  }
  return result;
}
