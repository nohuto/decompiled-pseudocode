/*
 * XREFs of RtlpHpHeapCreate @ 0x180063D90
 * Callers:
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpHpMetadataHeapCreate @ 0x180065230 (RtlpHpMetadataHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpHeapAllocate @ 0x1800635C0 (RtlpHpHeapAllocate.c)
 *     RtlpHpLfhContextInitialize @ 0x180063C34 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x18006411C (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x180064230 (RtlpHpSegContextReserve.c)
 *     RtlpHpVsContextInitialize @ 0x180064324 (RtlpHpVsContextInitialize.c)
 *     RtlpHpRegisterEnvironment @ 0x180064418 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x18009F75C (RtlpHpEnvQueryProcessorCount.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpGetHeapInterceptorIndex @ 0x180103C74 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x180103D3C (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x180105CA8 (RtlpLogHeapCreateEvent.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  volatile signed __int64 *v7; // rbx
  unsigned int ProcessorCount; // r13d
  volatile signed __int64 *v9; // rax
  volatile signed __int64 *v10; // rsi
  __int128 v11; // xmm0
  char v12; // cl
  char v13; // bl
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  int v18; // [rsp+28h] [rbp-49h]
  __int128 v19; // [rsp+48h] [rbp-29h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  __int128 v21; // [rsp+68h] [rbp-9h] BYREF
  __int64 (__fastcall *v22)(int, int, char, int, __int64); // [rsp+78h] [rbp+7h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall *v24)(__int64, __int64); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v25)(); // [rsp+90h] [rbp+1Fh]
  __int64 (__fastcall *v26)(__int64); // [rsp+98h] [rbp+27h]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1LL) < 0 )
    return 0LL;
  ProcessorCount = RtlpHpEnvQueryProcessorCount();
  v19 = *a4;
  v9 = RtlpHpHeapAllocate(a1, ProcessorCount, &v19);
  v10 = v9;
  if ( !v9 )
  {
    v7 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0LL);
    return v7;
  }
  v11 = *a4;
  *((_DWORD *)v9 + 4) = -571548178;
  *((_DWORD *)v9 + 5) = a1;
  v12 = 0;
  *(_OWORD *)v9 = v11;
  v20 = *a4;
  if ( BYTE1(v20) >= 2u )
    v12 = 16;
  v13 = v12 | 4;
  if ( (a1 & 0x4000000) == 0 )
    v13 = v12;
  RtlpHpSegContextInitialize(
    (_DWORD)v9 + 256,
    0x100000,
    (_DWORD)v9,
    (_DWORD)v9 + 832,
    (__int64)(v9 + 80),
    (__int64)(v9 + 16),
    (__int64)&v20,
    v13);
  v21 = *a4;
  RtlpHpSegContextInitialize((_DWORD)v10 + 448, 0x1000000, (_DWORD)v10, 0, 0LL, (__int64)(v10 + 16), (__int64)&v21, v13);
  *((_QWORD *)v10 + 8) = 0LL;
  *((_QWORD *)v10 + 9) = 0LL;
  *((_QWORD *)v10 + 10) = 0LL;
  *((_QWORD *)v10 + 28) = 0LL;
  if ( (*((_DWORD *)v10 + 5) & 0x20000000) != 0 )
    *((_DWORD *)v10 + 6) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v26 = 0LL;
  v22 = (__int64 (__fastcall *)(int, int, char, int, __int64))RtlpHpSegVsAllocate;
  v23 = RtlpHpSegLfhVsFree;
  v24 = RtlpHpSegLfhVsCommit;
  v25 = RtlpHpSegLfhVsDecommit;
  RtlpHpVsContextInitialize(
    (_DWORD)v10 + 640,
    (_DWORD)v10 + 256,
    (unsigned int)&v22,
    *(_DWORD *)a4 & 1,
    v18,
    (__int64)&qword_1801699C0 + 4);
  v22 = RtlpHpSegLfhAllocate;
  v23 = RtlpHpSegLfhVsFree;
  v24 = RtlpHpSegLfhVsCommit;
  v25 = RtlpHpSegLfhVsDecommit;
  v26 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(
    (unsigned __int64)(v10 + 104),
    (__int64)(v10 + 32),
    ProcessorCount,
    *(_DWORD *)a4 & 1,
    (__int64)&v22,
    (_WORD)v10 + 128,
    &qword_1801699C0);
  *((_QWORD *)v10 + 13) = 0LL;
  if ( (int)RtlpHpSegContextReserve(v10 + 32, a2, a3) < 0 )
  {
    v7 = 0LL;
LABEL_27:
    if ( v10 )
      RtlpHpHeapDestroy(v10);
    return v7;
  }
  v7 = v10;
  v10 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeCreate(v7, *((_QWORD *)v7 + 31) - (_QWORD)v7, a1);
  v15 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v16 = 2147353472LL;
  if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapCreateEvent(
      (_DWORD)v7,
      a1,
      *((_QWORD *)v7 + 31) - (_DWORD)v7,
      *((_DWORD *)v7 + 60) - (_DWORD)v7,
      *(unsigned __int8 *)v15);
    goto LABEL_27;
  }
  return v7;
}
