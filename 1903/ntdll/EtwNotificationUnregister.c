/*
 * XREFs of EtwNotificationUnregister @ 0x1800537B0
 * Callers:
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x180053750 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800537A0 (EtwEventUnregister.c)
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 *     sub_18006B580 @ 0x18006B580 (sub_18006B580.c)
 *     sub_18007CDAC @ 0x18007CDAC (sub_18007CDAC.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 *     sub_1800CC190 @ 0x1800CC190 (sub_1800CC190.c)
 *     sub_1800CC218 @ 0x1800CC218 (sub_1800CC218.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 * Callees:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800538B8 @ 0x1800538B8 (sub_1800538B8.c)
 *     sub_1800538F4 @ 0x1800538F4 (sub_1800538F4.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  v2 = HIWORD(a1);
  if ( !HIWORD(a1) )
    goto LABEL_13;
  v4 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (a1 & 1) != 0 || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) || v4 == qword_180163510 )
    goto LABEL_13;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
LABEL_13:
    RtlSetLastWin32Error(6LL);
    return 6LL;
  }
  sub_1800538F4(v4);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
    ZwClose(*(_QWORD *)(v4 + 88));
  v5 = *(_QWORD *)(v4 + 248);
  if ( v5 )
  {
    sub_180006330(v5);
    *(_QWORD *)(v4 + 248) = 0LL;
  }
  if ( a2 )
    *a2 = *(_QWORD *)(v4 + 56);
  sub_1800538B8((PSLIST_ENTRY)v4);
  return 0LL;
}
