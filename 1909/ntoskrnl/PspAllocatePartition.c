/*
 * XREFs of PspAllocatePartition @ 0x140785400
 * Callers:
 *     NtCreatePartition @ 0x1408CAF70 (NtCreatePartition.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A1C2B8 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     PspAddPartitionToGlobalList @ 0x14019ABF4 (PspAddPartitionToGlobalList.c)
 *     MmCreatePartition @ 0x14019AC70 (MmCreatePartition.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     ExpPartitionStart @ 0x140772F98 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x14077320C (ExpPartitionInitialize.c)
 *     PspCreatePartitionSystemProcess @ 0x1408CB158 (PspCreatePartitionSystemProcess.c)
 */

__int64 __fastcall PspAllocatePartition(
        int a1,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        __int64 a4,
        char a5,
        volatile signed __int64 **a6,
        __int64 a7)
{
  char v10; // r13
  char v11; // si
  int v12; // eax
  volatile signed __int64 *v13; // rbx
  int PartitionSystemProcess; // edi
  _QWORD *v16; // rcx
  __int64 v17; // rax
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-81h]
  PVOID Object; // [rsp+50h] [rbp-51h] BYREF
  ACCESS_MASK v23; // [rsp+58h] [rbp-49h]
  __int64 v24; // [rsp+60h] [rbp-41h] BYREF
  __int64 v25; // [rsp+68h] [rbp-39h]
  _BYTE v26[48]; // [rsp+70h] [rbp-31h] BYREF

  v23 = a2;
  v25 = a7;
  memset(v26, 0, sizeof(v26));
  v10 = 0;
  v11 = 0;
  Object = 0LL;
  v12 = ObCreateObjectEx(a3, (_DWORD *)PsPartitionType, a1, a3, v21, 128, 0, 0, &Object, 0LL);
  v13 = (volatile signed __int64 *)Object;
  PartitionSystemProcess = v12;
  if ( v12 < 0 )
    goto LABEL_9;
  v11 = 1;
  memset(Object, 0, 0x80uLL);
  *((_QWORD *)v13 + 3) = 2LL;
  ObfReferenceObjectWithTag((PVOID)v13, 0x64726148u);
  *((_QWORD *)v13 + 4) = 1LL;
  *((_QWORD *)v13 + 12) = 0LL;
  if ( a4 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a4 + 24)) <= 1 )
      __fastfail(0xEu);
    v13 = (volatile signed __int64 *)Object;
    *((_QWORD *)Object + 7) = a4;
  }
  else
  {
    if ( a5 )
      goto LABEL_4;
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
      __fastfail(0xEu);
    v13 = (volatile signed __int64 *)Object;
    *((_QWORD *)Object + 7) = PspSystemPartition;
  }
  if ( !a5 )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v26);
    PartitionSystemProcess = PspCreatePartitionSystemProcess(v13 + 13, v13 + 14);
    KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
    if ( PartitionSystemProcess < 0 )
      goto LABEL_9;
    PartitionSystemProcess = ExpPartitionInitialize((__int64)v13);
    if ( PartitionSystemProcess < 0 )
      goto LABEL_9;
    goto LABEL_5;
  }
LABEL_4:
  v10 = 1;
LABEL_5:
  PartitionSystemProcess = MmCreatePartition(v13, v10);
  if ( PartitionSystemProcess < 0 )
    goto LABEL_9;
  PspAddPartitionToGlobalList((__int64)v13);
  if ( a5 )
  {
    *((_DWORD *)v13 + 30) |= 1u;
    *a6 = v13;
    v13 = 0LL;
    Object = 0LL;
LABEL_8:
    PartitionSystemProcess = 0;
    goto LABEL_9;
  }
  PartitionSystemProcess = ExpPartitionStart(*((_QWORD *)v13 + 2));
  if ( PartitionSystemProcess >= 0 )
  {
    v11 = 0;
    PartitionSystemProcess = ObInsertObjectEx(v13, 0LL, v23, 0, 0, 0LL, &v24);
    if ( PartitionSystemProcess >= 0 )
    {
      v16 = (_QWORD *)v25;
      v17 = v24;
      *a6 = v13;
      *v16 = v17;
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( v13 )
  {
    if ( v11 )
      ObfDereferenceObject((PVOID)v13);
    v18 = _InterlockedExchangeAdd64(v13 + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v19 = v18 <= 1;
    v20 = v18 - 1;
    if ( v19 )
    {
      if ( v20 )
        __fastfail(0xEu);
      PsDereferencePartition((__int64)Object);
    }
    if ( PartitionSystemProcess < 0 )
      PsDereferencePartition((__int64)Object);
  }
  return (unsigned int)PartitionSystemProcess;
}
