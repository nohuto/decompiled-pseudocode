/*
 * XREFs of HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor @ 0x1C0032908
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

__int64 __fastcall HUBDESC_InternalValidateFirmwareStatusCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _BYTE *a5,
        _BYTE *a6,
        __int64 a7)
{
  int *v7; // rsi
  int v11; // r14d
  __int64 v12; // r15
  unsigned int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 result; // rax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned int *v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  v7 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v23 = 0;
    v7 = &v23;
  }
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = a7;
  v13 = *(_DWORD *)(a2 + 72) - v11;
  if ( *a1 < 8u )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 262LL);
    if ( v13 < 8 )
    {
      *v7 = 1;
      result = WPP_RECORDER_SF_DDD(
                 v12,
                 2u,
                 v15,
                 0xA6u,
                 (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                 v11,
                 *a1,
                 8);
      goto LABEL_33;
    }
    *v7 = 2;
    *a3 = 8;
    WPP_RECORDER_SF_DDDD(v12, v14, v15, 0xA5u, v20);
  }
  if ( *a1 > 8u )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v7 = 2;
    WPP_RECORDER_SF_DDD(
      v12,
      2u,
      (__int64)a3,
      0xA7u,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v11,
      *a1,
      8);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 264LL);
  }
  if ( *v24 > v13 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v7 = 2;
    LODWORD(v21) = v11;
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xA8u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v21);
    v16 = 261LL;
    goto LABEL_18;
  }
  if ( !a1[3] )
  {
    *v7 = 1;
    LODWORD(v21) = a1[3];
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xA9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v21);
    v16 = 265LL;
LABEL_18:
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
    goto LABEL_33;
  }
  v18 = *((_DWORD *)a1 + 1);
  if ( v18 >= 4 )
  {
    if ( *(_BYTE *)(a2 + 15) )
    {
      *v7 = 2;
      v18 = *((_DWORD *)a1 + 1);
    }
    LODWORD(v21) = v18;
    WPP_RECORDER_SF_d(v12, 2u, 5u, 0xAAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v21);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 265LL);
  }
  v19 = *((_DWORD *)a1 + 1);
  if ( (v19 & 1) != 0 && a5 )
  {
    *a5 = 1;
    v19 = *((_DWORD *)a1 + 1);
  }
  if ( (v19 & 2) != 0 && a6 )
  {
    *a6 = 1;
    v19 = *((_DWORD *)a1 + 1);
  }
  LODWORD(v22) = (v19 >> 1) & 1;
  LODWORD(v21) = v19 & 1;
  result = WPP_RECORDER_SF_dD(v12, 4u, 5u, 0xABu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v21, v22);
LABEL_33:
  if ( *v7 )
    return WPP_RECORDER_SF_(v12, 2u, 5u, 0xACu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return result;
}
