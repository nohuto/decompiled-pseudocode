/*
 * XREFs of InitAcpiPerfStates @ 0x1C0020570
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     Display_PSS @ 0x1C00021EC (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C00023B8 (Display_PCT_PTC.c)
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     ValidateAcpi2PStates @ 0x1C002184C (ValidateAcpi2PStates.c)
 *     AcpiEval_PSS @ 0x1C00223D0 (AcpiEval_PSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C00228E0 (AcpiEval_PCT_PTC.c)
 *     ValidateXPssPStates @ 0x1C002E634 (ValidateXPssPStates.c)
 *     AcpiEval_XPSS @ 0x1C0030898 (AcpiEval_XPSS.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int *v7; // rdi
  char v8; // dl
  int v9; // r8d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // [rsp+28h] [rbp-30h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1413697631LL, a1 + 408);
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
    v11 = AcpiEval_XPSS(a1, a1 + 440);
    v3 = v11;
    if ( v11 < 0 )
    {
      if ( v11 == -1073741772 )
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
        LODWORD(v13) = v11;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v13);
      }
      *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
  {
    v3 = AcpiEval_PSS(a1, a1 + 432);
    if ( v3 < 0 )
    {
      if ( v3 == -1073741772 )
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
        LODWORD(v13) = v3;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v13);
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
        v12 = *(_QWORD *)(a1 + 440);
        v14 = 0;
        v3 = ValidateXPssPStates(a1 + 408, v12, &v14);
        if ( v3 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v14);
          *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v13) = v3;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x10u,
              (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
              v13);
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 432);
        v14 = 0;
        v3 = ValidateAcpi2PStates(a1 + 408, v5, &v14);
        if ( v3 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v14);
          *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v13) = v3;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x11u,
              (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
              v13);
          }
        }
      }
      v6 = *(_QWORD *)(a1 + 264);
      if ( (v6 & 0x40000000) != 0 )
      {
        v7 = *(unsigned int **)(a1 + 440);
      }
      else
      {
        if ( (v6 & 0x30000000) == 0 )
        {
          v2 = v3;
          goto LABEL_16;
        }
        v7 = *(unsigned int **)(a1 + 432);
      }
      Display_PCT_PTC(a1 + 408, (__int64)"_PCT");
      Display_PSS(v7, v8, v9);
    }
  }
LABEL_16:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
