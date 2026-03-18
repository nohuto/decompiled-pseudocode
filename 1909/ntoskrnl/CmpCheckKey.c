/*
 * XREFs of CmpCheckKey @ 0x140664430
 * Callers:
 *     CmpCheckRegistry2 @ 0x140663AD0 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpHKeyNameLen @ 0x1400CF2B4 (CmpHKeyNameLen.c)
 *     RtlULongMult @ 0x1401BE860 (RtlULongMult.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     CmpCheckLeaf @ 0x1406627D0 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140663E70 (CmpCheckValueList.c)
 *     HvIsCellAllocated @ 0x140664D20 (HvIsCellAllocated.c)
 *     CmpIncrementCachedSecurityRefcount @ 0x140664EC0 (CmpIncrementCachedSecurityRefcount.c)
 *     CmpGetIndexElementSize @ 0x140665400 (CmpGetIndexElementSize.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckKey(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        PRTL_BITMAP BitMapHeader,
        __int64 a7)
{
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // r13d
  unsigned int v17; // edi
  ULONG v18; // r12d
  int v19; // r14d
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r14
  __int64 v23; // r14
  __int16 v24; // ax
  unsigned int v25; // edi
  int v26; // r13d
  __int64 (__fastcall *v27)(ULONG_PTR, _QWORD, int *); // rax
  __int64 v28; // r14
  int v29; // r15d
  int v30; // edi
  __int64 v31; // r12
  unsigned int v32; // edi
  int v33; // r14d
  __int64 v34; // rax
  char v35; // r14
  bool v36; // cl
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned int v40; // edi
  int v41; // r14d
  _WORD *v42; // rdx
  __int16 v43; // ax
  __int64 v44; // r8
  unsigned __int16 v45; // cx
  int v46; // eax
  __int16 v47; // ax
  __int64 v48; // rax
  bool v49; // cc
  void (__fastcall *v50)(ULONG_PTR, _DWORD *); // rax
  unsigned int v51; // edi
  unsigned int v52; // r15d
  _WORD *v53; // r13
  __int64 v54; // rax
  _WORD *v55; // r14
  unsigned int v56; // edi
  int v57; // r12d
  int v58; // eax
  void (__fastcall *v59)(ULONG_PTR, _DWORD *); // rax
  unsigned int v60; // edx
  unsigned int v61; // ecx
  int v62; // edx
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // r14
  int v67; // edx
  _DWORD *v68; // rdx
  int v69; // eax
  bool v70; // al
  int v71; // [rsp+20h] [rbp-81h]
  int v72; // [rsp+20h] [rbp-81h]
  int v73; // [rsp+20h] [rbp-81h]
  int v74; // [rsp+20h] [rbp-81h]
  int v75; // [rsp+20h] [rbp-81h]
  char v76; // [rsp+50h] [rbp-51h]
  _WORD *v77; // [rsp+58h] [rbp-49h]
  _DWORD v78[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v79; // [rsp+68h] [rbp-39h] BYREF
  _DWORD v80[2]; // [rsp+70h] [rbp-31h] BYREF
  int v81; // [rsp+78h] [rbp-29h] BYREF
  int v82; // [rsp+7Ch] [rbp-25h]
  unsigned int v83; // [rsp+80h] [rbp-21h]
  _DWORD v84[2]; // [rsp+88h] [rbp-19h] BYREF
  _DWORD v85[2]; // [rsp+90h] [rbp-11h] BYREF
  _DWORD v86[2]; // [rsp+98h] [rbp-9h] BYREF
  _DWORD v87[2]; // [rsp+A0h] [rbp-1h] BYREF
  ULONG pulResult[14]; // [rsp+A8h] [rbp+7h] BYREF

  v84[1] = 0;
  v84[0] = -1;
  v79 = 0LL;
  v86[0] = -1;
  v86[1] = 0;
  v80[0] = -1;
  v80[1] = 0;
  v78[0] = -1;
  v78[1] = 0;
  v87[0] = -1;
  v87[1] = 0;
  v76 = 0;
  v77 = 0LL;
  if ( a7 )
  {
    *(_DWORD *)(a7 + 240) = a3;
    *(_QWORD *)(a7 + 248) = 0LL;
    *(_QWORD *)(a7 + 256) = 0LL;
    *(_DWORD *)(a7 + 264) = -1;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, a3, BitMapHeader) )
  {
    SetFailureLocation(a7, 0, 14, -1073741492, 0);
    return 3221225804LL;
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, a3, v86);
  v12 = v11;
  if ( !v11 )
  {
    SetFailureLocation(a7, 0, 14, -1073741670, 16);
    return 3221225626LL;
  }
  if ( a7 )
    *(_QWORD *)(a7 + 248) = v11;
  v13 = -4 - *(_DWORD *)(v11 - 4);
  if ( v13 - 76 > 0x410 )
  {
    v71 = 32;
    goto LABEL_348;
  }
  v14 = *(unsigned __int16 *)(v11 + 72);
  if ( !(_WORD)v14 || v14 + 76 > v13 )
  {
    v71 = 48;
    goto LABEL_348;
  }
  if ( (*(_BYTE *)(v11 + 2) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v11 + 76) )
    {
      v15 = 0;
      while ( *(_BYTE *)(v15 + v12 + 76) != 92 )
      {
        if ( ++v15 >= v14 )
          goto LABEL_15;
      }
      v71 = 1280;
    }
    else
    {
      v71 = 64;
    }
    goto LABEL_348;
  }
  if ( (v14 & 1) != 0 )
  {
    v71 = 80;
LABEL_348:
    v30 = -1073741492;
    goto LABEL_349;
  }
  if ( !*(_WORD *)(v11 + 76) )
  {
    v71 = 96;
    goto LABEL_348;
  }
  v60 = v14 >> 1;
  v61 = 0;
  if ( v60 )
  {
    while ( *(_WORD *)(v11 + 2LL * v61 + 76) != 92 )
    {
      if ( ++v61 >= v60 )
        goto LABEL_15;
    }
    v71 = 1296;
    goto LABEL_348;
  }
LABEL_15:
  if ( *(_WORD *)v12 != 27502 )
  {
    v76 = 1;
    v30 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v71 = 144;
      v62 = 1;
LABEL_350:
      SetFailureLocation(a7, v62, 14, v30, v71);
      goto LABEL_71;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 112);
    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
    {
      v30 = -1073741443;
      v71 = 128;
      goto LABEL_349;
    }
    *(_WORD *)v12 = 27502;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 2) == 0 && (*(_BYTE *)(v12 + 13) & 3) != 0 )
  {
    v76 = 1;
    v30 = -1073741492;
    if ( (a2 & 0x20000) == 0 && (BYTE2(NlsMbCodePageTag) || (CmpBootType & 6) != 0) )
    {
      SetFailureLocation(a7, 1, 14, -1073741492, 146);
      if ( (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        *(_BYTE *)(v12 + 13) &= 0xFCu;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        goto LABEL_18;
      }
      v30 = -1073741443;
      v71 = 150;
    }
    else
    {
      v71 = 148;
    }
LABEL_349:
    v62 = 0;
    goto LABEL_350;
  }
LABEL_18:
  if ( a4 == -1 )
  {
    if ( (*(_BYTE *)(v12 + 13) & 1) == 0 )
      goto LABEL_21;
    v76 = 1;
    v30 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v71 = 492;
      goto LABEL_349;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 484);
    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
    {
      v30 = -1073741443;
      v71 = 488;
      goto LABEL_349;
    }
    *(_BYTE *)(v12 + 13) = *(_BYTE *)(v12 + 13) & 0xFC | 2;
  }
  else
  {
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       a4,
                       v80)
                   + 13) & 3) != 3
      || (((*(_BYTE *)(v12 + 13) & 3) - 1) & 0xFD) == 0 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v80);
      goto LABEL_21;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v80);
    v76 = 1;
    v30 = -1073741492;
    if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      v71 = 156;
      goto LABEL_349;
    }
    SetFailureLocation(a7, 1, 14, -1073741492, 152);
    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
    {
      v30 = -1073741443;
      v71 = 154;
      goto LABEL_349;
    }
    *(_BYTE *)(v12 + 13) |= 3u;
  }
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_21:
  v16 = *(unsigned __int16 *)(v12 + 74);
  v17 = *(_DWORD *)(v12 + 48);
  v18 = *(_DWORD *)(v12 + 36);
  v19 = *(_DWORD *)(v12 + 44);
  v83 = *(_DWORD *)(v12 + 40);
  if ( !v16 )
  {
    if ( v17 != -1 )
    {
      v30 = -1073741492;
      v76 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 228);
        goto LABEL_71;
      }
      SetFailureLocation(a7, 1, 14, -1073741492, 232);
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        v30 = -1073741443;
        SetFailureLocation(a7, 1, 14, -1073741443, 236);
        goto LABEL_71;
      }
      *(_DWORD *)(v12 + 48) = -1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    goto LABEL_23;
  }
  if ( v17 == -1 )
  {
    v30 = -1073741492;
    v76 = 1;
    if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a7, 0, 14, -1073741492, 157);
      goto LABEL_71;
    }
    SetFailureLocation(a7, 0, 14, -1073741492, 155);
    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
    {
      v30 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 159);
      goto LABEL_71;
    }
    v16 = 0;
    *(_WORD *)(v12 + 74) = 0;
    goto LABEL_23;
  }
  if ( (*(_BYTE *)(v12 + 13) & 3) == 1 )
  {
    v72 = 158;
LABEL_184:
    v63 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, v72);
    goto LABEL_187;
  }
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v17, BitMapHeader) )
  {
    v63 = a7;
LABEL_187:
    if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v63, 0, 14, -1073741492, 192);
      v30 = -1073741492;
      goto LABEL_71;
    }
    SetFailureLocation(v63, 1, 14, -1073741492, 160);
    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
    {
      v30 = -1073741443;
      SetFailureLocation(v63, 0, 14, -1073741443, 176);
      goto LABEL_71;
    }
    *(_DWORD *)(v12 + 48) = -1;
    *(_WORD *)(v12 + 74) = 0;
    v16 = 0;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    v76 = 1;
    goto LABEL_23;
  }
  v48 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v17, v87);
  if ( !v48 )
  {
    v30 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 208);
    goto LABEL_71;
  }
  v49 = v16 <= -4 - *(_DWORD *)(v48 - 4);
  v50 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
  if ( !v49 )
  {
    v50(BugCheckParameter2, v87);
    v72 = 224;
    goto LABEL_184;
  }
  v50(BugCheckParameter2, v87);
LABEL_23:
  if ( v19 == -1 )
  {
    v23 = a7;
    SetFailureLocation(a7, 1, 14, -1073741492, 256);
    v21 = a2;
    v20 = a4;
    goto LABEL_206;
  }
  v20 = a4;
  v21 = a2;
  if ( a4 == -1 )
    goto LABEL_100;
  if ( (a2 & 0x20000) == 0 && (BYTE2(NlsMbCodePageTag) || (CmpBootType & 6) != 0) && a5 )
  {
    v23 = a7;
    goto LABEL_206;
  }
  while ( 1 )
  {
    if ( (_DWORD)v20 == -1 )
    {
LABEL_100:
      v47 = *(_WORD *)(v12 + 2);
      if ( (v47 & 0x50) != 0 )
      {
        v30 = -1073741492;
        SetFailureLocation(a7, 0, 14, -1073741492, 432);
        goto LABEL_69;
      }
      if ( (v47 & 2) == 0 )
        goto LABEL_34;
      v76 = 1;
      v30 = -1073741492;
      if ( (v21 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 480);
        goto LABEL_69;
      }
      v23 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 448);
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        v30 = -1073741443;
        v73 = 464;
        goto LABEL_344;
      }
      *(_WORD *)(v12 + 2) &= ~2u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    else
    {
      if ( *(_DWORD *)(v12 + 16) != (_DWORD)v20 )
      {
        v76 = 1;
        v30 = -1073741492;
        if ( (v21 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 352);
          goto LABEL_69;
        }
        v23 = a7;
        SetFailureLocation(a7, 1, 14, -1073741492, 320);
        if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
        {
          v30 = -1073741443;
          v73 = 336;
          goto LABEL_344;
        }
        v20 = a4;
        *(_DWORD *)(v12 + 16) = a4;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      v22 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v20,
              v80);
      if ( !v22 )
      {
        v30 = -1073741670;
        SetFailureLocation(a7, 0, 14, -1073741670, 368);
        goto LABEL_69;
      }
      if ( (unsigned __int16)*(_DWORD *)(v22 + 52) < (unsigned int)(unsigned __int16)CmpHKeyNameLen(v12) )
      {
        v30 = -1073741492;
        v76 = 1;
        if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          SetFailureLocation(a7, 0, 14, -1073741492, 370);
          goto LABEL_247;
        }
        SetFailureLocation(a7, 1, 14, -1073741492, 372);
        if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a4, 0LL) )
        {
          v74 = 374;
          v67 = 1;
          goto LABEL_244;
        }
        *(_WORD *)(v22 + 52) = CmpHKeyNameLen(v12);
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      if ( *(_DWORD *)(v22 + 56) < v16 )
      {
        v30 = -1073741492;
        v76 = 1;
        if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
        {
          v74 = 376;
          v67 = 0;
          goto LABEL_246;
        }
        SetFailureLocation(a7, 1, 14, -1073741492, 378);
        if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a4, 0LL) )
        {
          v74 = 380;
          v67 = 0;
LABEL_244:
          v30 = -1073741443;
LABEL_246:
          SetFailureLocation(a7, v67, 14, v30, v74);
LABEL_247:
          v68 = v80;
          goto LABEL_340;
        }
        *(_DWORD *)(v22 + 56) = v16;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v80);
      if ( (*(_BYTE *)(v12 + 2) & 0xE) == 0 )
      {
LABEL_34:
        v23 = a7;
        goto LABEL_35;
      }
      v30 = -1073741492;
      v76 = 1;
      if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a7, 0, 14, -1073741492, 416);
        goto LABEL_69;
      }
      v23 = a7;
      SetFailureLocation(a7, 1, 14, -1073741492, 384);
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        v30 = -1073741443;
        v73 = 400;
        goto LABEL_344;
      }
      *(_WORD *)(v12 + 2) &= 0xFFF1u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
LABEL_35:
    if ( (unsigned __int8)CmpIncrementCachedSecurityRefcount(BugCheckParameter2, *(unsigned int *)(v12 + 44)) )
      break;
    SetFailureLocation(v23, 1, 14, -1073741492, 496);
    v21 = a2;
    v20 = a4;
LABEL_206:
    if ( (v21 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(v23, 0, 14, -1073741492, 304);
      v30 = -1073741492;
      goto LABEL_69;
    }
    v85[0] = -1;
    v85[1] = 0;
    v81 = -1;
    v82 = 0;
    if ( (_DWORD)v20 == -1 )
    {
      v73 = 272;
LABEL_343:
      v30 = -1073741492;
LABEL_344:
      SetFailureLocation(v23, 0, 14, v30, v73);
      goto LABEL_69;
    }
    v64 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v20,
            v85);
    v65 = v64;
    if ( !v64 )
    {
      v30 = -1073741670;
      v73 = 276;
      goto LABEL_344;
    }
    v66 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *(unsigned int *)(v64 + 44),
            &v81);
    if ( !v66 )
    {
      v30 = -1073741670;
      SetFailureLocation(a7, 0, 14, -1073741670, 280);
LABEL_339:
      v68 = v85;
LABEL_340:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v68);
      goto LABEL_69;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
    {
      v30 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 284);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v81);
      goto LABEL_339;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v65 + 44), 0LL) )
    {
      v30 = -1073741443;
      SetFailureLocation(a7, 0, 14, -1073741443, 288);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v81);
      goto LABEL_339;
    }
    *(_DWORD *)(v12 + 44) = *(_DWORD *)(v65 + 44);
    ++*(_DWORD *)(v66 + 12);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v81);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v85);
    v21 = a2;
    v20 = a4;
    v76 = 1;
  }
  v24 = *(_WORD *)(v12 + 2);
  if ( (v24 & 0x40) != 0 )
  {
    v29 = a2;
    if ( (v24 & 0x1E) != 0 )
    {
      v76 = 1;
      v30 = -1073741492;
      if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v73 = 656;
        goto LABEL_344;
      }
      v32 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        v30 = -1073741443;
        v73 = 640;
        goto LABEL_344;
      }
      *(_WORD *)(v12 + 2) &= 0xFFE1u;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    else
    {
      v32 = a3;
    }
    if ( *(int *)(v12 + 36) >= 0 )
    {
      v73 = 672;
      goto LABEL_343;
    }
    v31 = a7;
    v26 = -1;
LABEL_52:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v86);
    v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            v32,
            v86);
    v12 = v34;
    if ( !v34 )
    {
      v30 = -1073741670;
      SetFailureLocation(v31, 0, 14, -1073741670, 688);
      goto LABEL_69;
    }
    if ( v31 )
      *(_QWORD *)(v31 + 248) = v34;
    if ( (v32 & 0x80000000) != 0 )
    {
      if ( *(_DWORD *)(v34 + 20) )
      {
        v30 = -1073741492;
        SetFailureLocation(v31, 0, 14, -1073741492, 704);
        goto LABEL_69;
      }
    }
    else if ( *(_DWORD *)(v34 + 20) )
    {
      if ( (*(_BYTE *)(v34 + 13) & 3) == 1 )
      {
        v30 = -1073741492;
        v69 = 712;
        goto LABEL_322;
      }
      if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *(unsigned int *)(v34 + 28), BitMapHeader) )
      {
        v30 = -1073741492;
        v69 = 720;
        goto LABEL_322;
      }
      v38 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              *(unsigned int *)(v12 + 28),
              v78);
      v77 = (_WORD *)v38;
      v39 = v38;
      if ( !v38 )
      {
        v30 = -1073741670;
        SetFailureLocation(v31, 0, 14, -1073741670, 736);
        goto LABEL_71;
      }
      v40 = -4 - *(_DWORD *)(v38 - 4);
      if ( v40 < 8
        || (unsigned __int64)(*(unsigned __int16 *)(v38 + 2) * (unsigned int)CmpGetIndexElementSize(v38)) + 4 < 4
        || (v41 = *(unsigned __int16 *)(v39 + 2),
            (unsigned __int64)((unsigned int)CmpGetIndexElementSize(v77) * v41) + 4 > v40) )
      {
        v30 = -1073741492;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
        v69 = 752;
        goto LABEL_321;
      }
      if ( !(_WORD)v41 )
      {
        v30 = -1073741492;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
        v69 = 784;
        goto LABEL_321;
      }
      v42 = v77;
      if ( v31 )
        *(_QWORD *)(v31 + 256) = v77;
      v43 = *v77;
      v44 = 26994LL;
      if ( *v77 != 26220 && v43 != 26988 && v43 != 26732 && v43 != 26994 )
      {
        v30 = -1073741492;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(BugCheckParameter2 + 16))(
          BugCheckParameter2,
          v78,
          26994LL);
        v69 = 992;
        goto LABEL_321;
      }
      v45 = v77[1];
      if ( v43 == 26994 )
      {
        v83 = 0;
        v51 = 0;
        v52 = 0;
        if ( v45 )
        {
          do
          {
            if ( v31 )
              *(_DWORD *)(v31 + 264) = v52;
            v53 = &v42[2 * v52];
            if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, *((unsigned int *)v53 + 1), BitMapHeader) )
            {
              v30 = -1073741492;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
              v29 = a2;
              v69 = 848;
              v26 = -1;
              goto LABEL_321;
            }
            v54 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    *((unsigned int *)v53 + 1),
                    v84);
            v55 = (_WORD *)v54;
            if ( !v54 )
            {
              v30 = -1073741670;
              SetFailureLocation(v31, 0, 14, -1073741670, 864);
              goto LABEL_69;
            }
            v56 = -4 - *(_DWORD *)(v54 - 4);
            if ( v56 < 8
              || (unsigned __int64)(*(unsigned __int16 *)(v54 + 2) * (unsigned int)CmpGetIndexElementSize(v54)) + 4 < 4 )
            {
              goto LABEL_316;
            }
            v57 = (unsigned __int16)v55[1];
            if ( (unsigned __int64)((unsigned int)CmpGetIndexElementSize(v55) * v57) + 4 > v56 )
            {
              v31 = a7;
LABEL_316:
              v30 = -1073741492;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v84);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
              v29 = a2;
              v69 = 880;
              v26 = -1;
              goto LABEL_321;
            }
            if ( !(_WORD)v57 )
            {
              v30 = -1073741492;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v84);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
              v31 = a7;
              v69 = 912;
              v29 = a2;
              v26 = -1;
              goto LABEL_321;
            }
            if ( ((*v55 - 26220) & 0xFCFF) != 0 || *v55 == 26476 )
            {
              v30 = -1073741492;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v84);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
              v31 = a7;
              v69 = 944;
              v29 = a2;
              v26 = -1;
              goto LABEL_321;
            }
            v31 = a7;
            v58 = CmpCheckLeaf(BugCheckParameter2, a2, v55, *((_DWORD *)v53 + 1), a7);
            v30 = v58;
            if ( v58 == -2147483606 )
            {
              v76 = 1;
            }
            else if ( v58 < 0 )
            {
              if ( v58 != -1073741492 )
                goto LABEL_69;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v84);
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
              v29 = a2;
              v69 = 952;
              v26 = -1;
LABEL_321:
              v77 = 0LL;
LABEL_322:
              SetFailureLocation(v31, 1, 14, v30, v69);
              if ( (v29 & 0x20000) == 0 && (BYTE2(NlsMbCodePageTag) || (CmpBootType & 6) != 0) )
              {
                SetFailureLocation(v31, 1, 14, v30, 1008);
                v32 = a3;
                if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
                {
                  v30 = -1073741443;
                  SetFailureLocation(v31, 0, 14, -1073741443, 1024);
                  goto LABEL_69;
                }
                *(_DWORD *)(v12 + 20) = 0;
                v35 = 1;
                *(_DWORD *)(v12 + 28) = -1;
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
LABEL_58:
                v36 = *(_DWORD *)(v12 + 32) != -1 || *(_DWORD *)(v12 + 24);
                if ( (v29 & 0x40000) == 0 || !v36 )
                {
                  v70 = (v29 & 2) != 0;
                  if ( (v29 & 0xD) != 0 && v36 )
                    v70 = 1;
                  if ( (v29 & 8) != 0 && *(_DWORD *)(BugCheckParameter2 + 212) < 4u || v70 )
                  {
                    if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v32, 0LL) )
                    {
                      v30 = -1073741443;
                      SetFailureLocation(v31, 0, 14, -1073741443, 1056);
                      goto LABEL_69;
                    }
                    *(_DWORD *)(v12 + 24) = 0;
                    if ( (v29 & 4) != 0 && *(_DWORD *)(BugCheckParameter2 + 212) >= 4u )
                      v26 = -1163005939;
                    *(_DWORD *)(v12 + 32) = v26;
                  }
                  if ( v35 )
                    v30 = -2147483606;
                  else
                    v30 = 0;
                  goto LABEL_69;
                }
                v30 = -1073741492;
              }
              SetFailureLocation(v31, 0, 14, v30, 1040);
              goto LABEL_69;
            }
            v51 = (unsigned __int16)v55[1] + v83;
            v59 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
            v83 = v51;
            v59(BugCheckParameter2, v84);
            v42 = v77;
            ++v52;
          }
          while ( v52 < (unsigned __int16)v77[1] );
        }
        if ( *(_DWORD *)(v12 + 20) != v51 )
        {
          v30 = -1073741492;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(BugCheckParameter2 + 16))(BugCheckParameter2, v78, v44);
          v29 = a2;
          v69 = 960;
          v26 = -1;
          goto LABEL_321;
        }
        v29 = a2;
      }
      else
      {
        if ( v45 != *(_DWORD *)(v12 + 20) )
        {
          v30 = -1073741492;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(BugCheckParameter2 + 16))(
            BugCheckParameter2,
            v78,
            26994LL);
          v69 = 816;
          goto LABEL_321;
        }
        v46 = CmpCheckLeaf(BugCheckParameter2, v29, v77, *(_DWORD *)(v12 + 28), v31);
        v30 = v46;
        if ( v46 == -2147483606 )
        {
          v76 = 1;
        }
        else if ( v46 < 0 )
        {
          if ( v46 == -1073741492 )
          {
            v69 = 832;
            goto LABEL_322;
          }
          goto LABEL_69;
        }
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
      v32 = a3;
    }
    v35 = v76;
    v26 = -1;
    v77 = 0LL;
    goto LABEL_58;
  }
  if ( !v18 )
  {
    v29 = a2;
    v26 = -1;
    goto LABEL_45;
  }
  if ( (*(_BYTE *)(v12 + 13) & 3) == 1 )
  {
    v75 = 504;
LABEL_256:
    v31 = a7;
    v30 = -1073741492;
    SetFailureLocation(a7, 1, 14, -1073741492, v75);
    v26 = -1;
LABEL_258:
    v29 = a2;
    goto LABEL_266;
  }
  v25 = v83;
  if ( !(unsigned __int8)HvIsCellAllocated(BugCheckParameter2, v83, BitMapHeader) )
  {
    v75 = 512;
    goto LABEL_256;
  }
  v82 = 0;
  v26 = -1;
  v27 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8);
  v81 = -1;
  v28 = v27(BugCheckParameter2, v25, &v81);
  if ( !v28 )
  {
    v30 = -1073741670;
    SetFailureLocation(a7, 0, 14, -1073741670, 528);
    goto LABEL_69;
  }
  if ( RtlULongMult(v18, 4u, pulResult) < 0 || pulResult[0] > -4 - *(_DWORD *)(v28 - 4) )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v81);
    v31 = a7;
    v30 = -1073741492;
    SetFailureLocation(a7, 1, 14, -1073741492, 544);
    goto LABEL_258;
  }
  v29 = a2;
  v30 = CmpCheckValueList(
          BugCheckParameter2,
          (*(_BYTE *)(v12 + 2) & 0x10) != 0,
          v28,
          v18,
          a3,
          a2,
          BitMapHeader,
          a7,
          &v79,
          (unsigned int *)&v79 + 1);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v81);
  if ( v30 == -2147483606 )
  {
    v76 = 1;
    goto LABEL_45;
  }
  if ( v30 >= 0 )
  {
LABEL_45:
    v31 = a7;
    v32 = a3;
    while ( 1 )
    {
      if ( *(_DWORD *)(v12 + 36) )
        goto LABEL_47;
      if ( *(_DWORD *)(v12 + 40) == -1 )
        break;
      v30 = -1073741492;
      SetFailureLocation(v31, 1, 14, -1073741492, 608);
LABEL_266:
      if ( (v29 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v31, 0, 14, v30, 592);
        goto LABEL_69;
      }
      v32 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        v30 = -1073741443;
        SetFailureLocation(v31, 0, 14, -1073741443, 576);
        goto LABEL_69;
      }
      *(_DWORD *)(v12 + 40) = -1;
      *(_DWORD *)(v12 + 36) = 0;
      v76 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    v79 = 0LL;
LABEL_47:
    if ( *(_DWORD *)(v12 + 60) < (unsigned int)v79 )
    {
      v76 = 1;
      v30 = -1073741492;
      if ( (v29 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v31, 0, 14, -1073741492, 610);
        goto LABEL_69;
      }
      v32 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        v30 = -1073741443;
        SetFailureLocation(v31, 0, 14, -1073741443, 612);
        goto LABEL_69;
      }
      *(_DWORD *)(v12 + 60) = v79;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    v33 = v29 & 0x20000;
    if ( *(_DWORD *)(v12 + 64) < HIDWORD(v79) )
    {
      v76 = 1;
      v30 = -1073741492;
      if ( v33 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(v31, 0, 14, -1073741492, 614);
        goto LABEL_69;
      }
      v32 = a3;
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a3, 0LL) )
      {
        v30 = -1073741443;
        SetFailureLocation(v31, 0, 14, -1073741443, 616);
        goto LABEL_69;
      }
      *(_DWORD *)(v12 + 64) = HIDWORD(v79);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    if ( !v33 )
    {
      if ( *(_DWORD *)(v12 + 60) != (_DWORD)v79 && (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v32, 0LL) )
        *(_DWORD *)(v12 + 60) = v79;
      if ( *(_DWORD *)(v12 + 64) != HIDWORD(v79) && (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v32, 0LL) )
        *(_DWORD *)(v12 + 64) = HIDWORD(v79);
    }
    goto LABEL_52;
  }
  if ( v30 == -1073741492 )
  {
    v31 = a7;
    if ( a7 )
      *(_QWORD *)(a7 + 248) = v28;
    SetFailureLocation(a7, 1, 14, -1073741492, 560);
    goto LABEL_266;
  }
LABEL_69:
  if ( v77 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v78);
LABEL_71:
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v86);
  return (unsigned int)v30;
}
