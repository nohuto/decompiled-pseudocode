/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801F0240
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x1801F1C7C (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801F1500 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x1801F3088 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  char v5; // si
  signed int v6; // r15d
  unsigned __int8 v7; // dl
  char v8; // r14
  char v9; // di
  unsigned __int8 v10; // di
  bool v11; // al
  bool v12; // al
  bool v13; // al
  bool v14; // al
  const struct _TlgProvider_t *v15; // rcx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  unsigned __int8 v19; // r8
  int v20; // xmm1_4
  char v21; // dl
  char v22; // dl
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // xmm1_8
  __int128 v27; // [rsp+30h] [rbp-39h] BYREF
  __int64 v28; // [rsp+40h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  __int128 *v30; // [rsp+68h] [rbp-1h]
  int v31; // [rsp+70h] [rbp+7h]
  int v32; // [rsp+74h] [rbp+Bh]

  v5 = 0;
  v6 = *a1 == 0LL ? 0x8007139F : 0;
  if ( !*a1 )
    goto LABEL_72;
  v7 = *((_BYTE *)a1 + 148);
  v8 = 2;
  if ( (v7 & 1) != 0 || *((_DWORD *)a1 + 36) != a2[2] )
  {
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v27,
      (unsigned int)a2[2],
      a3);
    if ( (a2[6] & 8) != 0 || (unsigned int)(*a2 - 2) > 2 )
    {
      v9 = BYTE8(v27);
    }
    else
    {
      v9 = BYTE8(v27) & 0x3F;
      DWORD2(v27) &= 0xFFFFFF3F;
    }
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v27);
    if ( (unsigned int)(*a2 - 2) > 2 )
      v10 = v9 | 0xC0;
    else
      v10 = v9 & 0x3F;
    v11 = (v10 & 1) != 0 || (v10 & 2) != 0;
    v5 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v11 )
    {
      v12 = (v10 & 4) != 0 || (v10 & 8) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v12 )
      {
        v13 = (v10 & 0x10) != 0 || (v10 & 0x20) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v13 )
          v5 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(*a1, &pData) != 1
      && (v5 || ((v10 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v10 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
    {
      v5 = 1;
    }
    v7 = *((_BYTE *)a1 + 148);
    if ( (v7 & 8) == 0 )
    {
      v14 = ((v7 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v7 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v5 |= v14;
    }
    if ( ((*((_BYTE *)a1 + 148) & 8) == 0 || v5) && *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v5 = 1;
    if ( (unsigned int)(*a2 - 2) > 2 && (a1[17] & 2) != 0 )
      v5 = 1;
  }
  if ( *((_DWORD *)a1 + 39) == 2 && ((*((_BYTE *)a1 + 136) ^ (v7 >> 1)) & 1) != 0 )
  {
    v5 = 1;
    if ( (v7 & 2) == 0 || dword_180305E40 <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
      goto LABEL_54;
    v32 = 0;
    v30 = &v27;
    *(_QWORD *)&v27 = a1;
    v31 = 8;
    TlgWrite(v15, &unk_1802B7197, 0LL, 0LL, 3u, &pData);
  }
  if ( !v5 && (*((_BYTE *)a1 + 148) & 4) == 0 )
  {
LABEL_72:
    if ( v6 >= 0 )
      *((_BYTE *)a1 + 148) &= ~4u;
    return (unsigned int)v6;
  }
LABEL_54:
  v16 = *a2;
  v27 = 0uLL;
  v28 = 0LL;
  LODWORD(v27) = *((_DWORD *)a1 + 39);
  v17 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(v16 - 2) <= 2 )
    v18 = v17 & 0xFFFFFF3F;
  else
    v18 = v17 | 0xC0;
  v19 = *((_BYTE *)a1 + 148);
  DWORD1(v27) = v18;
  if ( (v19 & 8) != 0 )
  {
    v20 = *((_DWORD *)a1 + 33);
    DWORD2(v27) = *((_DWORD *)a1 + 32);
    HIDWORD(v27) = v20;
  }
  else
  {
    if ( (v19 & 0x10) != 0 )
      DWORD2(v27) = 1110704128;
    else
      DWORD2(v27) = 0;
    if ( (v19 & 0x20) != 0 )
      HIDWORD(v27) = 1110704128;
    else
      HIDWORD(v27) = 0;
  }
  v21 = 0;
  if ( (unsigned int)(v16 - 2) > 2 )
    v21 = v19 >> 1;
  v22 = v28 ^ (v28 ^ v21) & 1;
  *((_BYTE *)a1 + 148) = v19 ^ (v19 ^ (2 * v22)) & 2;
  if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
    v8 = 0;
  v23 = *((_DWORD *)a1 + 38);
  v24 = *a1;
  LOBYTE(v28) = v8 | v22 & 0xFD;
  HIDWORD(v28) = v23;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 16LL))(v24, &v27);
  if ( v6 >= 0 )
  {
    v25 = v28;
    *(_OWORD *)(a1 + 15) = v27;
    a1[17] = v25;
    goto LABEL_72;
  }
  return (unsigned int)v6;
}
