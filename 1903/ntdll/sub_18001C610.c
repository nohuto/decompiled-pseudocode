/*
 * XREFs of sub_18001C610 @ 0x18001C610
 * Callers:
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 * Callees:
 *     sub_18001B990 @ 0x18001B990 (sub_18001B990.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_18001EF44 @ 0x18001EF44 (sub_18001EF44.c)
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180064EEC @ 0x180064EEC (sub_180064EEC.c)
 *     sub_180065058 @ 0x180065058 (sub_180065058.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 *     sub_18007D1A8 @ 0x18007D1A8 (sub_18007D1A8.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D5450 @ 0x1800D5450 (sub_1800D5450.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 */

__int64 __fastcall sub_18001C610(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r10
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  bool v16; // bl
  unsigned __int64 v17; // rdi
  int v18; // eax
  __int16 v19; // ax
  __int64 v20; // rdx
  _DWORD *v21; // rdx
  char *v22; // r11
  unsigned __int64 v23; // r9
  unsigned int v24; // r8d
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r14
  unsigned __int64 *v28; // r13
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // r15d
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rdi
  unsigned __int16 *v34; // r14
  unsigned __int16 *v35; // rbx
  int v36; // r9d
  int v37; // r10d
  int v38; // r11d
  unsigned __int8 *v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int8 v41; // cl
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 *v46; // r13
  int v47; // eax
  __int64 v48; // r10
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int16 *v53; // rdx
  __int64 v54; // [rsp+40h] [rbp-B8h]
  _DWORD *v55; // [rsp+48h] [rbp-B0h]
  __int64 v56; // [rsp+50h] [rbp-A8h]
  _DWORD *v57; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-98h]
  __int64 *v59; // [rsp+68h] [rbp-90h]
  unsigned __int64 *v60; // [rsp+70h] [rbp-88h]
  unsigned __int64 v61; // [rsp+78h] [rbp-80h]
  char *v62; // [rsp+80h] [rbp-78h]
  __int64 v63; // [rsp+88h] [rbp-70h]
  unsigned __int64 v64; // [rsp+90h] [rbp-68h]
  char *v65; // [rsp+98h] [rbp-60h] BYREF
  __int128 v66; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-48h]
  __int64 v69; // [rsp+108h] [rbp+10h] BYREF
  unsigned int v70; // [rsp+110h] [rbp+18h] BYREF
  unsigned int v71; // [rsp+118h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 56);
  v54 = v2;
  v3 = *(_QWORD *)(v2 + 48);
  v63 = v3;
  sub_1800255A8(v3, v2 + 72, 5286LL);
  sub_180065058(a1);
  v71 = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 120);
    if ( v5 >= *(_DWORD *)(v4 + 96) )
    {
      v31 = sub_180055830(v4);
      if ( v31 >= 0 )
      {
        sub_1800255A8(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_65;
    }
    v6 = v5;
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 88) + 8LL * v5);
    v8 = v7;
    v56 = v7;
    v9 = *(_QWORD *)(v4 + 88);
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 176);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x80000) == 0 && *(_QWORD *)(v10 + 56) != v7 )
        {
          v8 = *(_QWORD *)(v10 + 56);
          v56 = v8;
          *(_QWORD *)(v10 + 56) = v7;
          v9 = *(_QWORD *)(v4 + 88);
        }
      }
    }
    if ( *(_QWORD *)(v9 + 8LL * v5) != v8 )
    {
      sub_180064EEC();
      v4 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6) = v8;
    }
    v11 = *(_QWORD *)(v4 + 128);
    v12 = *(unsigned int *)(v11 + 20 * v6);
    v13 = v12 + v3;
    v14 = v63 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( !(_DWORD)v12 || (unsigned int)v12 > *(_DWORD *)(v2 + 64) )
      v13 = v63 + *(unsigned int *)(v11 + 20 * v6 + 16);
    if ( v8 )
      break;
LABEL_52:
    ++*(_DWORD *)(v4 + 120);
    v3 = v63;
  }
  v15 = *(_QWORD *)(v8 + 48);
  v16 = 1;
  v17 = v15;
  v69 = 0LL;
  v55 = 0LL;
  v57 = 0LL;
  if ( (v15 & 3) != 0 )
  {
    v17 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = (v15 & 1) == 0;
  }
  v18 = RtlImageNtHeaderEx(1LL, v17, 0LL, &v69);
  if ( v69 )
  {
    v19 = *(_WORD *)(v69 + 24);
    if ( v19 == 267 )
    {
      v18 = sub_18001EF44(v17, v16, 0, (unsigned int)&v70, v69, (__int64)&v57);
      v21 = v57;
      v55 = v57;
      goto LABEL_78;
    }
    if ( v19 != 523 )
      goto LABEL_79;
    if ( !*(_DWORD *)(v69 + 132) )
      goto LABEL_79;
    v20 = *(unsigned int *)(v69 + 136);
    if ( !(_DWORD)v20 )
      goto LABEL_79;
    v70 = *(_DWORD *)(v69 + 140);
    if ( !v16 && (unsigned int)v20 >= *(_DWORD *)(v69 + 84) )
    {
      v21 = (_DWORD *)RtlAddressInSectionTable(v69, v17, (unsigned int)v20);
      v55 = v21;
      if ( v21 )
      {
        v18 = 0;
        goto LABEL_78;
      }
      goto LABEL_79;
    }
    v21 = (_DWORD *)(v17 + v20);
LABEL_19:
    v55 = v21;
  }
  else
  {
    v21 = 0LL;
LABEL_78:
    if ( v18 < 0 )
    {
LABEL_79:
      v21 = 0LL;
      goto LABEL_19;
    }
  }
  if ( !v21 )
  {
    v50 = dword_18015FAB0;
    if ( (dword_18015FAB0 & 3) != 0 )
    {
      sub_1800CE318(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        2627,
        (unsigned int)"LdrpSnapModule",
        0,
        (__int64)"DLL \"%wZ\" does not contain an export table\n",
        v56 + 72);
      v50 = dword_18015FAB0;
    }
    if ( (v50 & 0x10) != 0 )
      __debugbreak();
    v31 = -1073741701;
    goto LABEL_65;
  }
  if ( qword_18017A380 && (byte_18017A36C & 1) == 0 )
  {
    if ( v15 < *((_QWORD *)&xmmword_18017A4E0 + 1)
      || v15 >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
    {
      sub_18001E620(v15, &v66);
      v21 = v55;
    }
    else
    {
      v66 = xmmword_18017A4E0;
      v67 = qword_18017A4F0;
    }
    v69 = *((_QWORD *)&v66 + 1);
    if ( *((_QWORD *)&v66 + 1) != v15 )
      __fastfail(0x18u);
  }
  v22 = (char *)v21 + v70;
  v62 = v22;
  v23 = v15 + (unsigned int)v21[7];
  v61 = v23;
  v24 = v21[6];
  v58 = v24;
  v25 = v15 + (unsigned int)v21[8];
  v57 = (_DWORD *)v25;
  v64 = v15 + (unsigned int)v21[9];
  v4 = a1;
  v26 = 8LL * *(unsigned int *)(a1 + 124);
  v27 = (__int64 *)(v26 + v13);
  v28 = (unsigned __int64 *)(v26 + v14);
  v29 = v54;
  while ( 2 )
  {
    v60 = v28;
    v59 = v27;
    v30 = *v27;
    if ( !*v27 )
    {
      *(_DWORD *)(v4 + 124) = 0;
      v2 = v54;
      goto LABEL_52;
    }
    v31 = -1073741702;
    LODWORD(v69) = -1073741702;
    v32 = (unsigned __int64)v30 >> 63;
    v33 = -4530927LL;
    v34 = 0LL;
    if ( v30 < 0 )
    {
      v71 = (unsigned __int16)v30;
      v44 = (unsigned __int16)v30 - v21[4];
LABEL_45:
      if ( (unsigned int)v44 < v21[5] )
      {
        v45 = *(unsigned int *)(v23 + 4LL * v44);
        if ( (_DWORD)v45 )
        {
          v33 = v15 + v45;
          v31 = 0;
          LODWORD(v69) = 0;
          if ( v15 + v45 > (unsigned __int64)v21 && v33 < (unsigned __int64)v22 )
          {
            v47 = sub_18001B990((char *)(v15 + v45), v56, v29, &v65);
            v31 = v47;
            LODWORD(v69) = v47;
            if ( v47 == 259 )
              return 0LL;
            if ( v47 >= 0 )
              v33 = (unsigned __int64)v65;
          }
        }
      }
    }
    else
    {
      v35 = (unsigned __int16 *)(*(_QWORD *)(v54 + 48) + (unsigned int)v30);
      v34 = v35 + 1;
      if ( (*(_DWORD *)(v4 + 32) & 0x2000000) == 0 )
        goto LABEL_30;
      v51 = sub_1800D5450(v54, v56, v35 + 1);
      v33 = v51;
      if ( v51 != -4530927 )
      {
        v29 = v54;
        if ( (dword_18015FAB0 & 5) != 0 )
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            2700,
            (unsigned int)"LdrpSnapModule",
            2,
            (__int64)"Import '%s' of DLL '%wZ' is redirected to 0x%p",
            v34,
            v54 + 72,
            v51);
        goto LABEL_49;
      }
      v25 = (unsigned __int64)v57;
      v24 = v58;
LABEL_30:
      v36 = *v35;
      v37 = 0;
      v38 = v24 - 1;
      if ( v36 >= v24 )
        v36 = v38 / 2;
      if ( v38 >= 0 )
      {
        while ( 1 )
        {
          v39 = (unsigned __int8 *)(v35 + 1);
          v40 = v15 + *(unsigned int *)(v25 + 4LL * v36) - (_QWORD)v34;
          while ( 1 )
          {
            v41 = *v39;
            if ( *v39 != v39[v40] )
              break;
            ++v39;
            if ( !v41 )
            {
              v42 = 0;
              goto LABEL_37;
            }
          }
          v42 = v41 < v39[v40] ? -1 : 1;
LABEL_37:
          if ( !v42 )
            break;
          v43 = v36 - 1;
          if ( v42 >= 0 )
            v43 = v38;
          v38 = v43;
          if ( v42 >= 0 )
            v37 = v36 + 1;
          v36 = (v37 + v43) / 2;
          v25 = (unsigned __int64)v57;
          if ( v43 < v37 )
            goto LABEL_91;
        }
        v44 = *(unsigned __int16 *)(v64 + 2LL * v36);
        v21 = v55;
        v23 = v61;
        v29 = v54;
        v22 = v62;
        goto LABEL_45;
      }
LABEL_91:
      if ( (dword_18015FAB0 & 3) != 0 )
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          1559,
          (unsigned int)"LdrpNameToOrdinal",
          1,
          (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
          (const char *)v35 + 2,
          (const void *)v15);
      if ( (dword_18015FAB0 & 0x40) != 0 )
        __debugbreak();
      v29 = v54;
    }
    if ( v31 >= 0 )
    {
LABEL_49:
      v46 = v60;
      *v60 = v33;
      v27 = v59 + 1;
      v28 = v46 + 1;
      v4 = a1;
      ++*(_DWORD *)(a1 + 124);
      v25 = (unsigned __int64)v57;
      v21 = v55;
      v24 = v58;
      v23 = v61;
      v22 = v62;
      continue;
    }
    break;
  }
  if ( v31 != -1073741702 && v31 != -1073741515 )
  {
LABEL_65:
    v48 = a1;
    goto LABEL_66;
  }
  if ( (unsigned int)sub_18002946C(*(wchar_t **)(v54 + 80)) || (unsigned int)sub_18002946C(*(wchar_t **)(v56 + 80)) )
  {
    v52 = v54 + 72;
    sub_18007D1A8(v54 + 72, v56 + 72, 1, (unsigned int)&unk_18011C288, 0);
    sub_18007D1A8(v54 + 72, v56 + 72, 1, (unsigned int)&unk_18012C1E0, 1);
  }
  else
  {
    v52 = v54 + 72;
  }
  if ( (_BYTE)v32 )
  {
    v31 = -1073741512;
    v53 = (unsigned __int16 *)v71;
  }
  else
  {
    v31 = -1073741511;
    v53 = v34;
  }
  LODWORD(v69) = v31;
  sub_18006F388(v52, v53, (unsigned int)v31);
  v48 = a1;
LABEL_66:
  if ( *(_QWORD *)(v48 + 184) )
  {
    ZwUnmapViewOfSection(-1LL);
    v48 = a1;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  if ( v31 < 0 )
    sub_18007E384((unsigned int)v31, 25LL, 0LL, v48);
  return (unsigned int)v31;
}
