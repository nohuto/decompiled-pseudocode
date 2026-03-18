/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02A68C0
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02A676C (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C02A8274 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C02A82F0 (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  _WORD *DeviceExtension; // rsi
  unsigned int v3; // ebx
  char *v4; // r10
  char *v5; // rdi
  char *v6; // r9
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  __int16 v9; // ax
  bool v10; // zf
  UCHAR v11; // al
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  int v16; // ecx
  unsigned int (__fastcall *v18)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *); // rax
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v19; // rdx
  UCHAR *BrightnessLevels; // r9
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *p_PossibleLevels; // r8
  __int32 v22; // ecx
  __int32 v23; // ecx
  __int32 v24; // ecx
  void (__fastcall *v25)(__int64, int *); // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-39h] BYREF
  int v28; // [rsp+38h] [rbp-31h]
  const wchar_t *v29; // [rsp+40h] [rbp-29h]
  int *v30; // [rsp+48h] [rbp-21h]
  int v31; // [rsp+50h] [rbp-19h]
  int *v32; // [rsp+58h] [rbp-11h]
  int v33; // [rsp+60h] [rbp-9h]
  __int64 v34; // [rsp+68h] [rbp-1h]
  int v35; // [rsp+70h] [rbp+7h]
  _BYTE v36[40]; // [rsp+78h] [rbp+Fh] BYREF
  int v37; // [rsp+D0h] [rbp+67h] BYREF
  int v38; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = a1->DeviceExtension;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  Type = a2->Type;
  v9 = DeviceExtension[2377];
  if ( v9 == 1 )
    v4 = (char *)(DeviceExtension + 2376);
  if ( v9 == 2 )
    v5 = (char *)(DeviceExtension + 2376);
  if ( v9 == 3 )
    v6 = (char *)(DeviceExtension + 2376);
  if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
  {
    if ( v4 )
      goto LABEL_17;
    goto LABEL_22;
  }
  if ( Type > D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
  {
    if ( Type > D3DKMT_BRIGHTNESS_INFO_SET )
    {
      if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_CAPS || Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
      {
LABEL_16:
        if ( v5 )
          goto LABEL_17;
        goto LABEL_15;
      }
      if ( Type <= D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
        goto LABEL_22;
      if ( Type > D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
      {
        if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES )
        {
LABEL_15:
          v10 = v6 == 0LL;
          goto LABEL_23;
        }
        goto LABEL_22;
      }
    }
    if ( v4 )
      goto LABEL_17;
    goto LABEL_16;
  }
LABEL_22:
  v10 = v5 == 0LL;
LABEL_23:
  if ( v10 )
    return 3221225659LL;
LABEL_17:
  if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
  {
    v11 = *((_BYTE *)DeviceExtension + 4466) == 0;
    *((_BYTE *)DeviceExtension + 4466) = v11;
    a2->PossibleLevels.LevelCount = v11;
    return 0LL;
  }
  if ( Type != D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE && !*((_BYTE *)DeviceExtension + 4464) )
    return 3221226538LL;
  if ( Type > D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    v22 = Type - 7;
    if ( !v22 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 10))(
                             *((_QWORD *)v5 + 1),
                             &a2->PossibleLevels);
    v23 = v22 - 1;
    if ( !v23 )
    {
      v31 = 4;
      v29 = L"EnableManualBrightnessMode";
      v33 = 4;
      v37 = 0;
      v30 = &v37;
      v32 = &v37;
      v27 = 0LL;
      v28 = 32;
      v34 = 0LL;
      v35 = 0;
      memset(v36, 0, sizeof(v36));
      RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v27, 0LL, 0LL);
      *((_BYTE *)DeviceExtension + 4464) = v37 != 0;
      if ( v5 )
        DpiCallDrvSetBacklightOptimizationLevel(a1);
      return v3;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      *((_BYTE *)DeviceExtension + 4464) = 0;
      v37 = 0;
      if ( v5 )
      {
        if ( (*((int (__fastcall **)(_QWORD, int *, __int64, char *))v5 + 7))(*((_QWORD *)v5 + 1), &v37, 4LL, v6) >= 0
          && (v37 & 1) != 0 )
        {
          v25 = (void (__fastcall *)(__int64, int *))*((_QWORD *)v5 + 8);
          v26 = *((_QWORD *)v5 + 1);
          v38 = 1;
          v25(v26, &v38);
        }
        DpiCallDrvSetBrightness(a1);
        DpiBrightnessAISetBacklightOptLevel(a1);
      }
      return v3;
    }
    if ( v24 != 2 )
      return (unsigned int)-1073741811;
    v18 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v6 + 7);
    return v18(*((_QWORD *)v6 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    if ( (int)a2->BrightnessCaps.Value > 3 )
      return 3221225485LL;
    if ( v6 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v6 + 8))(*((_QWORD *)v6 + 1), a2->ChildUid);
    else
      return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1);
  }
  v13 = Type - 1;
  if ( !v13 )
  {
    BrightnessLevels = a2->PossibleLevels.BrightnessLevels;
    p_PossibleLevels = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
    if ( v5 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v5
                            + 4))(
                             *((_QWORD *)v5 + 1),
                             256LL,
                             p_PossibleLevels,
                             BrightnessLevels);
    else
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v4
                            + 4))(
                             *((_QWORD *)v4 + 1),
                             256LL,
                             p_PossibleLevels,
                             BrightnessLevels);
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( v6 )
    {
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v6 + 5))(
                             *((_QWORD *)v6 + 1),
                             a2->ChildUid,
                             &a2->PossibleLevels);
    }
    else
    {
      v19 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))v5
                              + 6))(
                               *((_QWORD *)v5 + 1),
                               v19);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *))v4
                              + 6))(
                               *((_QWORD *)v4 + 1),
                               v19);
    }
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !v6 )
      return (unsigned int)DpiCallDrvSetBrightness(a1);
    v18 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v6 + 4);
    return v18(*((_QWORD *)v6 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !v6 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 7))(
                             *((_QWORD *)v5 + 1),
                             &a2->PossibleLevels);
    v18 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v6 + 6);
    return v18(*((_QWORD *)v6 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  if ( v16 == 1 )
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 8))(
                           *((_QWORD *)v5 + 1),
                           &a2->PossibleLevels);
  return (unsigned int)-1073741811;
}
