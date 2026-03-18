/*
 * XREFs of HMChangeOwnerThreadWorker @ 0x1C0086880
 * Callers:
 *     MarkThreadsObjects @ 0x1C0028A80 (MarkThreadsObjects.c)
 *     HMChangeOwnerThread @ 0x1C0086840 (HMChangeOwnerThread.c)
 * Callees:
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0028C7C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     LockObjectAssignment @ 0x1C00349A0 (LockObjectAssignment.c)
 *     EtwTraceUserUpdateHandleOwner @ 0x1C0086C50 (EtwTraceUserUpdateHandleOwner.c)
 */

LONG_PTR __fastcall HMChangeOwnerThreadWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  HANDLE ThreadId; // rax
  unsigned __int8 v10; // cl
  unsigned int EtwUserHandleType; // eax
  unsigned int v12; // r8d
  LONG_PTR result; // rax
  __int64 v14; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 CurrentProcessWin32Process; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 1) + 416LL);
  --*(_DWORD *)(v8 + 68);
  v5[v6 + 1] = a2;
  ThreadId = PsGetThreadId(*(PETHREAD *)a2);
  v10 = v7[24];
  *((_QWORD *)v7 + 1) = ThreadId;
  EtwUserHandleType = GetEtwUserHandleType(v10);
  EtwTraceUserUpdateHandleOwner(*(void **)v5[v6], EtwUserHandleType, v12);
  *(_QWORD *)(a1 + 16) = v5[v6 + 1];
  result = v5[v6 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 416) + 68LL);
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 892);
    --*(_DWORD *)(v3 + 892);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0
      && (int)IsFVisCountableSupported() >= 0
      && (unsigned int)FVisCountable(a1) )
    {
      ++*(_DWORD *)(a2 + 896);
      --*(_DWORD *)(v3 + 896);
    }
    result = *(_QWORD *)(v3 + 416);
    if ( *(_QWORD *)(a2 + 416) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0 )
        ClassPtr = 0LL;
      else
        ClassPtr = (__int64 *)GetClassPtr(
                                **(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL),
                                *(_QWORD *)(a2 + 416),
                                hModuleWin);
      if ( !ClassPtr )
      {
        v18 = *(_QWORD *)(a1 + 24);
        if ( v18 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 24LL) + 16LL) + 416LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (__int64 *)GetClassPtr(*((unsigned __int16 *)gpsi + 455), CurrentProcessWin32Process, hModuleWin);
      }
      if ( (int)IsDereferenceClassSupported() >= 0 )
        DereferenceClass(*(_QWORD *)(v3 + 416), a1);
      v16 = *ClassPtr;
      if ( *ClassPtr )
        v17 = *(_QWORD *)(v16 + 16);
      else
        v17 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v17;
      *(_QWORD *)(a1 + 136) = v16;
      result = IsReferenceClassSupported();
      if ( (int)result >= 0 )
      {
        result = ReferenceClass(*(_QWORD *)(a1 + 136), a1);
        if ( !(_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 136);
          ++*(_DWORD *)(result + 72);
        }
      }
    }
  }
  else if ( v7[24] == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v3 + 448));
  }
  return result;
}
