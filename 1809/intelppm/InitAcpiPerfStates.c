/*
 * XREFs of InitAcpiPerfStates @ 0x1C0020964
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     Display_PSS @ 0x1C0001E48 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0001F84 (Display_PCT_PTC.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     ValidateAcpi2PStates @ 0x1C0020FF4 (ValidateAcpi2PStates.c)
 *     AcpiEval_PSS @ 0x1C0021B78 (AcpiEval_PSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C0022084 (AcpiEval_PCT_PTC.c)
 *     ValidateXPssPStates @ 0x1C002C124 (ValidateXPssPStates.c)
 *     AcpiEval_XPSS @ 0x1C002E250 (AcpiEval_XPSS.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int *v9; // rdi
  char v10; // dl
  int v11; // r8d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // [rsp+28h] [rbp-30h]
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = 0;
  v3 = AcpiEval_PCT_PTC(a1, 1413697631LL, a1 + 392);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
    else
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
        v3);
    v2 = v4;
  }
  v5 = v2;
  if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
  {
    v13 = AcpiEval_XPSS(a1, a1 + 424);
    v4 = v13;
    if ( v13 < 0 )
    {
      if ( v13 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
      }
      else
      {
        LODWORD(v15) = v13;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v15);
      }
      *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
  {
    v6 = AcpiEval_PSS(a1, a1 + 416);
    v4 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -1073741772 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xEu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids);
      }
      else
      {
        LODWORD(v15) = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
          v15);
      }
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 264) & 0x40000000LL) != 0 )
        v4 = 0;
    }
  }
  if ( v2 >= 0 )
  {
    v2 = v4;
    if ( v4 >= 0 )
      v2 = v5;
    if ( v2 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 424);
        v16 = 0;
        v4 = ValidateXPssPStates(a1 + 392, v14, &v16);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v16);
          *(_QWORD *)(a1 + 264) &= ~0x40000000uLL;
          LODWORD(v15) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x10u,
            (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
            v15);
        }
      }
      if ( (*(_DWORD *)(a1 + 264) & 0x30000000) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 416);
        v16 = 0;
        v4 = ValidateAcpi2PStates(a1 + 392, v7, &v16);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v16);
          *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFCFFFFFFFuLL;
          LODWORD(v15) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x11u,
            (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
            v15);
        }
      }
      v8 = *(_QWORD *)(a1 + 264);
      if ( (v8 & 0x40000000) != 0 )
      {
        v9 = *(unsigned int **)(a1 + 424);
      }
      else
      {
        if ( (v8 & 0x30000000) == 0 )
        {
          v2 = v4;
          goto LABEL_17;
        }
        v9 = *(unsigned int **)(a1 + 416);
      }
      Display_PCT_PTC(a1 + 392, (__int64)"_PCT");
      Display_PSS(v9, v10, v11);
    }
  }
LABEL_17:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
