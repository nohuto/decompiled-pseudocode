/*
 * XREFs of VfIrpDatabaseEntryInsertAndLock @ 0x14093F2D0
 * Callers:
 *     VfPacketCreateAndLock @ 0x1409403F8 (VfPacketCreateAndLock.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14030B7D8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14030B820 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeAdd @ 0x140926F8C (VfUtilAddressRangeAdd.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14093F224 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfIrpDatabaseEntryInsertAndLock(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  *(_QWORD *)(a3 + 8) = 0LL;
  v3 = (_QWORD *)(a3 + 32);
  *(_DWORD *)(a3 + 28) = 0;
  *(_QWORD *)a3 = a1;
  *(_DWORD *)(a3 + 20) = 1;
  *(_DWORD *)(a3 + 24) = 1;
  *(_QWORD *)(a3 + 40) = a3 + 32;
  *(_QWORD *)(a3 + 32) = a3 + 32;
  *(_QWORD *)(a3 + 48) = ViPacketNotificationCallback;
  ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v10);
  v6 = 16LL * (unsigned __int8)(-125 * (a1 >> 12));
  v7 = (_QWORD *)(v6 + ViIrpDatabase);
  v8 = *(_QWORD *)(v6 + ViIrpDatabase);
  if ( *(_QWORD *)(v8 + 8) != v6 + ViIrpDatabase )
    __fastfail(3u);
  v3[1] = v7;
  *v3 = v8;
  *(_QWORD *)(v8 + 8) = v3;
  *v7 = v3;
  VfUtilAddressRangeAdd((unsigned __int64 *)(v6 + ViIrpDatabaseAddressRanges), a1, 208LL);
  ViIrpDatabaseReleaseLockExclusive(v10);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 20));
  --*(_DWORD *)(a3 + 24);
  return result;
}
