/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x140313D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1401C37F0 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x1401C3810 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 *     RtlpCtAllocateMemory @ 0x1408D7B44 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x1408D7B68 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1408D7BC4 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x1408D7C8C (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x1408D7D4C (RtlpCtQueueWorkItem.c)
 */

DWORD __cdecl RtlRaiseCustomSystemEventTrigger(PCUSTOM_SYSTEM_EVENT_TRIGGER_CONFIG TriggerConfig)
{
  signed int updated; // ebx
  _DWORD *Buffer; // rdi
  ULONG BufferSize; // [rsp+40h] [rbp-9h] BYREF
  int InfoBuffer; // [rsp+44h] [rbp-5h] BYREF
  ULONG ChangeStamp; // [rsp+48h] [rbp-1h] BYREF
  PVOID P; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+1Fh]
  WNF_STATE_NAME StateName; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  P = 0LL;
  v9 = 0uLL;
  StateName = (WNF_STATE_NAME)WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
  Buffer = (_DWORD *)RtlpCtAllocateMemory(0x1000uLL);
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
              if ( Buffer == (_DWORD *)-8LL )
              {
                updated = -1073741811;
              }
              else
              {
                updated = 0;
                *(_OWORD *)(Buffer + 2) = v9;
                *(GUID *)(Buffer + 6) = Guid;
                Buffer[10] = 16;
                BufferSize = 36;
              }
              if ( updated >= 0 )
              {
                *Buffer = 0;
                Buffer[1] = -1;
                *Buffer = 4 * (BufferSize & 0xFFF | 0x100000);
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
