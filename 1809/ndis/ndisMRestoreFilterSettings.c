/*
 * XREFs of ndisMRestoreFilterSettings @ 0x1C004623C
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0063D20 (ndisMResetCompleteStage1.c)
 *     ndisMKillOpen @ 0x1C0116A68 (ndisMKillOpen.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMergeEncapsulations @ 0x1C0023B24 (ndisMergeEncapsulations.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisMAllocateRequest @ 0x1C0045580 (ndisMAllocateRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00487B0 (ndisQueueRestoreRequestsOnTop.c)
 */

__int64 __fastcall ndisMRestoreFilterSettings(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _QWORD *v3; // rsi
  int v4; // r15d
  unsigned int v6; // r12d
  unsigned int v8; // ebx
  bool v9; // al
  _QWORD *v10; // rax
  int v11; // eax
  __int64 ***v12; // rcx
  _QWORD *v13; // rax
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  _QWORD *v18; // rax
  __int64 ***v19; // rbx
  __int64 v20; // r11
  __int64 v21; // rbx
  char v22; // r14
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // xmm1_8
  bool v26; // zf
  int v27; // eax
  __int64 v28; // xmm0_8
  int v29; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  int v32; // eax
  _QWORD *v33; // rax
  __int64 ***v34; // rbx
  int v35; // r15d
  __int64 *i; // rbx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  _QWORD *v41; // rax
  _QWORD *v42; // r14
  __int64 ***v43; // rax
  int v44; // ecx
  _QWORD *v45; // rcx
  __int64 *j; // r14
  unsigned int v47; // eax
  unsigned int v48; // ecx
  _QWORD *v49; // rax
  _QWORD *v50; // rbx
  int v51; // eax
  _QWORD *v52; // rax
  __int64 ***v53; // rbx
  __int64 k; // rax
  _QWORD *v55; // rax
  _QWORD *v56; // rbx
  int v57; // eax
  _QWORD *v58; // rax
  __int64 ***v59; // rbx
  __int64 *v60; // rcx
  __int64 *v61; // rax
  unsigned __int8 v63; // [rsp+30h] [rbp-50h]
  __int64 *v64; // [rsp+38h] [rbp-48h] BYREF
  __int64 **v65; // [rsp+40h] [rbp-40h]
  int v66; // [rsp+48h] [rbp-38h] BYREF
  __int128 v67; // [rsp+50h] [rbp-30h] BYREF
  __int64 v68; // [rsp+60h] [rbp-20h]
  int v69; // [rsp+68h] [rbp-18h]

  v3 = 0LL;
  v63 = a3;
  v4 = 0;
  v6 = 0;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qqd(0x6Au, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, a3);
    a3 = v63;
  }
  v9 = !a2 && !a3;
  v65 = &v64;
  v64 = (__int64 *)&v64;
  if ( !v9 && !a3 )
    goto LABEL_49;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v66 = -1;
    v10 = ndisMAllocateRequest(a2, 65806, 1, &v66, 4u);
    v3 = v10;
    if ( !v10 )
      goto LABEL_90;
    *(_BYTE *)v10 = -106;
    *((_WORD *)v10 + 1) = 248;
    *((_BYTE *)v10 + 1) = 1;
    v11 = *((_DWORD *)v10 + 22) | 2;
    v3[13] = a2;
    *((_DWORD *)v3 + 22) = v11;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *((_DWORD *)v3 + 22) |= 0x200u;
      v11 = *((_DWORD *)v3 + 22);
    }
    else
    {
      v3[13] = &ndisIntReqRestore;
    }
    v12 = (__int64 ***)(v3 + 9);
    *((_DWORD *)v3 + 22) = v11 | 0x80000;
    v13 = v65;
    if ( *v65 != (__int64 *)&v64 )
      goto LABEL_87;
    v3[10] = v65;
    *v12 = &v64;
    v6 = 1;
    *v13 = v12;
    v14 = *(_DWORD *)(a1 + 464);
    v65 = (__int64 **)(v3 + 9);
    if ( !v14 )
    {
      v15 = ndisMAllocateRequest(a2, 16843011, 1, 0LL, 0);
      v16 = v15;
      if ( !v15 )
        goto LABEL_79;
      *(_BYTE *)v15 = -106;
      *((_WORD *)v15 + 1) = 248;
      *((_BYTE *)v15 + 1) = 1;
      v17 = *((_DWORD *)v15 + 22) | 2;
      v16[13] = a2;
      *((_DWORD *)v16 + 22) = v17;
      if ( a2 )
      {
        ndisMReferenceOpen((__int64)a2, 6u);
        *((_DWORD *)v16 + 22) |= 0x200u;
        v17 = *((_DWORD *)v16 + 22);
      }
      else
      {
        v16[13] = &ndisIntReqRestore;
      }
      *((_DWORD *)v16 + 22) = v17 | 0x80000;
      v3 = v16;
      v18 = v65;
      v19 = (__int64 ***)(v16 + 9);
      if ( *v65 != (__int64 *)&v64 )
        goto LABEL_87;
      v19[1] = v65;
      *v19 = &v64;
      v6 = 2;
      *v18 = v19;
      v65 = (__int64 **)v19;
    }
  }
  v20 = *(_QWORD *)(a1 + 4128);
  if ( !v20 || *(_BYTE *)(v20 + 1) != 1 )
    goto LABEL_49;
  v21 = *(_QWORD *)(a1 + 56);
  v67 = 0uLL;
  v22 = 1;
  v68 = 0LL;
  v69 = 0;
  if ( !v21 )
    goto LABEL_37;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v21 + 696);
    if ( !v23 || !*(_BYTE *)(v23 + 28) )
      goto LABEL_33;
    if ( !v22 )
    {
      v4 = ndisMergeEncapsulations(v23, &v67);
      if ( v4 )
        goto LABEL_79;
      goto LABEL_33;
    }
    if ( *(_BYTE *)v23 != 0xA8 || !*(_BYTE *)(v23 + 1) || *(_WORD *)(v23 + 2) < 0x1Cu )
      break;
    v22 = 0;
    v24 = *(_DWORD *)(v23 + 24);
    v25 = *(_QWORD *)(v23 + 16);
    v67 = *(_OWORD *)v23;
    v69 = v24;
    v68 = v25;
LABEL_33:
    v21 = *(_QWORD *)(v21 + 392);
    if ( !v21 )
      goto LABEL_36;
  }
  v4 = -1073741637;
LABEL_36:
  if ( v4 )
    goto LABEL_79;
LABEL_37:
  if ( (_BYTE)v67 == 0xA8
    || (v26 = *(_BYTE *)(v20 + 760) == 0xA8, LODWORD(v67) = 1835432, !v26)
    || !*(_BYTE *)(v20 + 761)
    || *(_WORD *)(v20 + 762) < 0x1Cu
    || *(_DWORD *)(v20 + 764) == 2 && *(_DWORD *)(v20 + 776) == 2 )
  {
LABEL_49:
    v35 = *(_DWORD *)(a1 + 1292) & 5;
    v66 = v35;
    if ( a2 )
    {
      for ( i = (__int64 *)a2[62]; i; i = (__int64 *)*i )
      {
        if ( (_QWORD *)i[3] == a2 )
        {
          v37 = *((_DWORD *)i + 14);
          v38 = v37 + 24;
          if ( v37 + 24 < v37 )
            goto LABEL_79;
          v39 = *((_DWORD *)i + 16);
          v40 = v39 + v38;
          if ( v40 < v39 )
            goto LABEL_79;
          v41 = ndisMAllocateRequest(a2, -50265852, 1, i + 6, v40);
          v42 = v41;
          if ( !v41 )
            goto LABEL_79;
          *(_BYTE *)v41 = -106;
          *((_BYTE *)v41 + 1) = 1;
          *((_WORD *)v41 + 1) = 248;
          *((_DWORD *)v41 + 22) |= 2u;
          v41[13] = a2;
          ndisMReferenceOpen((__int64)a2, 6u);
          v43 = (__int64 ***)(v42 + 9);
          v44 = *((_DWORD *)v42 + 22) | 0x200;
          *((_DWORD *)v42 + 22) = v44;
          *((_DWORD *)v42 + 22) = v44 & 0xFFFBFFFF;
          v45 = v65;
          if ( *v65 != (__int64 *)&v64 )
            goto LABEL_87;
          v42[10] = v65;
          *v43 = &v64;
          ++v6;
          *v45 = v43;
          v3 = v42;
          v65 = (__int64 **)(v42 + 9);
        }
      }
    }
    else
    {
      for ( j = *(__int64 **)(a1 + 960); j; j = (__int64 *)*j )
      {
        if ( *((_DWORD *)j + 14) >= 0xFFFFFFE8 )
          goto LABEL_79;
        v47 = *((_DWORD *)j + 16);
        v48 = v47 + *((_DWORD *)j + 14) + 24;
        if ( v48 < v47 )
          goto LABEL_79;
        v49 = ndisMAllocateRequest(0LL, -50265853, 1, j + 6, v48);
        v50 = v49;
        if ( !v49 )
          goto LABEL_79;
        *(_BYTE *)v49 = -106;
        *((_WORD *)v49 + 1) = 248;
        *((_BYTE *)v49 + 1) = 1;
        v51 = *((_DWORD *)v49 + 22) | 2;
        v50[13] = 0LL;
        *((_DWORD *)v50 + 22) = v51;
        v50[13] = &ndisIntReqRestore;
        *((_DWORD *)v50 + 22) = v51 | 0xC0000;
        v3 = v50;
        v52 = v65;
        v53 = (__int64 ***)(v50 + 9);
        if ( *v65 != (__int64 *)&v64 )
          goto LABEL_87;
        v53[1] = v65;
        *v53 = &v64;
        ++v6;
        *v52 = v53;
        v65 = (__int64 **)v53;
      }
    }
    for ( k = *(_QWORD *)(a1 + 56); k; k = *(_QWORD *)(k + 392) )
    {
      if ( a2 != (_QWORD *)k )
      {
        v35 |= *(_DWORD *)(k + 304);
        v66 = v35;
      }
    }
    if ( v35 != *(_DWORD *)(a1 + 1292) )
    {
      v55 = ndisMAllocateRequest(a2, -50265850, 1, &v66, 4u);
      v56 = v55;
      if ( v55 )
      {
        *(_BYTE *)v55 = -106;
        *((_WORD *)v55 + 1) = 248;
        *((_BYTE *)v55 + 1) = 1;
        v57 = *((_DWORD *)v55 + 22) | 2;
        v56[13] = a2;
        *((_DWORD *)v56 + 22) = v57;
        if ( a2 )
        {
          ndisMReferenceOpen((__int64)a2, 6u);
          *((_DWORD *)v56 + 22) |= 0x200u;
          v57 = *((_DWORD *)v56 + 22);
        }
        else
        {
          v56[13] = &ndisIntReqRestore;
        }
        *((_DWORD *)v56 + 22) = v57 | 0x80000;
        v3 = v56;
        v58 = v65;
        v59 = (__int64 ***)(v56 + 9);
        if ( *v65 != (__int64 *)&v64 )
          goto LABEL_87;
        v59[1] = v65;
        *v59 = &v64;
        ++v6;
        *v58 = v59;
        v65 = (__int64 **)v59;
      }
    }
    goto LABEL_79;
  }
  v27 = *(_DWORD *)(v20 + 772);
  *(_QWORD *)((char *)&v67 + 4) = *(_QWORD *)(v20 + 764);
  v28 = *(_QWORD *)(v20 + 776);
  HIDWORD(v67) = v27;
  v29 = *(_DWORD *)(v20 + 784);
  HIDWORD(v68) = HIDWORD(v28);
  LODWORD(v68) = 2;
  v69 = v29;
  DWORD1(v67) = 2;
  v30 = ndisMAllocateRequest(a2, 16843018, 1, &v67, 0x1Cu);
  v31 = v30;
  if ( v30 )
  {
    *(_BYTE *)v30 = -106;
    *((_WORD *)v30 + 1) = 248;
    *((_BYTE *)v30 + 1) = 1;
    v32 = *((_DWORD *)v30 + 22) | 2;
    v31[13] = a2;
    *((_DWORD *)v31 + 22) = v32;
    if ( a2 )
    {
      ndisMReferenceOpen((__int64)a2, 6u);
      *((_DWORD *)v31 + 22) |= 0x200u;
      v32 = *((_DWORD *)v31 + 22);
    }
    else
    {
      v31[13] = &ndisIntReqRestore;
    }
    *((_DWORD *)v31 + 22) = v32 | 0x80000;
    v3 = v31;
    v33 = v65;
    v34 = (__int64 ***)(v31 + 9);
    if ( *v65 == (__int64 *)&v64 )
    {
      v34[1] = v65;
      *v34 = &v64;
      ++v6;
      *v33 = v34;
      v65 = (__int64 **)v34;
      goto LABEL_49;
    }
LABEL_87:
    __fastfail(3u);
  }
LABEL_79:
  if ( v3 )
  {
    if ( v63 )
    {
      *((_DWORD *)v3 + 22) |= 0x100u;
      *(_DWORD *)(a1 + 120) |= 0x1000000u;
    }
    if ( (unsigned int)ndisQueueRestoreRequestsOnTop(a1, &v64, v6) != 259 )
    {
      while ( 1 )
      {
        v60 = v64;
        if ( v64 == (__int64 *)&v64 )
          goto LABEL_89;
        if ( (__int64 **)v64[1] != &v64 )
          goto LABEL_87;
        v61 = (__int64 *)*v64;
        if ( *(__int64 **)(*v64 + 8) != v64 )
          goto LABEL_87;
        v64 = (__int64 *)*v64;
        v61[1] = (__int64)&v64;
        ExFreePoolWithTag(v60 - 9, 0);
      }
    }
    v8 = 0;
  }
  else
  {
LABEL_89:
    v8 = -1073741823;
  }
LABEL_90:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x6Bu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, v8);
  return v8;
}
