/*
 * XREFs of KiInitializeUserApc @ 0x140128684
 * Callers:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CF10 (KiQueryUnbiasedInterruptTime.c)
 *     KeContextFromKframes @ 0x1400A2878 (KeContextFromKframes.c)
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 *     KeCopyExceptionRecord @ 0x14013B8C4 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14013F97C (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
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
  if ( result >= qword_140438960 )
  {
    __sidt(v20);
    v16 = (_QWORD *)v21;
    for ( i = (const char *)v21; (unsigned __int64)i < v21 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v18 = 848;
    v19 = qword_140438950;
    while ( v18 >= 8 )
    {
      v19 = __ROR8__(v19 - *v16++, qword_140438958);
      v18 -= 8;
    }
    while ( v18 )
    {
      v19 = __ROR8__(v19 - *(unsigned __int8 *)v16, qword_140438958);
      v16 = (_QWORD *)((char *)v16 + 1);
      --v18;
    }
    if ( qword_140438968 != v19 )
    {
      if ( qword_140438920 )
        goto LABEL_24;
      qword_140438920 = (unsigned int)__ROR4__(150994945, 88);
      qword_140438928 = 0LL;
      qword_140438930 = 0LL;
      qword_140438938 = 269LL;
      qword_140438940 = v21;
    }
    if ( !qword_140438920 )
    {
LABEL_27:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140438960 = result;
      return result;
    }
LABEL_24:
    if ( stru_1404388E0.DeferredRoutine != KiScanQueues )
    {
      stru_1404388E0.TargetInfoAsUlong = 275;
      stru_1404388E0.DeferredRoutine = KiScanQueues;
      stru_1404388E0.DeferredContext = &stru_1404388E0;
      stru_1404388E0.DpcData = 0LL;
      stru_1404388E0.ProcessorHistory = 0LL;
    }
    qword_140438948 = 604032LL;
    KeInsertQueueDpc(&stru_1404388E0, 0LL, 0LL);
    goto LABEL_27;
  }
  return result;
}
