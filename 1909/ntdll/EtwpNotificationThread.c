/*
 * XREFs of EtwpNotificationThread @ 0x180007E90
 * Callers:
 *     <none>
 * Callees:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0620 (NtTraceControl.c)
 */

void __fastcall EtwpNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _ETW_NOTIFICATION_HEADER *Heap; // rbx
  char v6; // si
  ULONG OutputBufferLength; // ebp
  NTSTATUS v8; // eax
  int v9; // edi
  ULONG ReturnLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 v11; // [rsp+38h] [rbp-140h] BYREF
  _BYTE OutputBuffer[256]; // [rsp+40h] [rbp-138h] BYREF

  v11 = -600000000LL;
  Heap = (_ETW_NOTIFICATION_HEADER *)OutputBuffer;
  v6 = 0;
  OutputBufferLength = 256;
  while ( 1 )
  {
    v8 = NtTraceControl(EtwReceiveNotification, 0LL, 0, Heap, OutputBufferLength, &ReturnLength);
    v9 = v8;
    if ( v8 < 0 )
      break;
    EtwDeliverDataBlock(Heap);
LABEL_4:
    if ( v9 != 261 )
      goto LABEL_5;
  }
  if ( v8 != -1073741789 )
    goto LABEL_4;
  if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  OutputBufferLength = ReturnLength;
  Heap = (_ETW_NOTIFICATION_HEADER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
  if ( Heap )
  {
    v9 = 261;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_5:
  TpSetWaitEx(a3, a2, (PLARGE_INTEGER)((unsigned __int64)&v11 & -(__int64)(v6 != 0)), 0LL);
  if ( Heap != (_ETW_NOTIFICATION_HEADER *)OutputBuffer )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
}
