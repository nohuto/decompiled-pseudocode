/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C011913C
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0122E84 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0123534 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C012E594 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C012E7A0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
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
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // r14
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  _BYTE v21[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+48h]
  int v23; // [rsp+D0h] [rbp+50h]

  v22 = *(_QWORD *)(a2 + 808) + 1LL;
  v23 = *(_DWORD *)(a2 + 780) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = *(struct RIMDEV **)(a2 + 16);
  v6 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v5);
  v7 = 0;
  v8 = 0;
  active = RIMCmActiveContactsBegin(&v19, a2);
  v10 = *(_QWORD *)(active + 16);
  v17 = *(_OWORD *)active;
  v18 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd(v21, a2);
    v12 = *(_OWORD *)v11;
    v13 = *(_QWORD *)(v11 + 16);
    v14 = *(_QWORD *)v11;
    v20 = v13;
    v19 = v12;
    if ( (_QWORD)v17 == v14 )
    {
      result = DWORD2(v19);
      if ( DWORD2(v17) == DWORD2(v19) && v18 == v20 )
        break;
    }
    v16 = v18 - 16;
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18 - 16) )
    {
      RIMCmAddContactSuppressionReasons(a2, v16, 512LL);
      if ( !v7 )
      {
        v7 = 1;
        v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
               a1,
               v5,
               (LARGE_INTEGER)v6.QuadPart);
      }
      if ( v8 )
        RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v5, v16, v22, v23, 1);
    }
    RIMCmActiveContactsNext(a2, &v17);
  }
  if ( v8 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v5);
    return RIMCompletePointerDeviceFrame(a1, v5);
  }
  return result;
}
