/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x180027528
 * Callers:
 *     LdrpProcessMappedModule @ 0x180026F8C (LdrpProcessMappedModule.c)
 *     LdrpInitializeExceptionTable @ 0x1800D3090 (LdrpInitializeExceptionTable.c)
 *     AvrfMiniLoadDll @ 0x1800DCAA8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x1800275B8 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 */

void __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  int v6; // ecx
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 3u, &v7, &v8);
  v5 = v8;
  if ( v4 < 0 )
    v5 = 0;
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v6, v3, v5, a2, v7);
  LdrProtectMrdata(1LL);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
