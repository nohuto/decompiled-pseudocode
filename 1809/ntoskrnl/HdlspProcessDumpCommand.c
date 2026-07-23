/*
 * XREFs of HdlspProcessDumpCommand @ 0x14094DB74
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14094CD1C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14094CE50 (HdlspDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     sprintf_s @ 0x14019B780 (sprintf_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x14094DEF8 (HdlspPutMore.c)
 *     HdlspPutString @ 0x14094DF98 (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  KIRQL v2; // bl
  PKSPIN_LOCK v3; // rcx
  __int64 result; // rax
  unsigned __int16 v5; // dx
  char *v6; // rax
  unsigned int v7; // r15d
  unsigned int i; // r13d
  LARGE_INTEGER *v9; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  LARGE_INTEGER v11; // rdx
  unsigned __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  const char *v14; // rcx
  bool v15; // zf
  struct _KPRCB *v16; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v18; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v20; // [rsp+A8h] [rbp+38h] BYREF

  if ( (HeadlessGlobals[6] & 2) != 0 )
    v2 = -1;
  else
    v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v3 = HeadlessGlobals;
  result = 0xFFFFLL;
  v5 = *((_WORD *)HeadlessGlobals + 49);
  if ( v5 != 0xFFFF )
  {
    *((_DWORD *)HeadlessGlobals + 12) &= ~4u;
    v6 = (char *)v3[3];
    v7 = 0;
    *(_DWORD *)&v18.Length = 5242880;
    v18.Buffer = v6;
    for ( i = v5; ; i = (unsigned __int8)(i + 1) )
    {
      v9 = (LARGE_INTEGER *)(v3[2] + 56LL * i);
      if ( v2 != 0xFF )
      {
        KxReleaseSpinLock(v3);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v2);
      }
      RtlTimeToTimeFields(v9 + 1, &TimeFields);
      sprintf_s(
        (char *)HeadlessGlobals[3],
        0x50uLL,
        "%02d:%02d:%02d.%03d : ",
        TimeFields.Hour,
        TimeFields.Minute,
        TimeFields.Second,
        TimeFields.Milliseconds);
      HdlspPutString(HeadlessGlobals[3]);
      v11 = v9[6];
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(v11.QuadPart + 2 * v12) );
      if ( v12 >= 0x4F )
      {
        *(_WORD *)(v11.QuadPart + 158) = 0;
        v11 = v9[6];
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v11.QuadPart);
      RtlUnicodeStringToAnsiString(&v18, &DestinationString, 0);
      v2 = (HeadlessGlobals[6] & 2) != 0 ? -1 : KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      if ( (HeadlessGlobals[6] & 4) != 0 )
        break;
      HdlspPutString(HeadlessGlobals[3]);
      HdlspPutString("\r\n");
      v3 = HeadlessGlobals;
      ++v7;
      result = *((unsigned __int16 *)HeadlessGlobals + 48);
      if ( i == (_DWORD)result )
      {
        if ( v2 == 0xFF )
          return result;
        goto LABEL_52;
      }
      if ( a1 && v7 > 0x14 )
      {
        if ( v2 != 0xFF )
        {
          KxReleaseSpinLock(HeadlessGlobals);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
          {
            v13 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v13);
          }
          __writecr8(v2);
        }
        HdlspPutMore(&v20);
        if ( (HeadlessGlobals[6] & 2) != 0 )
          v2 = -1;
        else
          v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
        if ( v20 )
        {
          v14 = "\r\n";
          goto LABEL_45;
        }
        v3 = HeadlessGlobals;
        if ( (HeadlessGlobals[6] & 4) != 0 )
        {
          v14 = "New log entries have been added while waiting, command aborted.\r\n";
LABEL_45:
          result = HdlspPutString(v14);
          v15 = v2 == 0xFFu;
          goto LABEL_50;
        }
        v7 = 0;
      }
    }
    result = HdlspPutString("New log entries have been added during dump, command aborted.\r\n");
    v15 = v2 == 0xFF;
LABEL_50:
    if ( v15 )
      return result;
    v3 = HeadlessGlobals;
LABEL_52:
    KxReleaseSpinLock(v3);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v2 >= 2u )
      goto LABEL_57;
    goto LABEL_56;
  }
  if ( v2 == 0xFF )
    return result;
  KxReleaseSpinLock(HeadlessGlobals);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
LABEL_56:
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v16);
  }
LABEL_57:
  result = v2;
  __writecr8(v2);
  return result;
}
