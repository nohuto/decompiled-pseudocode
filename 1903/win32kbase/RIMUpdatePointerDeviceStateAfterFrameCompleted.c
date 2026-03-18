/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01552A0
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C014F240 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C014F320 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     RIMRemoveFromActiveDevices @ 0x1C014130C (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0141AC0 (RIMUpdatePrimaryDevice.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C015512C (RIMResetPointerDevicePrimaryContact.c)
 *     RIMCmActiveContactsBegin @ 0x1C015B578 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C015B690 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C015B6E4 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C015B9D8 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C015BBB0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x1C015BD14 (RIMCmResetContactFrameState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C019B1C0 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  int v6; // r15d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int128 v40; // [rsp+20h] [rbp-50h] BYREF
  __int64 v41; // [rsp+30h] [rbp-40h]
  __int128 v42; // [rsp+38h] [rbp-38h] BYREF
  __int64 v43; // [rsp+48h] [rbp-28h]
  _BYTE v44[32]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 712);
  v9 = v8;
  if ( (_DWORD)a3 && a4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v9 = *(_QWORD *)(v4 + 712);
  }
  if ( v9 )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin(&v42, v4);
  v11 = *(_QWORD *)(active + 16);
  v40 = *(_OWORD *)active;
  v41 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v44, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v43 = v14;
    v42 = v13;
    if ( (_QWORD)v40 == v15 )
    {
      result = DWORD2(v42);
      if ( DWORD2(v40) == DWORD2(v42) && v41 == v43 )
        break;
    }
    v17 = v41 - 16;
    if ( (*(_DWORD *)(v41 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v40);
    if ( v6 && (*(_DWORD *)(v17 + 2340) & 1) != 0 )
    {
      if ( (*(_DWORD *)(v17 + 2660) & 4) == 0 )
      {
        v18 = *(unsigned int *)(v17 + 2420);
        if ( (v18 & 4) != 0 )
        {
          v21 = *(unsigned int *)(v17 + 32);
          if ( (v21 & 4) == 0 && (v18 & 0x10000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v18, v20);
            v21 = *(unsigned int *)(v17 + 32);
          }
          v22 = (unsigned int)(*(_DWORD *)(a1 + 468) + 1);
          *(_DWORD *)(a1 + 468) = v22;
          if ( (v21 & 4) == 0 )
            ++*(_DWORD *)(a1 + 472);
          goto LABEL_28;
        }
      }
      if ( (*(_DWORD *)(v17 + 2660) & 4) != 0 )
      {
        v23 = *(_DWORD *)(v17 + 2420);
        if ( (v23 & 4) == 0 )
        {
          v21 = *(unsigned int *)(v17 + 32);
          if ( (v21 & 4) == 0 && (v23 & 0x40000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v18, v20);
            v21 = *(unsigned int *)(v17 + 32);
          }
          v22 = (unsigned int)(*(_DWORD *)(a1 + 468) - 1);
          *(_DWORD *)(a1 + 468) = v22;
          if ( (v21 & 4) == 0 )
            --*(_DWORD *)(a1 + 472);
LABEL_28:
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(v21, v22);
        }
      }
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 && (*(_DWORD *)(v17 + 2660) & 2) != 0 && (*(_DWORD *)(v17 + 2420) & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 960) != v17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
        RIMResetPointerDevicePrimaryContact(v4, v18, v20);
      }
      v18 = 128LL;
      v24 = *(_OWORD *)(v17 + 2360);
      *(_OWORD *)(v17 + 2584) = *(_OWORD *)(v17 + 2344);
      v25 = *(_OWORD *)(v17 + 2376);
      *(_OWORD *)(v17 + 2600) = v24;
      v26 = *(_OWORD *)(v17 + 2392);
      *(_OWORD *)(v17 + 2616) = v25;
      v27 = *(_OWORD *)(v17 + 2408);
      *(_OWORD *)(v17 + 2632) = v26;
      v28 = *(_OWORD *)(v17 + 2424);
      *(_OWORD *)(v17 + 2648) = v27;
      v29 = *(_OWORD *)(v17 + 2440);
      *(_OWORD *)(v17 + 2664) = v28;
      v30 = *(_OWORD *)(v17 + 2456);
      *(_OWORD *)(v17 + 2680) = v29;
      v19 = v17 + 2712;
      *(_OWORD *)(v17 + 2696) = v30;
      v31 = *(_OWORD *)(v17 + 2488);
      *(_OWORD *)(v17 + 2712) = *(_OWORD *)(v17 + 2472);
      v32 = *(_OWORD *)(v17 + 2504);
      *(_OWORD *)(v17 + 2728) = v31;
      v33 = *(_OWORD *)(v17 + 2520);
      *(_OWORD *)(v17 + 2744) = v32;
      v34 = *(_OWORD *)(v17 + 2536);
      *(_OWORD *)(v17 + 2760) = v33;
      v35 = *(_OWORD *)(v17 + 2552);
      *(_OWORD *)(v17 + 2776) = v34;
      v36 = *(_OWORD *)(v17 + 2568);
      *(_OWORD *)(v17 + 2792) = v35;
      *(_OWORD *)(v17 + 2808) = v36;
    }
    if ( a4 || (*(_DWORD *)(v17 + 2340) & 4) == 0 )
    {
      RIMCmResetContactFrameState(v17);
    }
    else
    {
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 960) != v17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
        RIMResetPointerDevicePrimaryContact(v4, v18, v20);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
      {
        if ( (*(_DWORD *)(v17 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
      }
      RIMCmDeactivateContact(v4, v17);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 480) && !*(_DWORD *)(v4 + 956) )
      result = RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 952) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      return (__int64)memset((void *)(v4 + 784), 0, 0x38uLL);
    }
  }
  return result;
}
