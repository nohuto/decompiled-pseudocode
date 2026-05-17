/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1800FE520
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     TpPostWork @ 0x1800148A0 (TpPostWork.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x180074B90 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1800A2E50 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A2E70 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A3BB0 (ZwUpdateWnfStateData.c)
 *     RtlpCtContextFree @ 0x1800FE788 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1800FE7E4 (RtlpCtContextInit.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int WnfStateData; // ebx
  unsigned __int64 Heap; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int16 v6; // [rsp+40h] [rbp-9h]
  int v7; // [rsp+44h] [rbp-5h]
  unsigned int v8; // [rsp+48h] [rbp-1h]
  _PEB_LDR_DATA **v9; // [rsp+50h] [rbp+7h] BYREF
  __int128 v10; // [rsp+58h] [rbp+Fh]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  __int128 v13; // [rsp+80h] [rbp+37h] BYREF

  v9 = 0LL;
  v10 = 0uLL;
  v12 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v13 = 0uLL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
  WnfStateData = RtlGUIDFromString(&DestinationString.Length, (__int64)&v13);
  if ( WnfStateData < 0 )
    return (unsigned int)WnfStateData;
  if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
    return (unsigned int)-1073741823;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 4096LL);
  if ( Heap )
  {
    WnfStateData = ZwQueryWnfStateData();
    if ( WnfStateData >= 0 )
    {
      WnfStateData = NtQueryWnfStateNameInformation();
      if ( WnfStateData >= 0 )
      {
        if ( v7 )
        {
          WnfStateData = NtQueryWnfStateNameInformation();
          if ( WnfStateData >= 0 )
          {
            v6 = 4096;
            if ( Heap == -8LL )
            {
              WnfStateData = -1073741811;
            }
            else
            {
              WnfStateData = 0;
              *(_OWORD *)(Heap + 8) = v10;
              *(_OWORD *)(Heap + 24) = v13;
              *(_DWORD *)(Heap + 40) = 16;
              v6 = 36;
            }
            if ( WnfStateData >= 0 )
            {
              *(_QWORD *)Heap = 0LL;
              *(_DWORD *)Heap = 0;
              *(_DWORD *)(Heap + 4) = -1;
              *(_DWORD *)Heap = 4 * (v6 & 0xFFF | 0x100000);
              WnfStateData = RtlpCtContextInit(&v9, v8);
              if ( WnfStateData >= 0 )
              {
                WnfStateData = ZwUpdateWnfStateData();
                if ( WnfStateData >= 0 )
                {
                  TpPostWork(*v9, v3, v4);
                  goto LABEL_23;
                }
              }
              if ( v9 )
                RtlpCtContextFree(v9, v3, v4);
            }
          }
        }
        else
        {
          WnfStateData = -1073741823;
        }
      }
    }
  }
  else
  {
    WnfStateData = -1073741670;
  }
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
LABEL_23:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)WnfStateData;
}
