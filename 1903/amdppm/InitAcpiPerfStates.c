/*
 * XREFs of InitAcpiPerfStates @ 0x1C002C344
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     Display_PSS @ 0x1C0004FC4 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C00052B8 (Display_PCT_PTC.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCT_PTC @ 0x1C00229CC (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C0022F24 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00232F8 (AcpiEval_XPSS.c)
 *     ValidateAcpi2PStates @ 0x1C002E984 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C002EA9C (ValidateXPssPStates.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // [rsp+28h] [rbp-30h]
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1413697631, a1 + 408);
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
        v3);
    }
    v2 = v3;
  }
  v4 = v2;
  if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
  {
    v5 = AcpiEval_XPSS(a1, (_QWORD *)(a1 + 440));
    v3 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xCu,
            (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v5;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v14);
      }
      *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
  {
    v6 = AcpiEval_PSS(a1, (_QWORD *)(a1 + 432));
    v3 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xEu,
            (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v14);
      }
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 264) & 0x40000000LL) != 0 )
        v3 = 0;
    }
  }
  if ( v2 >= 0 )
  {
    v2 = v3;
    if ( v3 >= 0 )
      v2 = v4;
    if ( v2 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 440);
        v15 = 0;
        v3 = ValidateXPssPStates(a1 + 408, v7, &v15);
        if ( v3 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v15);
          *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v14) = v3;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x10u,
              (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
              v14);
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 432);
        v15 = 0;
        v3 = ValidateAcpi2PStates(a1 + 408, v8, &v15);
        if ( v3 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v15);
          *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v14) = v3;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x11u,
              (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
              v14);
          }
        }
      }
      v9 = *(_QWORD *)(a1 + 264);
      if ( (v9 & 0x40000000) != 0 )
      {
        v10 = *(unsigned int **)(a1 + 440);
      }
      else
      {
        if ( (v9 & 0x30000000) == 0 )
        {
          v2 = v3;
          goto LABEL_43;
        }
        v10 = *(unsigned int **)(a1 + 432);
      }
      Display_PCT_PTC(a1 + 408, "_PCT");
      Display_PSS(v10, v11, v12);
    }
  }
LABEL_43:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
