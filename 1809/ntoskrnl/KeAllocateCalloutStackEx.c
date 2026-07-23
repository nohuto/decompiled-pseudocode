/*
 * XREFs of KeAllocateCalloutStackEx @ 0x14070DF40
 * Callers:
 *     KeAllocateCalloutStack @ 0x140759DA0 (KeAllocateCalloutStack.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     KeInitializeMutex @ 0x1400DD3C0 (KeInitializeMutex.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeAllocateCalloutStackEx(int a1, unsigned __int8 a2, __int64 a3, _QWORD *a4)
{
  char v5; // si
  _DWORD *PoolWithTag; // rbx
  unsigned int v7; // edi
  __int64 *v8; // r14
  __int64 KernelStack; // rax

  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225711LL;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( !a2 )
    return 3221225712LL;
  if ( a3 )
    return 3221225713LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a2 + 64, 0x6353654Bu);
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = 0;
  if ( a2 )
  {
    v8 = (__int64 *)(PoolWithTag + 16);
    while ( 1 )
    {
      KernelStack = MmCreateKernelStack(v5 != 0 ? 5 : 0, 0, 0LL);
      if ( !KernelStack )
        break;
      *v8 = KernelStack;
      ++v7;
      ++v8;
      if ( v7 >= a2 )
        goto LABEL_10;
    }
    while ( v7 )
      MmDeleteKernelStack(*(_QWORD *)&PoolWithTag[2 * --v7 + 16], v5);
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  else
  {
LABEL_10:
    *PoolWithTag = 1801548883;
    *((_BYTE *)PoolWithTag + 4) = v5;
    *((_BYTE *)PoolWithTag + 5) = a2;
    *((_BYTE *)PoolWithTag + 6) = 0;
    KeInitializeMutex((PRKMUTEX)(PoolWithTag + 2), 0);
    *a4 = PoolWithTag;
    return 0LL;
  }
}
