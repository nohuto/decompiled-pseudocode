/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x1C0078D48
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C006AC40 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0078184 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C00785F4 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C00789B8 (HUBACPI_EnumChildren.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  int v2; // eax
  unsigned __int16 v3; // r9
  int v4; // eax
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 MatchAnyKeyword; // r15
  __int64 i; // rbx
  __int64 v14; // rbx
  unsigned __int16 v15; // r9
  unsigned int v16; // r8d
  unsigned __int8 v17; // dl
  int MatchAnyKeyword_low; // ecx
  int v19; // r12d
  int v20; // ebx
  struct _MCGEN_TRACE_CONTEXT *v21; // rcx
  const EVENT_DESCRIPTOR *v22; // rdx
  struct _MCGEN_TRACE_CONTEXT *v24; // rcx
  char *v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rax
  struct _MCGEN_TRACE_CONTEXT *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-79h]
  __int64 v32; // [rsp+28h] [rbp-71h]
  __int64 *v33; // [rsp+28h] [rbp-71h]
  struct _MCGEN_TRACE_CONTEXT **v34; // [rsp+30h] [rbp-69h]
  __int64 v35; // [rsp+40h] [rbp-59h] BYREF
  __int64 v36; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 v37[4]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v38; // [rsp+58h] [rbp-41h]
  __int64 v39; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v40[7]; // [rsp+68h] [rbp-31h] BYREF
  _QWORD v41[10]; // [rsp+A0h] [rbp+7h] BYREF
  int v42; // [rsp+100h] [rbp+67h]
  _DWORD *v43; // [rsp+108h] [rbp+6Fh]
  __int64 v44; // [rsp+110h] [rbp+77h] BYREF
  struct _MCGEN_TRACE_CONTEXT *v45; // [rsp+118h] [rbp+7Fh] BYREF

  v35 = 0LL;
  v44 = 0LL;
  v36 = 0LL;
  memset(v40, 0, sizeof(v40));
  v40[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v40[0]) = 56;
  v40[3] = 0x100000001LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v40,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         20LL,
         &v36,
         v41);
  if ( v2 < 0 )
  {
    v3 = 36;
LABEL_3:
    LODWORD(v32) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v3,
      (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
      v32);
    goto LABEL_47;
  }
  v4 = HUBACPI_EnumChildren(a1, v36);
  if ( v4 == -1073741637 )
  {
    v5 = 37;
    v6 = 4;
LABEL_6:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), v6, 3u, v5, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
    goto LABEL_47;
  }
  if ( v4 == -2147483643 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x26u, (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
    v7 = *(unsigned int *)(v41[0] + 4LL);
    memset(v40, 0, sizeof(v40));
    v40[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v40[0]) = 56;
    v40[3] = 0x100000001LL;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v40,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL,
           v7,
           &v35,
           &v39) < 0 )
    {
      v5 = 39;
LABEL_10:
      v6 = 2;
      goto LABEL_6;
    }
    v2 = HUBACPI_EnumChildren(a1, v35);
    if ( v2 < 0 )
    {
      v3 = 40;
      goto LABEL_3;
    }
    memset(v40, 0, sizeof(v40));
    v34 = &v45;
    v40[4] = *(_QWORD *)(a1 + 16);
    v33 = &v44;
    LODWORD(v40[0]) = 56;
    v40[3] = 0x100000001LL;
    LODWORD(v31) = 1044;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           v40,
           (unsigned int)ExDefaultNonPagedPoolType,
           1748191317LL) < 0 )
    {
      v5 = 41;
      goto LABEL_10;
    }
    v42 = 1;
    v8 = (_DWORD *)(v39 + 8);
    if ( *(_DWORD *)(v39 + 4) > 1u )
    {
      while ( 1 )
      {
        v8 = (_DWORD *)((char *)v8 + (unsigned int)v8[1] + 8);
        v43 = v8;
        if ( (*v8 & 1) == 0 )
          goto LABEL_46;
        v9 = v8[1];
        if ( !v9 )
          goto LABEL_46;
        v37[1] = v8[1];
        v38 = v8 + 2;
        v37[0] = v9 - 1;
        if ( (int)HUBACPI_EvalAcpiMethodEx(a1, v37, 1380204895, v44) < 0 || !LODWORD(v45->Logger) || WORD2(v45->Logger) )
          goto LABEL_45;
        MatchAnyKeyword = v45->MatchAnyKeyword;
        if ( !MatchAnyKeyword || MatchAnyKeyword > *(_WORD *)(a1 + 48) )
        {
          LODWORD(v33) = MatchAnyKeyword;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x2Au,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
            v33);
          goto LABEL_45;
        }
        for ( i = *(_QWORD *)(a1 + 2360); ; i = *(_QWORD *)(v14 + 248) )
        {
          v14 = i - 248;
          if ( a1 == v14 - 2112 )
            goto LABEL_45;
          if ( *(_WORD *)(v14 + 200) == MatchAnyKeyword )
            break;
        }
        if ( (int)HUBACPI_EvaluateDsmMethod(a1, v37, v10, v11, v31, v44) >= 0 )
          break;
LABEL_40:
        v19 = HUBACPI_EvalAcpiMethodEx(a1, v37, 1129338207, v44);
        if ( v19 < 0 )
        {
          v20 = MatchAnyKeyword;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            4u,
            3u,
            0x2Fu,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
          goto LABEL_42;
        }
        v24 = v45;
        if ( LODWORD(v45->Logger) )
        {
          v25 = (char *)&v45->Logger + 4;
          v26 = 0;
          if ( (char *)&v45->Logger + 4 < (char *)v45 + HIDWORD(v45->RegistrationHandle) )
          {
            while ( v26 < LODWORD(v24->Logger) )
            {
              if ( v26 >= 4 )
              {
                v19 = -1072431093;
                goto LABEL_71;
              }
              if ( *(_WORD *)v25 )
              {
                v19 = -1072431096;
                goto LABEL_71;
              }
              v27 = acpiUpcPackageFields[2 * v26];
              v28 = acpiUpcPackageFields[2 * v26 + 1];
              if ( v28 == 1 )
              {
                *(_BYTE *)(v27 + v14 + 1340) = v25[4];
              }
              else
              {
                if ( v28 != 4 )
                {
                  v19 = -1072431089;
                  break;
                }
                *(_DWORD *)(v27 + v14 + 1340) = *((_DWORD *)v25 + 1);
              }
              LOWORD(v29) = *((_WORD *)v25 + 1);
              if ( (unsigned __int16)v29 >= 4u )
                v29 = (unsigned __int16)v29;
              else
                v29 = 4LL;
              v24 = v45;
              v25 += v29 + 4;
              ++v26;
              if ( v25 >= (char *)v45 + HIDWORD(v45->RegistrationHandle) )
                break;
            }
          }
          if ( v19 < 0 )
          {
LABEL_71:
            LODWORD(v34) = v19;
            v20 = MatchAnyKeyword;
            LODWORD(v33) = MatchAnyKeyword;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2520),
              2u,
              6u,
              0x31u,
              (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
              v33,
              v34);
LABEL_42:
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) == 0 )
              goto LABEL_45;
            v22 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_44:
            LODWORD(v33) = v19;
            LODWORD(v31) = v20;
            McTemplateK0pqq(v21, v22, 0LL, *(_QWORD *)(a1 + 16), v31, v33);
            goto LABEL_45;
          }
          _InterlockedOr((volatile signed __int32 *)(v14 + 204), 2u);
          if ( *(_BYTE *)(v14 + 1340) )
            _InterlockedOr((volatile signed __int32 *)(v14 + 204), 1u);
          else
            _InterlockedAnd((volatile signed __int32 *)(v14 + 204), 0xFFFFFFFE);
          if ( *(_BYTE *)(v14 + 1341) == 10 )
            _InterlockedOr((volatile signed __int32 *)(v14 + 204), 0x200u);
          v19 = HUBACPI_EvalAcpiMethodEx(a1, v37, 1145851999, v44);
          if ( v19 < 0 )
          {
            v20 = MatchAnyKeyword;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2520),
              4u,
              3u,
              0x32u,
              (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids);
            goto LABEL_82;
          }
          v30 = v45;
          if ( !LODWORD(v45->Logger) || WORD2(v45->Logger) != 2 || HIWORD(v45->Logger) < 0x10u )
          {
            v20 = MatchAnyKeyword;
            LODWORD(v33) = MatchAnyKeyword;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2520),
              2u,
              6u,
              0x33u,
              (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
              v33);
LABEL_82:
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
            {
              v22 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
              goto LABEL_44;
            }
            goto LABEL_45;
          }
          *(_OWORD *)(v14 + 1352) = *(_OWORD *)&v45->MatchAnyKeyword;
          _InterlockedOr((volatile signed __int32 *)(v14 + 204), 4u);
          if ( (v30->MatchAllKeyword & 1) == 0 )
            _InterlockedAnd((volatile signed __int32 *)(v14 + 204), 0xFFFFFFFE);
          _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
        }
        else
        {
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
          {
            LODWORD(v33) = -1072431093;
            LODWORD(v31) = MatchAnyKeyword;
            McTemplateK0pqq(v45, &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE, 0LL, *(_QWORD *)(a1 + 16), v31, v33);
          }
          LODWORD(v33) = MatchAnyKeyword;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x30u,
            (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
            v33);
        }
LABEL_45:
        v8 = v43;
LABEL_46:
        if ( (unsigned int)++v42 >= *(_DWORD *)(v39 + 4) )
          goto LABEL_47;
      }
      if ( WORD2(v45->Logger) )
      {
        v15 = 43;
        v16 = 6;
        v17 = 2;
      }
      else
      {
        MatchAnyKeyword_low = LOWORD(v45->MatchAnyKeyword);
        *(_DWORD *)(v14 + 216) = MatchAnyKeyword_low;
        switch ( MatchAnyKeyword_low )
        {
          case 0:
            goto LABEL_40;
          case 1:
            v15 = 44;
            break;
          case 2:
            v15 = 45;
            break;
          default:
            v15 = 46;
            LODWORD(v33) = MatchAnyKeyword_low;
            v17 = 2;
            v16 = 6;
LABEL_39:
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2520),
              v17,
              v16,
              v15,
              (__int64)&WPP_732de02cbd04379f984aa929aa3015ff_Traceguids,
              v33);
            goto LABEL_40;
        }
        v17 = 4;
        v16 = 3;
      }
      LODWORD(v33) = MatchAnyKeyword;
      goto LABEL_39;
    }
  }
LABEL_47:
  if ( v35 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v44 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v36 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return 0LL;
}
