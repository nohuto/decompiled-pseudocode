/*
 * XREFs of EtwDeliverDataBlock @ 0x1800506D0
 * Callers:
 *     EtwpSendSessionNotification @ 0x180050354 (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x180050590 (EtwpNotificationThread.c)
 * Callees:
 *     EtwReplyNotification @ 0x180001D60 (EtwReplyNotification.c)
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFindGuidEntry @ 0x180020FF4 (EtwpFindGuidEntry.c)
 *     EtwpGetNextRegistration @ 0x180050A70 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180050BA4 (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x180050CB0 (EtwpProcessNotification.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050D6C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050D94 (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x180050DC4 (EtwpReferenceUmGuidEntry.c)
 *     EtwpAllocateUmGuidEntry @ 0x180050DE8 (EtwpAllocateUmGuidEntry.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  BOOLEAN ReplyRequested; // al
  ULONG v3; // r14d
  char v4; // r12
  ULONG Timeout; // eax
  char v6; // r13
  char v7; // si
  char v8; // r15
  bool v9; // zf
  _RTL_SRWLOCK *Registration; // rax
  __int64 NextRegistration; // rdi
  char v12; // r15
  ULONGLONG v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *GuidEntry; // rsi
  char v18; // dl
  _BYTE *v19; // rax
  int v20; // r9d
  unsigned int v21; // ecx
  ULONGLONG *v22; // r8
  __int64 v23; // rax
  _BYTE *v24; // rcx
  _QWORD *v25; // r8
  ULONG v26; // [rsp+30h] [rbp-18h]
  _QWORD v27[2]; // [rsp+38h] [rbp-10h] BYREF
  char v28; // [rsp+90h] [rbp+48h]
  char v29; // [rsp+98h] [rbp+50h] BYREF
  BOOLEAN v30; // [rsp+A0h] [rbp+58h]
  ULONG v31; // [rsp+A8h] [rbp+60h] BYREF

  ReplyRequested = Notification->ReplyRequested;
  v27[0] = 0LL;
  v3 = 0;
  v4 = 0;
  v30 = ReplyRequested;
  Timeout = Notification->Timeout;
  v6 = 0;
  v7 = 0;
  v31 = 0;
  v29 = 0;
  v8 = 0;
  v28 = 0;
  v9 = Notification->NotificationType == EtwNotificationTypeEnable;
  v26 = Timeout;
  EtwpReplySend = 0;
  if ( v9 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v8 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    NextRegistration = (__int64)Registration;
    if ( !Registration )
    {
      v12 = 0;
LABEL_7:
      v3 = 4201;
      goto LABEL_8;
    }
    RtlAcquireSRWLockExclusive(Registration + 8);
    v12 = 1;
    *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    EtwpProcessNotification(NextRegistration, Notification, v27, &v31, &v29);
    v14 = v27[0];
    v3 = v31;
    v4 = v29;
LABEL_12:
    if ( v4 || v7 )
      goto LABEL_13;
    goto LABEL_7;
  }
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
  {
LABEL_25:
    if ( !v8
      || !PrivateLoggerNotificationEntry
      || (v14 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88),
          Notification[1].NotificationType == EtwNotificationTypeLegacyEnable)
      || (GuidEntry = EtwpFindGuidEntry(&Notification->DestinationGuid.Data1)) == 0LL
      && (!Notification[1].NotificationType
       || (GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(&Notification->DestinationGuid)) == 0LL) )
    {
      v12 = v28;
      goto LABEL_7;
    }
    EtwpAcquireGuidEntryExclusive(GuidEntry, v16);
    v18 = BYTE2(Notification[1].NotificationSize);
    v19 = (char *)GuidEntry + 78;
    v20 = 0;
    v21 = 0;
    while ( !*(v19 - 2) || *v19 != v18 )
    {
      ++v21;
      v19 += 24;
      if ( v21 >= 4 )
      {
        v22 = 0LL;
        goto LABEL_40;
      }
    }
    v22 = &GuidEntry[2 * v21 + 7 + v21];
LABEL_40:
    if ( !v22 )
    {
      if ( !Notification[1].NotificationType )
        goto LABEL_42;
      v23 = 0LL;
      v24 = (char *)GuidEntry + 76;
      do
      {
        if ( !*v24 )
        {
          v25 = &GuidEntry[2 * v23 + 7 + v23];
          goto LABEL_52;
        }
        v23 = (unsigned int)(v23 + 1);
        v24 += 24;
      }
      while ( (unsigned int)v23 < 4 );
      v25 = 0LL;
LABEL_52:
      if ( !v25 )
        goto LABEL_42;
      *((_BYTE *)v25 + 22) = v18;
      EtwpReferenceUmGuidEntry(GuidEntry);
    }
    *v22 = Notification[1].Reserved2;
    v22[1] = *(_QWORD *)&Notification[1].Timeout;
    *((_BYTE *)v22 + 21) = Notification[1].NotificationSize;
    *((_DWORD *)v22 + 4) = Notification[1].Offset;
    *((_BYTE *)v22 + 20) = Notification[1].NotificationType != v20;
LABEL_42:
    if ( HIBYTE(Notification[1].TargetPID) == 1 )
    {
      GuidEntry[19] = *(_QWORD *)&Notification[1].TargetPID;
      *((_DWORD *)GuidEntry + 40) = Notification[1].NotificationType;
    }
    *((_DWORD *)GuidEntry + 12) = v20;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
    EtwpDereferenceUmGuidEntry(GuidEntry);
    v12 = v28;
    v7 = 1;
    goto LABEL_12;
  }
  do
  {
    v15 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( !v15 )
      v15 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v15 )
      goto LABEL_23;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v6 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, Notification, v27, &v31, &v29) )
      break;
    if ( v6 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v6 = 0;
    }
LABEL_23:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v4 = v29;
  v3 = v31;
  v28 = v6;
  if ( !v29 )
    goto LABEL_25;
  v14 = v27[0];
  v12 = v28;
LABEL_13:
  if ( v30 == 1 && !EtwpReplySend )
  {
    if ( v3 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
LABEL_17:
      Notification->NotificationSize = 72;
    }
    else if ( Notification->NotificationType == EtwNotificationTypeEnable )
    {
      goto LABEL_17;
    }
    Notification->Timeout = v26;
    Notification->ReplyRequested = 0;
    Notification->Reserved2 = v14;
    v3 = EtwReplyNotification(Notification);
  }
LABEL_8:
  if ( v12 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v3;
}
