/*
 * XREFs of HdlspGetLine @ 0x14094D584
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14094CD1C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14094CE50 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x14094DEF8 (HdlspPutMore.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x14019B780 (sprintf_s.c)
 *     strcpy_s @ 0x14019B900 (strcpy_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     InbvPortGetByte @ 0x14032C44C (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x14032C5F8 (InbvPortPollOnly.c)
 *     HdlspSendStringAtBaud @ 0x14094E228 (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, size_t Size)
{
  KIRQL v4; // di
  KSPIN_LOCK *v5; // rcx
  int v6; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v9; // rcx
  unsigned __int8 v10; // dl
  PKSPIN_LOCK v11; // rax
  PKSPIN_LOCK v12; // r10
  char *v13; // rcx
  KSPIN_LOCK v14; // rcx
  KSPIN_LOCK v15; // rax
  PKSPIN_LOCK v16; // rax
  __int64 v17; // rcx
  KSPIN_LOCK v18; // rdx
  char v19; // al
  KSPIN_LOCK v20; // rdx
  __int64 v21; // r8
  char *v22; // rcx
  char v23; // al
  PKSPIN_LOCK v24; // rdi
  size_t v25; // r8
  const void *v26; // rdx
  PKSPIN_LOCK v27; // rax
  PKSPIN_LOCK v28; // rcx
  unsigned __int8 v29; // [rsp+40h] [rbp+18h] BYREF

  if ( (HeadlessGlobals[6] & 2) != 0 )
    v4 = -1;
  else
    v4 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v5 = HeadlessGlobals;
  v6 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v6 & 0x10) != 0 )
  {
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(HeadlessGlobals);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v4);
    }
    return 0;
  }
  else
  {
    *((_DWORD *)HeadlessGlobals + 12) = v6 | 0x10;
    if ( v4 != 0xFF )
    {
      KxReleaseSpinLock(v5);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
      {
        v9 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v9);
      }
      __writecr8(v4);
    }
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14))
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v29) )
          {
            v10 = v29;
          }
          else
          {
            v10 = 0;
            v29 = 0;
          }
          v11 = HeadlessGlobals;
          if ( !v10 )
            goto LABEL_42;
          *(_BYTE *)(HeadlessGlobals[11] + HeadlessGlobals[4]) = v10;
          v12 = HeadlessGlobals;
          if ( !*((_BYTE *)HeadlessGlobals + 117) || v29 != 10 )
            break;
          *((_BYTE *)HeadlessGlobals + 117) = 0;
        }
        *((_BYTE *)HeadlessGlobals + 117) = v29 == 13;
        if ( v29 == 10 || v29 == 13 )
          break;
        switch ( v29 )
        {
          case 8u:
          case 0x7Fu:
            if ( v12[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v14 = ++v12[11];
            v15 = v12[4];
            goto LABEL_45;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
            v11 = HeadlessGlobals;
LABEL_42:
            *((_DWORD *)v11 + 12) &= ~0x10u;
            return 0;
          default:
            v13 = (char *)v12[3];
            if ( v12[11] == 78 )
            {
              sprintf_s(v13, 0x50uLL, "\b%c", v29);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v13, 0x50uLL, "%c", v29);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v14 = HeadlessGlobals[11];
      v15 = HeadlessGlobals[4];
LABEL_45:
      *(_BYTE *)(v14 + v15) = 0;
      v16 = HeadlessGlobals;
      ++HeadlessGlobals[11];
      v17 = v16[11] - 1;
      if ( v16[11] != 1 )
      {
        v18 = v16[4];
        do
        {
          v19 = *(_BYTE *)(v18 + v17);
          if ( v19 && v19 != 32 && v19 != 9 )
            break;
          --v17;
        }
        while ( v17 );
      }
      v20 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v20 + v17) )
        *(_BYTE *)(v20 + v17 + 1) = 0;
      v21 = 0LL;
      v22 = (char *)HeadlessGlobals[4];
      if ( *v22 )
      {
        do
        {
          v23 = v22[v21];
          if ( v23 != 9 && v23 != 32 )
            break;
          ++v21;
        }
        while ( v22[v21] );
        if ( v21 )
          strcpy_s(v22, 0x50uLL, &v22[v21]);
      }
    }
    v24 = HeadlessGlobals;
    v25 = HeadlessGlobals[11];
    v26 = (const void *)HeadlessGlobals[4];
    if ( Size < v25 )
    {
      memmove(a1, v26, Size);
      memmove((void *)v24[4], (const void *)(v24[4] + Size), v24[11] - Size);
      v28 = HeadlessGlobals;
      v27 = HeadlessGlobals + 6;
      *((_DWORD *)HeadlessGlobals + 12) |= 0x20u;
      v28[11] -= Size;
    }
    else
    {
      memmove(a1, v26, v25);
      v24[11] = 0LL;
      v27 = v24 + 6;
      *((_DWORD *)v24 + 12) &= ~0x20u;
    }
    *(_DWORD *)v27 &= ~0x10u;
    return 1;
  }
}
