/*
 * XREFs of HMChangeOwnerThread @ 0x1C0087540
 * Callers:
 *     MarkThreadsObjects @ 0x1C002E3F0 (MarkThreadsObjects.c)
 * Callees:
 *     LockObjectAssignment @ 0x1C002E5D0 (LockObjectAssignment.c)
 */

LONG_PTR __fastcall HMChangeOwnerThread(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  LONG_PTR result; // rax
  __int64 v10; // rcx
  __int64 *ClassPtr; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 1) + 424LL);
  --*(_DWORD *)(v8 + 68);
  v5[v6 + 1] = a2;
  *((_QWORD *)v7 + 1) = PsGetThreadId(*(PETHREAD *)a2);
  *(_QWORD *)(a1 + 16) = v5[v6 + 1];
  result = v5[v6 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 424) + 68LL);
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
    result = *(_QWORD *)(v3 + 424);
    if ( *(_QWORD *)(a2 + 424) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0 )
        ClassPtr = 0LL;
      else
        ClassPtr = (__int64 *)GetClassPtr(
                                **(unsigned __int16 **)(*(_QWORD *)(a1 + 112) + 8LL),
                                *(_QWORD *)(a2 + 424),
                                hModuleWin);
      if ( !ClassPtr )
      {
        v14 = *(_QWORD *)(a1 + 24);
        if ( v14 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 24LL) + 16LL) + 424LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (__int64 *)GetClassPtr(*((unsigned __int16 *)gpsi + 455), CurrentProcessWin32Process, hModuleWin);
      }
      if ( (int)IsDereferenceClassSupported() >= 0 )
        DereferenceClass(*(_QWORD *)(v3 + 424), a1);
      v12 = *ClassPtr;
      if ( *ClassPtr )
        v13 = *(_QWORD *)(v12 + 16);
      else
        v13 = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL) = v13;
      *(_QWORD *)(a1 + 112) = v12;
      result = IsReferenceClassSupported();
      if ( (int)result >= 0 )
      {
        result = ReferenceClass(*(_QWORD *)(a1 + 112), a1);
        if ( !(_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 112);
          ++*(_DWORD *)(result + 72);
        }
      }
    }
  }
  else if ( v7[24] == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v3 + 456));
  }
  return result;
}
