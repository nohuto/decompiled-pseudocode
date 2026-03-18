/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x1C0032BCC
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C0033BDC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_dDDDdDDD @ 0x1C002E998 (WPP_RECORDER_SF_dDDDdDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v6; // r14
  int v9; // r13d
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int16 v15; // ax
  unsigned __int8 v16; // al
  unsigned __int16 v17; // ax
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r8
  int v21; // r10d
  int v22; // r11d
  __int64 v23; // rcx
  int v24; // r10d
  unsigned __int16 v25; // r9
  int v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // edx
  unsigned int v30; // ecx
  __int64 result; // rax
  int v32; // [rsp+20h] [rbp-A8h]
  __int64 v33; // [rsp+28h] [rbp-A0h]
  __int64 v34; // [rsp+30h] [rbp-98h]
  __int64 v35; // [rsp+38h] [rbp-90h]
  unsigned int v36; // [rsp+70h] [rbp-58h]
  int v37; // [rsp+74h] [rbp-54h] BYREF
  __int64 v38; // [rsp+78h] [rbp-50h]
  char v39; // [rsp+D0h] [rbp+8h]
  int v40; // [rsp+D8h] [rbp+10h]
  int v42; // [rsp+E8h] [rbp+20h]

  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v37;
    v37 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = *(_DWORD *)(a2 + 72) - v9;
  if ( *a1 < 0x10u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 214LL, 0LL);
    if ( v10 < 0x10 )
    {
      *v6 = 1;
      WPP_RECORDER_SF_DDD(a5, 2u, v12, 0xAEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, *a1, 16);
      goto LABEL_90;
    }
    *v6 = 2;
    *a3 = 16;
    WPP_RECORDER_SF_DDDD(a5, v11, v12, 0xADu, v32);
  }
  v36 = *((_DWORD *)a1 + 1) & 0x1F;
  if ( *a1 != 4LL * v36 + 16 )
  {
    if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(
      a5,
      2u,
      0LL,
      0xAFu,
      (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
      v9,
      *a1,
      4 * v36 + 16);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL);
  }
  if ( *a3 <= v10 )
  {
    v14 = *((_DWORD *)a1 + 1);
    if ( v14 >= 0x200 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v14 = *((_DWORD *)a1 + 1);
      }
      LODWORD(v33) = v14;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB1u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 215LL);
    }
    v15 = *((_WORD *)a1 + 4);
    if ( (v15 & 0xF0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v15 = *((_WORD *)a1 + 4);
      }
      LODWORD(v33) = v15;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB2u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 216LL);
    }
    v16 = a1[3];
    if ( v16 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v16 = a1[3];
      }
      LODWORD(v33) = v16;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB3u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
    }
    v17 = *((_WORD *)a1 + 5);
    if ( v17 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v6 = 2;
        v17 = *((_WORD *)a1 + 5);
      }
      LODWORD(v33) = v17;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB4u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 219LL);
    }
    v18 = v36;
    LODWORD(v19) = 0;
    v42 = 0;
    v40 = 0;
    v39 = 0;
    do
    {
      v20 = (unsigned int)v19;
      v21 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
      if ( (v21 & 0x80u) != 0 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        LODWORD(v33) = v19;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB5u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
        v13 = 220LL;
        goto LABEL_89;
      }
      if ( (_DWORD)v19 == v18 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        LODWORD(v33) = v19 + 1;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB6u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
        v13 = 222LL;
        goto LABEL_89;
      }
      v22 = *(_DWORD *)&a1[4 * (unsigned int)(v19 + 1) + 12];
      v23 = (unsigned int)(v19 + 1);
      v38 = v23;
      if ( (v22 & 0x80u) == 0 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        LODWORD(v33) = v19 + 1;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB7u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
        v13 = 221LL;
        goto LABEL_89;
      }
      if ( (((unsigned __int8)v22 ^ (unsigned __int8)v21) & 0xF) != 0
        || (((unsigned __int8)v21 ^ (unsigned __int8)v22) & 0x40) != 0
        || (((unsigned __int16)v21 ^ (unsigned __int16)v22) & 0xC000) != 0 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        {
          *v6 = 2;
          v21 = *(_DWORD *)&a1[4 * (unsigned int)v19 + 12];
        }
        WPP_RECORDER_SF_dDDDdDDD(a5, v21 & 0xF, (unsigned int)v19, 0xB8u, v32);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
        v23 = v38;
        v20 = (unsigned int)v19;
      }
      v24 = *(_DWORD *)&a1[4 * v20 + 12];
      if ( (v24 & 0x40) == 0
        && ((((unsigned __int8)*(_DWORD *)&a1[4 * v23 + 12] ^ (unsigned __int8)v24) & 0x30) != 0
         || *(_WORD *)&a1[4 * v20 + 14] != *(_WORD *)&a1[4 * v23 + 14]) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        {
          *v6 = 2;
          v24 = *(_DWORD *)&a1[4 * v20 + 12];
        }
        WPP_RECORDER_SF_dDDDdDDD(a5, v24 & 0xF, v20, 0xB9u, v32);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
        v20 = (unsigned int)v19;
      }
      v25 = *((_WORD *)a1 + 4);
      v26 = *(_DWORD *)&a1[4 * v20 + 12];
      if ( (((unsigned __int8)v26 ^ (unsigned __int8)v25) & 0xF) == 0 )
      {
        v39 = 1;
        if ( (v26 & 0x40) == 0 && (v25 & 0xF00) != ((v25 >> 4) & 0xF00) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          {
            *v6 = 2;
            v25 = *((_WORD *)a1 + 4);
            v26 = *(_DWORD *)&a1[4 * v20 + 12];
          }
          LODWORD(v35) = v25 >> 12;
          LODWORD(v34) = HIBYTE(v25) & 0xF;
          LODWORD(v33) = v26 & 0xF;
          WPP_RECORDER_SF_DDD(
            a5,
            2u,
            v20,
            0xBAu,
            (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
            v33,
            v34,
            v35);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL);
          v20 = (unsigned int)v19;
        }
      }
      v27 = *(_DWORD *)&a1[4 * v20 + 12];
      v28 = v42;
      if ( _bittest(&v28, v27 & 0xF) )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        {
          *v6 = 2;
          v27 = *(_DWORD *)&a1[4 * v20 + 12];
        }
        LODWORD(v34) = v27 & 0xF;
        LODWORD(v33) = v19;
        WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xBBu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33, v34);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL);
        v29 = v40;
      }
      else
      {
        v42 |= 1 << (v27 & 0xF);
        v29 = ++v40;
      }
      v18 = v36;
      v19 = (unsigned int)(v19 + 2);
    }
    while ( (unsigned int)v19 <= v36 );
    v30 = *((_DWORD *)a1 + 1);
    if ( ((v30 >> 5) & 0xF) + 1 != v29 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      {
        *v6 = 2;
        v30 = *((_DWORD *)a1 + 1);
      }
      LODWORD(v34) = ((v30 >> 5) & 0xF) + 1;
      LODWORD(v33) = v29;
      WPP_RECORDER_SF_dD(a5, 2u, 5u, 0xBCu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33, v34);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 227LL);
    }
    if ( !v39 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      LODWORD(v33) = *(_DWORD *)&a1[4 * v19 + 12] & 0xF;
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xBDu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
      v13 = 228LL;
      goto LABEL_89;
    }
  }
  else
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v6 = 2;
    LODWORD(v33) = v9;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0xB0u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v33);
    v13 = 217LL;
LABEL_89:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v13);
  }
LABEL_90:
  result = 0LL;
  if ( *v6 )
    return WPP_RECORDER_SF_(a5, 2u, 5u, 0xBEu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  return result;
}
