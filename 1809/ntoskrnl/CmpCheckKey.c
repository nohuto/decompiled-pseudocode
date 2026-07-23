/*
 * XREFs of CmpCheckKey @ 0x1405DB210
 * Callers:
 *     CmpCheckRegistry2 @ 0x1405D9EF0 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpHKeyNameLen @ 0x140017934 (CmpHKeyNameLen.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401B3604 (CmpKeySecurityIncrementReferenceCount.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpCheckLeaf @ 0x1405D9BC0 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x1405DA450 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x1405DCB00 (HvIsCellAllocated.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x1405DCC90 (CmpIncrementCachedSecurityRefcount.c)
 *     CmpGetIndexElementSize @ 0x1405DCEB0 (CmpGetIndexElementSize.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  int v10; // r12d
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  int v23; // r15d
  char v24; // r13
  __int64 v25; // rax
  bool v26; // cc
  void (__fastcall *v27)(ULONG_PTR, _DWORD *); // rax
  unsigned int v28; // r15d
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // r15
  int v34; // eax
  __int16 v35; // ax
  int v36; // edx
  unsigned int v37; // r15d
  __int64 v38; // r15
  unsigned __int64 v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r15
  unsigned int v45; // ebx
  int v46; // r15d
  _WORD *v47; // rdx
  __int16 v48; // ax
  __int64 v49; // r9
  __int64 v50; // r8
  unsigned __int16 v51; // cx
  int v52; // eax
  int v53; // ebx
  unsigned int v54; // r12d
  unsigned int *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rax
  _WORD *v58; // r15
  unsigned int v59; // ebx
  int v60; // r13d
  int v61; // eax
  void (__fastcall *v62)(ULONG_PTR, _DWORD *); // rax
  bool v63; // cl
  bool v64; // al
  int v65; // [rsp+20h] [rbp-81h]
  int v66; // [rsp+20h] [rbp-81h]
  int v67; // [rsp+20h] [rbp-81h]
  int v68; // [rsp+20h] [rbp-81h]
  int v69; // [rsp+20h] [rbp-81h]
  unsigned int v70; // [rsp+50h] [rbp-51h]
  int v71; // [rsp+50h] [rbp-51h]
  _WORD *v72; // [rsp+58h] [rbp-49h]
  _DWORD v73[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v74; // [rsp+68h] [rbp-39h] BYREF
  __int64 v75; // [rsp+70h] [rbp-31h] BYREF
  int v76; // [rsp+78h] [rbp-29h]
  _DWORD v77[2]; // [rsp+80h] [rbp-21h] BYREF
  _DWORD v78[2]; // [rsp+88h] [rbp-19h] BYREF
  _DWORD v79[2]; // [rsp+90h] [rbp-11h] BYREF
  _DWORD v80[2]; // [rsp+98h] [rbp-9h] BYREF
  _DWORD v81[2]; // [rsp+A0h] [rbp-1h] BYREF
  unsigned int v82; // [rsp+A8h] [rbp+7h]
  char v86; // [rsp+120h] [rbp+7Fh]

  v78[1] = 0;
  v78[0] = -1;
  v74 = 0LL;
  v80[0] = -1;
  v10 = a2;
  v80[1] = 0;
  v77[0] = -1;
  v77[1] = 0;
  v73[0] = -1;
  v73[1] = 0;
  v81[0] = -1;
  v81[1] = 0;
  v86 = 0;
  v72 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(a1, a3, BitMapHeader) )
  {
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a3, v80);
  v14 = v13;
  if ( !v13 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v13;
  v15 = -4 - *(_DWORD *)(v13 - 4);
  if ( v15 - 76 > 0x410 )
  {
    v65 = 32;
    goto LABEL_342;
  }
  v16 = *(unsigned __int16 *)(v13 + 72);
  if ( !(_WORD)v16 || v16 + 76 > v15 )
  {
    v65 = 48;
    goto LABEL_342;
  }
  if ( (*(_BYTE *)(v13 + 2) & 0x20) != 0 )
  {
    if ( (unsigned __int16)v16 <= 0x100u )
    {
      if ( *(_BYTE *)(v13 + 76) )
      {
        v17 = 0LL;
        while ( *(_BYTE *)(v17 + v13 + 76) != 92 )
        {
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 >= v16 )
            goto LABEL_20;
        }
        v65 = 1280;
      }
      else
      {
        v65 = 64;
      }
    }
    else
    {
      v65 = 53;
    }
    goto LABEL_342;
  }
  if ( (unsigned __int16)v16 > 0x200u )
  {
    v65 = 69;
    goto LABEL_342;
  }
  if ( (v16 & 1) != 0 )
  {
    v65 = 80;
    goto LABEL_342;
  }
  if ( !*(_WORD *)(v13 + 76) )
  {
    v65 = 96;
    goto LABEL_342;
  }
  v19 = 0LL;
  v20 = v16 >> 1;
  if ( v20 )
  {
    while ( *(_WORD *)(v13 + 2 * v19 + 76) != 92 )
    {
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= v20 )
        goto LABEL_20;
    }
    v65 = 1296;
LABEL_342:
    v18 = -1073741492;
    SetFailureLocation(a7, 0, 14, -1073741492, v65);
    goto LABEL_343;
  }
LABEL_20:
  if ( *(_WORD *)v13 != 27502 )
  {
    v86 = 1;
    v18 = -1073741492;
    if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 144);
      goto LABEL_343;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v18 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 128);
      goto LABEL_343;
    }
    *(_WORD *)v14 = 27502;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v14 + 13) & 3) != 0 )
  {
    v86 = 1;
    v18 = -1073741492;
    if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 148);
      goto LABEL_343;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 146);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v18 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 150);
      goto LABEL_343;
    }
    *(_BYTE *)(v14 + 13) &= 0xFCu;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v14 + 13) & 1) != 0 )
    {
      v86 = 1;
      v18 = -1073741492;
      if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 492);
        goto LABEL_343;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 484);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v18 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 488);
        goto LABEL_343;
      }
      *(_BYTE *)(v14 + 13) = *(_BYTE *)(v14 + 13) & 0xFC | 2;
      goto LABEL_58;
    }
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, a4, v77) + 13) & 3) == 3
      && (((*(_BYTE *)(v14 + 13) & 3) - 1) & 0xFD) != 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v77);
      v86 = 1;
      v18 = -1073741492;
      if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 156);
        goto LABEL_343;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 152);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v18 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 154);
        goto LABEL_343;
      }
      *(_BYTE *)(v14 + 13) |= 3u;
LABEL_58:
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_59;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v77);
  }
LABEL_59:
  v21 = *(unsigned __int16 *)(v14 + 74);
  v22 = *(_DWORD *)(v14 + 48);
  v23 = *(_DWORD *)(v14 + 44);
  v76 = *(_DWORD *)(v14 + 36);
  v82 = *(_DWORD *)(v14 + 40);
  v70 = v21;
  if ( v21 )
  {
    if ( v22 == -1 )
    {
      v24 = 1;
      v18 = -1073741492;
      v86 = 1;
      if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 157);
        goto LABEL_343;
      }
      SetFailureLocation(a7, 0, 14, -1073741492, 155);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v18 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 159);
        goto LABEL_343;
      }
      v70 = 0;
      *(_WORD *)(v14 + 74) = 0;
      goto LABEL_92;
    }
    if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 158);
      goto LABEL_80;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v22, BitMapHeader) )
    {
LABEL_80:
      if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 192);
        v18 = -1073741492;
        goto LABEL_343;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 160);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v18 = -1073741443;
        SetFailureLocation(a7, 0, 14, -1073741443, 176);
        goto LABEL_343;
      }
      *(_DWORD *)(v14 + 48) = -1;
      v24 = 1;
      *(_WORD *)(v14 + 74) = 0;
      v70 = 0;
      v86 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
      goto LABEL_92;
    }
    v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v22, v81);
    if ( !v25 )
    {
      v18 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 208);
      goto LABEL_343;
    }
    v26 = v70 <= -4 - *(_DWORD *)(v25 - 4);
    v27 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16);
    if ( !v26 )
    {
      v27(a1, v81);
      SetFailureLocation(a7, 1, 14, -1073741492, 224);
      goto LABEL_80;
    }
    v27(a1, v81);
  }
  else if ( v22 != -1 )
  {
    v24 = 1;
    v18 = -1073741492;
    v86 = 1;
    if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 228);
      goto LABEL_343;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 232);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v18 = -1073741443;
      SetFailureLocation(a7, 1, 14, -1073741443, 236);
      goto LABEL_343;
    }
    *(_DWORD *)(v14 + 48) = -1;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    goto LABEL_92;
  }
  v24 = v86;
LABEL_92:
  if ( v23 == -1 )
  {
    SetFailureLocation(a7, 1, 14, -1073741492, 256);
    v28 = a4;
    goto LABEL_110;
  }
  v28 = a4;
  if ( a4 == -1 )
    goto LABEL_149;
  if ( (v10 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) && a5 )
    goto LABEL_110;
  while ( v28 == -1 )
  {
LABEL_149:
    v35 = *(_WORD *)(v14 + 2);
    if ( (v35 & 0x50) != 0 )
    {
      v66 = 432;
      goto LABEL_335;
    }
    if ( (v35 & 2) != 0 )
    {
      v24 = 1;
      v18 = -1073741492;
      v86 = 1;
      if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        v66 = 480;
        goto LABEL_336;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 448);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v18 = -1073741443;
        v66 = 464;
        goto LABEL_336;
      }
      *(_WORD *)(v14 + 2) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
LABEL_147:
    v34 = CmpIncrementCachedSecurityRefcount(a1, *(unsigned int *)(v14 + 44));
    if ( v34 != -1073741275 )
    {
      if ( v34 < 0 )
      {
        v18 = -1073741492;
        SetFailureLocation(a7, 1, 14, -1073741492, 500);
        goto LABEL_338;
      }
      if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
      {
        v24 = 1;
        v86 = 1;
        v71 = v10 & 0x20000;
        v18 = -1073741492;
        if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
        {
          v66 = 648;
          goto LABEL_336;
        }
        v40 = a3;
        if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
        {
          v18 = -1073741443;
          v66 = 652;
          goto LABEL_336;
        }
        *(_WORD *)(v14 + 2) &= ~0x40u;
        *(_DWORD *)(v14 + 36) = 0;
        *(_DWORD *)(v14 + 40) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_233:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v80);
        v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v40, v80);
        v14 = v41;
        if ( !v41 )
        {
          v18 = -1073741670;
          v66 = 688;
          goto LABEL_336;
        }
        if ( a7 )
          *(_QWORD *)(a7 + 248) = v41;
        if ( (v40 & 0x80000000) == 0 )
        {
          if ( !*(_DWORD *)(v41 + 20) )
            goto LABEL_295;
          if ( (*(_BYTE *)(v41 + 13) & 3) == 1 )
          {
            v18 = -1073741492;
            v42 = 712;
            goto LABEL_300;
          }
          if ( !(unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v41 + 28), BitMapHeader) )
          {
            v18 = -1073741492;
            v42 = 720;
            goto LABEL_300;
          }
          v43 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v14 + 28), v73);
          v72 = (_WORD *)v43;
          v44 = v43;
          if ( v43 )
          {
            v45 = -4 - *(_DWORD *)(v43 - 4);
            if ( v45 < 8
              || (unsigned __int64)(*(unsigned __int16 *)(v43 + 2) * (unsigned int)CmpGetIndexElementSize(v43)) + 4 < 4
              || (v46 = *(unsigned __int16 *)(v44 + 2),
                  (unsigned __int64)((unsigned int)CmpGetIndexElementSize(v72) * v46) + 4 > v45) )
            {
              v18 = -1073741492;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
              v42 = 752;
              goto LABEL_299;
            }
            if ( !(_WORD)v46 )
            {
              v18 = -1073741492;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
              v42 = 784;
              goto LABEL_299;
            }
            v47 = v72;
            if ( a7 )
              *(_QWORD *)(a7 + 256) = v72;
            v48 = *v72;
            v49 = 26220LL;
            v50 = 26994LL;
            if ( *v72 != 26988 && v48 != 26220 && v48 != 26732 && v48 != 26994 )
            {
              v18 = -1073741492;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(a1 + 16))(a1, v73, 26994LL, 26220LL);
              v42 = 992;
              goto LABEL_299;
            }
            v51 = v72[1];
            if ( v48 == 26994 )
            {
              v53 = 0;
              v54 = 0;
              v76 = 0;
              if ( v51 )
              {
                do
                {
                  if ( a7 )
                    *(_DWORD *)(a7 + 264) = v54;
                  v55 = (unsigned int *)&v47[2 * v54 + 2];
                  v56 = *v55;
                  v75 = (__int64)v55;
                  if ( !(unsigned __int8)HvIsCellAllocated(a1, v56, BitMapHeader) )
                  {
                    v18 = -1073741492;
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
                    v10 = a2;
                    v42 = 848;
                    goto LABEL_299;
                  }
                  v57 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *v55, v78);
                  v58 = (_WORD *)v57;
                  if ( !v57 )
                  {
                    v18 = -1073741670;
                    v66 = 864;
                    goto LABEL_336;
                  }
                  v59 = -4 - *(_DWORD *)(v57 - 4);
                  if ( v59 < 8
                    || (unsigned __int64)(*(unsigned __int16 *)(v57 + 2) * (unsigned int)CmpGetIndexElementSize(v57))
                     + 4 < 4
                    || (v60 = (unsigned __int16)v58[1],
                        (unsigned __int64)((unsigned int)CmpGetIndexElementSize(v58) * v60) + 4 > v59) )
                  {
                    v18 = -1073741492;
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v78);
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
                    v10 = a2;
                    v42 = 880;
                    goto LABEL_299;
                  }
                  if ( !(_WORD)v60 )
                  {
                    v18 = -1073741492;
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v78);
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
                    v10 = a2;
                    v42 = 912;
                    goto LABEL_299;
                  }
                  if ( ((*v58 - 26220) & 0xFCFF) != 0 || *v58 == 26476 )
                  {
                    v18 = -1073741492;
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v78);
                    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
                    v10 = a2;
                    v42 = 944;
                    goto LABEL_299;
                  }
                  v61 = CmpCheckLeaf(a1, a2, v58, *(_DWORD *)v75, a7);
                  v18 = v61;
                  if ( v61 == -2147483606 )
                  {
                    v24 = 1;
                    v86 = 1;
                  }
                  else
                  {
                    if ( v61 < 0 )
                    {
                      if ( v61 != -1073741492 )
                        goto LABEL_338;
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v78);
                      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
                      v10 = a2;
                      v42 = 952;
LABEL_299:
                      v72 = 0LL;
LABEL_300:
                      SetFailureLocation(a7, 1, 14, v18, v42);
                      if ( v71 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
                      {
                        v66 = 1040;
                        goto LABEL_336;
                      }
                      SetFailureLocation(a7, 1, 14, v18, 1008);
                      v40 = a3;
                      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
                      {
                        v18 = -1073741443;
                        v66 = 1024;
                        goto LABEL_336;
                      }
                      *(_DWORD *)(v14 + 20) = 0;
                      *(_DWORD *)(v14 + 28) = -1;
                      v24 = 1;
                      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_295:
                      v63 = *(_DWORD *)(v14 + 32) != -1 || *(_DWORD *)(v14 + 24);
                      if ( (v10 & 0x40000) != 0 && v63 )
                      {
                        v66 = 1040;
                        goto LABEL_335;
                      }
                      v64 = (v10 & 2) != 0;
                      if ( (v10 & 0xD) != 0 && v63 )
                        v64 = 1;
                      if ( (v10 & 8) != 0 && *(_DWORD *)(a1 + 212) < 4u || v64 )
                      {
                        if ( !(unsigned __int8)HvMarkCellDirty(a1, v40, 0LL) )
                        {
                          v18 = -1073741443;
                          v66 = 1056;
                          goto LABEL_336;
                        }
                        *(_DWORD *)(v14 + 24) = 0;
                        if ( (v10 & 4) != 0 && *(_DWORD *)(a1 + 212) >= 4u )
                        {
                          *(_DWORD *)(v14 + 32) = -1163005939;
                          v18 = v24 != 0 ? 0x8000002A : 0;
                          goto LABEL_338;
                        }
                        *(_DWORD *)(v14 + 32) = -1;
                      }
                      v18 = v24 != 0 ? 0x8000002A : 0;
                      goto LABEL_338;
                    }
                    v24 = v86;
                  }
                  v53 = (unsigned __int16)v58[1] + v76;
                  v62 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16);
                  v76 = v53;
                  v62(a1, v78);
                  v47 = v72;
                  ++v54;
                }
                while ( v54 < (unsigned __int16)v72[1] );
              }
              if ( *(_DWORD *)(v14 + 20) != v53 )
              {
                v18 = -1073741492;
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(a1 + 16))(a1, v73, v50, v49);
                v10 = a2;
                v42 = 960;
                v72 = 0LL;
                goto LABEL_300;
              }
              v10 = a2;
            }
            else
            {
              if ( v51 != *(_DWORD *)(v14 + 20) )
              {
                v18 = -1073741492;
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(a1 + 16))(a1, v73, 26994LL, 26220LL);
                v42 = 816;
                goto LABEL_299;
              }
              v52 = CmpCheckLeaf(a1, v10, v72, *(_DWORD *)(v14 + 28), a7);
              v18 = v52;
              if ( v52 == -2147483606 )
              {
                v24 = 1;
              }
              else if ( v52 < 0 )
              {
                if ( v52 == -1073741492 )
                {
                  v42 = 832;
                  goto LABEL_300;
                }
                goto LABEL_338;
              }
            }
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
            v40 = a3;
            v72 = 0LL;
            goto LABEL_295;
          }
          v18 = -1073741670;
          SetFailureLocation(a7, 0, 14, -1073741670, 736);
          goto LABEL_343;
        }
        if ( !*(_DWORD *)(v41 + 20) )
          goto LABEL_295;
        v66 = 704;
LABEL_335:
        v18 = -1073741492;
LABEL_336:
        SetFailureLocation(a7, 0, 14, v18, v66);
        goto LABEL_338;
      }
      if ( v76 )
      {
        if ( (*(_BYTE *)(v14 + 13) & 3) == 1 )
        {
          v68 = 504;
          goto LABEL_175;
        }
        v37 = v82;
        if ( !(unsigned __int8)HvIsCellAllocated(a1, v82, BitMapHeader) )
        {
          v68 = 512;
          goto LABEL_175;
        }
        v75 = 0xFFFFFFFFLL;
        v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, v37, &v75);
        if ( !v38 )
        {
          v18 = -1073741670;
          v66 = 528;
          goto LABEL_336;
        }
        v39 = 4LL * (unsigned int)v76;
        if ( v39 > 0xFFFFFFFF || (unsigned int)v39 > -4 - *(_DWORD *)(v38 - 4) )
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v75);
          v68 = 544;
LABEL_175:
          v18 = -1073741492;
          SetFailureLocation(a7, 1, 14, -1073741492, v68);
          while ( 1 )
          {
LABEL_188:
            if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              v66 = 592;
              goto LABEL_336;
            }
            v40 = a3;
            if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
            {
              v18 = -1073741443;
              v66 = 576;
              goto LABEL_336;
            }
            *(_DWORD *)(v14 + 40) = -1;
            *(_DWORD *)(v14 + 36) = 0;
            v24 = 1;
            v86 = 1;
            *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
LABEL_185:
            if ( *(_DWORD *)(v14 + 36) )
              break;
            if ( *(_DWORD *)(v14 + 40) == -1 )
            {
              v74 = 0LL;
              break;
            }
            v18 = -1073741492;
            SetFailureLocation(a7, 1, 14, -1073741492, 608);
          }
          if ( *(_DWORD *)(v14 + 60) < (unsigned int)v74 )
          {
            v24 = 1;
            v18 = -1073741492;
            v86 = 1;
            if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              v66 = 610;
              goto LABEL_336;
            }
            v40 = a3;
            if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
            {
              v18 = -1073741443;
              v66 = 612;
              goto LABEL_336;
            }
            *(_DWORD *)(v14 + 60) = v74;
            *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
          }
          if ( *(_DWORD *)(v14 + 64) < HIDWORD(v74) )
          {
            v24 = 1;
            v18 = -1073741492;
            v86 = 1;
            if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              v66 = 614;
              goto LABEL_336;
            }
            v40 = a3;
            if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
            {
              v18 = -1073741443;
              v66 = 616;
              goto LABEL_336;
            }
            *(_DWORD *)(v14 + 64) = HIDWORD(v74);
            *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
          }
          v71 = v10 & 0x20000;
          if ( (v10 & 0x20000) == 0 )
          {
            if ( *(_DWORD *)(v14 + 60) != (_DWORD)v74 && (unsigned __int8)HvMarkCellDirty(a1, v40, 0LL) )
              *(_DWORD *)(v14 + 60) = v74;
            if ( *(_DWORD *)(v14 + 64) != HIDWORD(v74) && (unsigned __int8)HvMarkCellDirty(a1, v40, 0LL) )
              *(_DWORD *)(v14 + 64) = HIDWORD(v74);
          }
          goto LABEL_233;
        }
        v18 = CmpCheckValueList(
                a1,
                (*(_BYTE *)(v14 + 2) & 0x10) != 0,
                v38,
                v76,
                a3,
                v10,
                BitMapHeader,
                a7,
                &v74,
                (unsigned int *)&v74 + 1);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v75);
        if ( v18 == -2147483606 )
        {
          v24 = 1;
          v86 = 1;
        }
        else if ( v18 < 0 )
        {
          if ( v18 == -1073741492 )
          {
            if ( a7 )
              *(_QWORD *)(a7 + 248) = v38;
            SetFailureLocation(a7, 1, 14, -1073741492, 560);
            goto LABEL_188;
          }
          goto LABEL_338;
        }
      }
      v40 = a3;
      goto LABEL_185;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 496);
LABEL_110:
    if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 304);
      v18 = -1073741492;
      goto LABEL_338;
    }
    v79[0] = -1;
    v79[1] = 0;
    v75 = 0xFFFFFFFFLL;
    if ( v28 == -1 )
    {
      v66 = 272;
      goto LABEL_335;
    }
    v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v28, v79);
    v30 = v29;
    if ( !v29 )
    {
      v18 = -1073741670;
      v66 = 276;
      goto LABEL_336;
    }
    v31 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v29 + 44), &v75);
    if ( !v31 )
    {
      v18 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 280);
      goto LABEL_332;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v69 = 284;
LABEL_329:
      v18 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, v69);
LABEL_330:
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v75);
LABEL_332:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v79);
      goto LABEL_338;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(a1, *(unsigned int *)(v30 + 44), 0LL) )
    {
      v69 = 288;
      goto LABEL_329;
    }
    v32 = CmpKeySecurityIncrementReferenceCount(v31, a1, *(_DWORD *)(v30 + 44), 1);
    v18 = v32;
    if ( v32 < 0 )
    {
      SetFailureLocation(a7, 0, 14, v32, 292);
      goto LABEL_330;
    }
    *(_DWORD *)(v14 + 44) = *(_DWORD *)(v30 + 44);
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v75);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v79);
    v28 = a4;
    v24 = 1;
    v86 = 1;
  }
  if ( *(_DWORD *)(v14 + 16) != v28 )
  {
    v24 = 1;
    v18 = -1073741492;
    v86 = 1;
    if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v66 = 352;
      goto LABEL_336;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 320);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
    {
      v18 = -1073741443;
      v66 = 336;
      goto LABEL_336;
    }
    *(_DWORD *)(v14 + 16) = v28;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  v33 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v28, v77);
  if ( !v33 )
  {
    v18 = -1073741670;
    v66 = 368;
    goto LABEL_336;
  }
  if ( (unsigned __int16)*(_DWORD *)(v33 + 52) < (unsigned __int16)CmpHKeyNameLen(v14) )
  {
    v24 = 1;
    v18 = -1073741492;
    v86 = 1;
    if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 370);
      goto LABEL_160;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 372);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a4, 0LL) )
    {
      v67 = 374;
      v36 = 1;
LABEL_159:
      v18 = -1073741443;
      SetFailureLocation(a7, v36, 14, -1073741443, v67);
      goto LABEL_160;
    }
    *(_WORD *)(v33 + 52) = CmpHKeyNameLen(v14);
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
  }
  if ( *(_DWORD *)(v33 + 56) >= v70 )
  {
LABEL_140:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v77);
    if ( (*(_BYTE *)(v14 + 2) & 0xE) != 0 )
    {
      v24 = 1;
      v18 = -1073741492;
      v86 = 1;
      if ( (v10 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        v66 = 416;
        goto LABEL_336;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 384);
      if ( !(unsigned __int8)HvMarkCellDirty(a1, a3, 0LL) )
      {
        v18 = -1073741443;
        v66 = 400;
        goto LABEL_336;
      }
      *(_WORD *)(v14 + 2) &= 0xFFF1u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    v28 = a4;
    goto LABEL_147;
  }
  v24 = 1;
  v18 = -1073741492;
  v86 = 1;
  if ( (v10 & 0x20000) == 0 && (CmpSelfHeal || (CmpBootType & 6) != 0) )
  {
    SetFailureLocation(a7, 1, 14, -1073741492, 378);
    if ( !(unsigned __int8)HvMarkCellDirty(a1, a4, 0LL) )
    {
      v67 = 380;
      v36 = 0;
      goto LABEL_159;
    }
    *(_DWORD *)(v33 + 56) = v70;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    goto LABEL_140;
  }
  SetFailureLocation(a7, 0, 14, -1073741492, 376);
LABEL_160:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v77);
LABEL_338:
  if ( v72 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v73);
LABEL_343:
  if ( v14 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v80);
  return (unsigned int)v18;
}
