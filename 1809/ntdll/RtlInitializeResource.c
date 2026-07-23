/*
 * XREFs of RtlInitializeResource @ 0x180061A10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFreeDebugInfo @ 0x18005C7C8 (RtlpFreeDebugInfo.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x180061BC0 (RtlLogStackBackTraceEx.c)
 *     RtlpAllocateDebugInfo @ 0x180061BF8 (RtlpAllocateDebugInfo.c)
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtCreateSemaphore @ 0x1800A1A30 (NtCreateSemaphore.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  __int64 DebugInfo; // rax
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  int v6; // esi
  HANDLE v7; // rax
  HANDLE SemaphoreHandle; // [rsp+58h] [rbp+10h] BYREF
  HANDLE v9; // [rsp+60h] [rbp+18h] BYREF

  DebugInfo = RtlpAllocateDebugInfo();
  v3 = DebugInfo;
  if ( !DebugInfo )
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(DebugInfo + 36) = 0;
  v4 = RtlLogStackBackTraceEx(1LL);
  *(_WORD *)(v3 + 2) = v4;
  *(_WORD *)(v3 + 44) = HIWORD(v4);
  v5 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v5 < 0 )
  {
    RtlpFreeDebugInfo((char *)v3);
    RtlRaiseStatus(v5);
  }
  v6 = NtCreateSemaphore(&v9, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo((char *)v3);
    RtlRaiseStatus(v6);
  }
  v7 = SemaphoreHandle;
  Resource->NumberOfWaitingShared = 0;
  Resource->NumberOfWaitingExclusive = 0;
  Resource->NumberOfActive = 0;
  Resource->ExclusiveOwnerThread = 0LL;
  Resource->Flags = 0;
  Resource->SharedSemaphore = v7;
  Resource->ExclusiveSemaphore = v9;
  Resource->DebugInfo = (PRTL_RESOURCE_DEBUG)v3;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
