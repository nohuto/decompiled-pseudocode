/*
 * XREFs of RtlpHpHeapCreate @ 0x18004C4C0
 * Callers:
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x18004F000 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhContextInitialize @ 0x18004C38C (RtlpHpLfhContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x18004C784 (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x18004C898 (RtlpHpSegContextReserve.c)
 *     RtlpHpVsContextInitialize @ 0x18004C98C (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x18004CA78 (RtlpHpHeapAllocate.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x18004CD44 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpRegisterEnvironment @ 0x18004CD90 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180101438 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x180101500 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x180103380 (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int ProcessorCount; // r13d
  __int64 v8; // rax
  __int64 v9; // rsi
  __int128 v10; // xmm0
  char v11; // cl
  char v12; // bl
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  int v18; // [rsp+28h] [rbp-49h]
  __int128 v19; // [rsp+48h] [rbp-29h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  __int128 v21; // [rsp+68h] [rbp-9h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+78h] [rbp+7h] BYREF
  __int64 (__fastcall *v23)(__int64, __int64, __int64, char); // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall *v24)(__int64, __int64); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v25)(__int64, unsigned __int64, unsigned int); // [rsp+90h] [rbp+1Fh]
  __int64 (__fastcall *v26)(); // [rsp+98h] [rbp+27h]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  ProcessorCount = RtlpHpEnvQueryProcessorCount();
  v19 = *a4;
  v8 = RtlpHpHeapAllocate(a1, ProcessorCount, &v19);
  v9 = v8;
  if ( !v8 )
  {
    v13 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0LL);
    return v13;
  }
  v10 = *a4;
  *(_DWORD *)(v8 + 16) = -571548178;
  *(_DWORD *)(v8 + 20) = a1;
  v11 = 0;
  *(_OWORD *)v8 = v10;
  v20 = *a4;
  if ( BYTE1(v20) >= 2u )
    v11 = 16;
  v12 = v11 | 4;
  if ( (a1 & 0x4000000) == 0 )
    v12 = v11;
  RtlpHpSegContextInitialize(v8 + 256, 0x100000, v8, v8 + 832, v8 + 640, v8 + 128, (__int64)&v20, v12);
  v21 = *a4;
  RtlpHpSegContextInitialize(v9 + 448, 0x1000000, v9, 0, 0LL, v9 + 128, (__int64)&v21, v12);
  *(_QWORD *)(v9 + 64) = 0LL;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  *(_QWORD *)(v9 + 224) = 0LL;
  if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
    *(_DWORD *)(v9 + 24) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v26 = 0LL;
  v22 = RtlpHpSegVsAllocate;
  v23 = RtlpHpSegLfhVsFree;
  v24 = RtlpHpSegLfhVsCommit;
  v25 = RtlpHpSegLfhVsDecommit;
  RtlpHpVsContextInitialize(
    v9 + 640,
    v9 + 256,
    (unsigned int)&v22,
    *(_DWORD *)a4 & 1,
    v18,
    (__int64)&qword_18016A328 + 4);
  v22 = (__int64 (__fastcall *)())RtlpHpSegLfhAllocate;
  v23 = RtlpHpSegLfhVsFree;
  v24 = RtlpHpSegLfhVsCommit;
  v25 = RtlpHpSegLfhVsDecommit;
  v26 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(
    v9 + 832,
    v9 + 256,
    ProcessorCount,
    *(_DWORD *)a4 & 1,
    (__int64)&v22,
    v9 + 128,
    &qword_18016A328);
  *(_QWORD *)(v9 + 104) = 0LL;
  if ( (int)RtlpHpSegContextReserve(v9 + 256, a2, a3) < 0 )
  {
    v13 = 0LL;
LABEL_28:
    if ( v9 )
      RtlpHpHeapDestroy(v9);
    return v13;
  }
  v13 = v9;
  v9 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeCreate(v13, *(_QWORD *)(v13 + 248) - v13, a1);
  v15 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v16 = 2147353472LL;
  if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapCreateEvent(v13, a1, *(_QWORD *)(v13 + 248) - v13, *(_DWORD *)(v13 + 240) - v13, *(unsigned __int8 *)v15);
    goto LABEL_28;
  }
  return v13;
}
