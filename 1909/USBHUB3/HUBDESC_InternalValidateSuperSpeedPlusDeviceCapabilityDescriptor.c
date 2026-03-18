/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C003613C
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C00373C0 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0025BE8 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C003131C (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_dDDDdDDD @ 0x1C003163C (WPP_RECORDER_SF_dDDDdDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  __int64 v5; // r8
  int *v6; // r14
  int v9; // r12d
  unsigned int v10; // r13d
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r11d
  __int64 v17; // r9
  int v18; // r10d
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // [rsp+20h] [rbp-B8h]
  __int64 v27; // [rsp+28h] [rbp-B0h]
  __int64 v28; // [rsp+30h] [rbp-A8h]
  int v29; // [rsp+70h] [rbp-68h]
  unsigned int v30; // [rsp+74h] [rbp-64h]
  int v31; // [rsp+78h] [rbp-60h] BYREF
  __int64 v32; // [rsp+80h] [rbp-58h]
  __int64 v33; // [rsp+88h] [rbp-50h]
  char v34; // [rsp+E0h] [rbp+8h]
  unsigned int v35; // [rsp+E8h] [rbp+10h]
  int v37; // [rsp+F8h] [rbp+20h]

  v5 = 0LL;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v31;
    v31 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 >= 0x10u )
  {
LABEL_10:
    v30 = *((_DWORD *)a1 + 1) & 0x1F;
    if ( *a1 != 4LL * v30 + 16 )
    {
      if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(
          a5,
          2u,
          0LL,
          0xAFu,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v9,
          *a1,
          4 * v30 + 16);
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL, v5);
    }
    if ( *a3 <= v10 )
    {
      if ( *((_DWORD *)a1 + 1) >= 0x200u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = *((_DWORD *)a1 + 1);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB1u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 215LL, v5);
      }
      if ( (a1[8] & 0xF0) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = *((unsigned __int16 *)a1 + 4);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 216LL, v5);
      }
      v5 = 0LL;
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = a1[3];
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB3u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
        v5 = 0LL;
      }
      if ( *((_WORD *)a1 + 5) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = *((unsigned __int16 *)a1 + 5);
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB4u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 219LL);
        v5 = 0LL;
      }
      v15 = v30;
      v16 = 0;
      v29 = 0;
      v37 = 0;
      v34 = 0;
      v35 = 0;
      while ( 1 )
      {
        v17 = v16;
        v32 = v16;
        v18 = *(_DWORD *)&a1[4 * v16 + 12];
        if ( (v18 & 0x80u) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v27) = v16;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
          }
          v14 = 220LL;
          goto LABEL_123;
        }
        if ( v16 == v15 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v27) = v16 + 1;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB6u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
          }
          v14 = 222LL;
          goto LABEL_123;
        }
        v19 = *(_DWORD *)&a1[4 * v16 + 16];
        v20 = v16 + 1;
        v33 = v20;
        if ( (v19 & 0x80u) == 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v27) = v16 + 1;
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
          }
          v14 = 221LL;
          goto LABEL_123;
        }
        if ( (((unsigned __int8)v19 ^ (unsigned __int8)v18) & 0xF) != 0
          || (((unsigned __int8)v18 ^ (unsigned __int8)v19) & 0x40) != 0
          || (((unsigned __int16)v18 ^ (unsigned __int16)v19) & 0xC000) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          {
            *v6 = 2;
            v18 = *(_DWORD *)&a1[4 * v16 + 12];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDDDdDDD(a5, (*(_DWORD *)&a1[4 * v20 + 12] >> 6) & 1, v18 & 0xF, 0xB8u, v26);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
          v5 = 0LL;
          v17 = v32;
          v20 = v33;
        }
        v21 = *(_DWORD *)&a1[4 * v17 + 12];
        if ( (v21 & 0x40) == 0
          && (((a1[4 * v20 + 12] ^ (unsigned __int8)v21) & 0x30) != 0
           || *(_WORD *)&a1[4 * v17 + 14] != *(_WORD *)&a1[4 * v20 + 14]) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dDDDdDDD(
              a5,
              (*(_DWORD *)&a1[4 * v20 + 12] >> 4) & 3,
              (*(_DWORD *)&a1[4 * v17 + 12] >> 4) & 3,
              0xB9u,
              v26);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
          v17 = v32;
        }
        v22 = *(_DWORD *)&a1[4 * v17 + 12];
        if ( (((unsigned __int8)v22 ^ (unsigned __int8)*((_WORD *)a1 + 4)) & 0xF) == 0 )
        {
          v34 = 1;
          if ( (v22 & 0x40) == 0 )
          {
            v5 = 3840LL;
            if ( (*((_WORD *)a1 + 4) & 0xF00) != ((*((_WORD *)a1 + 4) >> 4) & 0xF00) )
            {
              if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
                *v6 = 2;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DDD(a5, 2u, 3840LL, 0xBAu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL);
              v17 = v32;
            }
          }
        }
        v23 = v29;
        v24 = *(_DWORD *)&a1[4 * v17 + 12] & 0xF;
        if ( _bittest(&v23, v24) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xBBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL);
          v25 = v37;
        }
        else
        {
          v29 |= 1 << v24;
          v25 = ++v37;
        }
        v15 = v30;
        v16 = v35 + 2;
        v35 = v16;
        if ( v16 > v30 )
          break;
        v5 = 0LL;
      }
      if ( ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1 != v25 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v28) = ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1;
          LODWORD(v27) = v25;
          WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xBCu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27, v28);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 227LL);
        v16 = v35;
      }
      if ( !v34 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = *(_DWORD *)&a1[4 * v16 + 12] & 0xF;
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0xBDu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
        }
        v14 = 228LL;
        goto LABEL_123;
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = v9;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v27);
      }
      v14 = 217LL;
LABEL_123:
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14, v5);
    }
    goto LABEL_124;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 214LL, 0LL);
  if ( v10 >= 0x10 )
  {
    *v6 = 2;
    *a3 = 16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(a5, v12, v13, 0xADu, v26);
    v5 = 0LL;
    goto LABEL_10;
  }
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return result;
  WPP_RECORDER_SF_DDD(a5, 2u, v13, 0xAEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, *a1, 16);
LABEL_124:
  result = 0LL;
  if ( *v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_(a5, 2u, 5u, 0xBEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return result;
}
