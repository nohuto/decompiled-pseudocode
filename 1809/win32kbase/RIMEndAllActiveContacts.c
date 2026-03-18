/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C0116560
 * Callers:
 *     RIMResetPointerDevices @ 0x1C004E8B0 (RIMResetPointerDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     _lambda_9d298b15635a5f57a4f04d62705b4b34_::_lambda_invoker_cdecl_ @ 0x1C010A6D0 (_lambda_9d298b15635a5f57a4f04d62705b4b34_--_lambda_invoker_cdecl_.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C010E850 (RIMIDERemoveInjectionDevice.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C01212DC (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0122E84 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0123534 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C012E594 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C012E6A8 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C012E9F0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  struct RIMDEV *v4; // r14
  __int64 v5; // r12
  int v6; // r13d
  int v9; // r15d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 v16; // rbx
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  _BYTE v22[32]; // [rsp+60h] [rbp-20h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+B8h] [rbp+38h]

  v4 = *(struct RIMDEV **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 808);
  v6 = *(_DWORD *)(a2 + 780) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin(&v20, a2);
  v11 = *(_QWORD *)(active + 16);
  v18 = *(_OWORD *)active;
  v19 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v22, a2);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v21 = v14;
    v20 = v13;
    if ( (_QWORD)v18 == v15 && DWORD2(v18) == DWORD2(v20) && v19 == v21 )
      break;
    v16 = v19 - 16;
    if ( (*(_DWORD *)(v19 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v18);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v16) )
    {
      if ( !v9 )
      {
        v9 = 1;
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              v4,
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x2Cu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
          v9 = 0;
          break;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v4, v16, v5 + 1, v6, 1);
      *(_DWORD *)(v16 + 2340) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v16);
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v4);
    RIMCompletePointerDeviceFrame(a1, v4);
  }
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x2Du, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
}
