/*
 * XREFs of PerfLogExecutiveResourceRelease @ 0x1403318D0
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x1403315A0 (EtwpGetTrackingLockSlotForThread.c)
 */

void __fastcall PerfLogExecutiveResourceRelease(int a1, __int64 a2, int a3, unsigned int a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v9; // r14
  unsigned __int8 GroupIndex; // al
  __int16 Group; // r12
  signed __int64 TrackingLockSlotForThread; // rax
  signed __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned int v16; // ecx
  unsigned __int8 v17; // [rsp+30h] [rbp-39h]
  _QWORD v19[6]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v20; // [rsp+70h] [rbp+7h] BYREF
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]

  memset(v19, 0, sizeof(v19));
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = __rdtsc();
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  Group = CurrentPrcb->Group;
  v17 = GroupIndex;
  if ( KeGetCurrentThread()[1].WaitBlock[0].Thread )
  {
    TrackingLockSlotForThread = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
    v13 = TrackingLockSlotForThread;
    if ( TrackingLockSlotForThread )
    {
      if ( *(_DWORD *)(TrackingLockSlotForThread + 32) )
      {
        ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        if ( *(_DWORD *)(TrackingLockSlotForThread + 36) < (unsigned int)(a3 + 1) )
          *(_DWORD *)(TrackingLockSlotForThread + 36) = a3 + 1;
        if ( ((a1 - 65570) & 0xFFFFFFDF) != 0 )
        {
          if ( ((a1 - 65586) & 0xFFFFFFDF) == 0 )
            *(_DWORD *)(TrackingLockSlotForThread + 32) = 2;
          return;
        }
        v14 = *(_QWORD *)(TrackingLockSlotForThread + 8);
        if ( v14 > 2 && *(_WORD *)(v13 + 24) == Group && *(_BYTE *)(v13 + 26) == v17 )
          v15 = v9 - v14;
        else
          v15 = 0LL;
        if ( *(_QWORD *)v13 > 1uLL
          && !((CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
              + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
             % EtwpExecutiveResourceContentionSampleRate)
          || (v16 = *(_DWORD *)(v13 + 44), a4 > v16) && !((a4 - v16) % EtwpExecutiveResourceContentionSampleRate)
          || !((CurrentPrcb->SynchCounters.ExecutiveResourceReleaseExclusiveCount
              + CurrentPrcb->SynchCounters.ExecutiveResourceReleaseSharedCount)
             % EtwpExecutiveResourceReleaseSampleRate) )
        {
          v19[4] = a2;
          LODWORD(v19[5]) = a1;
          v19[0] = *(_QWORD *)(v13 + 8);
          LODWORD(v19[3]) = *(_DWORD *)(v13 + 36);
          v19[1] = v15;
          v19[2] = *(_QWORD *)v13;
          HIDWORD(v19[5]) = a4 - *(_DWORD *)(v13 + 44);
          v22 = 0;
          v21 = 48;
          HIDWORD(v19[3]) = KeGetCurrentThread()[1].CurrentRunTime;
          v20 = v19;
          EtwTraceKernelEvent((__int64)&v20, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
        }
      }
      *(_DWORD *)(v13 + 28) = 0;
    }
  }
}
