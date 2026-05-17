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

struct _TEB *__fastcall RtlpNotOwnerCriticalSection(const void **a1)
{
  struct _PEB_LDR_DATA *Ldr; // r8
  struct _TEB *result; // rax
  struct _TEB *v4; // rcx
  __int64 SpareUlong0; // rax
  int InformationProcess; // eax
  int v7; // [rsp+40h] [rbp+8h]

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = (struct _TEB *)&off_18015F4F8, a1 == (const void **)&off_18015F4F8)
    && (result = NtCurrentTeb(), Ldr->ShutdownThreadId != result->ClientId.UniqueThread) )
  {
    if ( !dword_180165428 )
      goto LABEL_20;
    v4 = NtCurrentTeb();
    SpareUlong0 = (int)v4->SpareUlong0;
    if ( (_DWORD)SpareUlong0 )
    {
      if ( (int)SpareUlong0 >= 0 )
        v4 = (struct _TEB *)((char *)v4 + SpareUlong0);
    }
    else
    {
      v4 = 0LL;
    }
    result = (struct _TEB *)LODWORD(v4->NtTib.Self);
    if ( !HIDWORD(result->NtTib.StackBase) || !*(_BYTE *)(HIDWORD(result->NtTib.StackBase) + 0x28LL) )
    {
LABEL_20:
      if ( NtCurrentPeb()->BeingDebugged )
      {
        DbgPrintEx(
          101,
          0,
          "NTDLL: Calling thread (%p) not owner of CritSect: %p  Owner ThreadId: %p\n",
          NtCurrentTeb()->ClientId.UniqueThread,
          a1,
          a1[2]);
        __debugbreak();
      }
      if ( !dword_180166018 )
      {
        InformationProcess = ZwQueryInformationProcess();
        if ( InformationProcess < 0 )
          RtlRaiseStatus((unsigned int)InformationProcess);
        dword_180166018 = v7;
      }
      RtlRaiseStatus(3221226084LL);
    }
  }
  return result;
}
