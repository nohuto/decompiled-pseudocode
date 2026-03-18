/*
 * XREFs of PopIrpWatchdogBugcheck @ 0x1402EDB68
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x140172130 (PopDequeueQuerySetIrp.c)
 *     PopIrpWatchdog @ 0x1402EDB30 (PopIrpWatchdog.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1402ED910 (PopInternalAddToDumpFile.c)
 */

void __fastcall __noreturn PopIrpWatchdogBugcheck(__int64 MaxDataSize)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR BugCheckParameter3[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(BugCheckParameter3, 0, 0x28uLL);
  if ( !*(_DWORD *)(MaxDataSize + 188) )
  {
    v2 = *(_QWORD *)(MaxDataSize + 24);
    if ( v2 )
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
    else
      v3 = 0LL;
    v4 = *(_QWORD *)(v3 + 248);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 72LL * *(char *)(v4 + 66) + 200);
      if ( *(_BYTE *)(v5 + 184) == *(_BYTE *)(MaxDataSize + 184) )
        MaxDataSize = v5;
    }
  }
  BugCheckParameter4 = *(_QWORD *)(MaxDataSize + 16);
  PopInternalAddToDumpFile(0LL, 0, *(_QWORD *)(MaxDataSize + 24));
  IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)*(unsigned __int16 *)(BugCheckParameter4 + 2));
  IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x100);
  BugCheckParameter3[1] = (ULONG_PTR)&PopIrpList;
  BugCheckParameter3[0] = 163840LL;
  BugCheckParameter3[2] = (ULONG_PTR)&PopIrpThreadList;
  BugCheckParameter3[3] = ExWorkerQueue;
  BugCheckParameter3[4] = IoWorkerQueue;
  KeBugCheckEx(0x9Fu, 3uLL, *(_QWORD *)(MaxDataSize + 24), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
}
