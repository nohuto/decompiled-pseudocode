/*
 * XREFs of DbgkpOpenHandles @ 0x14080FD70
 * Callers:
 *     NtWaitForDebugEvent @ 0x140811500 (NtWaitForDebugEvent.c)
 * Callees:
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 */

void __fastcall DbgkpOpenHandles(__int64 a1, void *a2, void *a3)
{
  void *v5; // rsi
  struct _KPROCESS *v6; // r8
  _QWORD *v7; // rsi
  struct _KPROCESS *Process; // r8
  _QWORD *v9; // rdi

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v9 = (_QWORD *)(a1 + 24);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *v9 = 0LL;
      break;
    case 3:
      v7 = (_QWORD *)(a1 + 32);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 32)) < 0 )
        *v7 = 0LL;
      if ( ObOpenObjectByPointer(a2, 0, 0LL, 0x12067Bu, (POBJECT_TYPE)PsProcessType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *(_QWORD *)(a1 + 24) = 0LL;
      v5 = *(void **)(a1 + 48);
      if ( v5 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((ULONG_PTR)Process, v5, Process, (__int64 *)(a1 + 48), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 48) = 0LL;
        goto LABEL_14;
      }
      break;
    case 9:
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
        v6 = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((ULONG_PTR)v6, v5, v6, (__int64 *)(a1 + 24), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 24) = 0LL;
LABEL_14:
        ObCloseHandle(v5, 0);
      }
      break;
  }
}
