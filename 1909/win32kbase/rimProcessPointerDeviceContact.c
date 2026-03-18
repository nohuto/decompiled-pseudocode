/*
 * XREFs of rimProcessPointerDeviceContact @ 0x1C0156A14
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0153BFC (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C013A26C (WPP_RECORDER_SF_dDD.c)
 *     RIMAddToActiveDevices @ 0x1C013AF04 (RIMAddToActiveDevices.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0153610 (rimApplyPointerDevicePolicies.c)
 *     rimFindOrCreateActiveContact @ 0x1C0155950 (rimFindOrCreateActiveContact.c)
 *     rimPopulateContactFrameData @ 0x1C0155FA0 (rimPopulateContactFrameData.c)
 *     RIMCmDeactivateContact @ 0x1C01597E0 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01599B8 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C01599E4 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0159A10 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmResetContactFrameState @ 0x1C0159B1C (RIMCmResetContactFrameState.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C0159E34 (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessPointerDeviceContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7,
        int *a8)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v12; // rsi
  struct _HIDP_PREPARSED_DATA *v13; // rbx
  __int64 result; // rax
  int v16; // edx
  __int64 v17; // rbx
  int v18; // esi
  int v19; // r14d
  _DWORD *v20; // rax
  PalmTelemetry *QuadPart; // rcx
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  int IsContactSuppressed; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  int v34; // ecx
  int v35; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v36; // [rsp+7Ch] [rbp-5h] BYREF
  unsigned int v37; // [rsp+80h] [rbp-1h] BYREF
  unsigned int v38; // [rsp+84h] [rbp+3h] BYREF
  __int64 v39; // [rsp+88h] [rbp+7h] BYREF
  int v40; // [rsp+D0h] [rbp+4Fh] BYREF

  v8 = *(_QWORD *)(a2 + 464);
  v9 = *(_QWORD *)(a2 + 480);
  v40 = 0;
  v12 = a2;
  v38 = 0;
  v13 = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v39 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 20, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  *a7 = 0;
  *a8 = 0;
  result = rimFindOrCreateActiveContact(v9, v13, a3, a4, a5, &v40);
  v17 = result;
  if ( !result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      result = WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 21, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
    }
    LOBYTE(v18) = 1;
    goto LABEL_18;
  }
  v19 = v40;
  if ( v40 )
  {
    if ( *(_DWORD *)(v9 + 952) == 1 )
      RIMAddToActiveDevices(a1, v9);
  }
  else if ( (*(_DWORD *)(result + 2340) & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        v16,
        1,
        22,
        (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
        *(_DWORD *)result);
    }
    LOBYTE(v18) = 1;
    goto LABEL_17;
  }
  v18 = rimPopulateContactFrameData((__int64)a1, v12, a3, a4, a5, a6, v17, a7, &v38, &v37, &v36, &v35, &v39);
  v16 = 4;
  if ( v18 >= 0 )
  {
    v20 = a7;
    if ( *a7 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_57;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v16, 1, 24, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
    }
    else
    {
      if ( v19 )
      {
        *(_DWORD *)(v17 + 48) = *(_DWORD *)(v17 + 2472);
        *(_QWORD *)(v17 + 56) = *(_QWORD *)(v17 + 2488);
        *(_QWORD *)(v17 + 64) = *(_QWORD *)(v17 + 2448);
      }
      QuadPart = (PalmTelemetry *)a1[107].QuadPart;
      if ( QuadPart )
        PalmTelemetry::Update(QuadPart, (struct tagHID_POINTER_DEVICE_INFO *)v9, (struct tagHPD_CONTACT *)v17, v19);
      rimApplyPointerDevicePolicies(v9, (_DWORD *)v17, v19, v38, v37, v36, v35, v39);
      if ( (*(_DWORD *)(v17 + 32) & 0x20) != 0 )
      {
        if ( (a1[10].HighPart & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, *((_QWORD *)&v22 + 1), v24);
        v19 = v40;
        v23 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
        v22 = v23 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        a1[76] = *(LARGE_INTEGER *)((char *)&v22 + 8);
      }
      *(_QWORD *)(v17 + 72) = *(_QWORD *)(v17 + 2448);
      if ( !*(_DWORD *)(v17 + 52) && (*(_DWORD *)(v17 + 2660) & 4) == 0 && (*(_DWORD *)(v17 + 2420) & 4) != 0 )
      {
        v19 = v40;
        v23 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(v17 + 52) = v23;
      }
      if ( !gDeviceArbitrationType && (*(_DWORD *)(v17 + 8) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, *((_QWORD *)&v22 + 1), 0xFFFFF78000000004uLL);
      IsContactSuppressed = RIMCmIsContactSuppressed(v17);
      if ( !IsContactSuppressed || *(_DWORD *)(v9 + 24) != 7 || (v29 = 1, *(_DWORD *)(v17 + 8) != 16) )
        v29 = 0;
      if ( !IsContactSuppressed
        || v29
        || (unsigned int)RIMCmIsContactDeliveringPointerData(v17)
        || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v17) )
      {
        *(_DWORD *)(v17 + 2340) |= 1u;
        if ( v29 )
        {
          if ( (*(_DWORD *)(v17 + 32) & 2) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
          if ( !(unsigned int)RIMCmIsContactSuppressed(v17) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
          *(_DWORD *)(v17 + 2420) |= 0x2000000u;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 4;
        WPP_RECORDER_SF_dDD(
          v27,
          v26,
          v28,
          25,
          (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
          *(_DWORD *)v17,
          *(_DWORD *)(v17 + 8),
          *(_DWORD *)(v17 + 2660));
      }
    }
    goto LABEL_55;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_D(
      (_DWORD)gRimLog,
      v16,
      1,
      23,
      (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
      *(_DWORD *)v17);
LABEL_55:
    v16 = 4;
  }
  v20 = a7;
LABEL_57:
  if ( v18 < 0 )
  {
    if ( v19 )
      goto LABEL_64;
LABEL_17:
    result = RIMCmResetContactFrameState(v17);
    goto LABEL_18;
  }
  *a8 = v19;
  if ( *v20 )
  {
LABEL_64:
    result = RIMCmDeactivateContact(v9, v17);
    goto LABEL_18;
  }
  v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v17 + 2328) = *(_DWORD *)(v17 + 2420);
  *(_DWORD *)(v17 + 44) = v33;
  v34 = *(_DWORD *)(v9 + 24);
  if ( (unsigned int)(v34 - 1) > 3 )
  {
    result = (unsigned int)(v34 - 5);
    if ( (unsigned int)result <= 1 )
    {
      result = *(unsigned int *)(v17 + 2504);
      *(_DWORD *)(v17 + 2336) = result;
    }
  }
  else
  {
    result = *(unsigned int *)(v17 + 2504);
    *(_DWORD *)(v17 + 2332) = result;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    return WPP_RECORDER_SF_D(
             (_DWORD)gRimLog,
             v16,
             1,
             26,
             (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
             v18);
  }
  return result;
}
