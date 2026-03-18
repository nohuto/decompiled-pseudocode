/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C0158A10
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0155C04 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C013D574 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C0140480 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0156684 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C015B394 (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C015BB5C (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C015BBB0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C015BBDC (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C015BC08 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rdi
  struct _HIDP_PREPARSED_DATA *v10; // r12
  __int64 ButtonContact; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  _UNKNOWN **v15; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  _UNKNOWN **result; // rax
  int v21; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v21 = 0;
  v14 = ButtonContact;
  v15 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 32, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v21) >= 0 )
  {
    v17 = *(_DWORD *)(v14 + 32);
    if ( (v21 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(v14 + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 952) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
      v17 = *(_DWORD *)(v14 + 32);
    }
    else if ( __CFSHR__(*(_DWORD *)(v14 + 32), 2) )
    {
      *(_DWORD *)(v14 + 2340) |= 4u;
    }
    if ( (v17 & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed(v14)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(v14)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v14)) )
    {
      v18 = a5;
      *(_DWORD *)(v14 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(v14 + 2392) = v18;
      *(_DWORD *)(v14 + 2408) = RIMGetPointerInputType(v6);
      *(_DWORD *)(v14 + 2420) = v21;
      *(_DWORD *)(v14 + 2472) = *(_DWORD *)(v6 + 788);
      *(_QWORD *)(v14 + 2488) = *(_QWORD *)(v6 + 816);
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
        v19 = *(_QWORD *)(a2 + 24);
      else
        v19 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v14 + 2340) |= 1u;
      *(_QWORD *)(v14 + 2424) = v19;
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          v16,
                          1,
                          33,
                          (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  return result;
}
