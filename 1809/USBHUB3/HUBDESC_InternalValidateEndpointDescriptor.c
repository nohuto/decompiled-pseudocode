/*
 * XREFs of HUBDESC_InternalValidateEndpointDescriptor @ 0x1C002F4DC
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0031920 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C00239AC (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002E678 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C002EB30 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C002F2A0 (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateEndpointDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rsi
  int v9; // r14d
  __int64 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // r8
  char v13; // r13
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int8 v17; // r9
  unsigned __int8 v18; // al
  int v19; // ecx
  unsigned __int16 v20; // bp
  int v21; // edx
  int v22; // edx
  int v23; // edx
  __int64 v24; // rdx
  ULONG v25; // ebp
  unsigned __int8 v26; // r9
  int v27; // eax
  unsigned __int16 v28; // r9
  unsigned __int16 v29; // ax
  unsigned __int8 v30; // r9
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  unsigned __int16 v34; // r9
  int v35; // eax
  unsigned __int16 v36; // r9
  unsigned __int16 v37; // r9
  int v38; // r9d
  __int64 v39; // rcx
  unsigned __int16 v40; // r9
  unsigned __int16 v41; // r10
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  unsigned __int16 v45; // r9
  unsigned __int8 v46; // r9
  int v47; // eax
  unsigned __int16 v48; // r9
  unsigned __int8 v49; // r9
  unsigned __int8 v50; // r9
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  unsigned __int16 v54; // r9
  int v55; // eax
  unsigned __int16 v56; // r9
  unsigned __int16 v57; // r9
  int v58; // r9d
  __int64 v59; // rcx
  unsigned __int16 v60; // r9
  unsigned __int16 v61; // r9
  int v62; // eax
  int v64; // [rsp+20h] [rbp-68h]
  __int64 v65; // [rsp+28h] [rbp-60h]
  __int64 v66; // [rsp+30h] [rbp-58h]
  unsigned __int8 v67; // [rsp+90h] [rbp+8h]
  int v68; // [rsp+98h] [rbp+10h] BYREF

  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v68;
    v68 = 0;
  }
  v9 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v10 = a5;
  v11 = *(_DWORD *)(a2 + 72) - v9;
  *a3 = *a1;
  HUBDESC_InternalValidateLastEndpoint(a2, v5, v10);
  v13 = 1;
  if ( *v5 != 1 )
  {
    if ( *a1 < 7u )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 81LL);
      if ( v11 < 7 )
      {
        v14 = *a3;
      }
      else
      {
        *a3 = 7;
        v14 = 7;
      }
      v15 = 768LL;
      if ( *(_WORD *)a2 >= 0x300u || (v15 = 512LL, *(_WORD *)a2 > 0x200u) || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( v14 < 7 )
      {
        *v5 = 1;
        WPP_RECORDER_SF_DDD(v10, 2u, 7LL, 0x1Du, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, *a1, v9, 7);
        goto LABEL_202;
      }
      WPP_RECORDER_SF_DDDD(v10, v15, 7LL, 0x1Eu, v64);
    }
    if ( *a1 > 7u )
    {
      WPP_RECORDER_SF_DDD(v10, 3u, v12, 0x1Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, *a1, v9, 7);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 80LL);
    }
    if ( *a3 > v11 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v65) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x20u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65);
      v16 = 83LL;
LABEL_26:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v16);
      goto LABEL_202;
    }
    v67 = a1[2];
    if ( (*(_DWORD *)(a2 + 256) & 1) == 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      LODWORD(v65) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x21u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65);
      v16 = 85LL;
      goto LABEL_26;
    }
    if ( (a1[2] & 0xF) == 0 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      LODWORD(v65) = v9;
      WPP_RECORDER_SF_d(v10, 2u, 5u, 0x22u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 86LL);
    }
    if ( (a1[2] & 0x70) != 0 )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      {
        *v5 = 2;
        v17 = a1[2];
      }
      LODWORD(v66) = v17;
      LODWORD(v65) = v9;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x23u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 84LL);
    }
    v18 = a1[3];
    if ( (v18 & 0xC0) != 0 )
    {
      if ( *(_BYTE *)(a2 + 15) )
      {
        *v5 = 2;
        v18 = a1[3];
      }
      LODWORD(v66) = v9;
      LODWORD(v65) = v18;
      WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x24u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 82LL);
    }
    v19 = a1[3];
    v20 = *((_WORD *)a1 + 2);
    switch ( a1[3] & 3 )
    {
      case 0:
        if ( (v19 & 0xFFFFFFFC) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
          {
            *v5 = 2;
            LOBYTE(v19) = a1[3];
          }
          LODWORD(v66) = v9;
          LODWORD(v65) = (unsigned __int8)v19;
          WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x25u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 67LL);
        }
        v51 = *(_DWORD *)(a2 + 4);
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              if ( v53 != 1 || *((_WORD *)a1 + 2) == 512 )
                goto LABEL_59;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v54 = *((_WORD *)a1 + 2);
              }
              v55 = v54;
              v56 = 41;
            }
            else
            {
              if ( *((_WORD *)a1 + 2) == 64 )
                goto LABEL_59;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v57 = *((_WORD *)a1 + 2);
              }
              v55 = v57;
              v56 = 40;
            }
          }
          else
          {
            v58 = *((unsigned __int16 *)a1 + 2);
            if ( (unsigned __int16)(v58 - 8) <= 0x38u )
            {
              v59 = 0x100000001000101LL;
              if ( _bittest64(&v59, (unsigned int)(v58 - 8)) )
                goto LABEL_59;
            }
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v60 = *((_WORD *)a1 + 2);
            }
            if ( !v60 )
            {
              *v5 = 2;
              v60 = *((_WORD *)a1 + 2);
            }
            v55 = v60;
            v56 = 39;
          }
        }
        else
        {
          if ( *((_WORD *)a1 + 2) == 8 )
            goto LABEL_59;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v61 = *((_WORD *)a1 + 2);
          }
          if ( v61 > 8u || !v61 )
          {
            *v5 = 2;
            v61 = *((_WORD *)a1 + 2);
          }
          v55 = v61;
          v56 = 38;
        }
        LODWORD(v66) = v9;
        LODWORD(v65) = v55;
        WPP_RECORDER_SF_dD(v10, 2u, 5u, v56, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
        v24 = 68LL;
        break;
      case 1:
        if ( !*(_BYTE *)(a2 + 81) && v20 )
        {
          LODWORD(v66) = v20;
          LODWORD(v65) = v9;
          WPP_RECORDER_SF_dD(v10, 3u, 5u, 0x3Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 233LL);
        }
        v42 = *(_DWORD *)(a2 + 4);
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( v43 )
          {
            v44 = v43 - 1;
            if ( !v44 )
            {
              if ( (v20 & 0x7FFu) > 0x400 )
              {
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v66) = v9;
                LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x3Fu,
                  (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                  v65,
                  v66);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
              }
              if ( v20 >= 0x2000u )
              {
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v66) = v9;
                LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x40u,
                  (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                  v65,
                  v66);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
              }
              if ( (v20 & 0x1800) == 0x1800 )
              {
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v66) = v9;
                LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x41u,
                  (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                  v65,
                  v66);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
              }
              if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
                goto LABEL_59;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v49 = a1[6];
              }
              LODWORD(v66) = v9;
              LODWORD(v65) = v49;
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x42u,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                v65,
                v66);
              v24 = 112LL;
              break;
            }
            if ( v44 != 1 )
              goto LABEL_59;
            if ( *((_WORD *)a1 + 2) > 0x400u )
            {
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v45 = *((_WORD *)a1 + 2);
              }
              LODWORD(v66) = v9;
              LODWORD(v65) = v45;
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x43u,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                v65,
                v66);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
              goto LABEL_59;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v46 = a1[6];
            }
            v47 = v46;
            v48 = 68;
          }
          else
          {
            if ( *((_WORD *)a1 + 2) > 0x3FFu )
            {
              *v5 = 2;
              LODWORD(v66) = v9;
              LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x3Du,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                v65,
                v66);
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 113LL);
            }
            if ( (unsigned __int8)(a1[6] - 1) <= 0xFu )
              goto LABEL_59;
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v50 = a1[6];
            }
            v47 = v50;
            v48 = 62;
          }
          LODWORD(v66) = v9;
          LODWORD(v65) = v47;
          WPP_RECORDER_SF_dD(v10, 2u, 5u, v48, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
          v24 = 112LL;
        }
        else
        {
          *v5 = 2;
          LODWORD(v65) = v9;
          WPP_RECORDER_SF_d(v10, 2u, 5u, 0x3Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65);
          v24 = 111LL;
        }
        break;
      case 2:
        if ( (v19 & 0xFFFFFFFC) != 0 )
        {
          if ( *(_BYTE *)(a2 + 15) )
          {
            *v5 = 2;
            LOBYTE(v19) = a1[3];
          }
          LODWORD(v66) = v9;
          LODWORD(v65) = (unsigned __int8)v19;
          WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x36u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 31LL);
        }
        v31 = *(_DWORD *)(a2 + 4);
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              if ( v33 != 1 || *((_WORD *)a1 + 2) == 1024 )
                goto LABEL_59;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v34 = *((_WORD *)a1 + 2);
              }
              v35 = v34;
              v36 = 58;
            }
            else
            {
              if ( *((_WORD *)a1 + 2) == 512 )
                goto LABEL_59;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v37 = *((_WORD *)a1 + 2);
              }
              v35 = v37;
              v36 = 57;
            }
          }
          else
          {
            v38 = *((unsigned __int16 *)a1 + 2);
            if ( (unsigned __int16)(v38 - 8) <= 0x38u )
            {
              v39 = 0x100000001000101LL;
              if ( _bittest64(&v39, (unsigned int)(v38 - 8)) )
                goto LABEL_59;
            }
            if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
            {
              *v5 = 2;
              v40 = *((_WORD *)a1 + 2);
            }
            if ( !v40 )
            {
              *v5 = 2;
              v40 = *((_WORD *)a1 + 2);
            }
            v35 = v40;
            v36 = v41;
          }
          LODWORD(v66) = v9;
          LODWORD(v65) = v35;
          WPP_RECORDER_SF_dD(v10, 2u, 5u, v36, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
          v24 = 32LL;
        }
        else
        {
          *v5 = 2;
          LODWORD(v65) = v9;
          WPP_RECORDER_SF_d(v10, 2u, 5u, 0x37u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65);
          v24 = 30LL;
        }
        break;
      case 3:
        v21 = *(_DWORD *)(a2 + 4);
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 || v20 <= 0x400u )
                goto LABEL_59;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
              {
                *v5 = 2;
                v20 = *((_WORD *)a1 + 2);
              }
              LODWORD(v66) = v9;
              LODWORD(v65) = v20;
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x35u,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                v65,
                v66);
              v24 = 110LL;
            }
            else
            {
              if ( (v19 & 0xFFFFFFFC) != 0 )
              {
                if ( *(_BYTE *)(a2 + 15) )
                {
                  *v5 = 2;
                  LOBYTE(v19) = a1[3];
                }
                LODWORD(v66) = v9;
                LODWORD(v65) = (unsigned __int8)v19;
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x31u,
                  (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                  v65,
                  v66);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
              }
              if ( (v20 & 0x7FFu) > 0x400 )
              {
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v66) = v9;
                LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x32u,
                  (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                  v65,
                  v66);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
              }
              if ( v20 >= 0x2000u )
              {
                if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                  *v5 = 2;
                LODWORD(v66) = v9;
                LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
                WPP_RECORDER_SF_dD(
                  v10,
                  2u,
                  5u,
                  0x33u,
                  (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                  v65,
                  v66);
                (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
              }
              if ( (v20 & 0x1800) != 0x1800 )
                goto LABEL_59;
              if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
                *v5 = 2;
              LODWORD(v66) = v9;
              LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
              WPP_RECORDER_SF_dD(
                v10,
                2u,
                5u,
                0x34u,
                (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids,
                v65,
                v66);
              v24 = 110LL;
            }
            break;
          }
          if ( (v19 & 0xFFFFFFFC) != 0 )
          {
            if ( *(_BYTE *)(a2 + 15) )
            {
              *v5 = 2;
              LOBYTE(v19) = a1[3];
            }
            LODWORD(v66) = v9;
            LODWORD(v65) = (unsigned __int8)v19;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Eu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
          }
          if ( *((_WORD *)a1 + 2) > 0x40u )
          {
            *v5 = 2;
            LODWORD(v66) = v9;
            LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Fu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
          }
          if ( a1[6] )
            goto LABEL_59;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v26 = a1[6];
          }
          v27 = v26;
          v28 = 48;
        }
        else
        {
          if ( (v19 & 0xFFFFFFFC) != 0 )
          {
            if ( *(_BYTE *)(a2 + 15) )
            {
              *v5 = 2;
              LOBYTE(v19) = a1[3];
            }
            LODWORD(v66) = v9;
            LODWORD(v65) = (unsigned __int8)v19;
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 108LL);
          }
          v29 = *((_WORD *)a1 + 2);
          if ( v29 > 8u )
          {
            *v5 = 2;
            LODWORD(v66) = v9;
            LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Bu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
            v29 = *((_WORD *)a1 + 2);
          }
          if ( !v29 )
          {
            *v5 = 2;
            LODWORD(v66) = v9;
            LODWORD(v65) = *((unsigned __int16 *)a1 + 2);
            WPP_RECORDER_SF_dD(v10, 2u, 5u, 0x2Cu, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 110LL);
          }
          if ( a1[6] )
            goto LABEL_59;
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
          {
            *v5 = 2;
            v30 = a1[6];
          }
          v27 = v30;
          v28 = 45;
        }
        LODWORD(v66) = v9;
        LODWORD(v65) = v27;
        WPP_RECORDER_SF_dD(v10, 2u, 5u, v28, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v65, v66);
        v24 = 109LL;
        break;
      default:
LABEL_59:
        if ( _bittest64(*(const signed __int64 **)(a2 + 144), v67) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
            *v5 = 2;
          v25 = v67;
          WPP_RECORDER_SF_DDDD(v10, v67, 512LL, 0x45u, v64);
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 102LL);
        }
        else
        {
          v25 = v67;
        }
        RtlSetBit((PRTL_BITMAP)(a2 + 136), v25);
        v62 = *(_DWORD *)(a2 + 256);
        ++*(_BYTE *)(a2 + 185);
        *(_QWORD *)(a2 + 192) = a1;
        *(_DWORD *)(a2 + 256) = v62 & 0xFFFFFFEB | 4;
        goto LABEL_202;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v24);
    goto LABEL_59;
  }
LABEL_202:
  if ( *v5 )
  {
    v13 = 0;
    WPP_RECORDER_SF_(v10, 2u, 5u, 0x46u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
  }
  return v13;
}
