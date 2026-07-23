/*
 * XREFs of CmpCheckValueList @ 0x1405DA450
 * Callers:
 *     CmpCheckKey @ 0x1405DB210 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     HvIsCellAllocated @ 0x1405DCB00 (HvIsCellAllocated.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpCompareUnicodeString @ 0x1406B7838 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpCheckValueList(
        ULONG_PTR a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        unsigned int BugCheckParameter3,
        int a6,
        PRTL_BITMAP BitMapHeader,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  unsigned int v12; // r13d
  unsigned int v13; // r14d
  unsigned __int64 v14; // r12
  void *v15; // r15
  bool v16; // zf
  __int64 v17; // r14
  unsigned int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rax
  int *v21; // r11
  bool v22; // si
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // r10
  _WORD *v26; // rax
  _WORD *v27; // r13
  unsigned int v28; // ecx
  int v29; // edx
  __int16 v30; // r8
  unsigned int v31; // esi
  __int16 v32; // si
  unsigned __int16 v33; // ax
  int v34; // eax
  __int16 v35; // r8
  unsigned __int16 v36; // cx
  unsigned int v37; // esi
  unsigned int v38; // r14d
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // eax
  char v49; // cl
  __int64 v50; // rsi
  __int64 v51; // rax
  int v52; // eax
  int v54; // [rsp+20h] [rbp-71h]
  unsigned int v55; // [rsp+30h] [rbp-61h]
  _DWORD v56[2]; // [rsp+38h] [rbp-59h] BYREF
  void *v57; // [rsp+40h] [rbp-51h]
  _DWORD v58[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v59; // [rsp+50h] [rbp-41h] BYREF
  _DWORD v60[2]; // [rsp+58h] [rbp-39h] BYREF
  _DWORD v61[2]; // [rsp+60h] [rbp-31h] BYREF
  _DWORD v62[4]; // [rsp+68h] [rbp-29h] BYREF
  _WORD v63[4]; // [rsp+78h] [rbp-19h] BYREF
  _WORD *v64; // [rsp+80h] [rbp-11h]
  char v65; // [rsp+D8h] [rbp+47h]
  __int64 v66; // [rsp+E0h] [rbp+4Fh]
  int v67; // [rsp+E8h] [rbp+57h]
  char v68; // [rsp+108h] [rbp+77h]

  v67 = a4;
  v66 = a3;
  v65 = a2;
  v56[0] = -1;
  v56[1] = 0;
  v55 = 0;
  v12 = a4;
  v58[0] = -1;
  v13 = 0;
  v58[1] = 0;
  v62[0] = -1;
  v62[1] = 0;
  v61[0] = -1;
  v61[1] = 0;
  v60[0] = -1;
  v60[1] = 0;
  v68 = 0;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  if ( !a4 )
    return 0;
  while ( 1 )
  {
    v14 = *(unsigned int *)(a3 + 4LL * v13);
    v15 = (void *)(a3 + 4LL * v13);
    v57 = v15;
    if ( a2 && v12 != 1 )
    {
      v31 = -1073741492;
      SetFailureLocation(a8, 0, 15, -1073741492, 64);
      goto LABEL_147;
    }
    if ( (_DWORD)v14 == -1 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 80);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 284) = -1;
        goto LABEL_136;
      }
      goto LABEL_137;
    }
    v16 = (*(_BYTE *)(a1 + 140) & 1) == 0;
    v59 = 0xFFFFFFFFLL;
    if ( v16 )
    {
      v17 = 632 * (v14 >> 31);
      v18 = *(_DWORD *)(v17 + a1 + 272);
      if ( (v14 & 0x7FFFFFFF) >= v18 || (v14 & 7) != 0 )
        goto LABEL_31;
      if ( BitMapHeader && (v14 & 0x80000000) == 0LL )
      {
        if ( !_bittest64((const signed __int64 *)BitMapHeader->Buffer, (unsigned int)v14 >> 3) )
          goto LABEL_31;
        RtlClearBits(BitMapHeader, (unsigned int)v14 >> 3, 1u);
        v18 = *(_DWORD *)(v17 + a1 + 272);
      }
      if ( (unsigned int)v14 + (v14 & 0x80000000) >= v18 )
        goto LABEL_31;
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + a1 + 280) + 8 * ((v14 >> 21) & 0x3FF)) + 24 * ((v14 >> 12) & 0x1FF);
      if ( !v19 || (*(_BYTE *)(v19 + 8) & 2) != 0 )
        goto LABEL_31;
      v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(a1 + 8))(a1, (unsigned int)v14, &v59);
      if ( v20 )
      {
        v21 = (int *)(v20 - 4);
        if ( v20 == 4 )
        {
          v22 = 1;
        }
        else
        {
          v23 = (_DWORD)v21 - (*(_DWORD *)(v19 + 8) & 0xFFFFFFF0);
          v24 = -*v21;
          v22 = 0;
          if ( *v21 < 0 && v24 - 8 <= 0xFFFF8 )
          {
            v25 = *(unsigned int *)((*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
            if ( v24 <= (unsigned __int64)(v25 - 32) && v23 - *v21 <= (unsigned int)v25 && v23 >= 0x20 )
              v22 = 1;
          }
        }
      }
      else
      {
        v21 = 0LL;
        v22 = 1;
      }
      if ( v21 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v59);
      if ( !v22 )
      {
LABEL_31:
        SetFailureLocation(a8, 1, 15, -1073741492, 96);
        v13 = v55;
        v15 = v57;
        if ( a8 )
        {
          *(_DWORD *)(a8 + 284) = v14;
LABEL_136:
          *(_DWORD *)(a8 + 280) = v13;
          goto LABEL_137;
        }
        goto LABEL_137;
      }
      v13 = v55;
    }
    v26 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, (unsigned int)v14, v56);
    v27 = v26;
    if ( !v26 )
    {
      v31 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 112);
LABEL_147:
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v14;
      }
      return v31;
    }
    v28 = -4 - *((_DWORD *)v26 - 1);
    if ( v28 < 0x14 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 128);
      goto LABEL_131;
    }
    if ( *v26 != 27510 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 136);
      goto LABEL_131;
    }
    v29 = (unsigned __int16)v26[1];
    if ( v29 + 20 > v28 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 144);
      goto LABEL_131;
    }
    v30 = v26[8];
    if ( (v30 & 1) == 0 )
    {
      if ( (v29 & 1) != 0 )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 148);
      }
      else
      {
        if ( (unsigned __int16)v29 <= 0x7FFFu )
          goto LABEL_44;
        SetFailureLocation(a8, 1, 15, -1073741492, 150);
      }
LABEL_131:
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v14;
        *(_QWORD *)(a8 + 288) = v27;
      }
      goto LABEL_133;
    }
    if ( (unsigned __int16)v29 > 0x3FFFu )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 146);
      goto LABEL_131;
    }
LABEL_44:
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 2) == 0 && (v30 & 2) != 0 )
    {
      v68 = 1;
      v31 = -1073741492;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v14;
        *(_QWORD *)(a8 + 288) = v26;
      }
      if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
      {
        SetFailureLocation(a8, 0, 15, -1073741492, 156);
        goto LABEL_151;
      }
      SetFailureLocation(a8, 1, 15, -1073741492, 152);
      if ( !(unsigned __int8)HvpMarkCellDirty(a1, (unsigned int)v14) )
      {
        v31 = -1073741443;
        SetFailureLocation(a8, 1, 15, -1073741443, 154);
LABEL_151:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
        return v31;
      }
      v27[8] &= ~2u;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    }
    if ( v65 )
    {
      v32 = v27[8];
      v33 = v27[1];
      if ( (v32 & 1) != 0 )
      {
        v34 = CmpCompareCompressedName((__int64)&CmSymbolicLinkValueName, (unsigned __int8 *)v27 + 20, v33, 0);
      }
      else
      {
        v64 = v27 + 10;
        v63[0] = v33;
        v63[1] = v33;
        v34 = CmpCompareUnicodeString(&CmSymbolicLinkValueName, v63, 0LL);
      }
      if ( v34 )
      {
        v54 = 160;
        goto LABEL_154;
      }
      if ( *((_DWORD *)v27 + 3) != 6 && (v32 & 2) == 0 )
      {
        v54 = 176;
        goto LABEL_154;
      }
    }
    v35 = v27[8];
    v36 = 2 * v27[1];
    if ( (v35 & 1) == 0 )
      v36 = v27[1];
    if ( *a9 < (unsigned int)v36 )
      *a9 = v36;
    v37 = *((_DWORD *)v27 + 1);
    if ( v65 )
    {
      if ( (v37 & 1) != 0 )
      {
        v54 = 192;
      }
      else
      {
        if ( v37 <= 0xFFFF )
          goto LABEL_67;
        v54 = 208;
      }
LABEL_154:
      v31 = -1073741492;
      SetFailureLocation(a8, 0, 15, -1073741492, v54);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v13;
        *(_DWORD *)(a8 + 284) = v14;
        *(_QWORD *)(a8 + 288) = v27;
      }
      goto LABEL_151;
    }
LABEL_67:
    if ( (v35 & 2) != 0 )
    {
      if ( v37 || *((_DWORD *)v27 + 3) )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 224);
        goto LABEL_131;
      }
    }
    else if ( v37 >= 0x80000000 )
    {
      if ( v37 + 0x80000000 <= 4 )
        goto LABEL_120;
      SetFailureLocation(a8, 1, 15, -1073741492, 416);
      goto LABEL_131;
    }
    v38 = *((_DWORD *)v27 + 2);
    v39 = 0LL;
    if ( !v37 )
    {
      if ( v38 != -1 )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 224);
        v13 = v55;
        goto LABEL_131;
      }
      goto LABEL_77;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v38, BitMapHeader) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 240);
      v13 = v55;
      goto LABEL_131;
    }
    v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, v38, v58);
    if ( !v39 )
    {
      v31 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 256);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v38;
      }
      goto LABEL_151;
    }
LABEL_77:
    if ( *(_DWORD *)(a1 + 212) < 4u || v37 <= 0x3FD8 )
    {
      if ( !v37 || v37 <= -4 - *(_DWORD *)(v39 - 4) )
        goto LABEL_94;
      SetFailureLocation(a8, 1, 15, -1073741492, 400);
      v13 = v55;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v14;
        *(_QWORD *)(a8 + 288) = v27;
      }
LABEL_111:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
LABEL_133:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
      v15 = v57;
      v12 = v67;
      goto LABEL_137;
    }
    if ( (unsigned int)(-4 - *(_DWORD *)(v39 - 4)) < 8
      || *(_WORD *)v39 != 25188
      || !*(_WORD *)(v39 + 2)
      || (v40 = *(unsigned int *)(v39 + 4), (_DWORD)v40 == -1) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 272);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v38;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
      v13 = v55;
      v15 = v57;
      v12 = v67;
      goto LABEL_137;
    }
    if ( !(unsigned __int8)HvIsCellAllocated(a1, v40, BitMapHeader) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 288);
      v13 = v55;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = *(_DWORD *)(v39 + 4);
        *(_QWORD *)(a8 + 288) = v39;
      }
      goto LABEL_111;
    }
    v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v39 + 4), v60);
    v59 = v41;
    v42 = v41;
    if ( !v41 )
    {
      v31 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 304);
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = *(_DWORD *)(v39 + 4);
      }
LABEL_165:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
      goto LABEL_151;
    }
    v43 = *(unsigned __int16 *)(v39 + 2);
    if ( (unsigned __int64)(4 * v43) < 4 || 4 * v43 > (unsigned __int64)(unsigned int)(-4 - *(_DWORD *)(v41 - 4)) )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 320);
      goto LABEL_106;
    }
    if ( (_DWORD)v43 != (v37 + 16343) / 0x3FD8 )
    {
      SetFailureLocation(a8, 1, 15, -1073741492, 336);
LABEL_106:
      v13 = v55;
      if ( a8 )
      {
        *(_DWORD *)(a8 + 280) = v55;
        *(_DWORD *)(a8 + 284) = v14;
        *(_QWORD *)(a8 + 288) = v27;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
      goto LABEL_111;
    }
    v44 = 0LL;
    if ( !(_DWORD)v43 )
    {
LABEL_93:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(a1 + 16))(a1, v60, v43, v42);
LABEL_94:
      if ( v39 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
      v37 = *((_DWORD *)v27 + 1);
LABEL_120:
      v48 = v37 + 0x80000000;
      if ( v37 < 0x80000000 )
        v48 = v37;
      if ( *a10 < v48 )
        *a10 = v48;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
      v49 = v68;
      v13 = v55 + 1;
      v12 = v67;
      ++v55;
      goto LABEL_144;
    }
    while ( (unsigned __int8)HvIsCellAllocated(a1, *(unsigned int *)(v42 + 4 * v44), BitMapHeader) )
    {
      v45 = v59;
      v46 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v59 + 4 * v44), v61);
      if ( !v46 )
      {
        v31 = -1073741670;
        SetFailureLocation(a8, 0, 15, -1073741670, 368);
        if ( a8 )
        {
          v51 = v59;
          *(_DWORD *)(a8 + 280) = v44;
          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v51 + 4 * v44);
          *(_QWORD *)(a8 + 288) = v39;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
        goto LABEL_165;
      }
      if ( (unsigned int)(-4 - *(_DWORD *)(v46 - 4)) < 0x3FD8 )
      {
        SetFailureLocation(a8, 1, 15, -1073741492, 384);
        if ( a8 )
        {
          *(_DWORD *)(a8 + 280) = v44;
          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v45 + 4 * v44);
          *(_QWORD *)(a8 + 288) = v39;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
        v13 = v55;
        v15 = v57;
        v12 = v67;
        goto LABEL_137;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v61);
      v44 = (unsigned int)(v44 + 1);
      v42 = v45;
      if ( (unsigned int)v44 >= *(unsigned __int16 *)(v39 + 2) )
        goto LABEL_93;
    }
    SetFailureLocation(a8, 1, 15, -1073741492, 352);
    if ( a8 )
    {
      v47 = v59;
      *(_DWORD *)(a8 + 280) = v44;
      *(_DWORD *)(a8 + 284) = *(_DWORD *)(v47 + 4 * v44);
      *(_QWORD *)(a8 + 288) = v39;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v60);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v58);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v56);
    v13 = v55;
    v15 = v57;
    v12 = v67;
LABEL_137:
    if ( (a6 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      SetFailureLocation(a8, 0, 15, -1073741492, 48);
      return (unsigned int)-1073741492;
    }
    SetFailureLocation(a8, 1, 15, -1073741492, 0);
    v50 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a1 + 8))(a1, BugCheckParameter3, v62);
    if ( !v50 )
    {
      v31 = -1073741670;
      SetFailureLocation(a8, 0, 15, -1073741670, 16);
      return v31;
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, BugCheckParameter3) )
      break;
    if ( !(unsigned __int8)HvpMarkCellDirty(a1, *(unsigned int *)(v50 + 40)) )
    {
      v52 = 40;
      goto LABEL_171;
    }
    --*(_DWORD *)(v50 + 36);
    v67 = --v12;
    memmove(v15, (const void *)(v66 + 4LL * (v13 + 1)), 4LL * (v12 - v13));
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) |= 4u;
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
    v49 = 1;
    v68 = 1;
LABEL_144:
    if ( v13 >= v12 )
    {
      if ( v49 )
        return (unsigned int)-2147483606;
      return 0;
    }
    a2 = v65;
    a3 = v66;
  }
  v52 = 24;
LABEL_171:
  v31 = -1073741443;
  SetFailureLocation(a8, 0, 15, -1073741443, v52);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v62);
  return v31;
}
