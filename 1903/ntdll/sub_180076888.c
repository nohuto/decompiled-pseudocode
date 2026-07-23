/*
 * XREFs of sub_180076888 @ 0x180076888
 * Callers:
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_1800766DC @ 0x1800766DC (sub_1800766DC.c)
 *     RtlGetCurrentDirectory_U @ 0x1800767A0 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005D8C0 @ 0x18005D8C0 (sub_18005D8C0.c)
 *     sub_180076A04 @ 0x180076A04 (sub_180076A04.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwFsControlFile @ 0x18009CE00 (ZwFsControlFile.c)
 */

unsigned __int16 *__fastcall sub_180076888(char a1)
{
  unsigned __int16 *v2; // rbx
  int v3; // esi
  int v5; // edi
  NTSTATUS v6; // eax
  char v7; // bp
  __int64 v8; // rdx
  PVOID v9; // rdi
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rsi
  volatile signed __int32 *v11; // rcx
  __int16 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+10h] BYREF

  while ( 1 )
  {
    RtlEnterCriticalSection(&stru_180164FE0);
    v2 = (unsigned __int16 *)qword_180165B70;
    if ( !qword_180165B70 )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)qword_180165B70);
    v3 = *((_DWORD *)v2 + 4);
    RtlLeaveCriticalSection(&stru_180164FE0);
    if ( !a1 )
      return v2;
    v5 = MEMORY[0x7FFE02DC];
    if ( (v2[20] & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v6 = ZwFsControlFile(*((HANDLE *)v2 + 1), 0LL, 0LL, 0LL, &IoStatusBlock, 0x90028u, 0LL, 0, 0LL, 0);
    if ( v6 >= 0 )
    {
      if ( (v2[20] & 1) == 0 )
      {
        RtlEnterCriticalSection(&stru_180164FE0);
        *((_DWORD *)v2 + 4) = v5;
        RtlLeaveCriticalSection(&stru_180164FE0);
      }
      return v2;
    }
    if ( v6 != -1073741806 && v6 != -1073741202 )
      return v2;
    v7 = 0;
    if ( (int)sub_180076A04(v2 + 12, v2[13], &BaseAddress) < 0 )
    {
      v8 = v2[13];
      v13 = *((_QWORD *)v2 + 4);
      v12 = 6;
      if ( (int)sub_180076A04(&v12, v8, &BaseAddress) < 0 )
        return v2;
      v7 = 1;
    }
    v9 = BaseAddress;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)BaseAddress = 2;
    RtlEnterCriticalSection(&stru_180164FE0);
    if ( qword_180165B70 == v2 )
      break;
    RtlLeaveCriticalSection(&stru_180164FE0);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      ZwClose(*((HANDLE *)v2 + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    v11 = (volatile signed __int32 *)BaseAddress;
    *(_DWORD *)BaseAddress = 1;
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      ZwClose(*((HANDLE *)BaseAddress + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  qword_180165B70 = v9;
  ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v9 + 12);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = (PWCH)*((_QWORD *)v9 + 4);
  ProcessParameters->CurrentDirectory.Handle = (HANDLE)*((_QWORD *)v9 + 1);
  if ( v7 )
    sub_18005D8C0(**((_WORD **)v2 + 4));
  RtlLeaveCriticalSection(&stru_180164FE0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    ZwClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return (unsigned __int16 *)BaseAddress;
}
