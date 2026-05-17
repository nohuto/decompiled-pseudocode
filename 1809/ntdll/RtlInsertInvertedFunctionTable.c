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

signed __int64 __fastcall RtlInsertInvertedFunctionTable(unsigned __int64 a1, int a2)
{
  int v3; // esi
  int v4; // eax
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  int v8; // ecx
  int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = RtlpImageDirectoryEntryToDataEx(a1, 1, 3u, &v10, &v11);
  v7 = v11;
  if ( v4 < 0 )
    v7 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, 0LL, v5, v6);
  LdrProtectMrdata(0LL);
  RtlpInsertInvertedFunctionTableEntry(v8, v3, v7, a2, v10);
  LdrProtectMrdata(1LL);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
