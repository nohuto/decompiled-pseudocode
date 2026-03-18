/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1406C76B0
 * Callers:
 *     NtDeleteAtom @ 0x1406C7530 (NtDeleteAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x14001D074 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpDereferenceAtom @ 0x14011EFF4 (RtlpDereferenceAtom.c)
 *     RtlpLockAtomTable @ 0x1405EBCA4 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC0E0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlDeleteAtomFromAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v4 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v7 = RtlpLookupLowBox((__int64)AtomTable, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v7, (__int64)AtomTable);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v4;
}
