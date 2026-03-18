/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1406DCD60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x14001D074 (RtlpLookupLowBox.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1405EBCA4 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC0E0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlPinAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, RTL_ATOM Atom)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 *v6; // rax
  char v7; // al
  NTSTATUS v9; // [rsp+20h] [rbp-28h]

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  v4 = -1073741816;
  v9 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
    v9 = v4;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v6 = RtlpLookupLowBox((__int64)AtomTable, v5, 0);
        if ( v6 )
        {
          v9 = 0;
          *((_WORD *)v6 + 11) |= 1u;
        }
      }
    }
  }
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v9;
}
