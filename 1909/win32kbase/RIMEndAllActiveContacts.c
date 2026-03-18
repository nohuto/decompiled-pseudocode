/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C013C730
 * Callers:
 *     RIMResetPointerDevices @ 0x1C0055FE0 (RIMResetPointerDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C00A4EFC (RIMDoOnPnpNotification.c)
 *     _lambda_9d298b15635a5f57a4f04d62705b4b34_::_lambda_invoker_cdecl_ @ 0x1C0131EE0 (_lambda_9d298b15635a5f57a4f04d62705b4b34_--_lambda_invoker_cdecl_.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01370C8 (RIMIDERemoveInjectionDevice.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01440DC (RIMSetDeviceOutputConfig.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C014AF18 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0139BA8 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C014CBD0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C014CCB0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C014D3B0 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0152AF4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsBegin @ 0x1C0159380 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0159498 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01594EC (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C01597E0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01599B8 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  struct RIMDEV *v4; // r15
  __int64 v5; // r12
  int v6; // r13d
  int v9; // esi
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int128 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  _BYTE v24[32]; // [rsp+60h] [rbp-20h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+B8h] [rbp+38h]

  v4 = *(struct RIMDEV **)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 816);
  v6 = *(_DWORD *)(a2 + 788) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin(&v22, a2);
  v11 = *(_QWORD *)(active + 16);
  v20 = *(_OWORD *)active;
  v21 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v24, a2);
    v15 = *(_OWORD *)v12;
    v16 = *(_QWORD *)(v12 + 16);
    v17 = *(_QWORD *)v12;
    v23 = v16;
    v22 = v15;
    if ( (_QWORD)v20 == v17 )
    {
      result = DWORD2(v22);
      if ( DWORD2(v20) == DWORD2(v22) && v21 == v23 )
        break;
    }
    v19 = v21 - 16;
    if ( (*(_DWORD *)(v21 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v20);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v19) )
    {
      if ( !v9 )
      {
        v9 = 1;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                   a1,
                   v4,
                   (LARGE_INTEGER)PerformanceCounter.QuadPart);
        if ( !(_DWORD)result )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v13) = 4;
            result = WPP_RECORDER_SF_(
                       (_DWORD)gRimLog,
                       v13,
                       1,
                       43,
                       (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
          }
          v9 = 0;
          break;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, (_DWORD)v4, v19, v5 + 1, v6, 1);
      *(_DWORD *)(v19 + 2340) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v19);
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v4, v14);
    result = RIMCompletePointerDeviceFrame(a1, v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    return WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, 44, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
  }
  return result;
}
