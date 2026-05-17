/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x180020D8C
 * Callers:
 *     LdrpProcessMappedModule @ 0x180020654 (LdrpProcessMappedModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800D1760 (LdrpInitializeExceptionTable.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180020E1C (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 3u, &v8, &v9);
  v5 = v9;
  if ( v4 < 0 )
    v5 = 0;
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v6, v3, v5, a2, v8);
  LdrProtectMrdata(1LL);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
