/*
 * XREFs of ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02121F8
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C834 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C020D040 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C021290C (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C02150F4 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0216970 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlDevice::SetComponentResolution(__int64 a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r14d
  unsigned int v8; // r12d
  CHAR *v9; // r15
  _QWORD *v11; // rsi
  _QWORD *v12; // r13
  int v13; // eax
  _QWORD *v14; // rbx
  NTSTATUS SpecificValueCaps; // eax
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // r8
  ULONG LogicalMin; // esi
  __int64 v20; // rax
  SimpleHapticsController *v21; // rcx
  SimpleHapticsController *v22; // rcx
  int ScaledComponentValue; // eax
  _DWORD *v24; // rsi
  int v25; // eax
  int v26; // eax
  int *v27; // rcx
  struct InteractiveControlManager *v28; // rax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v30[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+4Ch] [rbp-B4h]
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+54h] [rbp-ACh]
  _DWORD *v35; // [rsp+58h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS v37; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  const char *v39; // [rsp+130h] [rbp+30h]
  int v40; // [rsp+138h] [rbp+38h]
  int v41; // [rsp+13Ch] [rbp+3Ch]
  USHORT *v42; // [rsp+140h] [rbp+40h]
  int v43; // [rsp+148h] [rbp+48h]
  int v44; // [rsp+14Ch] [rbp+4Ch]
  int *v45; // [rsp+150h] [rbp+50h]
  int v46; // [rsp+158h] [rbp+58h]
  int v47; // [rsp+15Ch] [rbp+5Ch]

  v34 = a3;
  v4 = a3;
  v32 = a2;
  v35 = a4;
  ValueCapsLength[0] = 1;
  v8 = 0;
  v9 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  LOWORD(v31) = 2;
  if ( !a4 || *a4 )
  {
LABEL_7:
    if ( !*(_DWORD *)(a1 + 64) && *((_DWORD *)InteractiveControlManager::Instance() + 29) )
      v4 = *((_DWORD *)InteractiveControlManager::Instance() + 27);
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(a1 + 64) )
  {
    if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21)
      && *((_DWORD *)InteractiveControlManager::Instance() + 25) )
    {
      v31 = 3;
    }
    goto LABEL_7;
  }
LABEL_10:
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v4 = (v4 << 8) / *((_DWORD *)InteractiveControlManager::Instance() + 35);
    }
    else if ( a2 != 4 )
    {
      return 3221225659LL;
    }
  }
  v11 = (_QWORD *)(a1 + 184);
  v12 = *(_QWORD **)(a1 + 184);
  if ( v12 == (_QWORD *)(a1 + 184) )
    return v8;
  v13 = a2;
  while ( 1 )
  {
    v14 = v12;
    v12 = (_QWORD *)*v12;
    if ( *((_DWORD *)v14 + 4) == v13 )
      break;
LABEL_62:
    if ( v12 == v11 )
      goto LABEL_65;
  }
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Feature,
                        1u,
                        *((_WORD *)v14 + 15),
                        0x48u,
                        &ValueCaps,
                        ValueCapsLength,
                        *(PHIDP_PREPARSED_DATA *)(a1 + 256));
  v8 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
  {
    if ( SpecificValueCaps == -1072627708 )
    {
      if ( dword_1C031C7D0 > 4u )
      {
        v41 = 0;
        v39 = "Device does not support resolution multiplier. Falling back to OS based scaling.";
        v40 = 81;
        TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E36D8, v16, v17, 3u, &pData);
      }
    }
    else if ( dword_1C031C7D0 > 2u )
    {
      v41 = 0;
      v44 = 0;
      v47 = 0;
      v39 = "Failed to updated device resolution multiplier. Keeping existing actual resolution.";
      v42 = v30;
      v33 = *((_DWORD *)v14 + 28);
      v45 = &v33;
      v40 = 84;
      *(_DWORD *)v30 = SpecificValueCaps;
      v43 = 4;
      v46 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E407F, v16, v17, 5u, &pData);
    }
    v8 = 0;
    goto LABEL_43;
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 21) && (v18 = v4 * (__int64)*((int *)v14 + 30)) != 0 && v4 )
  {
    LogicalMin = ValueCaps.LogicalMin;
    v20 = *((int *)v14 + 29) / v18;
    if ( (int)v20 >= ValueCaps.LogicalMin )
    {
      LogicalMin = *((int *)v14 + 29) / v18;
      if ( (int)v20 > ValueCaps.LogicalMax )
        LogicalMin = ValueCaps.LogicalMax;
    }
  }
  else
  {
    LogicalMin = ValueCaps.LogicalMax;
  }
  if ( *((_DWORD *)v14 + 31) == LogicalMin && (!v35 || *v35 == *(_DWORD *)(a1 + 60)) )
  {
LABEL_40:
    ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                             (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v14,
                             1);
    v24 = v35;
    *((_DWORD *)v14 + 28) = ScaledComponentValue;
    if ( v24 )
      *(_DWORD *)(a1 + 60) = *v24;
    v11 = (_QWORD *)(a1 + 184);
LABEL_43:
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
    {
      if ( v4 )
        v25 = v4;
      else
        v25 = *((_DWORD *)v14 + 28);
      *((_DWORD *)v14 + 28) = v25;
    }
    if ( *((_DWORD *)InteractiveControlManager::Instance() + 31) )
    {
      v28 = InteractiveControlManager::Instance();
      v27 = (int *)v14 + 27;
      if ( *((_DWORD *)v28 + 31) == 1 )
        v26 = *((_DWORD *)v14 + 28);
      else
        v26 = 1;
    }
    else
    {
      v26 = v34;
      if ( !v34 )
        v26 = *((_DWORD *)v14 + 28);
      v27 = (int *)v14 + 27;
    }
    *v27 = v26;
    *((_DWORD *)v14 + 26) = 0;
    v13 = v32;
    goto LABEL_62;
  }
  if ( v9 || (v9 = (CHAR *)Win32AllocPool(*(unsigned __int16 *)(a1 + 84), 1819440195LL)) != 0LL )
  {
    *v9 = ValueCaps.ReportID;
    v21 = *(SimpleHapticsController **)(a1 + 384);
    if ( v21
      && SimpleHapticsController::SendDeviceIOControl(v21, 0xB0192u, 0LL, 0, v9, *(unsigned __int16 *)(a1 + 84), 0LL) >= 0 )
    {
      if ( v35 )
      {
        memset(&v37, 0, sizeof(v37));
        v30[0] = 1;
        HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &v37, v30, *(PHIDP_PREPARSED_DATA *)(a1 + 256));
        HidP_SetUsageValue(
          HidP_Feature,
          0xEu,
          v37.LinkCollection,
          0x20u,
          (unsigned __int16)v31,
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
        v22 = *(SimpleHapticsController **)(a1 + 384);
        if ( v22 )
        {
          if ( SimpleHapticsController::SendDeviceIOControl(
                 v22,
                 0xB0191u,
                 v9,
                 *(unsigned __int16 *)(a1 + 84),
                 0LL,
                 0,
                 0LL) >= 0 )
            *((_DWORD *)v14 + 31) = LogicalMin;
        }
      }
    }
    goto LABEL_40;
  }
  v8 = -1073741670;
LABEL_65:
  if ( v9 )
    Win32FreePool(v9);
  return v8;
}
