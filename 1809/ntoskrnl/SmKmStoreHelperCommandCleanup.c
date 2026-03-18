/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x140307594
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140135AB0 (SmKmStoreHelperWorker.c)
 * Callees:
 *     SmKmUnlockMdl @ 0x14014B114 (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014B784 (SmKmStoreHelperCommandProcess.c)
 *     SmFpFree @ 0x14014CA1C (SmFpFree.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void __fastcall SmKmStoreHelperCommandCleanup(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v9, 0, 0x28uLL);
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          (*(void (__fastcall **)(__int64, _QWORD, __int64))a3)(a1, *(_QWORD *)(a3 + 8), 1LL);
      }
      else if ( *(int *)(a3 + 32) >= 0 )
      {
        SmKmUnlockMdl(*(PMDL *)(a3 + 24), *(_QWORD *)(a1 + 112), a1);
        SmFpFree(*(_QWORD *)(a1 + 112), 2, a1, *(struct _MDL **)(a3 + 24));
      }
    }
  }
  else if ( *(int *)(a3 + 32) >= 0 )
  {
    v9[0] = *(_QWORD *)(a3 + 24);
    v9[1] = *(_QWORD *)(a3 + 8);
    SmKmStoreHelperCommandProcess(a1, 3, (__int64)v9);
  }
}
