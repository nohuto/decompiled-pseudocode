/*
 * XREFs of ObpShutdownCloseHandleProcedure @ 0x140862390
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 */

char __fastcall ObpShutdownCloseHandleProcedure(__int64 a1, volatile signed __int64 *a2, int a3, _DWORD *a4)
{
  unsigned __int64 v6; // rbx
  volatile __int64 *v7; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  _InterlockedExchangeAdd64(a2, 1uLL);
  v7 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v9, 0);
  if ( *v7 )
    ExfUnblockPushLock(v7, 0LL);
  DbgPrint("\tFound object %p(handle %08lx)\n", (const void *)(v6 + 48), a3);
  ++*a4;
  return 0;
}
