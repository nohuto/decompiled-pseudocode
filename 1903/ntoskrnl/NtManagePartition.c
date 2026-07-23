/*
 * XREFs of NtManagePartition @ 0x14066CA40
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x14066CC84 (PsReferencePartitionByHandle.c)
 *     MmManagePartitionMemoryInformation @ 0x14066CD34 (MmManagePartitionMemoryInformation.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407880A8 (MmManagePartitionGetMemoryEvents.c)
 *     MmManagePartitionCombineMemory @ 0x14089CE4C (MmManagePartitionCombineMemory.c)
 *     MmManagePartitionInitialAddMemory @ 0x14089CEB0 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x14089CFC8 (MmManagePartitionMoveMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  __int64 v6; // rbx
  char PreviousMode; // r14
  __int64 v10; // r15
  __int64 *v11; // r8
  NTSTATUS v12; // edi
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

  v6 = (unsigned int)PartitionInformationClass;
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
  if ( PartitionInformationLength != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v12 = -1073741820;
    goto LABEL_22;
  }
  if ( (PspPartitionInfoDetails[v6] & 0x100000000000000LL) != 0 )
  {
    if ( PreviousMode && PartitionInformationLength )
    {
      if ( ((BYTE6(PspPartitionInfoDetails[v6]) - 1LL) & (unsigned __int64)PartitionInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)PartitionInformation + PartitionInformationLength > 0x7FFFFFFF0000LL
        || (char *)PartitionInformation + PartitionInformationLength < PartitionInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    memmove(Src, PartitionInformation, PartitionInformationLength);
  }
  LOBYTE(v11) = PreviousMode;
  v12 = PsReferencePartitionByHandle(TargetHandle, LODWORD(PspPartitionInfoDetails[v6]), v11, 1884123984LL, &v22);
  if ( v12 >= 0 )
  {
    v20 = 1;
    if ( (PspPartitionInfoDetails[v6] & 0x400000000000000LL) != 0 )
    {
      LOBYTE(v13) = PreviousMode;
      v12 = PsReferencePartitionByHandle(SourceHandle, LODWORD(PspPartitionInfoDetails[v6]), v13, 1884123984LL, &v23);
      if ( v12 < 0 )
        goto LABEL_22;
      v21 = 1;
      if ( v23 == v22 )
      {
        v12 = -1073741811;
        goto LABEL_22;
      }
    }
    else if ( SourceHandle )
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
              MemoryEvents = MmManagePartitionInitialAddMemory(v22, Src, PartitionInformation, v14);
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
            MemoryEvents = MmManagePartitionCombineMemory(v22, Src, PartitionInformation, v14);
          }
        }
        else
        {
          LOBYTE(v14) = PreviousMode;
          MemoryEvents = MiCreatePagingFile(
                           PartitionInformation,
                           (char *)PartitionInformation + 16,
                           (char *)PartitionInformation + 24,
                           v14,
                           Src[8],
                           *v22);
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
        ProbeForWrite(PartitionInformation, PartitionInformationLength, BYTE6(PspPartitionInfoDetails[v10]));
      memmove(PartitionInformation, Src, PartitionInformationLength);
    }
  }
LABEL_22:
  if ( v20 )
    PsDereferencePartition((__int64)v22);
  if ( v21 )
    PsDereferencePartition((__int64)v23);
  return v12;
}
