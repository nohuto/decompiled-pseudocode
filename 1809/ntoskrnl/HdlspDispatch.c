/*
 * XREFs of HdlspDispatch @ 0x14094CE50
 * Callers:
 *     HeadlessDispatch @ 0x140186250 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x14094D904 (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     strcmp @ 0x140197040 (strcmp.c)
 *     sprintf_s @ 0x14019B780 (sprintf_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     InbvPortGetByte @ 0x14032C44C (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x14032C5F8 (InbvPortPollOnly.c)
 *     HdlspAddLogEntry @ 0x14094CAE0 (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x14094CD1C (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x14094D4BC (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x14094D584 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14094DB74 (HdlspProcessDumpCommand.c)
 *     HdlspPutData @ 0x14094DEA8 (HdlspPutData.c)
 *     HdlspPutString @ 0x14094DF98 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x14094E0C0 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x14094E184 (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x14094E228 (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x14094E25C (HdlspSetBlueScreenInformation.c)
 */

__int64 __fastcall HdlspDispatch(KSPIN_LOCK *a1, int *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  signed int v9; // ebp
  int v10; // r13d
  char v11; // si
  KIRQL v12; // r13
  int v13; // eax
  struct _KPRCB *v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  const char *v17; // r8
  int v18; // eax
  __int64 v19; // r9
  char *v20; // rcx
  unsigned int v21; // eax
  char Line; // al
  PKSPIN_LOCK v23; // rcx
  unsigned int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  PKSPIN_LOCK v27; // rax
  char DstBuf[80]; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  v9 = (int)a1;
  v10 = 1228800;
  v11 = 1;
  if ( (unsigned int)a1 <= 0x14 && _bittest(&v10, (unsigned int)a1) )
    goto LABEL_23;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v12 = -1;
  else
    v12 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  a1 = HeadlessGlobals;
  v13 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v13 & 0x40) == 0 )
  {
    *((_DWORD *)HeadlessGlobals + 12) = v13 | 0x40;
    if ( v12 != 0xFF )
    {
      KxReleaseSpinLock(a1);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v12);
    }
    v10 = 1228800;
LABEL_23:
    if ( v9 <= 16 )
    {
      if ( v9 == 16 )
      {
        if ( a4 && a5 && *a5 >= 0x20uLL )
        {
          v23 = HeadlessGlobals;
          *(_DWORD *)a4 = 1;
          *(_BYTE *)(a4 + 8) = 1;
          *(_BYTE *)(a4 + 9) = (v23[6] & 8) != 0;
          *(_DWORD *)(a4 + 24) = *((_DWORD *)v23 + 13);
          v24 = *((_DWORD *)v23 + 12);
          v25 = (v24 >> 9) & 7;
          if ( v25 || (v24 & 8) != 0 )
          {
            *(_DWORD *)(a4 + 12) = v25;
            *(_QWORD *)(a4 + 16) = v23[8];
          }
          else
          {
            *(_DWORD *)(a4 + 12) = 0;
            *(_QWORD *)(a4 + 16) = 0LL;
          }
          *(_BYTE *)(a4 + 28) = *((_BYTE *)v23 + 84);
          goto LABEL_141;
        }
        goto LABEL_43;
      }
      if ( v9 > 11 )
      {
        if ( v9 == 12 )
        {
          if ( a4 && a5 && *a5 == 1LL )
          {
            if ( (HeadlessGlobals[6] & 1) != 0 && InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14)) )
            {
              InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (_BYTE *)a4);
              goto LABEL_141;
            }
            goto LABEL_66;
          }
LABEL_43:
          v5 = -1073741811;
LABEL_141:
          *((_DWORD *)HeadlessGlobals + 12) &= ~0x40u;
          return v5;
        }
        if ( v9 != 13 )
        {
          if ( v9 == 14 )
          {
            *((_DWORD *)HeadlessGlobals + 12) = HeadlessGlobals[6] & 0xFFFFFFBD | 2;
          }
          else if ( (HeadlessGlobals[6] & 1) != 0 )
          {
            HdlspBugCheckProcessing();
          }
          return v5;
        }
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_43;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
          goto LABEL_77;
        }
      }
      else
      {
        if ( v9 != 11 )
        {
          if ( v9 != 1 )
          {
            if ( v9 != 2 )
            {
              if ( v9 == 3 )
              {
                if ( a2 )
                {
                  if ( (HeadlessGlobals[6] & 1) != 0 )
                    HdlspPutString(a2);
                  goto LABEL_141;
                }
              }
              else
              {
                if ( (unsigned int)(v9 - 4) > 6 )
                {
LABEL_39:
                  v5 = -1073741811;
                  goto LABEL_139;
                }
                if ( (HeadlessGlobals[6] & 1) == 0 )
                {
LABEL_139:
                  if ( (unsigned int)v9 <= 0x14 && _bittest(&v10, v9) )
                    return v5;
                  goto LABEL_141;
                }
                switch ( v9 )
                {
                  case 4:
                    v20 = "\x1B[2J";
                    goto LABEL_53;
                  case 5:
                    v20 = "\x1B[0J";
                    goto LABEL_53;
                  case 6:
                    v20 = "\x1B[0K";
                    goto LABEL_53;
                  case 7:
                    v20 = "\x1B[0m";
                    goto LABEL_53;
                  case 8:
                    v20 = "\x1B[7m";
                    goto LABEL_53;
                  case 9:
                    if ( a2 && a3 == 8 )
                    {
                      v18 = *a2;
                      v17 = "\x1B[%d;%dm";
                      v19 = (unsigned int)a2[1];
                      goto LABEL_47;
                    }
                    break;
                  case 10:
                    if ( a2 && a3 == 8 )
                    {
                      v17 = "\x1B[%d;%dH";
                      v18 = *a2 + 1;
                      v19 = (unsigned int)(a2[1] + 1);
LABEL_47:
                      sprintf_s(DstBuf, 0x50uLL, v17, v19, v18);
                      v20 = DstBuf;
LABEL_53:
                      HdlspSendStringAtBaud(v20);
                      goto LABEL_139;
                    }
                    break;
                  default:
                    goto LABEL_39;
                }
              }
              goto LABEL_43;
            }
            if ( a4 && a5 && *a5 == 1LL )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
              {
                if ( (unsigned __int8)HdlspGetLine(DstBuf, 0x50uLL) )
                {
                  if ( strcmp(DstBuf, "reboot") && strcmp(DstBuf, "shutdown") )
                    v11 = 0;
                  *(_BYTE *)a4 = v11;
                }
                goto LABEL_141;
              }
LABEL_66:
              *(_BYTE *)a4 = 0;
              goto LABEL_141;
            }
            goto LABEL_43;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_43;
          LOBYTE(a1) = *(_BYTE *)a2;
          v21 = HdlspEnableTerminal(a1);
LABEL_70:
          v5 = v21;
          goto LABEL_141;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_43;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14));
LABEL_77:
          *(_BYTE *)a4 = Line;
          goto LABEL_141;
        }
      }
      Line = 0;
      goto LABEL_77;
    }
    if ( v9 == 17 )
    {
      if ( a2 )
      {
        HdlspAddLogEntry(a2);
        goto LABEL_139;
      }
      return (unsigned int)-1073741811;
    }
    else
    {
      v26 = (unsigned int)(v9 - 18);
      if ( v9 == 18 )
      {
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v26) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v26);
          goto LABEL_141;
        }
        goto LABEL_43;
      }
      if ( v9 == 19 )
      {
        if ( a2 )
        {
          v21 = HdlspSetBlueScreenInformation(a2, a3);
          goto LABEL_70;
        }
        return 3221225485LL;
      }
      if ( v9 != 20 )
      {
        switch ( v9 )
        {
          case 21:
            if ( a4 && a5 && *a5 >= 0x10uLL )
            {
              *(_OWORD *)a4 = *(_OWORD *)((char *)HeadlessGlobals + 100);
              goto LABEL_141;
            }
            break;
          case 22:
            if ( a2 && a3 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutData(a2, a3);
              goto LABEL_141;
            }
            break;
          case 23:
            if ( a2 )
            {
              if ( (HeadlessGlobals[6] & 1) != 0 )
                HdlspPutWideString(a2);
              goto LABEL_141;
            }
            break;
          case 24:
            if ( a4 && a5 && *a5 >= 0xCuLL )
            {
              v27 = HeadlessGlobals;
              *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)HeadlessGlobals + 118);
              *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v27 + 126);
              goto LABEL_141;
            }
            break;
          default:
            goto LABEL_39;
        }
        goto LABEL_43;
      }
      if ( (HeadlessGlobals[6] & 3) == 3 )
      {
        if ( a2 && a3 == 4 )
        {
          HdlspSendBlueScreenInfo((unsigned int)*a2);
          HdlspSendStringAtBaud("\n\r!SAC>");
          return v5;
        }
        return 3221225485LL;
      }
    }
    return v5;
  }
  if ( v12 != 0xFF )
  {
    KxReleaseSpinLock(HeadlessGlobals);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v14 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
    __writecr8(v12);
  }
  return 3221225473LL;
}
