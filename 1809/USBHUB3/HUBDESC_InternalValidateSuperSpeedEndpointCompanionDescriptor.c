/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor @ 0x1C0030434
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C000AA00 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C002E788 (WPP_RECORDER_SF_ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002EB30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateSuperSpeedEndpointCompanionDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5,
        _BYTE *a6)
{
  int *v6; // r14
  _BYTE *v10; // r13
  int v11; // r15d
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ecx
  char v18; // r13
  __int64 v19; // r8
  int v20; // edx
  unsigned int *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned __int8 v25; // r9
  __int64 v26; // r8
  unsigned __int8 v27; // r9
  __int64 v28; // r10
  unsigned __int8 v29; // al
  __int64 v30; // rdx
  __int64 v31; // rdx
  unsigned __int8 v32; // r9
  unsigned __int8 v33; // r9
  __int64 v34; // rdx
  unsigned __int8 v35; // r9
  unsigned __int8 v36; // al
  unsigned __int16 v37; // r9
  unsigned int v38; // edx
  __int64 v39; // rdx
  unsigned __int8 v40; // r9
  __int64 v41; // r8
  unsigned __int8 v42; // r9
  __int64 v43; // r10
  __int64 v44; // rdx
  unsigned __int8 v45; // r9
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  unsigned __int16 v48; // ax
  unsigned __int8 v49; // r9
  unsigned __int8 v50; // al
  unsigned __int16 v51; // r9
  int v53; // [rsp+20h] [rbp-68h]
  __int64 v54; // [rsp+28h] [rbp-60h]
  __int64 v55; // [rsp+30h] [rbp-58h]
  __int64 v56; // [rsp+38h] [rbp-50h]
  int v57; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v58; // [rsp+A0h] [rbp+18h]

  v58 = a3;
  v6 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v57;
    v57 = 0;
  }
  v10 = a6;
  if ( a6 )
    *a6 = 0;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 4) == 3;
  LODWORD(a6) = *(_DWORD *)(a2 + 72) - v11;
  v13 = *a1;
  *a3 = v13;
  if ( !v12 )
  {
    v14 = a5;
    WPP_RECORDER_SF_d(a5, 2u, 5u, 0x47u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11);
    v15 = 40LL;
LABEL_104:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    goto LABEL_105;
  }
  v14 = a5;
  if ( (unsigned __int8)v13 < 6u )
  {
    (*(void (__fastcall **)(_QWORD, __int64, unsigned int *, _QWORD))(a2 + 24))(*(_QWORD *)(a2 + 40), 43LL, a3, 0LL);
    if ( (unsigned int)a6 < 6 )
    {
      v17 = *a3;
    }
    else
    {
      *a3 = 6;
      v17 = 6;
    }
    *v6 = 2;
    if ( v17 < 6 )
    {
      v18 = 1;
      *v6 = 1;
      WPP_RECORDER_SF_DDD(v14, 2u, v16, 0x48u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, *a1, v11, 6);
      goto LABEL_106;
    }
    WPP_RECORDER_SF_DDDD(v14, 6LL, v16, 0x49u, v53);
  }
  if ( *a1 > 6u )
  {
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v6 = 2;
    WPP_RECORDER_SF_DDD(v14, 2u, v19, 0x4Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, *a1, v11, 6);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 42LL);
  }
  v20 = *(_DWORD *)(a2 + 256);
  if ( (v20 & 4) == 0 )
  {
    LODWORD(v54) = v11;
    WPP_RECORDER_SF_d(v14, 2u, 5u, 0x4Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 41LL);
    *v6 = 2;
LABEL_107:
    v18 = 0;
    WPP_RECORDER_SF_(v14, 2u, 5u, 0x5Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    return v18;
  }
  v21 = v58;
  v22 = (unsigned int)a6;
  v23 = v20 & 0xFFFFFFEB | 0x10;
  *(_DWORD *)(a2 + 256) = v23;
  if ( *v21 > v22 )
  {
    if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
      *v6 = 2;
    LODWORD(v54) = v11;
    WPP_RECORDER_SF_d(v14, 2u, 5u, 0x4Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54);
    v15 = 44LL;
    goto LABEL_104;
  }
  v24 = *(_QWORD *)(a2 + 192);
  switch ( *(_BYTE *)(v24 + 3) & 3 )
  {
    case 0:
      if ( a1[2] )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v49 = a1[2];
        }
        LODWORD(v55) = v49;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x4Du, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 38LL);
      }
      v50 = a1[3];
      if ( v50 )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v6 = 2;
          v50 = a1[3];
        }
        LODWORD(v55) = v50;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x4Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 37LL);
      }
      if ( !*((_WORD *)a1 + 2) )
        goto LABEL_105;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v6 = 2;
        v51 = *((_WORD *)a1 + 2);
      }
      LODWORD(v55) = v51;
      LODWORD(v54) = v11;
      WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x4Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
      v15 = 39LL;
      goto LABEL_104;
    case 1:
      v38 = v23 & 0xFFFFFFDF;
      *(_DWORD *)(a2 + 256) = v38;
      v39 = v38 & 0xFFFFFFF7;
      *(_DWORD *)(a2 + 256) = v39 | (a1[3] >> 4) & 0xFFFFFF8;
      if ( a1[2] > 0xFu )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v40 = a1[2];
        }
        LODWORD(v55) = v40;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x58u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 50LL);
      }
      if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v43 = *(_QWORD *)(a2 + 192);
          v42 = a1[2];
        }
        LODWORD(v56) = *(unsigned __int16 *)(v43 + 4);
        LODWORD(v55) = v42;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_DDD(
          v14,
          2u,
          v41,
          0x59u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v54,
          v55,
          v56);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 51LL);
      }
      if ( (*(_DWORD *)(a2 + 256) & 8) == 0 && (a1[3] & 3) == 3 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v45 = a1[3];
        }
        LODWORD(v55) = v45 & 3;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_Ld(v14, v44, 5u, 0x5Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 52LL);
      }
      v46 = a1[3];
      if ( (v46 & 0x7C) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v6 = 2;
          v46 = a1[3];
        }
        LODWORD(v55) = v46;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x5Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 49LL);
      }
      v18 = 1;
      if ( (*(_DWORD *)(a2 + 256) & 8) == 0 )
      {
        v47 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
        if ( *((unsigned __int16 *)a1 + 2) <= (unsigned int)v47 )
          break;
        WPP_RECORDER_SF_ddd(v14, v47, (__int64)a3, 0x5Cu, v53);
        v31 = 53LL;
        goto LABEL_46;
      }
      v48 = *((_WORD *)a1 + 2);
      if ( v48 != 1 )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v6 = 2;
          v48 = *((_WORD *)a1 + 2);
        }
        LODWORD(v55) = v48;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_Ld(v14, v39, 5u, 0x5Du, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 204LL);
      }
      break;
    case 2:
      if ( a1[2] > 0xFu )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v32 = a1[2];
        }
        LODWORD(v55) = v32;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x50u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 34LL);
      }
      v33 = a1[3];
      if ( (v33 & 0x1F) != 0 && v10 )
      {
        *v10 = 1;
        v33 = a1[3];
      }
      if ( (v33 & 0x1Fu) > 0x10 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v35 = a1[3];
        }
        LODWORD(v55) = v35 & 0x1F;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_Ld(v14, v34, 5u, 0x51u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 35LL);
      }
      v36 = a1[3];
      if ( v36 >= 0x20u )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v6 = 2;
          v36 = a1[3];
        }
        LODWORD(v55) = v36;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x52u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 33LL);
      }
      if ( !*((_WORD *)a1 + 2) )
        goto LABEL_105;
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v6 = 2;
        v37 = *((_WORD *)a1 + 2);
      }
      LODWORD(v55) = v37;
      LODWORD(v54) = v11;
      WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x53u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
      v15 = 36LL;
      goto LABEL_104;
    case 3:
      if ( a1[2] > 0xFu )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v25 = a1[2];
        }
        LODWORD(v55) = v25;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x54u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 45LL);
      }
      if ( a1[2] && *(_WORD *)(*(_QWORD *)(a2 + 192) + 4LL) != 1024 )
      {
        if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        {
          *v6 = 2;
          v28 = *(_QWORD *)(a2 + 192);
          v27 = a1[2];
        }
        LODWORD(v56) = *(unsigned __int16 *)(v28 + 4);
        LODWORD(v55) = v27;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_DDD(
          v14,
          2u,
          v26,
          0x55u,
          (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
          v54,
          v55,
          v56);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 46LL);
      }
      v29 = a1[3];
      if ( v29 )
      {
        if ( *(_BYTE *)(a2 + 15) )
        {
          *v6 = 2;
          v29 = a1[3];
        }
        LODWORD(v55) = v29;
        LODWORD(v54) = v11;
        WPP_RECORDER_SF_dD(v14, 2u, 5u, 0x56u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v54, v55);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 47LL);
      }
      v18 = 1;
      v30 = (a1[2] + 1) * *(unsigned __int16 *)(*(_QWORD *)(a2 + 192) + 4LL) * ((a1[3] & 3u) + 1);
      if ( *((unsigned __int16 *)a1 + 2) > (unsigned int)v30 )
      {
        WPP_RECORDER_SF_ddd(v14, v30, (__int64)a3, 0x57u, v53);
        v31 = 48LL;
LABEL_46:
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v31);
      }
      break;
    default:
LABEL_105:
      v18 = 1;
      break;
  }
LABEL_106:
  if ( *v6 )
    goto LABEL_107;
  return v18;
}
