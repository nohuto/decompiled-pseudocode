/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x1405EC260
 * Callers:
 *     NtFindAtom @ 0x1405EBA80 (NtFindAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlGetIntegerAtom @ 0x1405EC3C0 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x1405EC474 (RtlpLockAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1405EC4C0 (RtlpHashStringToAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC8B0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlLookupAtomInAtomTable(PRTL_ATOM_TABLE AtomTable, PWSTR AtomName, PRTL_ATOM Atom)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  USHORT v8; // ax
  char v9; // al
  NTSTATUS v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v13[40]; // [rsp+50h] [rbp-28h] BYREF
  USHORT IntegerAtom; // [rsp+98h] [rbp+20h] BYREF

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  if ( RtlGetIntegerAtom(AtomName, &IntegerAtom) )
  {
    v8 = IntegerAtom;
    if ( IntegerAtom >= 0xC000u )
    {
      v8 = 0;
      IntegerAtom = 0;
      v11 = -1073741811;
    }
    else
    {
      v11 = 0;
    }
    if ( Atom )
      *Atom = v8;
  }
  else if ( *AtomName )
  {
    LOBYTE(v6) = 1;
    v11 = RtlpHashStringToAtom(AtomTable, AtomName, v6, 0LL, 0LL, v13, &v12);
    if ( v11 >= 0 )
    {
      v7 = v12;
      if ( v12 )
      {
        if ( RtlpAtomMapAtomToHandleEntry(AtomTable, *(unsigned __int16 *)(v12 + 8)) )
        {
          v11 = 0;
          if ( Atom )
            *Atom = *(_WORD *)(v7 + 10);
        }
        else
        {
          v11 = -1073741816;
        }
      }
      else
      {
        v11 = -1073741772;
      }
    }
  }
  else
  {
    v11 = -1073741773;
  }
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v11;
}
