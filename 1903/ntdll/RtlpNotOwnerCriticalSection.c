/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800E6B30
 * Callers:
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

_RTL_CRITICAL_SECTION *__fastcall RtlpNotOwnerCriticalSection(_RTL_CRITICAL_SECTION *a1)
{
  PPEB_LDR_DATA Ldr; // r8
  _RTL_CRITICAL_SECTION *result; // rax
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // eax
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = &stru_18015F4F8, a1 == &stru_18015F4F8)
    && (result = (_RTL_CRITICAL_SECTION *)NtCurrentTeb(), Ldr->ShutdownThreadId != (HANDLE)result[1].SpinCount) )
  {
    if ( !dword_180165428 )
      goto LABEL_20;
    v4 = NtCurrentTeb();
    WowTebOffset = v4->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v4 = (struct _TEB *)((char *)v4 + WowTebOffset);
    }
    else
    {
      v4 = 0LL;
    }
    result = (_RTL_CRITICAL_SECTION *)LODWORD(v4->NtTib.Self);
    if ( !result->RecursionCount || !*(_BYTE *)((unsigned int)result->RecursionCount + 0x28LL) )
    {
LABEL_20:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          0x65u,
          0,
          "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1->OwningThread);
        __debugbreak();
      }
      v6 = qword_180165350;
      v7 = dword_180166018;
      if ( !dword_180166018 )
      {
        v8 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
        if ( v8 < 0 )
          RtlRaiseStatus(v8);
        v7 = ProcessInformation;
        dword_180166018 = ProcessInformation;
      }
      v10 = __ROR8__(v6, 64 - (v7 & 0x3F)) ^ v7;
      RtlRaiseStatus(-1073741212);
    }
  }
  return result;
}
