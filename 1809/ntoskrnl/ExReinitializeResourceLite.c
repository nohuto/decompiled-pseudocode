/*
 * XREFs of ExReinitializeResourceLite @ 0x14010A190
 * Callers:
 *     <none>
 * Callees:
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14004F570 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpOwnerEntryToThread @ 0x14010A2F8 (ExpOwnerEntryToThread.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140313780 (PerfLogExecutiveResourceInitialize.c)
 */

NTSTATUS __stdcall ExReinitializeResourceLite(PERESOURCE Resource)
{
  POWNER_ENTRY OwnerTable; // rsi
  unsigned int v3; // r14d
  unsigned int TableSize; // ebp
  ERESOURCE_THREAD OwnerThread; // rsi
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v6; // eax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v7; // ecx
  unsigned int v9; // r15d
  unsigned int v10; // eax
  ULONG *p_TableSize; // r12
  struct _KTHREAD *v12; // r13
  ULONG v13; // eax

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  OwnerTable = Resource->OwnerTable;
  v3 = 0;
  if ( OwnerTable )
  {
    TableSize = OwnerTable->TableSize;
    v9 = 1;
    v10 = TableSize;
    if ( TableSize > 1 )
    {
      p_TableSize = &OwnerTable->TableSize;
      do
      {
        p_TableSize += 4;
        v12 = (struct _KTHREAD *)ExpOwnerEntryToThread(p_TableSize - 2);
        if ( v12 )
        {
          ++v3;
          if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
            && (*p_TableSize & 2) == 0
            && v12 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v12, 3uLL);
          }
          v13 = *p_TableSize;
          if ( (*p_TableSize & 1) != 0 )
          {
            PsBoostThreadIoEx((__int64)v12, 1, 0, 0LL);
            v13 = *p_TableSize;
          }
          if ( (v13 & 4) != 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)&v12[1].Timer.DueTime.HighPart);
            v13 = *p_TableSize;
          }
          if ( (v13 & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v12, 0x746C6644u);
        }
        ++v9;
      }
      while ( v9 < TableSize );
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
    goto LABEL_19;
  }
  if ( OwnerThread )
  {
    if ( (Resource->ReservedLowFlags & 1) != 0 || ExpResourceEnforceOwnerTransfer )
    {
      *(_BYTE *)&v7 = Resource->OwnerEntry.TableSize;
      if ( (*(_BYTE *)&v6 & 2) == 0 && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
        KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 4uLL);
    }
    else
    {
      *(_BYTE *)&v7 = Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v7 & 1) != 0 )
    {
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
      v7 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v7 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1804));
      v7 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&v7 & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_19:
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
