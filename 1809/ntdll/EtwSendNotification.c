/*
 * XREFs of EtwSendNotification @ 0x18004EC20
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x18000199C (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtTraceControl @ 0x1800A3A70 (NtTraceControl.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bp
  ULONG Timeout; // esi
  NTSTATUS v11; // eax
  ULONG v12; // edi
  ULONG ReplyCount; // r9d
  void *Reserved2; // rbp
  ULONG v15; // r10d
  char *v16; // rax
  ULONG ReturnLength; // [rsp+50h] [rbp-D8h] BYREF
  char v19; // [rsp+58h] [rbp-D0h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  Timeout = DataBlock->Timeout;
  if ( ReplyRequested == 1 )
  {
    DataBlock->Reserved2 = 0LL;
    if ( !Timeout )
      Timeout = 60000;
  }
  v11 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v11 )
    v12 = RtlNtStatusToDosError(v11);
  else
    v12 = 0;
  if ( ReplyRequested && !v12 )
  {
    ReplyCount = DataBlock->ReplyCount;
    Reserved2 = (void *)DataBlock->Reserved2;
    if ( ReplyCount )
    {
      v15 = 120;
      v16 = &v19;
      if ( DataBlock->NotificationType != EtwNotificationTypeEnable )
      {
        v15 = ReceiveDataBlockSize;
        v16 = (char *)ReceiveDataBlock;
      }
      v12 = EtwpReceiveReplyDataBlock(
              (int)Reserved2,
              Timeout,
              DataBlock->NotificationType == EtwNotificationTypeEnable,
              ReplyCount,
              v16,
              v15,
              ReplyReceived,
              ReplySizeNeeded,
              DataBlock->NotificationType);
    }
    if ( Reserved2 )
      NtClose(Reserved2);
  }
  return v12;
}
