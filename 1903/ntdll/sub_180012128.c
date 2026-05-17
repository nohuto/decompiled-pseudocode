/*
 * XREFs of sub_180012128 @ 0x180012128
 * Callers:
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 *     sub_180011C80 @ 0x180011C80 (sub_180011C80.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x1800125D0 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x180012690 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

char __fastcall sub_180012128(
        unsigned __int16 *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  char v16; // r14
  _DWORD *v18; // r11
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  void **v23; // r9
  __int64 v24; // rdi
  unsigned __int16 *v25; // r14
  unsigned int v26; // esi
  char *v27; // r13
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  int v31; // r15d
  int v32; // r15d
  int v33; // r15d
  char *v34; // r12
  char *v35; // rbx
  char *v36; // rsi
  unsigned int v37; // esi
  _BYTE *v38; // rcx
  int v40; // ecx
  unsigned __int16 *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  unsigned __int16 *v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // edx
  __int64 v47; // rax
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rax
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  unsigned __int8 *v54; // rax
  int v55; // eax
  int v56; // eax
  unsigned __int8 *v57; // rcx
  int v58; // eax
  char v60; // [rsp+21h] [rbp-B8h]
  int v62; // [rsp+24h] [rbp-B5h]
  unsigned __int8 *v63; // [rsp+30h] [rbp-A9h]
  int v64; // [rsp+38h] [rbp-A1h] BYREF
  void **v65; // [rsp+40h] [rbp-99h]
  _BYTE *v66; // [rsp+48h] [rbp-91h]
  __int64 v67; // [rsp+50h] [rbp-89h]
  __int64 v68; // [rsp+58h] [rbp-81h]
  __int64 v69; // [rsp+60h] [rbp-79h]
  __int64 v70; // [rsp+68h] [rbp-71h]
  unsigned __int8 *v71; // [rsp+70h] [rbp-69h]
  void *Srca; // [rsp+78h] [rbp-61h]
  __int64 v73; // [rsp+80h] [rbp-59h]
  __int16 v74; // [rsp+88h] [rbp-51h] BYREF
  int v75; // [rsp+8Ah] [rbp-4Fh]
  __int16 v76; // [rsp+8Eh] [rbp-4Bh]
  int v77; // [rsp+90h] [rbp-49h]
  char v78[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v79; // [rsp+C0h] [rbp-19h]

  v16 = a2;
  v18 = a12;
  v20 = a7;
  v21 = a13;
  v22 = a6;
  v71 = (unsigned __int8 *)a4;
  v23 = a11;
  if ( !a6 )
    v22 = a4;
  if ( !a7 )
    v20 = (__int64)a5;
  v75 = 0;
  v69 = v20;
  v73 = (__int64)a5;
  v65 = a11;
  v68 = (__int64)a12;
  v67 = a13;
  v66 = a16;
  v60 = 0;
  v74 = 257;
  v76 = 768;
  v77 = 0;
  v70 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v24 = Src[1];
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v38 = v66;
      *v66 = 1;
      goto LABEL_35;
    }
    memmove(*a11, Src, Src[1]);
    v23 = v65;
    goto LABEL_28;
  }
  Srca = 0LL;
  v62 = 0;
  v63 = 0LL;
  if ( *(_BYTE *)Src <= 3u )
  {
    v25 = Src + 4;
LABEL_10:
    v26 = 8;
    v27 = (char *)Src;
    goto LABEL_11;
  }
  if ( ((*(_BYTE *)Src - 9) & 0xFA) == 0 )
  {
    v25 = Src + 4;
    v50 = *((unsigned __int8 *)Src + 9);
    Srca = &Src[2 * v50 + 8];
    v62 = v24 - (4 * v50 + 16);
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src == 4 )
  {
    v63 = (unsigned __int8 *)(Src + 6);
    v26 = 12;
    v25 = &Src[2 * *((unsigned __int8 *)Src + 13) + 10];
    if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 6, &v74, a16, a11) )
    {
      v58 = *((unsigned __int8 *)Src + 13);
      goto LABEL_91;
    }
    v51 = *((_DWORD *)Src + 5);
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( !v53 )
        {
          v54 = (unsigned __int8 *)v70;
          goto LABEL_82;
        }
        if ( v53 == 1 )
        {
          v54 = (unsigned __int8 *)v69;
LABEL_82:
          v63 = v54;
          v55 = v54[1];
          *a15 = 1;
          LODWORD(v24) = v24 + 4 * v55 - 4;
LABEL_92:
          v27 = (char *)Src;
LABEL_97:
          v23 = v65;
          goto LABEL_11;
        }
        goto LABEL_87;
      }
      if ( !a5 )
      {
LABEL_87:
        v57 = (unsigned __int8 *)(Src + 6);
        goto LABEL_88;
      }
      v56 = a5[1];
      v57 = a5;
      v63 = a5;
    }
    else
    {
      v57 = v71;
      v63 = v71;
      v56 = v71[1];
    }
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v56 - 4;
LABEL_88:
    if ( *a15 )
      goto LABEL_92;
    v58 = v57[1];
LABEL_91:
    v26 = 4 * v58 + 20;
    v63 = 0LL;
    goto LABEL_92;
  }
  v43 = 8 * (*((_DWORD *)Src + 2) & 1LL);
  v25 = (unsigned __int16 *)((char *)&Src[v43] + ((*((_DWORD *)Src + 2) & 2) != 0 ? 28LL : 12LL));
  v26 = v43 * 2 + ((*((_DWORD *)Src + 2) & 2) != 0 ? 28 : 12);
  if ( (*((_DWORD *)Src + 2) & 2) != 0 )
    v44 = &Src[v43 + 6];
  else
    v44 = 0LL;
  v27 = (char *)Src;
  if ( a14 && v44 )
  {
    v45 = a9;
    if ( !a9 || (v46 = 0, !a10) )
    {
LABEL_58:
      LODWORD(v24) = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v47 = *(_QWORD *)v44 - **(_QWORD **)v45;
      if ( *(_QWORD *)v44 == **(_QWORD **)v45 )
        v47 = *((_QWORD *)v44 + 1) - *(_QWORD *)(*(_QWORD *)v45 + 8LL);
      if ( !v47 )
        break;
      ++v46;
      v45 += 8LL;
      if ( v46 >= a10 )
        goto LABEL_58;
    }
    *a14 = 1;
    if ( a3 )
    {
      v60 = 1;
      goto LABEL_11;
    }
    *a15 = 1;
    if ( (Src[4] & 1) != 0 )
    {
      v26 -= 16;
      LODWORD(v24) = v24 - 16;
      memmove(v78, Src, v26);
      v79 &= ~2u;
    }
    else
    {
      v26 -= 20;
      LODWORD(v24) = v24 - 20;
      memmove(v78, Src, v26);
      v78[0] = byte_180126B68[*(unsigned __int8 *)Src];
    }
    v27 = v78;
    goto LABEL_97;
  }
LABEL_11:
  if ( !(_DWORD)v24 )
  {
LABEL_27:
    v21 = v67;
    v16 = a2;
LABEL_28:
    v38 = v66;
    goto LABEL_29;
  }
  v64 = *((_DWORD *)Src + 1);
  RtlMapGenericMask(&v64, a8);
  if ( *(_BYTE *)Src <= 0xAu && (v30 = 1651, _bittest(&v30, *(unsigned __int8 *)Src)) )
    v31 = *(_DWORD *)(a8 + 12);
  else
    v31 = *(_DWORD *)(a8 + 12) | 0x1000000;
  v32 = v64 & v31;
  if ( v32 != *((_DWORD *)Src + 1) )
    *a15 = 1;
  v33 = v32 & 0x11FFFFF;
  if ( !v33 && !(unsigned __int8)RtlEqualPrefixSid(v25, &v74, v28, v29) )
  {
    v23 = v65;
    LODWORD(v24) = 0;
    goto LABEL_27;
  }
  if ( (unsigned __int8)RtlEqualPrefixSid(v25, &v74, v28, v29) )
  {
    v40 = *((_DWORD *)v25 + 2);
    if ( v40 )
    {
      v48 = v40 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          if ( v49 != 1 )
            goto LABEL_19;
          v41 = (unsigned __int16 *)v69;
        }
        else
        {
          v41 = (unsigned __int16 *)v70;
        }
      }
      else
      {
        v41 = (unsigned __int16 *)v73;
        if ( !v73 )
          goto LABEL_19;
      }
    }
    else
    {
      v41 = (unsigned __int16 *)v71;
    }
    v25 = v41;
    v42 = *((unsigned __int8 *)v41 + 1);
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v42 - 4;
  }
LABEL_19:
  if ( v60 && *a15 )
  {
    if ( (Src[4] & 1) != 0 )
    {
      v26 -= 16;
      LODWORD(v24) = v24 - 16;
      memmove(v78, Src, v26);
      v79 &= ~2u;
    }
    else
    {
      v26 -= 20;
      LODWORD(v24) = v24 - 20;
      memmove(v78, Src, v26);
      v78[0] = byte_180126B68[*(unsigned __int8 *)Src];
    }
    v27 = v78;
  }
  v23 = v65;
  v34 = (char *)*v65;
  if ( *v65 && (unsigned int)v24 <= v67 + *(unsigned __int16 *)(v67 + 2) - (_QWORD)v34 )
  {
    memmove(*v65, v27, v26);
    v35 = &v34[v26];
    if ( v63 )
    {
      memmove(v35, v63, 4LL * v63[1] + 8);
      v35 += 4 * v63[1] + 8;
    }
    memmove(v35, v25, 4LL * *((unsigned __int8 *)v25 + 1) + 8);
    v36 = &v35[4 * *((unsigned __int8 *)v25 + 1) + 8];
    if ( Srca && v62 > 0 )
    {
      memmove(v36, Srca, v62);
      LODWORD(v36) = v62 + (_DWORD)v36;
    }
    v23 = v65;
    v37 = (_DWORD)v36 - *(_DWORD *)v65;
    if ( (unsigned int)v24 < v37 )
      return 0;
    LODWORD(v24) = v37;
    *((_WORD *)*v65 + 1) = v37;
    *((_DWORD *)*v23 + 1) = v33;
    goto LABEL_27;
  }
  v38 = v66;
  v21 = v67;
  v16 = a2;
  *v66 = 1;
LABEL_29:
  if ( !*v38 && (_DWORD)v24 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( v16 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v21 + 4);
  }
  v18 = (_DWORD *)v68;
LABEL_35:
  if ( (unsigned int)v24 > 0xFFFF )
    return 0;
  if ( !*v38 )
    *v23 = (char *)*v23 + (unsigned int)v24;
  *v18 = v24;
  return 1;
}
