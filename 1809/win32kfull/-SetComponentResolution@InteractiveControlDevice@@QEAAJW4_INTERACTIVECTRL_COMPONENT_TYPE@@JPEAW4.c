/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023B9B4
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0235C00 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0236480 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023C110 (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023EB08 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0240520 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // r12d
  int v6; // r14d
  CHAR *v9; // r15
  ULONG v10; // r13d
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  int v14; // ecx
  _QWORD *v15; // rbx
  NTSTATUS SpecificValueCaps; // eax
  __int64 v17; // r8
  ULONG LogicalMin; // esi
  __int64 v19; // rax
  SimpleHapticsController *v20; // rcx
  SimpleHapticsController *v21; // rcx
  int ScaledComponentValue; // eax
  int v23; // eax
  int v24; // eax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v26[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h]
  _QWORD *v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  _DWORD *v30; // [rsp+60h] [rbp-A0h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v32; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  const char *v34; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+138h] [rbp+38h]
  int v36; // [rsp+13Ch] [rbp+3Ch]
  USHORT *v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]
  int v39; // [rsp+14Ch] [rbp+4Ch]
  _QWORD *v40; // [rsp+150h] [rbp+50h]
  int v41; // [rsp+158h] [rbp+58h]
  int v42; // [rsp+15Ch] [rbp+5Ch]

  v4 = 0;
  v29 = a3;
  v27 = a2;
  v6 = a3;
  v30 = a4;
  ValueCapsLength[0] = 1;
  v9 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v10 = 2;
  if ( !a4 || *a4 )
  {
LABEL_7:
    if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
      v6 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21)
      && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
    {
      v10 = 3;
    }
    goto LABEL_7;
  }
LABEL_10:
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v6 = (v6 << 8) / *((_DWORD *)InteractiveControlManager::Instance() + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v12 = (_QWORD *)(a1 + 184);
  v13 = *(_QWORD **)(a1 + 184);
  if ( v13 == (_QWORD *)(a1 + 184) )
    return v4;
  v14 = v27;
  while ( 1 )
  {
    v15 = v13;
    v13 = (_QWORD *)*v13;
    v28 = v13;
    if ( *((_DWORD *)v15 + 4) == v14 )
      break;
LABEL_60:
    if ( v13 == v12 )
      goto LABEL_63;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v15 + 15),
                        0x48u,
                        &ValueCaps,
                        ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 256));
  v4 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
  {
    if ( SpecificValueCaps == -1072627708 )
    {
      if ( dword_1C030C400 > 4u )
      {
        v36 = 0;
        v34 = "Device does not support resolution multiplier. Falling back to OS based scaling.";
        v35 = 81;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D618A, 0LL, 0LL, 3u, &pData);
      }
    }
    else if ( dword_1C030C400 > 2u )
    {
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v34 = "Failed to updated device resolution multiplier. Keeping existing actual resolution.";
      v37 = v26;
      LODWORD(v28) = *((_DWORD *)v15 + 28);
      v40 = &v28;
      v35 = 84;
      *(_DWORD *)v26 = SpecificValueCaps;
      v38 = 4;
      v41 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6A54, 0LL, 0LL, 5u, &pData);
    }
    v4 = 0;
LABEL_48:
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( v6 )
        v23 = v6;
      else
        v23 = *((_DWORD *)v15 + 28);
      *((_DWORD *)v15 + 28) = v23;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
    {
      if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) != 1 )
      {
        v24 = 1;
        goto LABEL_59;
      }
    }
    else
    {
      v24 = v29;
      if ( v29 )
      {
LABEL_59:
        *((_DWORD *)v15 + 27) = v24;
        v14 = v27;
        v12 = (_QWORD *)(a1 + 184);
        *((_DWORD *)v15 + 26) = 0;
        goto LABEL_60;
      }
    }
    v24 = *((_DWORD *)v15 + 28);
    goto LABEL_59;
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) && (v17 = v6 * (__int64)*((int *)v15 + 30)) != 0 && v6 )
  {
    LogicalMin = ValueCaps.LogicalMin;
    v19 = *((int *)v15 + 29) / v17;
    if ( (int)v19 >= ValueCaps.LogicalMin )
    {
      LogicalMin = *((int *)v15 + 29) / v17;
      if ( (int)v19 > ValueCaps.LogicalMax )
        LogicalMin = ValueCaps.LogicalMax;
    }
  }
  else
  {
    LogicalMin = ValueCaps.LogicalMax;
  }
  if ( *((_DWORD *)v15 + 31) == LogicalMin && (!v30 || *v30 == *(_DWORD *)(a1 + 60)) )
  {
LABEL_40:
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v15,
                             1);
    v13 = v28;
    *((_DWORD *)v15 + 28) = ScaledComponentValue;
    if ( v30 )
      *(_DWORD *)(a1 + 60) = *v30;
    goto LABEL_48;
  }
  if ( v9 || (v9 = (CHAR *)Win32AllocPool(*(unsigned __int16 *)(a1 + 84), 1819440195LL)) != 0LL )
  {
    *v9 = ValueCaps.ReportID;
    v20 = *(SimpleHapticsController **)(a1 + 384);
    if ( v20
      && SimpleHapticsController::SendDeviceIOControl(v20, 0xB0192u, 0LL, 0, v9, *(unsigned __int16 *)(a1 + 84), 0LL) >= 0 )
    {
      if ( v30 )
      {
        memset(&v32, 0, sizeof(v32));
        v26[0] = 1;
        HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v32, v26, *(PHIDP_PREPARSED_DATA *)(a1 + 256));
        HidP_SetUsageValue(
          HidP_Feature,
          0xEu,
          v32.LinkCollection,
          0x20u,
          v10,
          *(PHIDP_PREPARSED_DATA *)(a1 + 256),
          v9,
          *(unsigned __int16 *)(a1 + 84));
      }
      if ( HidP_SetUsageValue(
             HidP_Feature,
             1u,
             ValueCaps.LinkCollection,
             0x48u,
             LogicalMin,
             *(PHIDP_PREPARSED_DATA *)(a1 + 256),
             v9,
             *(unsigned __int16 *)(a1 + 84)) >= 0 )
      {
        v21 = *(SimpleHapticsController **)(a1 + 384);
        if ( v21 )
        {
          if ( SimpleHapticsController::SendDeviceIOControl(
                 v21,
                 0xB0191u,
                 v9,
                 *(unsigned __int16 *)(a1 + 84),
                 0LL,
                 0,
                 0LL) >= 0 )
            *((_DWORD *)v15 + 31) = LogicalMin;
        }
      }
    }
    goto LABEL_40;
  }
  v4 = -1073741670;
LABEL_63:
  if ( v9 )
    Win32FreePool(v9);
  return v4;
}
