/*
 * XREFs of RtlpNotOwnerCriticalSection @ 0x1800E6C20
 * Callers:
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

struct _TEB *__fastcall RtlpNotOwnerCriticalSection(const void **a1)
{
  _PEB_LDR_DATA *Ldr; // r8
  struct _TEB *result; // rax
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax
  __int64 v6; // rbx
  unsigned int v7; // edx
  NTSTATUS v8; // eax
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h]

  Ldr = NtCurrentPeb()->Ldr;
  if ( !Ldr->ShutdownInProgress
    || (result = (struct _TEB *)&LdrpLoaderLock, a1 == (const void **)&LdrpLoaderLock)
    && (result = NtCurrentTeb(), Ldr->ShutdownThreadId != result->ClientId.UniqueThread) )
  {
    if ( !UseWOW64 )
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
      v6 = RtlpUnhandledExceptionFilter;
      v7 = `RtlpGetCookieValue'::`2'::CookieValue;
      if ( !`RtlpGetCookieValue'::`2'::CookieValue )
      {
        v8 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
        if ( v8 < 0 )
          RtlRaiseStatus((unsigned int)v8);
        v7 = ProcessInformation;
        `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
      }
      v10 = __ROR8__(v6, 64 - (v7 & 0x3F)) ^ v7;
      RtlRaiseStatus(3221226084LL);
    }
  }
  return result;
}
