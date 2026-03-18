/*
 * XREFs of NtManagePartition @ 0x140608170
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140090CC0 (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PsReferencePartitionByHandle @ 0x1406083B4 (PsReferencePartitionByHandle.c)
 *     MmManagePartitionMemoryInformation @ 0x140608464 (MmManagePartitionMemoryInformation.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140760F54 (MmManagePartitionGetMemoryEvents.c)
 *     MmManagePartitionCombineMemory @ 0x140860934 (MmManagePartitionCombineMemory.c)
 *     MmManagePartitionInitialAddMemory @ 0x140860998 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140860AA4 (MmManagePartitionMoveMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtManagePartition(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, unsigned int Size)
{
  __int64 v6; // rbx
  char PreviousMode; // r14
  __int64 v10; // r15
  __int64 *v11; // r8
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  int MemoryEvents; // eax
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  char v20; // [rsp+30h] [rbp-158h]
  char v21; // [rsp+31h] [rbp-157h]
  _QWORD *v22; // [rsp+38h] [rbp-150h] BYREF
  _QWORD *v23; // [rsp+40h] [rbp-148h] BYREF
  _DWORD Src[60]; // [rsp+50h] [rbp-138h] BYREF

  v6 = a3;
  memset(Src, 0, sizeof(Src));
  v21 = 0;
  v20 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = 0LL;
  v22 = 0LL;
  if ( (unsigned int)v6 >= 6 )
  {
    v12 = -1073741821;
    goto LABEL_22;
  }
  v10 = (unsigned int)v6;
  v11 = PspPartitionInfoDetails;
  if ( Size != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v12 = -1073741820;
    goto LABEL_22;
  }
  if ( (PspPartitionInfoDetails[v6] & 0x100000000000000LL) != 0 )
  {
    if ( PreviousMode && Size )
    {
      if ( ((BYTE6(PspPartitionInfoDetails[v6]) - 1LL) & a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + Size > 0x7FFFFFFF0000LL || a4 + Size < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Src, (const void *)a4, Size);
  }
  LOBYTE(v11) = PreviousMode;
  v12 = PsReferencePartitionByHandle(a1, LODWORD(PspPartitionInfoDetails[v6]), v11, 1884123984LL, &v22);
  if ( v12 >= 0 )
  {
    v20 = 1;
    if ( (PspPartitionInfoDetails[v6] & 0x400000000000000LL) != 0 )
    {
      LOBYTE(v13) = PreviousMode;
      v12 = PsReferencePartitionByHandle(a2, LODWORD(PspPartitionInfoDetails[v6]), v13, 1884123984LL, &v23);
      if ( v12 < 0 )
        goto LABEL_22;
      v21 = 1;
      if ( v23 == v22 )
      {
        v12 = -1073741811;
        goto LABEL_22;
      }
    }
    else if ( a2 )
    {
      v12 = -1073741584;
      goto LABEL_22;
    }
    if ( (_DWORD)v6 )
    {
      v17 = v6 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
            {
              LOBYTE(v14) = PreviousMode;
              MemoryEvents = MmManagePartitionInitialAddMemory(v22, Src, a4, v14);
            }
            else
            {
              LOBYTE(v13) = PreviousMode;
              MemoryEvents = MmManagePartitionGetMemoryEvents(v22, Src, v13);
            }
          }
          else
          {
            LOBYTE(v14) = PreviousMode;
            MemoryEvents = MmManagePartitionCombineMemory(v22, Src, a4, v14);
          }
        }
        else
        {
          LOBYTE(v14) = PreviousMode;
          MemoryEvents = MiCreatePagingFile(a4, a4 + 16, a4 + 24, v14, Src[8], *v22);
        }
      }
      else
      {
        LOBYTE(v14) = PreviousMode;
        MemoryEvents = MmManagePartitionMoveMemory(v22, v23, Src, v14);
      }
    }
    else
    {
      MemoryEvents = MmManagePartitionMemoryInformation(v22, Src);
    }
    v12 = MemoryEvents;
    if ( MemoryEvents >= 0 && (PspPartitionInfoDetails[v10] & 0x200000000000000LL) != 0 )
    {
      if ( PreviousMode )
        ProbeForWrite((volatile void *)a4, Size, BYTE6(PspPartitionInfoDetails[v10]));
      memmove((void *)a4, Src, Size);
    }
  }
LABEL_22:
  if ( v20 )
    PsDereferencePartition((__int64)v22);
  if ( v21 )
    PsDereferencePartition((__int64)v23);
  return (unsigned int)v12;
}
