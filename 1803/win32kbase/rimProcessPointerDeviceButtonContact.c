/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C0102D4C
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0100AF4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C00EA1F8 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C00ECA34 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0101288 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C01065B0 (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C0106CD0 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0106D24 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0106D7C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceButtonContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rdi
  struct _HIDP_PREPARSED_DATA *v10; // r15
  __int64 ButtonContact; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rax
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v19 = 0;
  v12 = ButtonContact;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x1Bu,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v19) >= 0 )
  {
    v15 = *(_DWORD *)(v12 + 32);
    if ( (v19 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(v12 + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 912) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
      v15 = *(_DWORD *)(v12 + 32);
    }
    else if ( __CFSHR__(*(_DWORD *)(v12 + 32), 2) )
    {
      *(_DWORD *)(v12 + 2320) |= 4u;
    }
    if ( (v15 & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed(v12)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(v12)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12)) )
    {
      v16 = a5;
      *(_DWORD *)(v12 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(v12 + 2376) = v16;
      *(_DWORD *)(v12 + 2392) = RIMGetPointerInputType(v6);
      *(_DWORD *)(v12 + 2404) = v19;
      *(_DWORD *)(v12 + 2456) = *(_DWORD *)(v6 + 748);
      *(_QWORD *)(v12 + 2472) = *(_QWORD *)(v6 + 776);
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
        v17 = *(_QWORD *)(a2 + 24);
      else
        v17 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v12 + 2320) |= 1u;
      *(_QWORD *)(v12 + 2408) = v17;
    }
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x1Cu,
           (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
}
