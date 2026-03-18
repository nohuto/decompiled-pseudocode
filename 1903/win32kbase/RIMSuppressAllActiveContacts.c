/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C014194C
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C014674C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C013C218 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C014F240 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C014F320 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C014FA20 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0154CEC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C015B578 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C015B690 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C015B6E4 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C015B788 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C015BBB0 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMSuppressAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct RIMDEV *v5; // rsi
  LARGE_INTEGER v6; // rbx
  int v7; // r13d
  int v8; // r12d
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // r14
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  _BYTE v22[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+48h]
  int v24; // [rsp+D0h] [rbp+50h]

  v23 = *(_QWORD *)(a2 + 816) + 1LL;
  v24 = *(_DWORD *)(a2 + 788) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = *(struct RIMDEV **)(a2 + 16);
  v6 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v5);
  v7 = 0;
  v8 = 0;
  active = RIMCmActiveContactsBegin(&v20, a2);
  v10 = *(_QWORD *)(active + 16);
  v18 = *(_OWORD *)active;
  v19 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd(v22, a2);
    v13 = *(_OWORD *)v11;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *(_QWORD *)v11;
    v21 = v14;
    v20 = v13;
    if ( (_QWORD)v18 == v15 )
    {
      result = DWORD2(v20);
      if ( DWORD2(v18) == DWORD2(v20) && v19 == v21 )
        break;
    }
    v17 = v19 - 16;
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v19 - 16) )
    {
      RIMCmAddContactSuppressionReasons(a2, v17, 512LL);
      if ( !v7 )
      {
        v7 = 1;
        v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
               a1,
               v5,
               (LARGE_INTEGER)v6.QuadPart);
      }
      if ( v8 )
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v5, v17, v23, v24, 1);
    }
    RIMCmActiveContactsNext(a2, &v18);
  }
  if ( v8 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v5, v12);
    return RIMCompletePointerDeviceFrame(a1, v5);
  }
  return result;
}
