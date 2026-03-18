/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x140336BD8
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x140332374 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400C2F20 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     EtwpApplyPredicate @ 0x14033744C (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1403379AC (EtwpGetFieldValue.c)
 *     RtlLengthRequiredSid @ 0x14061ACF0 (RtlLengthRequiredSid.c)
 *     ExSystemExceptionFilter @ 0x140747FD0 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        char *a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  char v11; // r11
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  bool v18; // zf
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  __int64 v26; // rax
  void *v27; // rsp
  int v28; // ecx
  __int64 v29; // rax
  char *v30; // r10
  unsigned int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int64 v36; // r12
  unsigned int v37; // edx
  unsigned int v38; // esi
  unsigned __int64 v39; // r15
  __int64 v40; // r13
  char *v41; // r11
  char *v42; // r9
  unsigned int v43; // eax
  char v44; // al
  __int64 v45; // rbx
  __int64 v46; // r14
  int v47; // r8d
  unsigned int v48; // edx
  _WORD *v49; // r8
  unsigned int v50; // edx
  unsigned int v51; // r9d
  unsigned int j; // eax
  _WORD *v53; // rcx
  unsigned int v54; // r8d
  _BYTE *v55; // rdx
  unsigned int v56; // r8d
  unsigned int v57; // r9d
  unsigned int i; // eax
  unsigned int v59; // r14d
  unsigned int v60; // ecx
  __int64 v61; // r13
  unsigned __int64 v62; // r9
  __int64 v63; // r11
  unsigned __int16 *v64; // r14
  char v65; // si
  char v66; // bl
  unsigned int k; // r12d
  char *v68; // r8
  char v69; // r13
  char v70; // cl
  unsigned int v71; // r15d
  __int16 v72; // dx
  __int64 v73; // rax
  char v74; // al
  char v75; // [rsp+30h] [rbp+0h] BYREF
  char v76; // [rsp+31h] [rbp+1h]
  char v77; // [rsp+32h] [rbp+2h]
  unsigned int v78; // [rsp+34h] [rbp+4h]
  unsigned int v79; // [rsp+38h] [rbp+8h]
  int v80; // [rsp+3Ch] [rbp+Ch]
  unsigned int v81; // [rsp+40h] [rbp+10h]
  char *v82; // [rsp+48h] [rbp+18h]
  char *v83; // [rsp+50h] [rbp+20h]
  char v84; // [rsp+58h] [rbp+28h]
  ULONG SubAuthorityCount[2]; // [rsp+60h] [rbp+30h] BYREF
  char *v86; // [rsp+68h] [rbp+38h]
  unsigned __int16 v87; // [rsp+70h] [rbp+40h]
  int v88; // [rsp+74h] [rbp+44h]
  unsigned int v89; // [rsp+78h] [rbp+48h]
  unsigned int v90; // [rsp+7Ch] [rbp+4Ch]
  __int64 v91; // [rsp+80h] [rbp+50h]
  unsigned __int64 LowLimit; // [rsp+88h] [rbp+58h] BYREF
  unsigned __int64 HighLimit[3]; // [rsp+90h] [rbp+60h] BYREF

  v78 = a2;
  v80 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v87 = *a1;
  v11 = *((_BYTE *)a1 + 2);
  v84 = v11;
  v12 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v12, v87 % 0x3Fu) )
    goto LABEL_4;
  v79 = 0;
  v13 = a6 + *(unsigned __int16 *)(a6 + 32);
  v14 = 0;
  v15 = 0;
  v16 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v91 = v13;
    v17 = v14;
    v18 = v15 == v16;
    if ( v15 >= v16 )
      break;
    if ( *(_WORD *)v13 == v87 && *(_BYTE *)(v13 + 2) == v11 )
    {
      v18 = v15 == v16;
      break;
    }
    v19 = *(unsigned __int8 *)(v13 + 3);
    if ( (unsigned __int16)v19 >= *(_WORD *)(v13 + 6) )
      return 3221225485LL;
    v14 = *(unsigned __int8 *)(v13 + 3);
    v13 += 12LL;
    ++v15;
    if ( v17 >= v19 )
      v14 = v17;
  }
  if ( v18 )
  {
LABEL_4:
    *a7 = 1;
    return 0LL;
  }
  v83 = 0LL;
  v20 = 16 * a2;
  v89 = *(unsigned __int8 *)(v13 + 3) + 1;
  v21 = 4 * v89;
  IoGetStackLimits(&LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit < (unsigned int)(v21 + v20 + 4096) )
    return 3221225626LL;
  v22 = v21 + 15;
  if ( v21 + 15 <= (unsigned __int64)(unsigned int)v21 )
    v22 = 0xFFFFFFFFFFFFFF0LL;
  v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
  v24 = alloca(v23);
  v25 = alloca(v23);
  v82 = &v75;
  if ( a4 )
  {
    v26 = v20 + 15;
    if ( v20 + 15 <= (unsigned __int64)(unsigned int)v20 )
      v26 = 0xFFFFFFFFFFFFFF0LL;
    v27 = alloca(v26 & 0xFFFFFFFFFFFFFFF0uLL);
    v83 = &v75;
    if ( (_DWORD)v20 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[(unsigned int)v20] > 0x7FFFFFFF0000LL || &a3[(unsigned int)v20] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(&v75, a3, (unsigned int)v20);
    v28 = 0;
    v29 = 0LL;
    v30 = v83;
    v31 = v78;
    while ( 1 )
    {
      v88 = v28;
      if ( (unsigned int)v29 >= v31 )
        break;
      v32 = 2 * v29;
      v33 = *(unsigned int *)&v83[8 * v32 + 8];
      if ( (_DWORD)v33 )
      {
        v34 = *(_QWORD *)&v83[8 * v32];
        v35 = v34 + v33;
        if ( v35 > 0x7FFFFFFF0000LL || v35 < v34 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v31 = v78;
      }
      v29 = (unsigned int)++v28;
    }
  }
  else
  {
    v30 = a3;
    v83 = a3;
    v31 = v78;
  }
  v36 = a6 + *(unsigned __int16 *)(a6 + 36);
  v37 = 0;
  v80 = 0;
  v38 = 0;
  v39 = (unsigned __int64)v30;
  v40 = v36 + 4LL * *(unsigned __int16 *)(v13 + 4);
  v41 = v82;
  v42 = v82;
  v86 = v82;
  v43 = 0;
  while ( 1 )
  {
    v81 = v43;
    if ( v43 >= v89 )
      break;
    if ( v37 == v31 )
      return 3221225990LL;
    v44 = *(_BYTE *)v40 & 0xF;
    if ( v44 == 7 )
    {
      if ( *(_WORD *)(v40 + 2) )
        return 3221225520LL;
      v42[3] = v37;
      *(_DWORD *)v42 = *(_DWORD *)v42 & 0xFF000000 | ((v38 & 0xFFF) << 12);
    }
    else
    {
      v45 = *(unsigned __int16 *)(v40 + 2);
      if ( v44 == 8 )
        v45 = a5 != 0 ? 8 : 4;
      if ( (*(_BYTE *)v40 & 0x10) != 0 )
      {
        if ( (unsigned int)v45 >= v81 )
          return 3221225520LL;
        if ( (unsigned __int8)((*(_BYTE *)(v36 + 4 * v45) & 0xF) - 1) > 1u )
          return 3221225520LL;
        if ( (*(_BYTE *)(v36 + 4 * v45) & 0x30) != 0 )
          return 3221225520LL;
        if ( *(_WORD *)(v36 + 4 * v45 + 2) > 8u )
          return 3221225520LL;
        if ( *(_BYTE *)(v36 + 4 * v45 + 1) != 1 )
          return 3221225520LL;
        _mm_lfence();
        if ( !(unsigned __int8)EtwpGetFieldValue(
                                 *(_QWORD *)&v30[16 * (unsigned __int8)v41[4 * v45 + 3]]
                               + ((*(_DWORD *)&v41[4 * v45] >> 12) & 0xFFF),
                                 *(unsigned __int16 *)(v36 + 4 * v45 + 2),
                                 SubAuthorityCount,
                                 v42) )
          return 3221225520LL;
        LODWORD(v45) = SubAuthorityCount[0];
        if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
          return 3221225520LL;
        v30 = v83;
        v41 = v82;
      }
      v46 = *(unsigned __int8 *)(v40 + 1);
      if ( (*(_BYTE *)v40 & 0x20) != 0 )
      {
        if ( (unsigned int)v46 >= v81 )
          return 3221225520LL;
        if ( (unsigned __int8)((*(_BYTE *)(v36 + 4 * v46) & 0xF) - 1) > 1u )
          return 3221225520LL;
        if ( (*(_BYTE *)(v36 + 4 * v46) & 0x30) != 0 )
          return 3221225520LL;
        if ( *(_WORD *)(v36 + 4 * v46 + 2) > 8u )
          return 3221225520LL;
        if ( *(_BYTE *)(v36 + 4 * v46 + 1) != 1 )
          return 3221225520LL;
        _mm_lfence();
        if ( !(unsigned __int8)EtwpGetFieldValue(
                                 *(_QWORD *)&v30[16 * (unsigned __int8)v41[4 * v46 + 3]]
                               + ((*(_DWORD *)&v41[4 * v46] >> 12) & 0xFFF),
                                 *(unsigned __int16 *)(v36 + 4 * v46 + 2),
                                 SubAuthorityCount,
                                 v42) )
          return 3221225520LL;
        LODWORD(v46) = SubAuthorityCount[0];
        if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
          return 3221225520LL;
      }
      v47 = 0;
      if ( !(_DWORD)v45 )
      {
        if ( (*(_BYTE *)v40 & 0x10) != 0 || (_DWORD)v46 != 1 )
          return 3221225520LL;
        switch ( *(_BYTE *)v40 & 0xF )
        {
          case 3:
            v54 = *(_DWORD *)(v39 + 8);
            if ( v38 >= v54 )
              return 3221225485LL;
            v55 = (_BYTE *)(*(_QWORD *)v39 + v38);
            v56 = v54 - v38;
            v57 = 0;
            for ( i = 0; i < v56 && *v55; ++i )
            {
              v57 = i + 1;
              v90 = i + 1;
              HighLimit[2] = (unsigned __int64)++v55;
            }
            if ( v57 == v56 )
            {
              v79 = 1;
              v47 = 0;
            }
            else
            {
              v47 = 1;
            }
            LODWORD(v45) = v57;
            break;
          case 4:
            v48 = *(_DWORD *)(v39 + 8) - v38;
            if ( v48 < 2 )
              return 3221225485LL;
            v49 = (_WORD *)(*(_QWORD *)v39 + v38);
            v50 = v48 >> 1;
            v51 = 0;
            for ( j = 0; ; ++j )
            {
              v53 = v49;
              if ( j >= v50 || !*v49 )
                break;
              v51 = j + 1;
              v90 = j + 1;
              ++v49;
              HighLimit[1] = (unsigned __int64)(v53 + 1);
            }
            if ( v51 == v50 )
            {
              v79 = 2;
              v47 = 0;
            }
            else
            {
              v47 = 2;
            }
            if ( v51 == v50 && v38 + 2LL * v50 != *(_DWORD *)(v39 + 8) )
              return 3221225485LL;
            LODWORD(v45) = 2 * v51;
            break;
          case 6:
            if ( *(_DWORD *)(v39 + 8) - v38 < 2 )
              return 3221225485LL;
            if ( !(unsigned __int8)EtwpGetFieldValue(*(_QWORD *)v39 + v38 + 1LL, 1LL, SubAuthorityCount, v42) )
              return 3221225485LL;
            LODWORD(v45) = RtlLengthRequiredSid(SubAuthorityCount[0]);
            if ( (_DWORD)v45 == -1 )
              return 3221225485LL;
            v47 = 0;
            break;
          default:
            return 3221225520LL;
        }
      }
      v59 = v45 * v46;
      if ( *(_DWORD *)(v39 + 8) - v38 < v59 )
        return 3221225990LL;
      v37 = v80;
      v42 = v86;
      v86[3] = v80;
      v60 = v59 & 0xFFF | *(_DWORD *)v42 & 0xFF000000 | ((v38 & 0xFFF) << 12);
      *(_DWORD *)v42 = v60;
      if ( (unsigned __int8)v42[3] != v37 || ((v60 >> 12) & 0xFFF) != v38 || (v60 & 0xFFF) != v59 )
        return 3221225990LL;
      v38 += v59 + v47;
      if ( v38 > *(_DWORD *)(v39 + 8) )
        return 3221225473LL;
      v30 = v83;
      if ( v38 != *(_DWORD *)(v39 + 8) )
      {
        v31 = v78;
LABEL_113:
        v41 = v82;
        goto LABEL_114;
      }
      v80 = ++v37;
      v31 = v78;
      if ( v37 >= v78 )
        goto LABEL_113;
      v38 = 0;
      v39 += 16LL;
      if ( v39 >= (unsigned __int64)&v83[16 * v78] )
        return 3221225473LL;
      if ( v79 )
      {
        if ( *(_DWORD *)(v39 + 8) < v79 )
          return 3221225990LL;
        v38 = v79;
      }
      v79 = 0;
      if ( v38 != *(_DWORD *)(v39 + 8) )
        goto LABEL_113;
      v80 = ++v37;
      v41 = v82;
      if ( v37 < v78 )
      {
        v38 = 0;
        v39 += 16LL;
      }
    }
LABEL_114:
    v43 = v81 + 1;
    v40 += 4LL;
    v42 += 4;
    v86 = v42;
  }
  if ( v79 )
    return 3221225990LL;
  v61 = v91;
  v62 = v36 + 4LL * *(unsigned __int16 *)(v91 + 4);
  LowLimit = v62;
  v63 = a6;
  v64 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v91 + 8));
  v65 = 0;
  v66 = 0;
  v77 = 1;
  for ( k = 0; k < *(unsigned __int16 *)(v61 + 10); ++k )
  {
    v68 = (char *)(v63 + 8 * (3LL * v64[1] + 7));
    v69 = 1;
    v70 = 0;
    v76 = 0;
    v71 = 0;
    while ( 1 )
    {
      v86 = v68;
      v72 = *v64;
      if ( v71 >= ((*v64 >> 2) & 0x3Fu) )
        break;
      v73 = *(unsigned __int16 *)v68;
      if ( !(unsigned __int8)EtwpApplyPredicate(
                               v63,
                               *(_BYTE *)(v62 + 4 * v73) & 0xF,
                               v68,
                               *(_QWORD *)&v83[16 * (unsigned __int8)v82[4 * v73 + 3]]
                             + (((unsigned __int64)*(unsigned int *)&v82[4 * v73] >> 12) & 0xFFF),
                               *(_DWORD *)&v82[4 * v73] & 0xFFF,
                               &v75) )
        return 3221225520LL;
      v69 &= v75;
      v70 = v75 | v76;
      v76 |= v75;
      ++v71;
      v68 = v86 + 24;
      v62 = LowLimit;
      v63 = a6;
    }
    if ( (v72 & 2) == 0 )
      v70 = v69;
    if ( (v72 & 1) != 0 )
    {
      v74 = v65 & v70;
      v65 = v70;
      if ( !v77 )
        v65 = v74;
      v77 = 0;
    }
    else
    {
      v66 |= v70;
      if ( v66 == 1 )
        break;
    }
    v64 += 2;
    v61 = v91;
  }
  *a7 = v65 | v66;
  return 0LL;
}
