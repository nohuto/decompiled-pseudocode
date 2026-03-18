/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C012BA30
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C0114DD0 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C0117D70 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0129A4C (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C012E3B0 (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C012EB74 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C012EBC8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C012EBF4 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C012EC20 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceButtonContact(__int64 a1, __int64 a2, char *a3, unsigned int a4, int a5)
{
  __int64 v6; // rdi
  struct _HIDP_PREPARSED_DATA *v10; // r15
  __int64 ButtonContact; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rax
  int v21; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v21 = 0;
  v12 = ButtonContact;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x20u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v21) >= 0 )
  {
    v16 = *(_DWORD *)(v12 + 32);
    if ( (v21 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(v12 + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 944) == 1 )
          RIMAddToActiveDevices(a1, v6, v17);
      }
      v16 = *(_DWORD *)(v12 + 32);
    }
    else if ( __CFSHR__(*(_DWORD *)(v12 + 32), 2) )
    {
      *(_DWORD *)(v12 + 2340) |= 4u;
    }
    if ( (v16 & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed(v12)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(v12)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12)) )
    {
      v18 = a5;
      *(_DWORD *)(v12 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(v12 + 2392) = v18;
      *(_DWORD *)(v12 + 2408) = RIMGetPointerInputType(v6);
      *(_DWORD *)(v12 + 2420) = v21;
      *(_DWORD *)(v12 + 2472) = *(_DWORD *)(v6 + 780);
      *(_QWORD *)(v12 + 2488) = *(_QWORD *)(v6 + 808);
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
        v19 = *(_QWORD *)(a2 + 24);
      else
        v19 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v12 + 2340) |= 1u;
      *(_QWORD *)(v12 + 2424) = v19;
    }
  }
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x21u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
}
