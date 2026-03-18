/*
 * XREFs of HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0033818
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0033BDC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateUSB20DeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  int *v6; // rsi
  int v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // bl
  int v17; // eax
  int v18; // eax
  int *v19; // r15
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v29 = 0;
    v6 = &v29;
  }
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = a6;
  v12 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 < 7u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 146LL);
    if ( v12 < 7 )
    {
      v16 = 1;
      *v6 = 1;
      WPP_RECORDER_SF_DDD(v11, 2u, v14, 0xCEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v10, *a1, 7);
      goto LABEL_51;
    }
    *v6 = 2;
    *a3 = 7;
    WPP_RECORDER_SF_DDDD(v11, v13, v14, 0xCDu, v26);
  }
  if ( *a1 > 7u )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 513) <= 0xEu )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(
      v11,
      2u,
      (__int64)a3,
      0xCFu,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v10,
      *a1,
      7);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 145LL);
  }
  if ( *v30 > v12 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v6 = 2;
    LODWORD(v27) = v10;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
    v15 = 148LL;
LABEL_49:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    goto LABEL_50;
  }
  v17 = *(_DWORD *)(a1 + 3);
  if ( (v17 & 0xFFFF00E1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 15) )
    {
      *v6 = 2;
      v17 = *(_DWORD *)(a1 + 3);
    }
    LODWORD(v27) = v17;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD1u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 147LL);
  }
  v18 = *(_DWORD *)(a1 + 3);
  if ( (v18 & 2) != 0 )
  {
    v19 = a5;
    *a5 |= 1u;
    v20 = *v19 ^ (*v19 ^ (*(_DWORD *)(a1 + 3) >> 1)) & 2;
    *v19 = v20;
    v21 = *(_DWORD *)(a1 + 3);
    if ( (v21 & 8) != 0 )
    {
      if ( (v21 & 0xF00) != 0 )
      {
        v22 = v20 | 4;
        *v19 = v22;
        *v19 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF0;
      }
      else
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        WPP_RECORDER_SF_(v11, 2u, 5u, 0xD2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 149LL);
      }
    }
    v23 = *(_DWORD *)(a1 + 3);
    if ( (v23 & 0x10) == 0 )
      goto LABEL_50;
    if ( (v23 & 8) != 0 && (unsigned __int16)v23 >> 12 <= ((v23 >> 8) & 0xF) )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      v24 = *(_DWORD *)(a1 + 3);
      LODWORD(v28) = (v24 >> 8) & 0xF;
      LODWORD(v27) = (unsigned __int16)v24 >> 12;
      WPP_RECORDER_SF_dD(v11, 2u, 5u, 0xD3u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27, v28);
      v15 = 151LL;
      goto LABEL_49;
    }
    if ( !((unsigned __int16)v23 >> 12) )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      WPP_RECORDER_SF_(v11, 2u, 5u, 0xD4u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      v15 = 152LL;
      goto LABEL_49;
    }
    *v19 |= 8u;
    *v19 ^= ((unsigned __int16)*v19 ^ (unsigned __int16)(*(_DWORD *)(a1 + 3) >> 4)) & 0xF00;
  }
  else if ( (v18 & 4) != 0 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
    {
      *v6 = 2;
      v18 = *(_DWORD *)(a1 + 3);
    }
    LODWORD(v27) = v18;
    WPP_RECORDER_SF_d(v11, 2u, 5u, 0xD5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
    v15 = 150LL;
    goto LABEL_49;
  }
LABEL_50:
  v16 = 1;
LABEL_51:
  if ( *v6 )
  {
    v16 = 0;
    WPP_RECORDER_SF_(v11, 2u, 5u, 0xD6u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v16;
}
