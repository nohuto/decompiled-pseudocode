/*
 * XREFs of RtlpHpHeapCreate @ 0x140140BE0
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x140140BA0 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x140170328 (ExCreateHeap.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegContextInitialize @ 0x140140ED8 (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x140140FFC (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextInitialize @ 0x140141084 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x1401411D0 (RtlpHpHeapAllocate.c)
 *     RtlpHpRegisterEnvironment @ 0x140141460 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpHeapDestroy @ 0x1401545C4 (RtlpHpHeapDestroy.c)
 *     RtlpHpVsContextInitialize @ 0x14015FF30 (RtlpHpVsContextInitialize.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x1401B64AC (RtlpHpEnvQueryProcessorCount.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlRunOnceInitialize @ 0x1406DB410 (RtlRunOnceInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v6; // rbx
  unsigned int ProcessorCount; // r15d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int128 v10; // xmm0
  int v11; // ecx
  int v12; // ebx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // cx
  __int128 v15; // xmm0
  void *HeapManager; // rbx
  __int64 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v20[6]; // [rsp+50h] [rbp-30h] BYREF

  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  ProcessorCount = RtlpHpEnvQueryProcessorCount();
  v19 = *a4;
  v8 = RtlpHpHeapAllocate(a1, ProcessorCount, &v19);
  v9 = v8;
  if ( v8 )
  {
    v10 = *a4;
    *(_DWORD *)(v8 + 20) = a1;
    *(_DWORD *)(v8 + 16) = -571548178;
    *(_OWORD *)v8 = v10;
    v11 = 0;
    if ( BYTE1(*(_QWORD *)a4) >= 2u )
      v11 = 16;
    v12 = v11 | 4;
    if ( (a1 & 0x4000000) == 0 )
      v12 = v11;
    v19 = *a4;
    RtlpHpSegContextInitialize(v8 + 256, 0x100000, v8, v8 + 832, v8 + 640, v8 + 128, (__int64)&v19, v12);
    LODWORD(v18) = v12;
    v19 = *a4;
    RtlpHpSegContextInitialize(v9 + 448, 0x1000000, v9, 0, 0LL, v9 + 128, (__int64)&v19, v18);
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_QWORD *)(v9 + 224) = 0LL;
    if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = v13 + 1;
        if ( (__int64 (*)())RtlpInterceptorRoutines[v13] == PsGetHostSilo )
          break;
        ++v13;
        if ( v14 )
        {
          v14 = 0;
          break;
        }
      }
      *(_DWORD *)(v9 + 24) = v14;
    }
    memset(v20, 0, 0x28uLL);
    v15 = *a4;
    v20[4] = 0LL;
    v20[0] = RtlpHpSegVsAllocate;
    v20[1] = RtlpHpSegLfhVsFree;
    v20[2] = RtlpHpSegLfhVsCommit;
    v20[3] = RtlpHpSegLfhVsDecommit;
    v19 = v15;
    HeapManager = RtlpHpEnvGetHeapManager(&v19);
    RtlpHpVsContextInitialize(v9 + 640, v9 + 256, (unsigned int)v20, *(_DWORD *)a4 & 1, 0, (__int64)HeapManager + 12484);
    v20[0] = RtlpHpSegLfhAllocate;
    v20[1] = RtlpHpSegLfhVsFree;
    v20[2] = RtlpHpSegLfhVsCommit;
    v20[3] = RtlpHpSegLfhVsDecommit;
    v20[4] = RtlpHpSegLfhExtendContext;
    RtlpHpLfhContextInitialize(
      v9 + 832,
      v9 + 256,
      ProcessorCount,
      *(_DWORD *)a4 & 1,
      (__int64)v20,
      v9 + 128,
      (__int64)HeapManager + 12480);
    RtlRunOnceInitialize((PRTL_RUN_ONCE)(v9 + 104));
    if ( (int)RtlpHpSegContextReserve(v9 + 256, 0LL, 0LL) >= 0 )
    {
      v6 = v9;
      v9 = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v9 )
      RtlpHpHeapDestroy(v9);
  }
  else
  {
    v6 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0LL);
  }
  return v6;
}
