/*
 * XREFs of KiInitializeUserApc @ 0x140128774
 * Callers:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeContextFromKframes @ 0x1400A27B8 (KeContextFromKframes.c)
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     KeCopyExceptionRecord @ 0x14013B9E4 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14013FA9C (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v10; // r14
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rbx
  SIZE_T v14; // rdx
  unsigned __int64 result; // rax
  _QWORD *v16; // r8
  const char *i; // rax
  unsigned int v18; // r9d
  __int64 v19; // rdx
  _BYTE v20[2]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v21; // [rsp+7Ah] [rbp-FEh]
  unsigned __int64 v22; // [rsp+88h] [rbp-F0h]

  v10 = a1;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a2 + 384);
    v12 = (_QWORD *)((v11 - 40) & 0xFFFFFFFFFFFFFFF0uLL);
    v13 = (unsigned __int64)(v12 - 154);
    v14 = v11 - (_QWORD)(v12 - 154);
    if ( v14 - 1 > 0xFFE )
    {
      ProbeForWrite(v12 - 154, v14, 0x10u);
    }
    else
    {
      if ( v13 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + v14 - 1) = *(_BYTE *)(v13 + v14 - 1);
      v13 = (unsigned __int64)(v12 - 154);
      v10 = a1;
    }
    *(_DWORD *)(v13 + 48) = 1048603;
    KeContextFromKframes(a2, v10, v13);
    v12[3] = *(_QWORD *)(v13 + 152);
    *v12 = *(_QWORD *)(v13 + 248);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 208);
  }
  *(_QWORD *)v13 = a4;
  *(_QWORD *)(v13 + 8) = a5;
  *(_QWORD *)(v13 + 16) = a6;
  *(_QWORD *)(v13 + 24) = a3;
  *(_QWORD *)(v13 + 32) = a7;
  *(_QWORD *)(a2 + 384) = v13;
  *(_QWORD *)(a2 + 360) = KeUserApcDispatcher;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  result = KiQueryUnbiasedInterruptTime();
  v22 = result;
  if ( result >= qword_140439A20 )
  {
    __sidt(v20);
    v16 = (_QWORD *)v21;
    for ( i = (const char *)v21; (unsigned __int64)i < v21 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v18 = 848;
    v19 = qword_140439A10;
    while ( v18 >= 8 )
    {
      v19 = __ROR8__(v19 - *v16++, qword_140439A18);
      v18 -= 8;
    }
    while ( v18 )
    {
      v19 = __ROR8__(v19 - *(unsigned __int8 *)v16, qword_140439A18);
      v16 = (_QWORD *)((char *)v16 + 1);
      --v18;
    }
    if ( qword_140439A28 != v19 )
    {
      if ( qword_1404399E0 )
        goto LABEL_24;
      qword_1404399E0 = (unsigned int)__ROR4__(150994945, 88);
      qword_1404399E8 = 0LL;
      qword_1404399F0 = 0LL;
      qword_1404399F8 = 269LL;
      qword_140439A00 = v21;
    }
    if ( !qword_1404399E0 )
    {
LABEL_27:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140439A20 = result;
      return result;
    }
LABEL_24:
    if ( stru_1404399A0.DeferredRoutine != KiScanQueues )
    {
      stru_1404399A0.TargetInfoAsUlong = 275;
      stru_1404399A0.DeferredRoutine = KiScanQueues;
      stru_1404399A0.DeferredContext = &stru_1404399A0;
      stru_1404399A0.DpcData = 0LL;
      stru_1404399A0.ProcessorHistory = 0LL;
    }
    qword_140439A08 = 604032LL;
    KeInsertQueueDpc(&stru_1404399A0, 0LL, 0LL);
    goto LABEL_27;
  }
  return result;
}
