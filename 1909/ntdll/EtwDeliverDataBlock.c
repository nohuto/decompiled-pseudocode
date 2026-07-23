/*
 * XREFs of EtwDeliverDataBlock @ 0x180007FD0
 * Callers:
 *     EtwpSendSessionNotification @ 0x180005D10 (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x180007E90 (EtwpNotificationThread.c)
 * Callees:
 *     EtwReplyNotification @ 0x180002310 (EtwReplyNotification.c)
 *     EtwpAllocateUmGuidEntry @ 0x180005F8C (EtwpAllocateUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1800062DC (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x18000630C (EtwpReferenceUmGuidEntry.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180006330 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpGetNextRegistration @ 0x18000835C (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18000844C (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x180008510 (EtwpProcessNotification.c)
 *     EtwpFindGuidEntry @ 0x18000AB50 (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v2; // r14d
  char v3; // r12
  char v4; // r13
  char v5; // si
  char v6; // r15
  bool v7; // zf
  _RTL_SRWLOCK *Registration; // rax
  __int64 NextRegistration; // rdi
  char v10; // r15
  ULONGLONG v11; // r13
  char *GuidEntry; // rsi
  __int64 v14; // rax
  char v15; // dl
  _BYTE *v16; // rax
  int v17; // r9d
  unsigned int v18; // ecx
  char *v19; // r8
  __int64 v20; // rax
  _BYTE *v21; // rcx
  char *v22; // r8
  ULONG Timeout; // [rsp+30h] [rbp-18h]
  _QWORD v24[2]; // [rsp+38h] [rbp-10h] BYREF
  char v25; // [rsp+90h] [rbp+48h]
  char v26; // [rsp+98h] [rbp+50h] BYREF
  BOOLEAN ReplyRequested; // [rsp+A0h] [rbp+58h]
  ULONG v28; // [rsp+A8h] [rbp+60h] BYREF

  v24[0] = 0LL;
  v2 = 0;
  v28 = 0;
  v3 = 0;
  v26 = 0;
  v4 = 0;
  v5 = 0;
  ReplyRequested = Notification->ReplyRequested;
  v6 = 0;
  Timeout = Notification->Timeout;
  v7 = Notification->NotificationType == EtwNotificationTypeEnable;
  v25 = 0;
  EtwpReplySend = 0;
  if ( v7 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v6 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    NextRegistration = (__int64)Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 8);
      v10 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, Notification, v24, &v28, &v26);
      v11 = v24[0];
      v2 = v28;
      v3 = v26;
      goto LABEL_7;
    }
    v10 = 0;
LABEL_14:
    LODWORD(GuidEntry) = 0;
LABEL_15:
    v2 = 4201;
    goto LABEL_10;
  }
  LODWORD(GuidEntry) = 0;
  NextRegistration = ((__int64 (*)(void))EtwpGetNextRegistration)();
  if ( !NextRegistration )
  {
LABEL_22:
    if ( v6 )
    {
      if ( PrivateLoggerNotificationEntry )
      {
        v11 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        if ( Notification[1].NotificationType != EtwNotificationTypeLegacyEnable )
        {
          GuidEntry = (char *)EtwpFindGuidEntry(&Notification->DestinationGuid);
          if ( GuidEntry )
            goto LABEL_28;
          if ( Notification[1].NotificationType )
          {
            GuidEntry = EtwpAllocateUmGuidEntry(&Notification->DestinationGuid.Data1);
            if ( !GuidEntry )
            {
              v10 = v25;
              goto LABEL_14;
            }
LABEL_28:
            EtwpAcquireGuidEntryExclusive((__int64)GuidEntry);
            v15 = BYTE2(Notification[1].NotificationSize);
            v16 = GuidEntry + 78;
            v17 = 0;
            v18 = 0;
            while ( !*(v16 - 2) || *v16 != v15 )
            {
              ++v18;
              v16 += 24;
              if ( v18 >= 4 )
              {
                v19 = 0LL;
                goto LABEL_32;
              }
            }
            v19 = &GuidEntry[16 * v18 + 56 + 8 * v18];
LABEL_32:
            if ( !v19 )
            {
              if ( !Notification[1].NotificationType )
                goto LABEL_40;
              v20 = 0LL;
              v21 = GuidEntry + 76;
              do
              {
                if ( !*v21 )
                {
                  v22 = &GuidEntry[16 * v20 + 56 + 8 * v20];
                  goto LABEL_37;
                }
                v20 = (unsigned int)(v20 + 1);
                v21 += 24;
              }
              while ( (unsigned int)v20 < 4 );
              v22 = 0LL;
LABEL_37:
              if ( !v22 )
                goto LABEL_40;
              v22[22] = v15;
              EtwpReferenceUmGuidEntry((__int64)GuidEntry);
            }
            *(_QWORD *)v19 = Notification[1].Reserved2;
            *((_QWORD *)v19 + 1) = *(_QWORD *)&Notification[1].Timeout;
            v19[21] = Notification[1].NotificationSize;
            *((_DWORD *)v19 + 4) = Notification[1].Offset;
            v19[20] = Notification[1].NotificationType != v17;
LABEL_40:
            if ( HIBYTE(Notification[1].TargetPID) == 1 )
            {
              *((_QWORD *)GuidEntry + 19) = *(_QWORD *)&Notification[1].TargetPID;
              *((_DWORD *)GuidEntry + 40) = Notification[1].NotificationType;
            }
            *((_DWORD *)GuidEntry + 12) = v17;
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
            EtwpDereferenceUmGuidEntry((__int64)GuidEntry);
            v10 = v25;
            v5 = 1;
LABEL_7:
            if ( v3 || v5 )
            {
              LODWORD(GuidEntry) = 0;
              goto LABEL_9;
            }
            goto LABEL_14;
          }
        }
      }
    }
    v10 = v25;
    goto LABEL_15;
  }
  do
  {
    v14 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( !v14 )
      v14 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v14 )
      goto LABEL_20;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, Notification, v24, &v28, &v26) )
      break;
    if ( v4 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v4 = 0;
    }
LABEL_20:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v3 = v26;
  v2 = v28;
  v25 = v4;
  if ( !v26 )
    goto LABEL_22;
  v11 = v24[0];
  v10 = v25;
LABEL_9:
  if ( ReplyRequested == 1 && !EtwpReplySend )
  {
    if ( v2 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
LABEL_58:
      Notification->NotificationSize = 72;
    }
    else if ( Notification->NotificationType == EtwNotificationTypeEnable )
    {
      goto LABEL_58;
    }
    Notification->Timeout = Timeout;
    Notification->ReplyRequested = 0;
    Notification->Reserved2 = v11;
    v2 = EtwReplyNotification(Notification);
  }
LABEL_10:
  if ( v10 )
  {
    *(_DWORD *)(NextRegistration + 80) = (_DWORD)GuidEntry;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v2;
}
