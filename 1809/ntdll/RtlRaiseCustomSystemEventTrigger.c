/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1800FE520
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     TpPostWork @ 0x1800148A0 (TpPostWork.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x180074BA0 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A2E70 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A2E90 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A3BD0 (ZwUpdateWnfStateData.c)
 *     RtlpCtContextFree @ 0x1800FE788 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1800FE7E4 (RtlpCtContextInit.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  NTSTATUS updated; // ebx
  _QWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+40h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+44h] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+48h] [rbp-1h] BYREF
  PTP_WORK *v7; // [rsp+50h] [rbp+7h] BYREF
  __int128 v8; // [rsp+58h] [rbp+Fh]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp+1Fh] BYREF
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  v7 = 0LL;
  BufferSize = 0;
  v8 = 0uLL;
  StateName = (WNF_STATE_NAME)WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  if ( !TriggerConfig )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, TriggerConfig->TriggerId);
  updated = RtlGUIDFromString(&DestinationString, &Guid);
  if ( updated < 0 )
    return updated;
  if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
    return -1073741823;
  BufferSize = 4096;
  Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( Buffer )
  {
    updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
    if ( updated >= 0 )
    {
      updated = NtQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
      if ( updated >= 0 )
      {
        if ( InfoBuffer )
        {
          updated = NtQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
          if ( updated >= 0 )
          {
            if ( InfoBuffer )
            {
              BufferSize = 4096;
              if ( Buffer == (_QWORD *)-8LL )
              {
                updated = -1073741811;
              }
              else
              {
                updated = 0;
                *(_OWORD *)(Buffer + 1) = v8;
                *(GUID *)(Buffer + 3) = Guid;
                *((_DWORD *)Buffer + 10) = 16;
                BufferSize = 36;
              }
              if ( updated >= 0 )
              {
                *Buffer = 0LL;
                *(_DWORD *)Buffer = 0;
                *((_DWORD *)Buffer + 1) = -1;
                *(_DWORD *)Buffer = 4 * (BufferSize & 0xFFF | 0x100000);
                updated = RtlpCtContextInit(&v7, ChangeStamp);
                if ( updated >= 0 )
                {
                  updated = ZwUpdateWnfStateData(&StateName, Buffer, BufferSize + 8, 0LL, 0LL, ChangeStamp, 1u);
                  if ( updated >= 0 )
                  {
                    TpPostWork(*v7);
                    goto LABEL_25;
                  }
                }
                if ( v7 )
                  RtlpCtContextFree();
              }
            }
            else
            {
              updated = -1073741653;
            }
          }
        }
        else
        {
          updated = -1073741823;
        }
      }
    }
  }
  else
  {
    updated = -1073741670;
  }
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
LABEL_25:
  if ( Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  return updated;
}
