/*
 * XREFs of SmKmStoreHelperCommandCleanup @ 0x14032510C
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140135680 (SmKmStoreHelperWorker.c)
 * Callees:
 *     SmKmUnlockMdl @ 0x1401487E8 (SmKmUnlockMdl.c)
 *     SmKmStoreHelperCommandProcess @ 0x14014884C (SmKmStoreHelperCommandProcess.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

void __fastcall SmKmStoreHelperCommandCleanup(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  v5 = a2 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
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
    v8[0] = *(_QWORD *)(a3 + 24);
    v8[1] = *(_QWORD *)(a3 + 8);
    SmKmStoreHelperCommandProcess(a1, 3, (__int64)v8);
  }
}
