/*
 * XREFs of HdlspProcessDumpCommand @ 0x14098CB80
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14098BD28 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14098BE60 (HdlspDispatch.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     RtlTimeToTimeFields @ 0x1401453D0 (RtlTimeToTimeFields.c)
 *     sprintf_s @ 0x1401A65D0 (sprintf_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlUnicodeStringToAnsiString @ 0x140667020 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x14098CF24 (HdlspPutMore.c)
 *     HdlspPutString @ 0x14098CFC4 (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  int v2; // eax
  KIRQL v3; // bl
  PKSPIN_LOCK v4; // rcx
  __int64 result; // rax
  unsigned __int16 v6; // dx
  char *v7; // rax
  unsigned int v8; // r14d
  unsigned int i; // r15d
  LARGE_INTEGER *v10; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  LARGE_INTEGER v12; // rdx
  unsigned __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  const char *v15; // rcx
  bool v16; // zf
  struct _KPRCB *v17; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v19; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v21; // [rsp+A8h] [rbp+38h] BYREF

  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = *((_DWORD *)HeadlessGlobals + 12);
  *(_DWORD *)(&v19.MaximumLength + 1) = 0;
  if ( (v2 & 2) != 0 )
    v3 = -1;
  else
    v3 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v4 = HeadlessGlobals;
  result = 0xFFFFLL;
  v6 = *((_WORD *)HeadlessGlobals + 49);
  if ( v6 != 0xFFFF )
  {
    v7 = (char *)HeadlessGlobals[3];
    v8 = 0;
    *((_DWORD *)HeadlessGlobals + 12) &= ~4u;
    v19.Buffer = v7;
    *(_DWORD *)&v19.Length = 5242880;
    for ( i = v6; ; i = (unsigned __int8)(i + 1) )
    {
      v10 = (LARGE_INTEGER *)(v4[2] + 56LL * i);
      if ( v3 != 0xFF )
      {
        KxReleaseSpinLock(v4);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v3);
      }
      RtlTimeToTimeFields(v10 + 1, &TimeFields);
      sprintf_s(
        (char *)HeadlessGlobals[3],
        0x50uLL,
        "%02d:%02d:%02d.%03d : ",
        TimeFields.Hour,
        TimeFields.Minute,
        TimeFields.Second,
        TimeFields.Milliseconds);
      HdlspPutString(HeadlessGlobals[3]);
      v12 = v10[6];
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(v12.QuadPart + 2 * v13) );
      if ( v13 >= 0x4F )
      {
        *(_WORD *)(v12.QuadPart + 158) = 0;
        v12 = v10[6];
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v12.QuadPart);
      RtlUnicodeStringToAnsiString(&v19, &DestinationString, 0);
      v3 = (HeadlessGlobals[6] & 2) != 0 ? -1 : KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      if ( (HeadlessGlobals[6] & 4) != 0 )
        break;
      HdlspPutString(HeadlessGlobals[3]);
      HdlspPutString("\r\n");
      v4 = HeadlessGlobals;
      ++v8;
      result = *((unsigned __int16 *)HeadlessGlobals + 48);
      if ( i == (_DWORD)result )
      {
        if ( v3 == 0xFF )
          return result;
        goto LABEL_52;
      }
      if ( a1 && v8 > 0x14 )
      {
        if ( v3 != 0xFF )
        {
          KxReleaseSpinLock(HeadlessGlobals);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
          {
            v14 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
          __writecr8(v3);
        }
        HdlspPutMore(&v21);
        if ( (HeadlessGlobals[6] & 2) != 0 )
          v3 = -1;
        else
          v3 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
        if ( v21 )
        {
          v15 = "\r\n";
          goto LABEL_45;
        }
        v4 = HeadlessGlobals;
        if ( (HeadlessGlobals[6] & 4) != 0 )
        {
          v15 = "New log entries have been added while waiting, command aborted.\r\n";
LABEL_45:
          result = HdlspPutString(v15);
          v16 = v3 == 0xFFu;
          goto LABEL_50;
        }
        v8 = 0;
      }
    }
    result = HdlspPutString("New log entries have been added during dump, command aborted.\r\n");
    v16 = v3 == 0xFF;
LABEL_50:
    if ( v16 )
      return result;
    v4 = HeadlessGlobals;
LABEL_52:
    KxReleaseSpinLock(v4);
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v3 >= 2u )
      goto LABEL_57;
    goto LABEL_56;
  }
  if ( v3 == 0xFF )
    return result;
  KxReleaseSpinLock(HeadlessGlobals);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
LABEL_56:
    v17 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v17);
  }
LABEL_57:
  result = v3;
  __writecr8(v3);
  return result;
}
