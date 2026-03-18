/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C003334C
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

char __fastcall HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        __int64 a8)
{
  int *v9; // r14
  _BYTE *v11; // r13
  int v12; // r12d
  __int64 v13; // rbp
  unsigned int v14; // r15d
  bool v15; // cf
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // rax
  char v19; // bl
  unsigned __int8 v20; // al
  unsigned __int16 v21; // ax
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned __int8 v26; // cl
  unsigned __int16 v27; // cx
  int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v33; // [rsp+A0h] [rbp+18h]

  v33 = (_DWORD *)a3;
  v9 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v32;
    v32 = 0;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = a7;
  if ( *a7 )
    *a7 = 0;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = a8;
  v14 = *(_DWORD *)(a2 + 72) - v12;
  v15 = *a1 < 0xAu;
  LODWORD(a7) = v14;
  if ( v15 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 136LL);
    if ( v14 < 0xA )
    {
      v19 = 1;
      *v9 = 1;
      WPP_RECORDER_SF_DDD(v13, 2u, v17, 0xC0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v12, *a1, 10);
      goto LABEL_60;
    }
    v18 = v33;
    *v9 = 2;
    *v18 = 10;
    WPP_RECORDER_SF_DDDD(v13, v16, v17, 0xBFu, v29);
  }
  if ( *a1 > 0xAu )
  {
    if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
      *v9 = 2;
    WPP_RECORDER_SF_DDD(v13, 2u, a3, 0xC1u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v12, *a1, 10);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 135LL);
  }
  if ( *v33 <= (unsigned int)a7 )
  {
    v20 = a1[3];
    if ( (v20 & 0xFD) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v9 = 2;
        v20 = a1[3];
      }
      LODWORD(v30) = v20;
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC3u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 137LL);
    }
    if ( (a1[3] & 2) != 0 && *v11 )
      *v11 = 1;
    v21 = *((_WORD *)a1 + 2);
    if ( (v21 & 0xFFF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v9 = 2;
        v21 = *((_WORD *)a1 + 2);
      }
      LODWORD(v30) = v21;
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC4u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 143LL);
    }
    if ( !*((_WORD *)a1 + 2) )
    {
      *v9 = 2;
      WPP_RECORDER_SF_(v13, 2u, 5u, 0xC5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 144LL);
    }
    v22 = a1[6];
    if ( v22 <= 3u )
    {
      v24 = v22;
      v25 = *((unsigned __int16 *)a1 + 2);
      if ( _bittest(&v25, v24) )
      {
LABEL_45:
        v26 = a1[7];
        if ( v26 < 0xBu )
        {
          if ( a5 )
          {
            *a5 = v26;
            LODWORD(v30) = a1[7];
            WPP_RECORDER_SF_d(v13, 4u, 5u, 0xC9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
          {
            *v9 = 2;
            v26 = a1[7];
          }
          LODWORD(v30) = v26;
          WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC8u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 138LL);
        }
        v27 = *((_WORD *)a1 + 4);
        if ( v27 < 0x800u )
        {
          if ( a6 )
          {
            *a6 = v27;
            LODWORD(v30) = *((unsigned __int16 *)a1 + 4);
            WPP_RECORDER_SF_d(v13, 4u, 5u, 0xCBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
          {
            *v9 = 2;
            v27 = *((_WORD *)a1 + 4);
          }
          LODWORD(v30) = v27;
          WPP_RECORDER_SF_d(v13, 2u, 5u, 0xCAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 139LL);
        }
        goto LABEL_59;
      }
      *v9 = 2;
      LODWORD(v31) = *((unsigned __int16 *)a1 + 2);
      LODWORD(v30) = a1[6];
      WPP_RECORDER_SF_dD(v13, 2u, 5u, 0xC7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30, v31);
      v23 = 141LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v9 = 2;
        v22 = a1[6];
      }
      LODWORD(v30) = v22;
      WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC6u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
      v23 = 142LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v23);
    goto LABEL_45;
  }
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
    *v9 = 2;
  LODWORD(v30) = v12;
  WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v30);
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 140LL);
LABEL_59:
  v19 = 1;
LABEL_60:
  if ( *v9 )
  {
    v19 = 0;
    WPP_RECORDER_SF_(v13, 2u, 5u, 0xCCu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v19;
}
