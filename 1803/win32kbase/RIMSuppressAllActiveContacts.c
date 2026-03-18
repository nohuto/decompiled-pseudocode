/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C00EDDB0
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00586E4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00588C0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01068F0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 */

char __fastcall RIMSuppressAllActiveContacts(__int64 a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rbx
  int v7; // r13d
  int v8; // r12d
  __int64 active; // rax
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  __int128 v12; // xmm2
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  char result; // al
  __int64 v16; // r14
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int128 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  _BYTE v21[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+48h]
  int v23; // [rsp+D0h] [rbp+50h]

  v22 = *(_QWORD *)(a2 + 776) + 1LL;
  v23 = *(_DWORD *)(a2 + 748) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v5);
  v7 = 0;
  v8 = 0;
  active = RIMCmActiveContactsBegin((__int64)&v19, a2);
  v10 = *(_QWORD *)(active + 16);
  v17 = *(_OWORD *)active;
  v18 = v10;
  while ( 1 )
  {
    v11 = RIMCmActiveContactsEnd((__int64)v21, a2);
    v12 = *(_OWORD *)v11;
    v13 = *(_QWORD *)(v11 + 16);
    v14 = *(_QWORD *)v11;
    v20 = v13;
    v19 = v12;
    result = (_QWORD)v17 != v14 || DWORD2(v17) != DWORD2(v19) || v18 != v20;
    if ( !result )
      break;
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
        RIMInsertSimulatedContactEndStateInFrame(a1, v5, v16, v22, v23, 1);
    }
    RIMCmActiveContactsNext(a2, &v17);
  }
  if ( v8 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v5);
    return RIMCompletePointerDeviceFrame(a1, v5);
  }
  return result;
}
