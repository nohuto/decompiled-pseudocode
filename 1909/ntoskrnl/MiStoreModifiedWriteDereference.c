/*
 * XREFs of MiStoreModifiedWriteDereference @ 0x14014A5E4
 * Callers:
 *     SmIoRequestComplete @ 0x14014A464 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400E5200 (KeInsertQueueApc.c)
 */

char __fastcall MiStoreModifiedWriteDereference(__int64 a1)
{
  signed __int32 v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
  if ( v2 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 192);
    v4 = *(unsigned int *)(a1 + 248);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v4;
    KeInitializeApc(a1 + 48, *(_QWORD *)(v3 + 936), 0, (__int64)MiStoreWriteModifiedCompleteApc, 0LL, 0LL, 0, 0LL);
    LOBYTE(v2) = KeInsertQueueApc(a1 + 48, a1, 0LL, 0);
  }
  return v2;
}
