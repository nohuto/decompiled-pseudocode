/*
 * XREFs of MiInitializePartitionThreads @ 0x1408530B0
 * Callers:
 *     MmCreatePartition @ 0x140190AB0 (MmCreatePartition.c)
 * Callees:
 *     MiCreateZeroThreadContext @ 0x14017F7AC (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x1401851F4 (MiDeleteZeroThreadContext.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInitializePartitionThreads(__int64 a1)
{
  __int64 *v1; // r14
  unsigned int *v2; // rsi
  unsigned int v4; // ebp
  ULONG_PTR v5; // r12
  __int64 v6; // rdi
  PVOID ZeroThreadContext; // rax
  int SystemThread; // r15d
  _QWORD v10[2]; // [rsp+50h] [rbp-38h] BYREF
  int v11; // [rsp+90h] [rbp+8h] BYREF
  int v12; // [rsp+94h] [rbp+Ch]
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF

  v11 = 0;
  v10[0] = MiZeroPageThread;
  v1 = v10;
  v12 = 1;
  v10[1] = MiPartitionWorkingSetManager;
  v2 = (unsigned int *)&v11;
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 112LL);
  while ( 1 )
  {
    v6 = *v2;
    if ( !(_DWORD)v6 )
    {
      ZeroThreadContext = MiCreateZeroThreadContext(0LL, 0);
      *(_QWORD *)(a1 + 6624) = ZeroThreadContext;
      if ( !ZeroThreadContext )
        return 3221225626LL;
    }
    SystemThread = PsCreateSystemThreadEx((__int64)&v13, 0x1FFFFF, 0LL, v5, 0LL, *v1, a1, 0LL, 0LL);
    if ( SystemThread < 0 )
      break;
    ++v4;
    ++v2;
    *(_QWORD *)(a1 + 8 * v6 + 128) = v13;
    ++v1;
    if ( v4 >= 2 )
      return 0LL;
  }
  if ( !(_DWORD)v6 )
  {
    MiDeleteZeroThreadContext(*(_QWORD *)(a1 + 6624));
    ExFreePoolWithTag(*(PVOID *)(a1 + 6624), 0);
    *(_QWORD *)(a1 + 6624) = 0LL;
  }
  return (unsigned int)SystemThread;
}
