/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1402F5890
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1401BAE70 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x1401BAE90 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     RtlpCtAllocateMemory @ 0x14089A968 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x14089A98C (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x14089A9E8 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x14089AAB0 (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x14089AB70 (RtlpCtQueueWorkItem.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  signed int updated; // ebx
  _QWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+40h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+44h] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+48h] [rbp-1h] BYREF
  PVOID P; // [rsp+50h] [rbp+7h] BYREF
  __int128 v8; // [rsp+58h] [rbp+Fh]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp+1Fh] BYREF
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  P = 0LL;
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
  Buffer = (_QWORD *)RtlpCtAllocateMemory(0x1000uLL);
  if ( Buffer )
  {
    updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
    if ( updated >= 0 )
    {
      updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
      if ( updated >= 0 )
      {
        if ( InfoBuffer )
        {
          updated = ZwQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
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
                updated = RtlpCtContextInit(&P, ChangeStamp);
                if ( updated >= 0 )
                {
                  updated = ZwUpdateWnfStateData(&StateName, Buffer, BufferSize + 8, 0LL, 0LL, ChangeStamp, 1u);
                  if ( updated >= 0 )
                  {
                    RtlpCtQueueWorkItem(*(_QWORD *)P);
                    goto LABEL_25;
                  }
                }
                if ( P )
                  RtlpCtContextFree(P);
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
    RtlpCtFreeMemory(Buffer);
  return updated;
}
