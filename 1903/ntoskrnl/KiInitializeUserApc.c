/*
 * XREFs of KiInitializeUserApc @ 0x14012BB10
 * Callers:
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 * Callees:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x1400164DC (KeContextFromKframes.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeCopyExceptionRecord @ 0x14013D520 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14014441C (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
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
  _BYTE v21[2]; // [rsp+78h] [rbp-100h] BYREF
  __int64 v22; // [rsp+7Ah] [rbp-FEh]
  unsigned __int64 v23; // [rsp+88h] [rbp-F0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+A0h] [rbp-D8h] BYREF

  v10 = a1;
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  if ( v10 )
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
  v23 = result;
  if ( result >= qword_1404643F0 )
  {
    __sidt(v21);
    v16 = (_QWORD *)v22;
    for ( i = (const char *)v22; (unsigned __int64)i < v22 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v18 = 848;
    v19 = qword_1404643E0;
    while ( v18 >= 8 )
    {
      v19 = __ROR8__(v19 - *v16++, qword_1404643E8);
      v18 -= 8;
    }
    while ( v18 )
    {
      v19 = __ROR8__(v19 - *(unsigned __int8 *)v16, qword_1404643E8);
      v16 = (_QWORD *)((char *)v16 + 1);
      --v18;
    }
    if ( qword_1404643F8 != v19 )
    {
      if ( qword_1404643B0 )
        goto LABEL_22;
      qword_1404643B0 = (unsigned int)__ROR4__(150994945, 88);
      qword_1404643B8 = 0LL;
      qword_1404643C0 = 0LL;
      qword_1404643C8 = 269LL;
      qword_1404643D0 = v22;
    }
    if ( !qword_1404643B0 )
    {
LABEL_21:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_1404643F0 = result;
      return result;
    }
LABEL_22:
    if ( stru_140464370.DeferredRoutine != KiScanQueues )
    {
      stru_140464370.TargetInfoAsUlong = 275;
      stru_140464370.DeferredRoutine = KiScanQueues;
      stru_140464370.DeferredContext = &stru_140464370;
      stru_140464370.DpcData = 0LL;
      stru_140464370.ProcessorHistory = 0LL;
    }
    qword_1404643D8 = 604032LL;
    KeInsertQueueDpc(&stru_140464370, 0LL, 0LL);
    goto LABEL_21;
  }
  return result;
}
