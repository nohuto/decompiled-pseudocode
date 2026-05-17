/*
 * XREFs of sub_18000A434 @ 0x18000A434
 * Callers:
 *     EtwEventSetInformation @ 0x18000A3E0 (EtwEventSetInformation.c)
 * Callees:
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009FE70 (ZwTraceControl.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18000A434(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 v5; // rbx
  int v6; // r15d
  __int64 v7; // rax
  _BYTE *v8; // rsi
  int v9; // r14d
  NTSTATUS v10; // eax
  NTSTATUS v11; // edi
  ULONG v12; // edi
  __int64 Heap; // rax
  unsigned int v15; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v17; // [rsp+48h] [rbp-61h]
  _BYTE v18[120]; // [rsp+50h] [rbp-59h] BYREF

  if ( !HIWORD(a1)
    || (v5 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v12 = 6;
LABEL_15:
    RtlSetLastWin32Error(v12);
    return v12;
  }
  RtlAcquireSRWLockExclusive(v5 + 64);
  v6 = 120;
  *(_DWORD *)(v5 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset(v18, 0, sizeof(v18));
  v7 = *(_QWORD *)(v5 + 88);
  v8 = v18;
  v17 = a3;
  v9 = 0;
  v16[0] = v7;
  v16[1] = a2;
  while ( 1 )
  {
    v10 = ZwTraceControl(30LL, v16, 24LL, v8, v6, &v15);
    v11 = v10;
    if ( v10 != -1073741789 )
      break;
    if ( v8 != v18 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v15);
    v6 = v15;
    v8 = (_BYTE *)Heap;
    if ( !Heap )
    {
      v11 = -1073741801;
      goto LABEL_22;
    }
    if ( (unsigned int)++v9 >= 0x10 )
      goto LABEL_22;
  }
  if ( !v10 )
  {
    v12 = 0;
    goto LABEL_8;
  }
LABEL_22:
  v12 = RtlNtStatusToDosError(v11);
  if ( v12 )
    goto LABEL_10;
LABEL_8:
  *(_WORD *)(v5 + 98) |= 0x4000u;
  if ( v15 )
    sub_18000AD08(v5, v8);
LABEL_10:
  *(_DWORD *)(v5 + 80) = 0;
  RtlReleaseSRWLockExclusive(v5 + 64);
  if ( v8 && v8 != v18 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v8);
  if ( v12 )
    goto LABEL_15;
  return v12;
}
