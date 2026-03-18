/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x1C00806B0
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C007F978 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C007FE68 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C00802A0 (HUBACPI_EnumChildren.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  int v2; // eax
  unsigned __int16 v3; // r9
  int v4; // eax
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  __int64 v7; // rbx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // r12
  __int64 i; // rbx
  __int64 v13; // rbx
  unsigned __int16 v14; // r9
  unsigned int v15; // r8d
  unsigned __int8 v16; // dl
  int v17; // ecx
  __int64 v18; // rcx
  int v19; // r13d
  const EVENT_DESCRIPTOR *v20; // rdx
  unsigned __int64 v22; // rdx
  unsigned int v23; // r8d
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-79h]
  __int64 v27; // [rsp+28h] [rbp-71h]
  __int64 v28; // [rsp+28h] [rbp-71h]
  __int64 v29; // [rsp+40h] [rbp-59h] BYREF
  _DWORD *v30; // [rsp+48h] [rbp-51h]
  __int64 v31; // [rsp+50h] [rbp-49h] BYREF
  __int64 v32; // [rsp+58h] [rbp-41h] BYREF
  __int64 v33; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v34[7]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v35[10]; // [rsp+A0h] [rbp+7h] BYREF
  int v36; // [rsp+100h] [rbp+67h]
  _DWORD *v37; // [rsp+108h] [rbp+6Fh]
  __int64 v38; // [rsp+118h] [rbp+7Fh]

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  memset(v34, 0, sizeof(v34));
  v34[3] = 0x100000001LL;
  v34[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v34[0]) = 56;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v34,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         20LL,
         &v32,
         v35);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v3 = 36;
    goto LABEL_4;
  }
  v4 = HUBACPI_EnumChildren(a1, v32);
  if ( v4 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v5 = 37;
    v6 = 4;
    goto LABEL_8;
  }
  if ( v4 != -2147483643 )
    goto LABEL_59;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x26u, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
  v7 = *(unsigned int *)(v35[0] + 4LL);
  memset(v34, 0, sizeof(v34));
  v34[3] = 0x100000001LL;
  v34[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v34[0]) = 56;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v34,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         v7,
         &v31,
         &v33) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 39;
LABEL_15:
      v6 = 2;
LABEL_8:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), v6, 3u, v5, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
      goto LABEL_59;
    }
    goto LABEL_59;
  }
  v2 = HUBACPI_EnumChildren(a1, v31);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 40;
LABEL_4:
      LODWORD(v27) = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v3,
        (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
        v27);
      goto LABEL_59;
    }
    goto LABEL_59;
  }
  memset(v34, 0, sizeof(v34));
  v34[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v34[0]) = 56;
  v34[3] = 0x100000001LL;
  LODWORD(v26) = 1044;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v34,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL) >= 0 )
  {
    v36 = 1;
    v8 = (_DWORD *)(v33 + 8);
    if ( *(_DWORD *)(v33 + 4) <= 1u )
      goto LABEL_59;
    while ( 1 )
    {
      v8 = (_DWORD *)((char *)v8 + (unsigned int)v8[1] + 8);
      v37 = v8;
      if ( (*v8 & 1) == 0 || !v8[1] )
        goto LABEL_58;
      v30 = v8 + 2;
      WORD1(v29) = *((_WORD *)v8 + 2);
      LOWORD(v29) = WORD1(v29) - 1;
      if ( (int)HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v29, 1380204895, 0LL) < 0
        || !*(_DWORD *)(v38 + 8)
        || *(_WORD *)(v38 + 12) )
      {
        goto LABEL_57;
      }
      v11 = *(_WORD *)(v38 + 16);
      if ( !v11 || v11 > *(_WORD *)(a1 + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x2Au,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
        goto LABEL_57;
      }
      for ( i = *(_QWORD *)(a1 + 2360); ; i = *(_QWORD *)(v13 + 248) )
      {
        v13 = i - 248;
        if ( a1 == v13 - 2112 )
          goto LABEL_57;
        if ( *(_WORD *)(v13 + 200) == v11 )
          break;
      }
      if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v29, v9, v10, v26, 0LL) >= 0 )
        break;
LABEL_51:
      v19 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v29, 1129338207, 0LL);
      if ( v19 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            4u,
            3u,
            0x2Fu,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
        goto LABEL_54;
      }
      v18 = v38;
      if ( *(_DWORD *)(v38 + 8) )
      {
        v22 = v38 + 12;
        v23 = 0;
        if ( v38 + 12 < v38 + (unsigned __int64)*(unsigned int *)(v38 + 4) )
        {
          while ( v23 < *(_DWORD *)(v18 + 8) )
          {
            if ( v23 >= 4 )
            {
              v19 = -1072431093;
              goto LABEL_82;
            }
            if ( *(_WORD *)v22 )
            {
              v19 = -1072431096;
              goto LABEL_82;
            }
            v18 = acpiUpcPackageFields[2 * v23];
            v24 = acpiUpcPackageFields[2 * v23 + 1];
            if ( v24 == 1 )
            {
              *(_BYTE *)(v18 + v13 + 1340) = *(_BYTE *)(v22 + 4);
            }
            else
            {
              if ( v24 != 4 )
              {
                v19 = -1072431089;
                break;
              }
              *(_DWORD *)(v18 + v13 + 1340) = *(_DWORD *)(v22 + 4);
            }
            LOWORD(v25) = *(_WORD *)(v22 + 2);
            if ( (unsigned __int16)v25 >= 4u )
              v25 = (unsigned __int16)v25;
            else
              v25 = 4LL;
            v18 = v38;
            v22 += v25 + 4;
            ++v23;
            if ( v22 >= v38 + (unsigned __int64)*(unsigned int *)(v38 + 4) )
              break;
          }
        }
        if ( v19 < 0 )
        {
LABEL_82:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2520),
              2u,
              6u,
              0x31u,
              (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
LABEL_54:
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) == 0 )
            goto LABEL_57;
          v20 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_56:
          LODWORD(v28) = v19;
          LODWORD(v26) = v11;
          McTemplateK0pqq((struct _MCGEN_TRACE_CONTEXT *)v18, v20, 0LL, *(_QWORD *)(a1 + 16), v26, v28);
          goto LABEL_57;
        }
        _InterlockedOr((volatile signed __int32 *)(v13 + 204), 2u);
        if ( *(_BYTE *)(v13 + 1340) )
          _InterlockedOr((volatile signed __int32 *)(v13 + 204), 1u);
        else
          _InterlockedAnd((volatile signed __int32 *)(v13 + 204), 0xFFFFFFFE);
        if ( *(_BYTE *)(v13 + 1341) == 10 )
          _InterlockedOr((volatile signed __int32 *)(v13 + 204), 0x200u);
        v19 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v29, 1145851999, 0LL);
        if ( v19 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2520),
              4u,
              3u,
              0x32u,
              (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
          goto LABEL_95;
        }
        if ( !*(_DWORD *)(v38 + 8) || *(_WORD *)(v38 + 12) != 2 || *(_WORD *)(v38 + 14) < 0x10u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2520),
              2u,
              6u,
              0x33u,
              (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
LABEL_95:
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
          {
            v20 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
            goto LABEL_56;
          }
          goto LABEL_57;
        }
        *(_OWORD *)(v13 + 1352) = *(_OWORD *)(v38 + 16);
        _InterlockedOr((volatile signed __int32 *)(v13 + 204), 4u);
        if ( (*(_BYTE *)(v38 + 24) & 1) == 0 )
          _InterlockedAnd((volatile signed __int32 *)(v13 + 204), 0xFFFFFFFE);
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
      }
      else
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          LODWORD(v26) = v11;
          McTemplateK0pqq(
            (struct _MCGEN_TRACE_CONTEXT *)v38,
            &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE,
            0LL,
            *(_QWORD *)(a1 + 16));
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x30u,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
      }
LABEL_57:
      v8 = v37;
LABEL_58:
      if ( (unsigned int)++v36 >= *(_DWORD *)(v33 + 4) )
        goto LABEL_59;
    }
    if ( *(_WORD *)(v38 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_51;
      v14 = 43;
      v15 = 6;
      v16 = 2;
    }
    else
    {
      v17 = *(unsigned __int16 *)(v38 + 16);
      *(_DWORD *)(v13 + 216) = v17;
      switch ( v17 )
      {
        case 0:
          goto LABEL_51;
        case 1:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v14 = 44;
          break;
        case 2:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v14 = 45;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v14 = 46;
          LODWORD(v28) = v17;
          v16 = 2;
          v15 = 6;
          goto LABEL_50;
      }
      v16 = 4;
      v15 = 3;
    }
    LODWORD(v28) = v11;
LABEL_50:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      v16,
      v15,
      v14,
      (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
      v28);
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = 41;
    goto LABEL_15;
  }
LABEL_59:
  if ( v31 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v32 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return 0LL;
}
