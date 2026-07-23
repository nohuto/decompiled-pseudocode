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
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
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
  ACCESS_MASK *v25; // r14
  unsigned int v26; // esi
  ACCESS_MASK *v27; // r13
  int v28; // ecx
  ACCESS_MASK GenericAll; // r15d
  ACCESS_MASK v30; // r15d
  int v31; // r15d
  char *v32; // r12
  char *v33; // rbx
  char *v34; // rsi
  unsigned int v35; // esi
  _BYTE *v36; // rcx
  ACCESS_MASK v38; // ecx
  ACCESS_MASK *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  ACCESS_MASK *v42; // r8
  __int64 v43; // rcx
  unsigned int v44; // edx
  __int64 v45; // rax
  ACCESS_MASK v46; // ecx
  ACCESS_MASK v47; // ecx
  __int64 v48; // rax
  ACCESS_MASK v49; // ecx
  ACCESS_MASK v50; // ecx
  ACCESS_MASK v51; // ecx
  unsigned __int8 *v52; // rax
  int v53; // eax
  int v54; // eax
  unsigned __int8 *v55; // rcx
  int v56; // eax
  char v58; // [rsp+21h] [rbp-B8h]
  int v60; // [rsp+24h] [rbp-B5h]
  unsigned __int8 *v61; // [rsp+30h] [rbp-A9h]
  ACCESS_MASK AccessMask; // [rsp+38h] [rbp-A1h] BYREF
  void **v63; // [rsp+40h] [rbp-99h]
  _BYTE *v64; // [rsp+48h] [rbp-91h]
  __int64 v65; // [rsp+50h] [rbp-89h]
  __int64 v66; // [rsp+58h] [rbp-81h]
  __int64 v67; // [rsp+60h] [rbp-79h]
  __int64 v68; // [rsp+68h] [rbp-71h]
  unsigned __int8 *v69; // [rsp+70h] [rbp-69h]
  void *Srca; // [rsp+78h] [rbp-61h]
  __int64 v71; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v73; // [rsp+8Ah] [rbp-4Fh]
  __int16 v74; // [rsp+8Eh] [rbp-4Bh]
  int v75; // [rsp+90h] [rbp-49h]
  char v76[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v77; // [rsp+C0h] [rbp-19h]

  v16 = a2;
  v18 = a12;
  v20 = a7;
  v21 = a13;
  v22 = a6;
  v69 = (unsigned __int8 *)a4;
  v23 = a11;
  if ( !a6 )
    v22 = a4;
  if ( !a7 )
    v20 = (__int64)a5;
  v73 = 0;
  v67 = v20;
  v71 = (__int64)a5;
  v63 = a11;
  v66 = (__int64)a12;
  v65 = a13;
  v64 = a16;
  v58 = 0;
  Sid2 = 257;
  v74 = 768;
  v75 = 0;
  v68 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v24 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v36 = v64;
      *v64 = 1;
      goto LABEL_35;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v23 = v63;
    goto LABEL_28;
  }
  Srca = 0LL;
  v60 = 0;
  v61 = 0LL;
  if ( *(_BYTE *)Src <= 3u )
  {
    v25 = Src + 2;
LABEL_10:
    v26 = 8;
    v27 = Src;
    goto LABEL_11;
  }
  if ( ((*(_BYTE *)Src - 9) & 0xFA) == 0 )
  {
    v25 = Src + 2;
    v48 = *((unsigned __int8 *)Src + 9);
    Srca = &Src[v48 + 4];
    v60 = v24 - (4 * v48 + 16);
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src == 4 )
  {
    v61 = (unsigned __int8 *)(Src + 3);
    v26 = 12;
    v25 = &Src[*((unsigned __int8 *)Src + 13) + 5];
    if ( !RtlEqualPrefixSid(Src + 3, &Sid2) )
    {
      v56 = *((unsigned __int8 *)Src + 13);
      goto LABEL_91;
    }
    v49 = Src[5];
    if ( v49 )
    {
      v50 = v49 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( !v51 )
        {
          v52 = (unsigned __int8 *)v68;
          goto LABEL_82;
        }
        if ( v51 == 1 )
        {
          v52 = (unsigned __int8 *)v67;
LABEL_82:
          v61 = v52;
          v53 = v52[1];
          *a15 = 1;
          LODWORD(v24) = v24 + 4 * v53 - 4;
LABEL_92:
          v27 = Src;
LABEL_97:
          v23 = v63;
          goto LABEL_11;
        }
        goto LABEL_87;
      }
      if ( !a5 )
      {
LABEL_87:
        v55 = (unsigned __int8 *)(Src + 3);
        goto LABEL_88;
      }
      v54 = a5[1];
      v55 = a5;
      v61 = a5;
    }
    else
    {
      v55 = v69;
      v61 = v69;
      v54 = v69[1];
    }
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v54 - 4;
LABEL_88:
    if ( *a15 )
      goto LABEL_92;
    v56 = v55[1];
LABEL_91:
    v26 = 4 * v56 + 20;
    v61 = 0LL;
    goto LABEL_92;
  }
  v41 = 4 * (Src[2] & 1LL);
  v25 = (ACCESS_MASK *)((char *)&Src[v41] + ((Src[2] & 2) != 0 ? 28LL : 12LL));
  v26 = v41 * 4 + ((Src[2] & 2) != 0 ? 28 : 12);
  if ( (Src[2] & 2) != 0 )
    v42 = &Src[v41 + 3];
  else
    v42 = 0LL;
  v27 = Src;
  if ( a14 && v42 )
  {
    v43 = a9;
    if ( !a9 || (v44 = 0, !a10) )
    {
LABEL_58:
      LODWORD(v24) = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v45 = *(_QWORD *)v42 - **(_QWORD **)v43;
      if ( *(_QWORD *)v42 == **(_QWORD **)v43 )
        v45 = *((_QWORD *)v42 + 1) - *(_QWORD *)(*(_QWORD *)v43 + 8LL);
      if ( !v45 )
        break;
      ++v44;
      v43 += 8LL;
      if ( v44 >= a10 )
        goto LABEL_58;
    }
    *a14 = 1;
    if ( a3 )
    {
      v58 = 1;
      goto LABEL_11;
    }
    *a15 = 1;
    if ( (Src[2] & 1) != 0 )
    {
      v26 -= 16;
      LODWORD(v24) = v24 - 16;
      memmove(v76, Src, v26);
      v77 &= ~2u;
    }
    else
    {
      v26 -= 20;
      LODWORD(v24) = v24 - 20;
      memmove(v76, Src, v26);
      v76[0] = byte_180126B68[*(unsigned __int8 *)Src];
    }
    v27 = (ACCESS_MASK *)v76;
    goto LABEL_97;
  }
LABEL_11:
  if ( !(_DWORD)v24 )
  {
LABEL_27:
    v21 = v65;
    v16 = a2;
LABEL_28:
    v36 = v64;
    goto LABEL_29;
  }
  AccessMask = Src[1];
  RtlMapGenericMask(&AccessMask, GenericMapping);
  if ( *(_BYTE *)Src <= 0xAu && (v28 = 1651, _bittest(&v28, *(unsigned __int8 *)Src)) )
    GenericAll = GenericMapping->GenericAll;
  else
    GenericAll = GenericMapping->GenericAll | 0x1000000;
  v30 = AccessMask & GenericAll;
  if ( v30 != Src[1] )
    *a15 = 1;
  v31 = v30 & 0x11FFFFF;
  if ( !v31 && !RtlEqualPrefixSid(v25, &Sid2) )
  {
    v23 = v63;
    LODWORD(v24) = 0;
    goto LABEL_27;
  }
  if ( RtlEqualPrefixSid(v25, &Sid2) )
  {
    v38 = v25[2];
    if ( v38 )
    {
      v46 = v38 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( v47 )
        {
          if ( v47 != 1 )
            goto LABEL_19;
          v39 = (ACCESS_MASK *)v67;
        }
        else
        {
          v39 = (ACCESS_MASK *)v68;
        }
      }
      else
      {
        v39 = (ACCESS_MASK *)v71;
        if ( !v71 )
          goto LABEL_19;
      }
    }
    else
    {
      v39 = (ACCESS_MASK *)v69;
    }
    v25 = v39;
    v40 = *((unsigned __int8 *)v39 + 1);
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v40 - 4;
  }
LABEL_19:
  if ( v58 && *a15 )
  {
    if ( (Src[2] & 1) != 0 )
    {
      v26 -= 16;
      LODWORD(v24) = v24 - 16;
      memmove(v76, Src, v26);
      v77 &= ~2u;
    }
    else
    {
      v26 -= 20;
      LODWORD(v24) = v24 - 20;
      memmove(v76, Src, v26);
      v76[0] = byte_180126B68[*(unsigned __int8 *)Src];
    }
    v27 = (ACCESS_MASK *)v76;
  }
  v23 = v63;
  v32 = (char *)*v63;
  if ( *v63 && (unsigned int)v24 <= v65 + *(unsigned __int16 *)(v65 + 2) - (_QWORD)v32 )
  {
    memmove(*v63, v27, v26);
    v33 = &v32[v26];
    if ( v61 )
    {
      memmove(v33, v61, 4LL * v61[1] + 8);
      v33 += 4 * v61[1] + 8;
    }
    memmove(v33, v25, 4LL * *((unsigned __int8 *)v25 + 1) + 8);
    v34 = &v33[4 * *((unsigned __int8 *)v25 + 1) + 8];
    if ( Srca && v60 > 0 )
    {
      memmove(v34, Srca, v60);
      LODWORD(v34) = v60 + (_DWORD)v34;
    }
    v23 = v63;
    v35 = (_DWORD)v34 - *(_DWORD *)v63;
    if ( (unsigned int)v24 < v35 )
      return 0;
    LODWORD(v24) = v35;
    *((_WORD *)*v63 + 1) = v35;
    *((_DWORD *)*v23 + 1) = v31;
    goto LABEL_27;
  }
  v36 = v64;
  v21 = v65;
  v16 = a2;
  *v64 = 1;
LABEL_29:
  if ( !*v36 && (_DWORD)v24 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( v16 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v21 + 4);
  }
  v18 = (_DWORD *)v66;
LABEL_35:
  if ( (unsigned int)v24 > 0xFFFF )
    return 0;
  if ( !*v36 )
    *v23 = (char *)*v23 + (unsigned int)v24;
  *v18 = v24;
  return 1;
}
