/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C00585B0
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 *     RIMSetTestModeStatus @ 0x1C00DE220 (RIMSetTestModeStatus.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00E2B70 (RIMIDERemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C00E58E0 (RIMResetPointerDevices.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C00F6688 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMCmActiveContactsBegin @ 0x1C00586E4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00588C0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C0106B18 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 */

__int64 __fastcall RIMEndAllActiveContacts(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  unsigned __int64 v8; // r12
  int v9; // r15d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm2
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  __int64 v18; // rdi
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  _BYTE v23[32]; // [rsp+60h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v3);
  active = RIMCmActiveContactsBegin(&v21, a2);
  v11 = *(_QWORD *)(active + 16);
  v19 = *(_OWORD *)active;
  v20 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v23, a2);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v22 = v14;
    v21 = v13;
    if ( (_QWORD)v19 == v15 && DWORD2(v19) == DWORD2(v21) && v20 == v22 )
      break;
    v18 = v20 - 16;
    if ( (*(_DWORD *)(v20 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v19);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v18) )
    {
      if ( !v9 )
      {
        v9 = 1;
        if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                              a1,
                              v3,
                              (LARGE_INTEGER)PerformanceCounter.QuadPart) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x2Au,
            (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
          v9 = 0;
          break;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame(a1, v3, v18, PerformanceCounter.LowPart, v8, 1);
      *(_DWORD *)(v18 + 2320) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v18);
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v3);
    RIMCompletePointerDeviceFrame(a1, v3);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x2Bu,
           (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
}
