/*
 * XREFs of PerfLogExecutiveResourceWait @ 0x140331BF8
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003D1A0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpWaitForResource @ 0x140043230 (ExpWaitForResource.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400D7ED0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016A810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x1403315A0 (EtwpGetTrackingLockSlotForThread.c)
 */

void __fastcall PerfLogExecutiveResourceWait(int a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int16 Group; // r15
  unsigned __int8 GroupIndex; // r12
  unsigned __int64 v9; // rbx
  signed __int64 TrackingLockSlotForThread; // r8
  unsigned __int64 v11; // rbx
  int v12; // [rsp+30h] [rbp-50h]
  _QWORD v13[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  unsigned int v15; // [rsp+50h] [rbp-30h]
  unsigned int CurrentRunTime; // [rsp+54h] [rbp-2Ch]
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  _QWORD v20[2]; // [rsp+68h] [rbp-18h] BYREF

  v14 = 0LL;
  CurrentRunTime = 0;
  v19 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  v9 = __rdtsc();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  LOWORD(v12) = Group;
  HIWORD(v12) = GroupIndex;
  TrackingLockSlotForThread = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
  if ( TrackingLockSlotForThread )
  {
    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
    if ( ((a1 - 65572) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 66084) & 0xFFFFFFDF) == 0 )
      {
        if ( *(_DWORD *)(TrackingLockSlotForThread + 32) == 4
          && *(_WORD *)(TrackingLockSlotForThread + 24) == Group
          && *(_BYTE *)(TrackingLockSlotForThread + 26) == GroupIndex )
        {
          v11 = v9 - *(_QWORD *)TrackingLockSlotForThread;
        }
        else
        {
          v11 = 0LL;
        }
        if ( !(a3 % EtwpExecutiveResourceTimeout) )
        {
          v13[0] = 0LL;
          v18 = a1;
          v17 = a2;
          v15 = a3;
          v13[1] = v11;
          v14 = *(_QWORD *)TrackingLockSlotForThread;
          v19 = 0;
          v20[1] = 48LL;
          CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
          v20[0] = v13;
          EtwTraceKernelEvent((__int64)v20, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
        }
      }
    }
    else
    {
      *(_DWORD *)(TrackingLockSlotForThread + 24) = v12;
      *(_DWORD *)(TrackingLockSlotForThread + 32) = 4;
      *(_QWORD *)TrackingLockSlotForThread = v9;
    }
  }
}
