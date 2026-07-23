/*
 * XREFs of SmGlobalsInitialize @ 0x1409D7DC4
 * Callers:
 *     SmInitSystem @ 0x1409D7CD8 (SmInitSystem.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14018E328 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmRegistrationCtxInitialize @ 0x1406D2020 (SmRegistrationCtxInitialize.c)
 */

__int64 __fastcall SmGlobalsInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  memset((void *)a1, 0, 0xB60uLL);
  *(_QWORD *)&v5 = 59LL;
  *((_QWORD *)&v5 + 1) = PsGetHostSilo;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v5);
  *(_QWORD *)(a1 + 1952) = 0LL;
  SmKmGlobals = PsInitialSystemProcess;
  memset((void *)(a1 + 1992), 0, 0x28uLL);
  *(_QWORD *)(a1 + 1992) = 0LL;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 2008) = 0LL;
  *(_DWORD *)(a1 + 2032) = -1;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_BYTE *)(a1 + 1960) = 5;
  memset((void *)(a1 + 2048), 0, 0x230uLL);
  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 2056);
  v3 = 16LL;
  do
  {
    ExInitializePushLock(&v2->Count);
    ExWaitForRundownProtectionRelease(v2);
    v2[1].Count = 0LL;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  memset((void *)(a1 + 2560), 0, 0x28uLL);
  *(_QWORD *)(a1 + 2560) = 0LL;
  *(_QWORD *)(a1 + 2576) = a1 + 2568;
  *(_QWORD *)(a1 + 2568) = a1 + 2568;
  SmRegistrationCtxInitialize((_QWORD *)(a1 + 2608));
  *(_QWORD *)(a1 + 2624) = 0LL;
  *(_QWORD *)(a1 + 2632) = 0LL;
  *(_QWORD *)(a1 + 2616) = 0LL;
  memset((void *)(a1 + 2640), 0, 0x70uLL);
  *(_WORD *)(a1 + 2648) = 1;
  *(_BYTE *)(a1 + 2650) = 6;
  *(_DWORD *)(a1 + 2652) = 0;
  *(_QWORD *)(a1 + 2664) = a1 + 2656;
  *(_QWORD *)(a1 + 2656) = a1 + 2656;
  memset((void *)(a1 + 2752), 0, 0x70uLL);
  result = a1 + 2768;
  *(_WORD *)(a1 + 2760) = 1;
  *(_BYTE *)(a1 + 2762) = 6;
  *(_DWORD *)(a1 + 2764) = 0;
  *(_QWORD *)(a1 + 2776) = a1 + 2768;
  *(_QWORD *)(a1 + 2768) = a1 + 2768;
  *(_DWORD *)(a1 + 2896) = 3;
  return result;
}
