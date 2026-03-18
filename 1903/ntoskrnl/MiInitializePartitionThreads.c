/*
 * XREFs of MiInitializePartitionThreads @ 0x14088B8C4
 * Callers:
 *     MmCreatePartition @ 0x14019A610 (MmCreatePartition.c)
 * Callees:
 *     MiCreateZeroThreadContext @ 0x14018837C (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x14018F9F4 (MiDeleteZeroThreadContext.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 */

__int64 __fastcall MiInitializePartitionThreads(_QWORD *StartContext)
{
  PKSTART_ROUTINE *v1; // r14
  unsigned int *v2; // rsi
  unsigned int v4; // ebp
  void *v5; // r12
  __int64 v6; // rdi
  PVOID ZeroThreadContext; // rax
  NTSTATUS v8; // r15d
  _QWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+84h] [rbp+Ch]
  HANDLE ThreadHandle; // [rsp+88h] [rbp+10h] BYREF

  v11 = 0;
  v10[0] = MiZeroPageThread;
  v1 = (PKSTART_ROUTINE *)v10;
  v12 = 1;
  v10[1] = MiPartitionWorkingSetManager;
  v2 = (unsigned int *)&v11;
  v4 = 0;
  v5 = *(void **)(StartContext[21] + 112LL);
  while ( 1 )
  {
    v6 = *v2;
    if ( !(_DWORD)v6 )
    {
      ZeroThreadContext = MiCreateZeroThreadContext(0LL, 0);
      StartContext[924] = ZeroThreadContext;
      if ( !ZeroThreadContext )
        return 3221225626LL;
    }
    v8 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, v5, 0LL, *v1, StartContext);
    if ( v8 < 0 )
      break;
    ++v4;
    ++v2;
    StartContext[v6 + 16] = ThreadHandle;
    ++v1;
    if ( v4 >= 2 )
      return 0LL;
  }
  if ( !(_DWORD)v6 )
  {
    MiDeleteZeroThreadContext(StartContext[924]);
    ExFreePoolWithTag((PVOID)StartContext[924], 0);
    StartContext[924] = 0LL;
  }
  return (unsigned int)v8;
}
