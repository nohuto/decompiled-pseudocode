/*
 * XREFs of HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0036F54
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C00373C0 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  int *v6; // rdi
  void *v10; // r8
  __int64 v11; // r12
  int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // bl
  int v17; // eax
  int *v18; // r15
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  int v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  int v28; // [rsp+80h] [rbp+8h] BYREF

  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v28 = 0;
    v6 = &v28;
  }
  v10 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
  v11 = a6;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = *(_DWORD *)(a2 + 72) - v12;
  if ( *a1 >= 7u )
  {
LABEL_10:
    if ( *a1 > 7u )
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 513) <= 0xEu )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(
          v11,
          2u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          0xCFu,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v12,
          *a1,
          7);
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 145LL, v10);
    }
    if ( *a3 > v13 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = v12;
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v26);
      }
      v15 = 148LL;
LABEL_66:
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), v15, v10);
      goto LABEL_67;
    }
    if ( (*(_DWORD *)(a1 + 3) & 0xFFFF00E1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = *(_DWORD *)(a1 + 3);
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD1u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v26);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 147LL, v10);
    }
    v17 = *(_DWORD *)(a1 + 3);
    if ( (v17 & 2) != 0 )
    {
      v18 = a5;
      *a5 |= 1u;
      v19 = *v18 ^ ((unsigned __int8)*v18 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 1)) & 2;
      *v18 = v19;
      v20 = *(_DWORD *)(a1 + 3);
      if ( (v20 & 8) != 0 )
      {
        if ( (v20 & 0xF00) != 0 )
        {
          v21 = v19 | 4;
          *v18 = v21;
          *v18 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF0;
        }
        else
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(v11, 2u, 5u, 0xD2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 149LL);
        }
      }
      v22 = *(_DWORD *)(a1 + 3);
      if ( (v22 & 0x10) == 0 )
        goto LABEL_67;
      if ( (v22 & 8) != 0 && (unsigned __int16)v22 >> 12 <= ((v22 >> 8) & 0xF) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = *(_DWORD *)(a1 + 3);
          LODWORD(v27) = (v23 >> 8) & 0xF;
          LODWORD(v26) = (unsigned __int16)v23 >> 12;
          WPP_RECORDER_SF_dD(v11, 2u, 5u, 0xD3u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v26, v27);
        }
        v15 = 151LL;
        goto LABEL_66;
      }
      if ( !((unsigned __int16)v22 >> 12) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v11, 2u, 5u, 0xD4u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        v15 = 152LL;
        goto LABEL_66;
      }
      *v18 |= 8u;
      *v18 ^= ((unsigned __int16)*v18 ^ (unsigned __int16)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF00;
    }
    else if ( (v17 & 4) != 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = *(_DWORD *)(a1 + 3);
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v26);
      }
      v15 = 150LL;
      goto LABEL_66;
    }
LABEL_67:
    v16 = 1;
LABEL_68:
    if ( !*v6 )
      return v16;
    goto LABEL_69;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    146LL,
    &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  if ( v13 >= 7 )
  {
    *v6 = 2;
    *a3 = 7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v11, 7LL, v14, 0xCDu, v25);
    v10 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
    goto LABEL_10;
  }
  v16 = 1;
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v11, 2u, v14, 0xCEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v12, *a1, 7);
    goto LABEL_68;
  }
LABEL_69:
  v16 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v11, 2u, 5u, 0xD6u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v16;
}
