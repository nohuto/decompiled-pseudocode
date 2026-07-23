/*
 * XREFs of PspAllocatePartition @ 0x14075DC38
 * Callers:
 *     NtCreatePartition @ 0x14088E360 (NtCreatePartition.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409DA4B0 (PspInitializeSystemPartitionPhase0.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PspAddPartitionToGlobalList @ 0x140190A34 (PspAddPartitionToGlobalList.c)
 *     MmCreatePartition @ 0x140190AB0 (MmCreatePartition.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ExpPartitionStart @ 0x1407559EC (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x140755C54 (ExpPartitionInitialize.c)
 *     PspCreatePartitionSystemProcess @ 0x14088E548 (PspCreatePartitionSystemProcess.c)
 */

__int64 __fastcall PspAllocatePartition(
        int a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        char a5,
        volatile signed __int64 **a6,
        __int64 *a7)
{
  char v8; // si
  int PartitionSystemProcess; // edi
  volatile signed __int64 *v10; // rbx
  __int64 v12; // rax
  signed __int64 v13; // rax
  bool v14; // cc
  signed __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-71h]
  PVOID Object; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-39h]
  __int64 v19; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v20[48]; // [rsp+68h] [rbp-29h] BYREF

  v18 = a2;
  v8 = 0;
  Object = 0LL;
  PartitionSystemProcess = ObCreateObjectEx(a3, (_DWORD *)PsPartitionType, a1, a3, v16, 128, 0, 0, &Object, 0LL);
  if ( PartitionSystemProcess < 0 )
  {
    v10 = (volatile signed __int64 *)Object;
    goto LABEL_8;
  }
  v8 = 1;
  v10 = (volatile signed __int64 *)Object;
  memset(Object, 0, 0x80uLL);
  *((_QWORD *)v10 + 3) = 2LL;
  ObfReferenceObjectWithTag((PVOID)v10, 0x64726148u);
  *((_QWORD *)v10 + 4) = 1LL;
  *((_QWORD *)v10 + 12) = 0LL;
  if ( a4 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a4 + 24)) <= 1 )
      __fastfail(0xEu);
    v10 = (volatile signed __int64 *)Object;
    *((_QWORD *)Object + 7) = a4;
LABEL_16:
    if ( !a5 )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v20);
      PartitionSystemProcess = PspCreatePartitionSystemProcess(v10 + 13, v10 + 14);
      KiUnstackDetachProcess((__int64)v20, 0LL);
      if ( PartitionSystemProcess < 0 )
        goto LABEL_8;
      PartitionSystemProcess = ExpPartitionInitialize((__int64)v10);
      if ( PartitionSystemProcess < 0 )
        goto LABEL_8;
    }
    goto LABEL_4;
  }
  if ( !a5 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)PspSystemPartition + 3) <= 1 )
      __fastfail(0xEu);
    v10 = (volatile signed __int64 *)Object;
    *((_QWORD *)Object + 7) = PspSystemPartition;
    goto LABEL_16;
  }
LABEL_4:
  PartitionSystemProcess = MmCreatePartition(v10, a5);
  if ( PartitionSystemProcess < 0 )
    goto LABEL_8;
  PspAddPartitionToGlobalList((__int64)v10);
  if ( a5 )
  {
    *((_DWORD *)v10 + 30) |= 1u;
    *a6 = v10;
    v10 = 0LL;
    Object = 0LL;
LABEL_7:
    PartitionSystemProcess = 0;
    goto LABEL_8;
  }
  PartitionSystemProcess = ExpPartitionStart(*((_QWORD *)v10 + 2));
  if ( PartitionSystemProcess >= 0 )
  {
    v8 = 0;
    PartitionSystemProcess = ObInsertObjectEx(v10, 0LL, v18, 0, 0, 0LL, (unsigned __int64 *)&v19);
    if ( PartitionSystemProcess >= 0 )
    {
      v12 = v19;
      *a6 = v10;
      *a7 = v12;
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( v10 )
  {
    if ( v8 )
      ObfDereferenceObject((PVOID)v10);
    v13 = _InterlockedExchangeAdd64(v10 + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v14 = v13 <= 1;
    v15 = v13 - 1;
    if ( v14 )
    {
      if ( v15 )
        __fastfail(0xEu);
      PsDereferencePartition((__int64)Object);
    }
    if ( PartitionSystemProcess < 0 )
      PsDereferencePartition((__int64)Object);
  }
  return (unsigned int)PartitionSystemProcess;
}
