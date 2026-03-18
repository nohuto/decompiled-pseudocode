/*
 * XREFs of RtlpHpHeapCreate @ 0x140159604
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x1401595C0 (RtlpHpMetadataHeapCreate.c)
 *     ExCreateHeap @ 0x1401799AC (ExCreateHeap.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVsContextInitialize @ 0x140136FB4 (RtlpHpVsContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x1401598BC (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x1401599E0 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextInitialize @ 0x140159A68 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x140159BB4 (RtlpHpHeapAllocate.c)
 *     RtlpHpRegisterEnvironment @ 0x140159E2C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpHeapDestroy @ 0x1401667C4 (RtlpHpHeapDestroy.c)
 *     RtlRunOnceInitialize @ 0x140719510 (RtlRunOnceInitialize.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int MaximumProcessorCount; // r14d
  __int64 v7; // rax
  __int64 v8; // rdi
  __int128 v9; // xmm0
  int v10; // ecx
  int v11; // ebx
  __int128 v12; // xmm0
  _DWORD *HeapManager; // rbx
  unsigned __int8 v14; // r10
  __int64 v15; // rbx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  __int64 v19; // [rsp+38h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v22)(__int64, unsigned __int64, unsigned int); // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v23)(__int64, __int64, unsigned int); // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v24)(__int64); // [rsp+70h] [rbp-10h]

  if ( (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  if ( !MaximumProcessorCount )
    MaximumProcessorCount = 1;
  v20 = *a4;
  v7 = RtlpHpHeapAllocate(a1, MaximumProcessorCount, &v20);
  v8 = v7;
  if ( v7 )
  {
    v9 = *a4;
    *(_DWORD *)(v7 + 20) = a1;
    *(_DWORD *)(v7 + 16) = -571548178;
    *(_OWORD *)v7 = v9;
    v10 = 0;
    if ( BYTE1(*(_QWORD *)a4) >= 2u )
      v10 = 16;
    v11 = v10 | 4;
    if ( (a1 & 0x4000000) == 0 )
      v11 = v10;
    v20 = *a4;
    RtlpHpSegContextInitialize(v7 + 256, 0x100000, v7, v7 + 832, v7 + 640, v7 + 128, (__int64)&v20, v11);
    LODWORD(v19) = v11;
    v20 = *a4;
    RtlpHpSegContextInitialize(v8 + 448, 0x1000000, v8, 0, 0LL, v8 + 128, (__int64)&v20, v19);
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = 0LL;
    *(_QWORD *)(v8 + 224) = 0LL;
    if ( (*(_DWORD *)(v8 + 20) & 0x20000000) != 0 )
    {
      v17 = 0;
      while ( 1 )
      {
        v18 = v17 + 1;
        if ( (__int64 (*)())CLFS_LSN_NULL_EXT[v17] == PsGetHostSilo )
          break;
        ++v17;
        if ( v18 )
        {
          v18 = 0;
          break;
        }
      }
      *(_DWORD *)(v8 + 24) = v18;
    }
    v12 = *a4;
    v24 = 0LL;
    *(_QWORD *)&v21 = RtlpHpSegVsAllocate;
    *((_QWORD *)&v21 + 1) = RtlpHpSegLfhVsFree;
    v22 = RtlpHpSegLfhVsCommit;
    v23 = RtlpHpSegLfhVsDecommit;
    v20 = v12;
    HeapManager = RtlpHpEnvGetHeapManager(&v20);
    RtlpHpVsContextInitialize(v8 + 640, v8 + 256, &v21, v14 & (unsigned __int8)*(_DWORD *)a4, 0, HeapManager + 3635);
    *(_QWORD *)&v21 = RtlpHpSegLfhAllocate;
    *((_QWORD *)&v21 + 1) = RtlpHpSegLfhVsFree;
    v22 = RtlpHpSegLfhVsCommit;
    v23 = RtlpHpSegLfhVsDecommit;
    v24 = RtlpHpSegLfhExtendContext;
    RtlpHpLfhContextInitialize(
      v8 + 832,
      v8 + 256,
      MaximumProcessorCount,
      *(_DWORD *)a4 & 1,
      (__int64)&v21,
      v8 + 128,
      (__int64)(HeapManager + 3634));
    RtlRunOnceInitialize((PRTL_RUN_ONCE)(v8 + 104));
    if ( (int)RtlpHpSegContextReserve(v8 + 256, 0LL, 0LL) < 0 )
    {
      v15 = 0LL;
    }
    else
    {
      v15 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      RtlpHpHeapDestroy(v8);
  }
  else
  {
    v15 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0LL);
  }
  return v15;
}
