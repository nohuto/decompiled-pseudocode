/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C00588C0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00586E4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RIMRemoveFromActiveDevices @ 0x1C00ED7BC (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00EDF20 (RIMUpdatePrimaryDevice.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C00FFF94 (RIMResetPointerDevicePrimaryContact.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 *     RIMCmDeactivateContact @ 0x1C0106B18 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmResetContactFrameState @ 0x1C0106E60 (RIMCmResetContactFrameState.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C013D570 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int8 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm2
  __int64 v14; // xmm1_8
  __int64 v15; // rax
  unsigned __int8 result; // al
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int128 v37; // [rsp+20h] [rbp-50h] BYREF
  __int64 v38; // [rsp+30h] [rbp-40h]
  __int128 v39; // [rsp+38h] [rbp-38h] BYREF
  __int64 v40; // [rsp+48h] [rbp-28h]
  _BYTE v41[32]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 480);
  v8 = *(_QWORD *)(v4 + 672);
  v9 = v8;
  if ( a3 && a4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v9 = *(_QWORD *)(v4 + 672);
  }
  if ( v9 )
    *(_DWORD *)(v8 + 36) = 0;
  active = RIMCmActiveContactsBegin((__int64)&v39, v4);
  v11 = *(_QWORD *)(active + 16);
  v37 = *(_OWORD *)active;
  v38 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd((__int64)v41, v4);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v40 = v14;
    v39 = v13;
    result = (_QWORD)v37 != v15 || DWORD2(v37) != DWORD2(v39) || v38 != v40;
    if ( !result )
      break;
    v17 = v38 - 16;
    if ( (*(_DWORD *)(v38 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(v4, &v37);
    if ( a3 && (*(_DWORD *)(v17 + 2320) & 1) != 0 )
    {
      if ( (*(_DWORD *)(v17 + 2620) & 4) == 0 )
      {
        v18 = *(unsigned int *)(v17 + 2404);
        if ( (v18 & 4) != 0 )
        {
          v20 = *(unsigned int *)(v17 + 32);
          if ( (v20 & 4) == 0 && (v18 & 0x10000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v18);
            v20 = *(unsigned int *)(v17 + 32);
          }
          v21 = (unsigned int)(*(_DWORD *)(a1 + 452) + 1);
          *(_DWORD *)(a1 + 452) = v21;
          if ( (v20 & 4) == 0 )
            ++*(_DWORD *)(a1 + 456);
          goto LABEL_31;
        }
      }
      if ( (*(_DWORD *)(v17 + 2620) & 4) != 0 )
      {
        v22 = *(_DWORD *)(v17 + 2404);
        if ( (v22 & 4) == 0 )
        {
          v20 = *(unsigned int *)(v17 + 32);
          if ( (v20 & 4) == 0 && (v22 & 0x40000) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v18);
            v20 = *(unsigned int *)(v17 + 32);
          }
          v21 = (unsigned int)(*(_DWORD *)(a1 + 452) - 1);
          *(_DWORD *)(a1 + 452) = v21;
          if ( (v20 & 4) == 0 )
            --*(_DWORD *)(a1 + 456);
LABEL_31:
          ApiSetDwmAsyncNotifyDigitizerActiveContacts(v20, v21);
        }
      }
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 && (*(_DWORD *)(v17 + 2620) & 2) != 0 && (*(_DWORD *)(v17 + 2404) & 2) == 0 )
      {
        if ( *(_QWORD *)(v4 + 920) != v17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      v18 = 128LL;
      v23 = *(_OWORD *)(v17 + 2344);
      *(_OWORD *)(v17 + 2544) = *(_OWORD *)(v17 + 2328);
      v24 = *(_OWORD *)(v17 + 2360);
      *(_OWORD *)(v17 + 2560) = v23;
      v25 = *(_OWORD *)(v17 + 2376);
      *(_OWORD *)(v17 + 2576) = v24;
      v26 = *(_OWORD *)(v17 + 2392);
      *(_OWORD *)(v17 + 2592) = v25;
      v27 = *(_OWORD *)(v17 + 2408);
      *(_OWORD *)(v17 + 2608) = v26;
      v28 = *(_OWORD *)(v17 + 2424);
      *(_OWORD *)(v17 + 2624) = v27;
      v29 = *(_OWORD *)(v17 + 2440);
      *(_OWORD *)(v17 + 2640) = v28;
      v19 = v17 + 2672;
      *(_OWORD *)(v17 + 2656) = v29;
      v30 = *(_OWORD *)(v17 + 2472);
      *(_OWORD *)(v17 + 2672) = *(_OWORD *)(v17 + 2456);
      v31 = *(_OWORD *)(v17 + 2488);
      *(_OWORD *)(v17 + 2688) = v30;
      v32 = *(_OWORD *)(v17 + 2504);
      *(_OWORD *)(v17 + 2704) = v31;
      v33 = *(_OWORD *)(v17 + 2520);
      v34 = *(_QWORD *)(v17 + 2536);
      *(_OWORD *)(v17 + 2720) = v32;
      *(_OWORD *)(v17 + 2736) = v33;
      *(_QWORD *)(v17 + 2752) = v34;
    }
    if ( a4 || (*(_DWORD *)(v17 + 2320) & 4) == 0 )
    {
      RIMCmResetContactFrameState(v17);
    }
    else
    {
      if ( (*(_DWORD *)(v17 + 32) & 8) != 0 )
      {
        if ( *(_QWORD *)(v4 + 920) != v17 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
        RIMResetPointerDevicePrimaryContact(v4);
      }
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v17) )
      {
        if ( (*(_DWORD *)(v17 + 32) & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35);
      }
      RIMCmDeactivateContact(v4, v17);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 464) && !*(_DWORD *)(v4 + 916) )
      result = RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 912) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      return (unsigned __int8)memset((void *)(v4 + 744), 0, 0x38uLL);
    }
  }
  return result;
}
