/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C00369AC
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

char __fastcall HUBDESC_InternalValidateSuperSpeedDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        _WORD *a5,
        unsigned __int16 *a6,
        _BYTE *a7,
        __int64 a8)
{
  int *v9; // rsi
  _BYTE *v11; // r15
  void *v12; // r8
  __int64 v13; // r12
  int v14; // r14d
  unsigned int v15; // r13d
  __int64 v16; // r8
  unsigned int *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  char v20; // bl
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  unsigned int v23; // ecx
  int v24; // eax
  unsigned __int8 v25; // al
  unsigned __int16 v26; // ax
  int v28; // [rsp+20h] [rbp-68h]
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v9 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v9 = &v31;
    v31 = 0;
  }
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = a7;
  if ( *a7 )
    *a7 = 0;
  v12 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
  v13 = a8;
  v14 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v15 = *(_DWORD *)(a2 + 72) - v14;
  if ( *a1 >= 0xAu )
  {
LABEL_16:
    v18 = 768LL;
    if ( *a1 > 0xAu )
    {
      if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(
          v13,
          2u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          0xC1u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v14,
          *a1,
          10);
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 135LL, v12, v18);
    }
    if ( *v32 > v15 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = v14;
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
      }
      v19 = 140LL;
      goto LABEL_30;
    }
    if ( (a1[3] & 0xFD) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = a1[3];
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC3u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 137LL, v12, v18);
    }
    if ( (a1[3] & 2) != 0 && *v11 )
      *v11 = 1;
    if ( (*((_WORD *)a1 + 2) & 0xFFF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = *((unsigned __int16 *)a1 + 2);
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC4u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 143LL, v12, v18);
    }
    if ( !*((_WORD *)a1 + 2) )
    {
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v13, 2u, 5u, 0xC5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 144LL, v12, v18);
    }
    v21 = a1[6];
    if ( v21 <= 3u )
    {
      v23 = v21;
      v24 = *((unsigned __int16 *)a1 + 2);
      if ( _bittest(&v24, v23) )
      {
LABEL_63:
        v25 = a1[7];
        if ( v25 < 0xBu )
        {
          if ( a5 )
          {
            *a5 = v25;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v29) = a1[7];
              WPP_RECORDER_SF_d(v13, 4u, 5u, 0xC9u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
            *v9 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v29) = a1[7];
            WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC8u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
          }
          (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 138LL, v12, v18);
        }
        v26 = *((_WORD *)a1 + 4);
        if ( v26 < 0x800u )
        {
          if ( a6 )
          {
            *a6 = v26;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v29) = *((unsigned __int16 *)a1 + 4);
              WPP_RECORDER_SF_d(v13, 4u, 5u, 0xCBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
            }
          }
          goto LABEL_83;
        }
        if ( *(_BYTE *)(a2 + 12) || (unsigned __int16)(*(_WORD *)a2 - 768) <= 0x10u )
          *v9 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v29) = *((unsigned __int16 *)a1 + 4);
          WPP_RECORDER_SF_d(v13, 2u, 5u, 0xCAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
        }
        v19 = 139LL;
LABEL_30:
        (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v19, v12, v18);
LABEL_83:
        v20 = 1;
LABEL_84:
        if ( !*v9 )
          return v20;
        goto LABEL_85;
      }
      *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = *((unsigned __int16 *)a1 + 2);
        LODWORD(v29) = a1[6];
        WPP_RECORDER_SF_dD(v13, 2u, 5u, 0xC7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29, v30);
      }
      v22 = 141LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v9 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v29) = a1[6];
        WPP_RECORDER_SF_d(v13, 2u, 5u, 0xC6u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v29);
      }
      v22 = 142LL;
    }
    (*(void (__fastcall **)(_QWORD, __int64, void *, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v22, v12, v18);
    goto LABEL_63;
  }
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    136LL,
    &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  if ( v15 >= 0xA )
  {
    v17 = v32;
    *v9 = 2;
    *v17 = 10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v13, 10LL, v16, 0xBFu, v28);
    v12 = &WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids;
    goto LABEL_16;
  }
  v20 = 1;
  *v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v13, 2u, v16, 0xC0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v14, *a1, 10);
    goto LABEL_84;
  }
LABEL_85:
  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v13, 2u, 5u, 0xCCu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return v20;
}
