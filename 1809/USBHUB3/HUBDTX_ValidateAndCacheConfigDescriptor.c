/*
 * XREFs of HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0025854
 * Callers:
 *     HUBDSM_ValidatingAlternateConfigurationDescriptor @ 0x1C001C1D0 (HUBDSM_ValidatingAlternateConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C002EB68 (HUBDESC_ParseConfigurationDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheConfigDescriptor(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rbx
  int v5; // ecx
  __int64 v6; // r9
  int v7; // edx
  char v8; // al
  char v9; // al
  char v10; // al
  bool v11; // zf
  char v12; // al
  int v13; // eax
  __int64 v14; // r9
  unsigned __int16 v15; // r9
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  char v17; // al
  unsigned __int8 *v18; // rcx
  _BYTE *v19; // r8
  char v20; // al
  char v21; // al
  PVOID PoolWithTag; // rax
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD v28[7]; // [rsp+50h] [rbp-9h] BYREF
  char v29; // [rsp+C0h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 2016);
  v29 = 0;
  v3 = 4077;
  if ( !v1 )
    v1 = a1 + 1732;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  memset(v28, 0, sizeof(v28));
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 256);
  LOWORD(v28[0]) = *(_WORD *)(a1 + 1990);
  HIDWORD(v28[0]) = *(_DWORD *)(a1 + 172);
  v8 = BYTE5(v28[1]);
  if ( (v5 & 0x20) != 0 )
    v8 = 1;
  v28[5] = a1;
  BYTE5(v28[1]) = v8;
  v9 = HIBYTE(v28[1]);
  if ( (v5 & 0x2000) != 0 )
    v9 = 1;
  HIBYTE(v28[1]) = v9;
  v10 = BYTE4(v28[1]);
  if ( (v5 & 0x4000) != 0 )
    v10 = 1;
  v11 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v28[1]) = v10;
  v12 = v28[6];
  if ( !v11 )
    v12 = 1;
  LOBYTE(v28[6]) = v12;
  v13 = *(_DWORD *)(v6 + 220);
  v14 = *(_QWORD *)(v6 + 1432);
  LODWORD(v28[2]) = v13;
  v28[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v28[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(v1, v7, (unsigned int)v28, v14, (__int64)&v29) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807364;
    v15 = 69;
LABEL_66:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v15,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids);
LABEL_67:
    v3 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p(
        v16,
        &USBHUB3_ETW_EVENT_INVALID_CONFIGURATION_DESCRIPTOR,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v3;
  }
  if ( *(_WORD *)(v1 + 2) != *(_WORD *)(a1 + 1734) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807364;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x46u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      *(unsigned __int16 *)(v1 + 2),
      *(unsigned __int16 *)(a1 + 1734));
    ((void (__fastcall *)(_QWORD, __int64))v28[3])(v28[5], 61LL);
    goto LABEL_67;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x2000u);
  if ( v29 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x40u);
  if ( *(_BYTE *)(a1 + 2005) > 1u )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x80u);
    if ( *(_BYTE *)(a1 + 2005) > 1u && *(_BYTE *)(v1 + 4) > 1u )
    {
      v17 = *(_BYTE *)(a1 + 1992);
      if ( !v17 || v17 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      {
        v18 = (unsigned __int8 *)(v1 + 9);
        while ( (unsigned __int64)v18 < v1 + (unsigned __int64)*(unsigned __int16 *)(v1 + 2) )
        {
          v19 = v18;
          v18 += *v18;
          v20 = v19[1];
          if ( v20 == 11 && v19[4] == 1 || v20 == 4 && v19[5] == 1 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 4u);
            if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
              _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x2000000u);
            break;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 1632) & 4) == 0 && *(_BYTE *)(a1 + 2005) == 1 && *(_BYTE *)(v1 + 4) > 1u )
  {
    v21 = *(_BYTE *)(a1 + 1992);
    if ( !v21 || v21 == -17 && *(_BYTE *)(a1 + 1993) == 2 && *(_BYTE *)(a1 + 1994) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 4u);
  }
  if ( !*(_QWORD *)(a1 + 2016) )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(v1 + 2), 0x64334855u);
    *(_QWORD *)(a1 + 2016) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v15 = 71;
      goto LABEL_66;
    }
    memmove(PoolWithTag, (const void *)v1, *(unsigned __int16 *)(v1 + 2));
    v1 = *(_QWORD *)(a1 + 2016);
  }
  v23 = HUBDESC_ParseConfigurationDescriptor(v1, v1, -1, -1, -1, -1, -1, 0LL, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  *(_QWORD *)(a1 + 2008) = v23;
  if ( v23 )
  {
    if ( *(_BYTE *)(v23 + 5) == 9 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 2u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x800u);
    }
    else if ( (*(_DWORD *)(a1 + 1632) & 4) == 0
           && *(_WORD *)(a1 + 1990) > 0x200u
           && (*(_DWORD *)(a1 + 1644) & 0x800) == 0 )
    {
      if ( (v24 = *(_DWORD *)(a1 + 172), v24 == 3) && (*(_DWORD *)(*(_QWORD *)a1 + 760LL) & 1) != 0 || v24 == 2 )
      {
        v25 = HUBDESC_ParseConfigurationDescriptor(
                v1,
                v23,
                *(unsigned __int8 *)(v23 + 2),
                -1,
                8,
                6,
                98,
                0LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
        if ( v25 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x800u);
          *(_QWORD *)(a1 + 2008) = v25;
        }
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)a1 + 201LL) )
    {
      if ( (*(_DWORD *)(a1 + 1632) & 4) == 0 )
      {
        v26 = *(_QWORD *)(a1 + 2008);
        if ( *(_BYTE *)(v26 + 5) == 1 && !*(_BYTE *)(v26 + 7) )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
            2u,
            5u,
            0x48u,
            (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids);
          *(_QWORD *)(a1 + 2008) = 0LL;
          *(_DWORD *)(a1 + 2432) = 1073807393;
          goto LABEL_67;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 1632) & 6) == 6 )
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x49u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids);
  if ( (*(_BYTE *)(v1 + 7) & 0x20) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x100u);
  if ( (*(_DWORD *)(a1 + 1644) & 0x100000) != 0 )
  {
    *(_DWORD *)(a1 + 2432) = 1073807387;
    v15 = 74;
    goto LABEL_66;
  }
  return v3;
}
