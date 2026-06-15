/*
 * XREFs of McTemplateU0pqpqqqqqq @ 0x140041190
 * Callers:
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140001CCC (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140008C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x1400147C0 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x1400407BC (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x140040884 (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14004096C (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A90 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140040BB4 (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140040C80 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140040D4C (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140040EC0 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140040FE8 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x14002BE40 (McGenEventWrite.c)
 */

__int64 __fastcall McTemplateU0pqpqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  int v12; // [rsp+30h] [rbp-B1h] BYREF
  int v13; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v14; // [rsp+40h] [rbp-A1h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-91h] BYREF
  __int64 *v16; // [rsp+60h] [rbp-81h]
  __int64 v17; // [rsp+68h] [rbp-79h]
  int *v18; // [rsp+70h] [rbp-71h]
  __int64 v19; // [rsp+78h] [rbp-69h]
  char *v20; // [rsp+80h] [rbp-61h]
  __int64 v21; // [rsp+88h] [rbp-59h]
  char *v22; // [rsp+90h] [rbp-51h]
  __int64 v23; // [rsp+98h] [rbp-49h]
  char *v24; // [rsp+A0h] [rbp-41h]
  __int64 v25; // [rsp+A8h] [rbp-39h]
  char *v26; // [rsp+B0h] [rbp-31h]
  __int64 v27; // [rsp+B8h] [rbp-29h]
  int *v28; // [rsp+C0h] [rbp-21h]
  __int64 v29; // [rsp+C8h] [rbp-19h]
  int *v30; // [rsp+D0h] [rbp-11h]
  __int64 v31; // [rsp+D8h] [rbp-9h]
  char *v32; // [rsp+E0h] [rbp-1h]
  __int64 v33; // [rsp+E8h] [rbp+7h]
  int v34; // [rsp+128h] [rbp+47h] BYREF

  v34 = a4;
  v17 = 8LL;
  v13 = 0;
  v16 = &v14;
  v12 = 0;
  v18 = &v34;
  v14 = 0LL;
  v20 = &a5;
  v22 = &a6;
  v24 = &a7;
  v26 = &a8;
  v28 = &v12;
  v30 = &v13;
  v32 = &a11;
  v19 = 4LL;
  v21 = 8LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  return McGenEventWrite(a1, (__int64)&AudioCore_AEMemory, 0LL, 10, (__int64)v15);
}
