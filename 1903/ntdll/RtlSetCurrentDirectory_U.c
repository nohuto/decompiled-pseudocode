/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x180076540
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_1800285E0 @ 0x1800285E0 (sub_1800285E0.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800766DC @ 0x1800766DC (sub_1800766DC.c)
 *     sub_18007696C @ 0x18007696C (sub_18007696C.c)
 *     sub_180076A04 @ 0x180076A04 (sub_180076A04.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v1; // rax
  PVOID ProcessHeap; // r14
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rdi
  unsigned int MaximumLength; // esi
  SIZE_T i; // r8
  NTSTATUS v8; // ebx
  unsigned int v9; // eax
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  NTSTATUS v12; // esi
  __int64 v13; // r8
  HANDLE *v14; // rbx
  __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+32h] [rbp-Eh] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF
  char v19; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)sub_1800766DC(PathName) )
    return 0;
  if ( (unsigned int)sub_1800285E0((__int64)PathName) )
    return -1073741565;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = (unsigned int)(v10 + 4) )
  {
    BaseAddress = RtlAllocateHeap(ProcessHeap, 0, i);
    if ( !BaseAddress )
      return -1073741801;
    v15 = 0;
    v8 = sub_18007696C(MaximumLength, &v16);
    if ( v8 < 0 )
      goto LABEL_22;
    v9 = sub_180027B70(&PathName->Length, MaximumLength, (WCHAR *)BaseAddress, 0LL, 0LL, (__int64)&v19);
    v10 = v9;
    if ( !v9 )
    {
      v8 = -1073741773;
      goto LABEL_22;
    }
    v11 = v16;
    if ( v10 <= (unsigned __int64)v16 - 4 )
      goto LABEL_9;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    MaximumLength = v10 + 4;
  }
  v11 = v16;
LABEL_9:
  if ( (unsigned int)v10 > v11 )
  {
    v8 = -1073741562;
    goto LABEL_22;
  }
  v8 = sub_18007696C((unsigned int)v10, &v15);
  if ( v8 < 0 )
  {
LABEL_22:
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    return v8;
  }
  v12 = sub_180076A04(&v15, v16, &v18);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v12 >= 0 )
  {
    RtlEnterCriticalSection(&stru_180164FE0);
    v13 = v18;
    v14 = (HANDLE *)qword_180165B70;
    ProcessParameters->CurrentDirectory.Handle = *(HANDLE *)(v18 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(PWCH *)(v13 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v13 + 24);
    qword_180165B70 = (PVOID)v13;
    RtlLeaveCriticalSection(&stru_180164FE0);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
      {
        ZwClose(v14[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      }
    }
  }
  return v12;
}
