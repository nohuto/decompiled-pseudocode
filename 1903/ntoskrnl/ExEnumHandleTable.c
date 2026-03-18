/*
 * XREFs of ExEnumHandleTable @ 0x1406BABF0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140299A00 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     ObInitProcess @ 0x140671FD0 (ObInitProcess.c)
 *     ObFindHandleForObject @ 0x1406BAB40 (ObFindHandleForObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140858698 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408616FC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x14089D79C (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x1408FBC24 (EtwpObjectHandleRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExpLookupHandleTableEntry @ 0x1405FAA80 (ExpLookupHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x1406BAD0C (ExpGetNextHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1406BCCE4 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        unsigned int *a1,
        __int64 (__fastcall *a2)(unsigned int *, signed __int64 *, _QWORD, __int64),
        __int64 a3,
        _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  signed __int64 *NextHandleTableEntry; // rdi
  signed __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r9
  _QWORD v15[7]; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v15[0] = 0LL;
  --CurrentThread->KernelApcDisable;
  NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, 0LL, v15);
  if ( !NextHandleTableEntry )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(NextHandleTableEntry);
      v11 = *NextHandleTableEntry;
      if ( (*NextHandleTableEntry & 1) != 0 )
        break;
      if ( v11 )
      {
        ExpBlockOnLockedHandleEntry(a1, NextHandleTableEntry, v11);
      }
      else
      {
        v12 = v15[0];
LABEL_5:
        v13 = v12 + 4;
        if ( (v12 ^ (unsigned __int64)(v12 + 4)) >= 0x400 )
          NextHandleTableEntry = (signed __int64 *)ExpLookupHandleTableEntry(a1, v12 + 8);
        else
          NextHandleTableEntry += 2;
        v15[0] = v13;
        if ( !NextHandleTableEntry )
          goto LABEL_13;
      }
    }
  }
  while ( v11 != _InterlockedCompareExchange64(NextHandleTableEntry, v11 - 1, v11) );
  v12 = v15[0];
  v5 = a2(a1, NextHandleTableEntry, v15[0], a3);
  if ( !v5 )
    goto LABEL_5;
  if ( a4 )
    *a4 = v12;
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
