/*
 * XREFs of RtlpCopyEffectiveAce @ 0x140631420
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x1406302F0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x140630DE0 (RtlpCopyAces.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlEqualPrefixSid @ 0x140631800 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x14063FD50 (RtlMapGenericMask.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        void **a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  char v17; // r12
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int8 v20; // cl
  __int64 v21; // rbx
  unsigned int v22; // eax
  int v23; // ecx
  ACCESS_MASK GenericAll; // eax
  ACCESS_MASK v25; // eax
  PSID v26; // r11
  __int64 v27; // r11
  _BYTE *v28; // rax
  char *v29; // rdx
  char *v30; // r12
  __int64 v31; // rdi
  char *v32; // r12
  unsigned __int8 *v33; // rdi
  unsigned __int8 *v34; // rdi
  char *v35; // r12
  unsigned int v36; // r12d
  int v38; // eax
  unsigned __int8 *v39; // rax
  int v40; // ebx
  ACCESS_MASK *v41; // rax
  int v42; // edi
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  unsigned __int8 *v48; // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r10
  int v52; // ecx
  int v53; // r11d
  unsigned __int16 *v54; // r10
  void **v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rcx
  unsigned int v58; // eax
  unsigned int v59; // eax
  char v60; // [rsp+20h] [rbp-B9h]
  ACCESS_MASK v63; // [rsp+24h] [rbp-B5h]
  int v64; // [rsp+24h] [rbp-B5h]
  ACCESS_MASK AccessMask; // [rsp+2Ch] [rbp-ADh] BYREF
  _BYTE *v66; // [rsp+30h] [rbp-A9h]
  size_t Size; // [rsp+38h] [rbp-A1h]
  PSID Sid1; // [rsp+40h] [rbp-99h]
  void *Srca; // [rsp+48h] [rbp-91h]
  void *v70; // [rsp+50h] [rbp-89h]
  int v71; // [rsp+58h] [rbp-81h]
  unsigned __int8 *v72; // [rsp+60h] [rbp-79h]
  unsigned __int8 *v73; // [rsp+68h] [rbp-71h]
  __int64 v74; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v75; // [rsp+78h] [rbp-61h]
  void *v76; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v78; // [rsp+8Ah] [rbp-4Fh]
  __int16 v79; // [rsp+8Eh] [rbp-4Bh]
  int v80; // [rsp+90h] [rbp-49h]
  char v81[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v82; // [rsp+C0h] [rbp-19h]

  v17 = a2;
  v18 = a4;
  v78 = 0;
  v79 = 768;
  v75 = (unsigned __int8 *)a4;
  if ( a6 )
    v18 = a6;
  v73 = (unsigned __int8 *)v18;
  v19 = a5;
  if ( a7 )
    v19 = a7;
  v74 = a5;
  v72 = (unsigned __int8 *)v19;
  v66 = a15;
  v60 = 0;
  Sid2 = 257;
  v80 = 0;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v20 = *(_BYTE *)Src;
  v21 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(v20 - 13) > 1u )
  {
    if ( v21 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
      goto LABEL_28;
    }
LABEL_43:
    *a16 = 1;
    goto LABEL_33;
  }
  v70 = 0LL;
  v76 = 0LL;
  v71 = 0;
  if ( v20 <= 3u )
  {
    Srca = Src;
    Sid1 = Src + 2;
    Size = 8LL;
    goto LABEL_10;
  }
  if ( ((v20 - 9) & 0xFA) == 0 )
  {
    Size = 8LL;
    Sid1 = Src + 2;
    v76 = (char *)Src + RtlLengthSid(Src + 2) + 8;
    v71 = v21 - RtlLengthSid(Src + 2) - 8;
    goto LABEL_48;
  }
  if ( v20 == 4 )
  {
    v70 = Src + 3;
    Size = 12LL;
    Sid1 = (char *)Src + RtlLengthSid(Src + 3) + 12;
    if ( RtlEqualPrefixSid(Src + 3, &Sid2) )
    {
      v45 = *((_DWORD *)v70 + 2);
      if ( !v45 )
      {
        v48 = v75;
        goto LABEL_67;
      }
      v46 = v45 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( !v47 )
        {
          v48 = v73;
          goto LABEL_67;
        }
        if ( v47 == 1 )
        {
          v48 = v72;
LABEL_67:
          v70 = v48;
          LODWORD(v21) = v21 + 4 * v48[1] - 4;
          *v66 = 1;
          goto LABEL_48;
        }
      }
      else
      {
        v48 = (unsigned __int8 *)v74;
        if ( v74 )
          goto LABEL_67;
      }
      if ( *v66 )
        goto LABEL_48;
      v49 = *((unsigned __int8 *)v70 + 1);
      v70 = 0LL;
    }
    else
    {
      v49 = *((unsigned __int8 *)Src + 13);
      v70 = 0LL;
    }
    Size = (unsigned int)(4 * v49 + 20);
    goto LABEL_48;
  }
  v50 = 7LL;
  v51 = 4LL * (Src[2] & 1);
  v52 = Src[2] & 2;
  if ( !v52 )
    v50 = 3LL;
  Sid1 = &Src[v51 + v50];
  v53 = v51 * 4 + v50 * 4;
  Size = (unsigned int)(v51 * 4 + v50 * 4);
  if ( v52 )
    v54 = (unsigned __int16 *)&Src[v51 + 3];
  else
    v54 = 0LL;
  Srca = Src;
  if ( a14 )
  {
    Srca = Src;
    if ( v54 )
    {
      v55 = a9;
      if ( !a9 || (AccessMask = 0, !a10) )
      {
LABEL_87:
        LODWORD(v21) = 0;
        goto LABEL_35;
      }
      while ( 1 )
      {
        v56 = *(_QWORD *)v54;
        Srca = *v55;
        v57 = v56 - *(_QWORD *)Srca;
        if ( !v57 )
          v57 = *((_QWORD *)v54 + 1) - *((_QWORD *)Srca + 1);
        if ( !v57 )
          break;
        ++v55;
        if ( ++AccessMask >= a10 )
          goto LABEL_87;
      }
      *a14 = 1;
      if ( !a3 )
      {
        *a15 = 1;
        if ( (Src[2] & 1) != 0 )
        {
          LODWORD(v21) = v21 - 16;
          Size = (unsigned int)(v53 - 16);
          memmove(v81, Src, (unsigned int)Size);
          v82 &= ~2u;
        }
        else
        {
          LODWORD(v21) = v21 - 20;
          Size = (unsigned int)(v53 - 20);
          memmove(v81, Src, (unsigned int)Size);
          v81[0] = *((_BYTE *)&RtlBaseAceType + *(unsigned __int8 *)Src);
        }
        v41 = (ACCESS_MASK *)v81;
        goto LABEL_49;
      }
      v60 = 1;
LABEL_48:
      v41 = Src;
LABEL_49:
      Srca = v41;
    }
  }
LABEL_10:
  if ( (_DWORD)v21 )
  {
    v63 = Src[1];
    AccessMask = v63;
    RtlMapGenericMask(&AccessMask, GenericMapping);
    v22 = *(unsigned __int8 *)Src;
    if ( (unsigned __int8)v22 <= 0xAu && (v23 = 1651, _bittest(&v23, v22)) )
      GenericAll = GenericMapping->GenericAll;
    else
      GenericAll = GenericMapping->GenericAll | 0x1000000;
    v25 = AccessMask & GenericAll;
    if ( v25 != v63 )
      *v66 = 1;
    v26 = Sid1;
    v64 = v25 & 0x11FFFFF;
    if ( (v25 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(Sid1, &Sid2) )
    {
      LODWORD(v21) = 0;
      goto LABEL_28;
    }
    if ( !RtlEqualPrefixSid(v26, &Sid2) )
      goto LABEL_18;
    v38 = *(_DWORD *)(v27 + 8);
    if ( !v38 )
    {
      v39 = v75;
LABEL_42:
      Sid1 = v39;
      v40 = v21 + 4 * v39[1];
      v28 = v66;
      LODWORD(v21) = v40 - 4;
      *v66 = 1;
      goto LABEL_19;
    }
    v43 = v38 - 1;
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( !v44 )
      {
        v39 = v73;
        goto LABEL_42;
      }
      if ( v44 == 1 )
      {
        v39 = v72;
        goto LABEL_42;
      }
    }
    else
    {
      v39 = (unsigned __int8 *)v74;
      if ( v74 )
        goto LABEL_42;
    }
LABEL_18:
    v28 = v66;
LABEL_19:
    if ( v60 && *v28 )
    {
      if ( (Src[2] & 1) != 0 )
      {
        v58 = Size - 16;
        LODWORD(v21) = v21 - 16;
        Size = (unsigned int)(Size - 16);
        memmove(v81, Src, v58);
        v82 &= ~2u;
        v29 = v81;
      }
      else
      {
        v59 = Size - 20;
        LODWORD(v21) = v21 - 20;
        Size = (unsigned int)(Size - 20);
        memmove(v81, Src, v59);
        v29 = v81;
        v81[0] = *((_BYTE *)&RtlBaseAceType + *(unsigned __int8 *)Src);
      }
    }
    else
    {
      v29 = (char *)Srca;
    }
    v30 = (char *)*a11;
    if ( *a11 && (unsigned int)v21 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v30 )
    {
      v31 = (unsigned int)Size;
      memmove(*a11, v29, (unsigned int)Size);
      v32 = &v30[v31];
      v33 = (unsigned __int8 *)v70;
      if ( v70 )
      {
        memmove(v32, v70, 4LL * *((unsigned __int8 *)v70 + 1) + 8);
        v32 += 4 * v33[1] + 8;
      }
      v34 = (unsigned __int8 *)Sid1;
      memmove(v32, Sid1, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8);
      v35 = &v32[4 * v34[1] + 8];
      if ( v76 && v71 > 0 )
      {
        v42 = v71;
        memmove(v35, v76, v71);
        LODWORD(v35) = v42 + (_DWORD)v35;
      }
      v36 = (_DWORD)v35 - *(_DWORD *)a11;
      if ( (unsigned int)v21 < v36 )
        return 0;
      LODWORD(v21) = v36;
      v17 = a2;
      *((_WORD *)*a11 + 1) = v21;
      *((_DWORD *)*a11 + 1) = v64;
      goto LABEL_28;
    }
    goto LABEL_43;
  }
LABEL_28:
  if ( !*a16 && (_DWORD)v21 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( v17 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_33:
  if ( (unsigned int)v21 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_36:
      *a12 = v21;
      return 1;
    }
LABEL_35:
    *a11 = (char *)*a11 + (unsigned int)v21;
    goto LABEL_36;
  }
  return 0;
}
