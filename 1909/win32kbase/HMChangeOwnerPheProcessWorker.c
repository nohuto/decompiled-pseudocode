/*
 * XREFs of HMChangeOwnerPheProcessWorker @ 0x1C0086AC8
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0028960 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMChangeOwnerProcess @ 0x1C0086A80 (HMChangeOwnerProcess.c)
 *     HMChangeOwnerPheProcess @ 0x1C0102D30 (HMChangeOwnerPheProcess.c)
 *     HMChangeOwnerProcessWorker @ 0x1C0102D70 (HMChangeOwnerProcessWorker.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0028C7C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002A070 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002BAC0 (GreAcquireHmgrSemaphore.c)
 *     GreIncQuotaCount @ 0x1C0086C20 (GreIncQuotaCount.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C0086C50 (EtwTraceUserUpdateHandleOwner.c)
 */

__int64 __fastcall HMChangeOwnerPheProcessWorker(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r15
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  HANDLE ProcessId; // rax
  unsigned __int8 v20; // cl
  unsigned int EtwUserHandleType; // eax
  unsigned int v22; // r8d
  __int64 result; // rax

  v3 = gpKernelHandleTable;
  v6 = (unsigned int)((a1 - (__int64)qword_1C0210758) >> 5);
  v7 = 3 * v6;
  v8 = *((_QWORD *)gpKernelHandleTable + 3 * v6 + 1);
  v9 = *((_QWORD *)gpKernelHandleTable + 3 * v6);
  --*(_DWORD *)(v8 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v9 + 80) & 8) == 0 && v8 != *(_QWORD *)(a2 + 416) )
  {
    if ( *(_QWORD *)(v9 + 88) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v11, v10, v12);
      GreIncQuotaCount(*(_QWORD *)(a2 + 416));
    }
    if ( *(_QWORD *)(v9 + 96) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v14, v13, v15);
      GreIncQuotaCount(*(_QWORD *)(a2 + 416));
    }
    if ( *(_QWORD *)(v9 + 128) )
    {
      GreAcquireHmgrSemaphore(a1, a2, a3);
      --*(_DWORD *)(v8 + 60);
      GreReleaseHmgrSemaphore(v17, v16, v18);
      GreIncQuotaCount(*(_QWORD *)(a2 + 416));
    }
  }
  *(_DWORD *)(v9 + 16) = 0;
  if ( (*((_BYTE *)&unk_1C01D0EAC + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a2 + 416);
  v3[v7 + 1] = *(_QWORD *)(a2 + 416);
  ProcessId = PsGetProcessId(**(PEPROCESS **)(a2 + 416));
  v20 = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = ProcessId;
  EtwUserHandleType = GetEtwUserHandleType(v20);
  EtwTraceUserUpdateHandleOwner(*(void **)v3[v7], EtwUserHandleType, v22);
  result = v3[v7 + 1];
  ++*(_DWORD *)(result + 68);
  return result;
}
