/*
 * XREFs of EtwpSetProviderTraits @ 0x1800760E4
 * Callers:
 *     EtwEventSetInformation @ 0x180076090 (EtwEventSetInformation.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A3A50 (NtTraceControl.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int16 v4; // r14
  __int64 v6; // rbx
  int v7; // r15d
  __int64 v8; // rax
  _BYTE *v9; // rsi
  int v10; // r14d
  NTSTATUS v11; // eax
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  NTSTATUS v14; // edi
  ULONG v15; // edi
  __int64 Heap; // rax
  unsigned int v18; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v20; // [rsp+48h] [rbp-61h]
  _BYTE v21[120]; // [rsp+50h] [rbp-59h] BYREF

  v4 = (__int16)a3;
  if ( !HIWORD(a1)
    || (v6 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v15 = 6;
LABEL_15:
    RtlSetLastWin32Error(v15);
    return v15;
  }
  RtlAcquireSRWLockExclusive(v6 + 64, a2, a3, a4);
  v7 = 120;
  *(_DWORD *)(v6 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset(v21, 0, sizeof(v21));
  v8 = *(_QWORD *)(v6 + 88);
  v9 = v21;
  v20 = v4;
  v10 = 0;
  v19[0] = v8;
  v19[1] = a2;
  while ( 1 )
  {
    v11 = NtTraceControl(30LL, v19, 24LL, v9, v7, &v18);
    v14 = v11;
    if ( v11 != -1073741789 )
      break;
    if ( v9 != v21 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v18);
    v7 = v18;
    v9 = (_BYTE *)Heap;
    if ( !Heap )
    {
      v14 = -1073741801;
      goto LABEL_22;
    }
    if ( (unsigned int)++v10 >= 0x10 )
      goto LABEL_22;
  }
  if ( !v11 )
  {
    v15 = 0;
    goto LABEL_8;
  }
LABEL_22:
  v15 = RtlNtStatusToDosError(v14);
  if ( v15 )
    goto LABEL_10;
LABEL_8:
  *(_WORD *)(v6 + 98) |= 0x4000u;
  if ( v18 )
    EtwpUpdateEnableInfoAndCallback(v6, (__int64)v9, v12, v13);
LABEL_10:
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
  if ( v9 && v9 != v21 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
  if ( v15 )
    goto LABEL_15;
  return v15;
}
