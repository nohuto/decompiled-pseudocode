/*
 * XREFs of LdrCallEnclave_0 @ 0x1800CDFC0
 * Callers:
 *     RtlEnclaveCallDispatch @ 0x1800A0560 (RtlEnclaveCallDispatch.c)
 *     LdrCallEnclave @ 0x1800CD350 (LdrCallEnclave.c)
 * Callees:
 *     sub_18001B2F8 @ 0x18001B2F8 (sub_18001B2F8.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwCallEnclave @ 0x18009D8B0 (ZwCallEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800A05D0 @ 0x1800A05D0 (sub_1800A05D0.c)
 *     sub_1800CDB44 @ 0x1800CDB44 (sub_1800CDB44.c)
 */

NTSTATUS __cdecl LdrCallEnclave_0(PENCLAVE_ROUTINE Routine, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 *v6; // rax
  __int64 *v7; // rdi
  NTSTATUS v8; // ebx

  v6 = sub_18001B2F8((unsigned __int64)Routine, 0);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
    sub_1800CDB44(v7);
    if ( *((_DWORD *)v7 + 14) == 16 )
      return sub_1800A05D0(Routine, 0LL, Flags, RoutineParamReturn);
    else
      return ZwCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
  }
  else
  {
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(PVOID))Routine)(*RoutineParamReturn);
  }
  return v8;
}
