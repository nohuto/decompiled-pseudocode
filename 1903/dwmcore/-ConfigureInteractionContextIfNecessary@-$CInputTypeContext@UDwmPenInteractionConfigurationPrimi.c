/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18023063C
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18023208C (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18023190C (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x180233748 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  char v6; // di
  signed int v7; // r14d
  unsigned __int8 v8; // r8
  char v9; // r12
  char v10; // r11
  unsigned __int8 v11; // si
  bool v12; // al
  bool v13; // al
  bool v14; // al
  _DWORD *v15; // rax
  bool v16; // al
  char v17; // al
  int v18; // r9d
  const struct _TlgProvider_t *v19; // rcx
  unsigned __int8 v20; // dl
  char v21; // al
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  unsigned __int8 v25; // r8
  int v26; // xmm1_4
  char v27; // dl
  char v28; // dl
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // xmm1_8
  __int128 v33; // [rsp+30h] [rbp-29h] BYREF
  __int64 v34; // [rsp+40h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-11h] BYREF
  __int128 *v36; // [rsp+68h] [rbp+Fh]
  int v37; // [rsp+70h] [rbp+17h]
  int v38; // [rsp+74h] [rbp+1Bh]

  v6 = 0;
  v7 = *a1 == 0LL ? 0x8007139F : 0;
  if ( *a1 )
  {
    v8 = *((_BYTE *)a1 + 148);
    v9 = 8;
    v10 = 1;
    if ( (v8 & 1) != 0 || *((_DWORD *)a1 + 36) != a2[2] )
    {
      CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
        a1,
        &v33,
        (unsigned int)a2[2],
        a3);
      if ( (a2[6] & 8) == 0 && (unsigned int)(*a2 - 2) <= 2 )
        DWORD2(v33) &= 0xFFFFFF3F;
      CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
        a1,
        &v33);
      if ( (unsigned int)(*a2 - 2) > 2 )
        v11 = BYTE8(v33) | 0xC0;
      else
        v11 = BYTE8(v33) & 0x3F;
      v12 = (v11 & 1) != 0 || (v11 & 2) != 0;
      v6 = 1;
      if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v12 )
      {
        v13 = (v11 & 4) != 0 || (v11 & 8) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v13 )
        {
          v14 = (v11 & 0x10) != 0 || (v11 & 0x20) != 0;
          if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v14 )
            v6 = 0;
        }
      }
      v15 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(*a1, &pData);
      v10 = 1;
      if ( *v15 != 1
        && (v6 || ((v11 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v11 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
      {
        v6 = 1;
      }
      v8 = *((_BYTE *)a1 + 148);
      if ( (v8 & 0x20) == 0 )
      {
        v16 = ((v8 >> 6) & 1) != (*((float *)a1 + 32) == 45.0) || v8 >> 7 != (*((float *)a1 + 33) == 45.0);
        v6 |= v16;
      }
      if ( ((*((_BYTE *)a1 + 148) & 0x20) == 0 || v6) && *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
        v6 = 1;
      if ( (unsigned int)(*a2 - 2) > 2 )
      {
        v17 = v6;
        if ( (a1[17] & 8) != 0 )
          v17 = 1;
        v6 = v17;
      }
    }
    v18 = *((_DWORD *)a1 + 39);
    if ( v18 == 2 && ((*((_BYTE *)a1 + 136) ^ (v8 >> 1)) & 1) != 0 )
    {
      v6 = 1;
      if ( (v8 & 2) != 0 && dword_18033A240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
      {
        v38 = 0;
        v36 = &v33;
        *(_QWORD *)&v33 = a1;
        v37 = 8;
        TlgWrite(v19, &unk_1802DE07F, 0LL, 0LL, 3u, &pData);
        v18 = *((_DWORD *)a1 + 39);
        v10 = 1;
      }
    }
    if ( v18 == 3 )
    {
      v20 = *((_BYTE *)a1 + 136);
      if ( ((v20 ^ (*((_BYTE *)a1 + 148) >> 1)) & 2) != 0 || ((v20 ^ (*((_BYTE *)a1 + 148) >> 1)) & 4) != 0 )
        v6 = v10;
    }
    if ( !v6 )
    {
      v21 = *((_BYTE *)a1 + 148);
      if ( (v21 & 0x10) == 0 )
        goto LABEL_76;
    }
    v22 = *a2;
    LODWORD(v34) = 0;
    LODWORD(v33) = v18;
    v23 = *((_DWORD *)a1 + 4);
    if ( (unsigned int)(v22 - 2) <= 2 )
      v24 = v23 & 0xFFFFFF3F;
    else
      v24 = v23 | 0xC0;
    v25 = *((_BYTE *)a1 + 148);
    DWORD1(v33) = v24;
    if ( (v25 & 0x20) != 0 )
    {
      v26 = *((_DWORD *)a1 + 33);
      DWORD2(v33) = *((_DWORD *)a1 + 32);
      HIDWORD(v33) = v26;
    }
    else
    {
      if ( (v25 & 0x40) != 0 )
        DWORD2(v33) = 1110704128;
      else
        DWORD2(v33) = 0;
      if ( (v25 & 0x80u) == 0 )
        HIDWORD(v33) = 0;
      else
        HIDWORD(v33) = 1110704128;
    }
    v27 = 0;
    if ( (unsigned int)(v22 - 2) > 2 )
      v27 = v25 >> 1;
    v28 = (v34 ^ (v25 >> 1)) & 6 ^ v34 ^ v10 & ((v34 ^ (v25 >> 1)) & 6 ^ v34 ^ v27);
    *((_BYTE *)a1 + 148) = v25 ^ (v25 ^ (2 * v28)) & 2;
    if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
      v9 = 0;
    v29 = *((_DWORD *)a1 + 38);
    v30 = *a1;
    LOBYTE(v34) = v9 | v28 & 0xF7;
    HIDWORD(v34) = v29;
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 16LL))(v30, &v33);
    if ( v7 >= 0 )
    {
      v21 = *((_BYTE *)a1 + 148);
      v31 = v34;
      *(_OWORD *)(a1 + 15) = v33;
      a1[17] = v31;
LABEL_76:
      *((_BYTE *)a1 + 148) = v21 & 0xEF;
    }
  }
  return (unsigned int)v7;
}
