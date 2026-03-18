/*
 * XREFs of ExReinitializeResourceLite @ 0x1400B7920
 * Callers:
 *     <none>
 * Callees:
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14003D9C0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x14003DFD0 (PsBoostThreadIoEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140065650 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoQoS @ 0x1400B57CC (PsBoostThreadIoQoS.c)
 *     ExpOwnerEntryToThread @ 0x1400B7A8C (ExpOwnerEntryToThread.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1403317E8 (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v3; // r14d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rsi
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v6; // ecx
  unsigned int v8; // r15d
  POWNER_ENTRY v9; // r13
  unsigned int v10; // eax
  struct _KTHREAD *v11; // r12
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v12; // eax

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v8 = 1;
    v9 = Resource->OwnerTable;
    v10 = TableSize;
    if ( TableSize > 1 )
    {
      do
      {
        v11 = (struct _KTHREAD *)ExpOwnerEntryToThread(++v9);
        if ( v11 )
        {
          ++v3;
          if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
            && (v9->TableSize & 2) == 0
            && v11 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v11, 3uLL);
          }
          v12 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v9->TableSize;
          if ( (*(_BYTE *)&v12 & 1) != 0 )
          {
            PsBoostThreadIoEx((__int64)v11, 1, 0, 0LL);
            v12 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v9->TableSize;
          }
          if ( (*(_BYTE *)&v12 & 4) != 0 )
          {
            PsBoostThreadIoQoS((__int64)v11, 1);
            v12 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v9->TableSize;
          }
          if ( (*(_BYTE *)&v12 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v11, 0x746C6644u);
        }
        ++v8;
      }
      while ( v8 < TableSize );
      v10 = OwnerTable->TableSize;
    }
    memset(&OwnerTable[1], 0, 16LL * (v10 - 1));
  }
  else
  {
    TableSize = 0;
  }
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( OwnerThread )
  {
    ++TableSize;
    if ( (OwnerThread & 3) == 0 )
      ++v3;
  }
  v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
  if ( (*(_BYTE *)&v6 & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_18;
  }
  if ( OwnerThread )
  {
    if ( ((Resource->ReservedLowFlags & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
      v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v6 & 4) != 0 )
    {
      PsBoostThreadIoQoS(OwnerThread, 1);
      v6 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v6 & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_18:
  *(_DWORD *)&Resource->ActiveCount = 0;
  *(_QWORD *)&Resource->ActiveEntries = 0LL;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->OwnerEntry.OwnerThread = 0LL;
  *(_QWORD *)&Resource->OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource->NumberOfSharedWaiters = 0LL;
  __incgsdword(0x635Cu);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65560LL, Resource, TableSize, v3);
  return 0;
}
