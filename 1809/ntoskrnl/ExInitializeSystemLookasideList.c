/*
 * XREFs of ExInitializeSystemLookasideList @ 0x140571370
 * Callers:
 *     ExInitializeProcessor @ 0x14017D68C (ExInitializeProcessor.c)
 *     ExInitPoolLookasidePointers @ 0x140571234 (ExInitPoolLookasidePointers.c)
 *     CcInitializeProcessor @ 0x14072A3FC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14072A4B4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14072A5D0 (IoInitializeProcessor.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 */

__int64 __fastcall ExInitializeSystemLookasideList(__int64 a1, int a2, int a3, int a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rcx

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_DWORD *)(a1 + 36) = a2;
  *(_QWORD *)(a1 + 48) = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 56) = ExFreePool;
  *(_WORD *)(a1 + 16) = 2;
  *(_WORD *)(a1 + 18) = a5;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  result = a6;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 44) = a3;
  v11 = (_QWORD *)(a1 + 64);
  v12 = *(_QWORD **)(a6 + 8);
  if ( *v12 != a6 )
    __fastfail(3u);
  *v11 = a6;
  v11[1] = v12;
  *v12 = v11;
  *(_QWORD *)(a6 + 8) = v11;
  return result;
}
