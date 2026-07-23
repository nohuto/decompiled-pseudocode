/*
 * XREFs of RtlpCopyAces @ 0x1405DC140
 * Callers:
 *     RtlpInheritAcl2 @ 0x1405DB610 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1408D27A4 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x14000ABF0 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x1405DD5F0 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  int v14; // esi
  GENERIC_MAPPING *GenericMapping; // r10
  __int64 v16; // rbp
  unsigned int *v17; // r15
  unsigned __int8 v18; // al
  char v19; // r9
  PACL v20; // rcx
  unsigned int v21; // r8d
  int *v22; // rbx
  _BYTE *v23; // rdi
  unsigned int v24; // r12d
  unsigned int v25; // r13d
  int v26; // eax
  char v27; // r15
  signed __int64 v28; // rsi
  int v29; // ecx
  GENERIC_MAPPING *v30; // rdx
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // r8d
  int GenericAll; // eax
  int v36; // ecx
  char v37; // al
  int *v38; // rbp
  bool v39; // r15
  char v40; // r8
  int v41; // edx
  char v43; // [rsp+81h] [rbp-97h]
  _WORD v44[7]; // [rsp+82h] [rbp-96h] BYREF
  __int64 v45; // [rsp+90h] [rbp-88h] BYREF
  GENERIC_MAPPING *v46; // [rsp+98h] [rbp-80h]
  int v47; // [rsp+A0h] [rbp-78h]
  void *v48[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-60h]
  __int64 v50; // [rsp+C0h] [rbp-58h]
  __int64 v51; // [rsp+C8h] [rbp-50h]
  unsigned int *v52; // [rsp+D0h] [rbp-48h]
  int v53; // [rsp+D8h] [rbp-40h]
  unsigned __int16 v54; // [rsp+DCh] [rbp-3Ch]

  v14 = a3;
  GenericMapping = a2;
  v16 = a1;
  v17 = a13;
  v51 = a7;
  v50 = a8;
  v49 = a9;
  v18 = Acl->AclRevision - 2;
  v19 = 0;
  v47 = a3;
  v46 = a2;
  *(_QWORD *)&v44[3] = a1;
  v48[1] = a6;
  v52 = a13;
  v43 = 0;
  if ( v18 > 2u )
    return 3221225560LL;
  v20 = Acl + 1;
  v21 = 0;
  v22 = 0LL;
  if ( Acl->AceCount )
  {
    do
    {
      if ( v20 >= (PACL)((char *)Acl + Acl->AclSize) )
        return 3221225597LL;
      ++v21;
      v20 = (PACL)((char *)v20 + v20->AclSize);
    }
    while ( v21 < Acl->AceCount );
    v19 = 0;
  }
  if ( v20 <= (PACL)((char *)Acl + Acl->AclSize) )
    v22 = (int *)v20;
  v23 = (_BYTE *)(v16 + 8);
  v24 = 0;
  v25 = 0;
  if ( !*(_WORD *)(v16 + 4) )
  {
LABEL_37:
    *v17 = v24;
    return v19 != 0 ? 0xC0000023 : 0;
  }
  v26 = a12;
  v27 = a4;
  while ( *v23 != 17 )
  {
    if ( v26 == 3 )
      goto LABEL_34;
LABEL_9:
    switch ( v14 )
    {
      case 0:
        if ( (v23[1] & 0x10) == 0 )
          break;
LABEL_12:
        if ( !a5 )
        {
          v28 = *((unsigned __int16 *)v23 + 1);
          if ( !v22 || v28 > (__int64)Acl + Acl->AclSize - (_QWORD)v22 )
          {
            v19 = 1;
            v43 = 1;
            v22 = (int *)((char *)Acl + Acl->AclSize);
            goto LABEL_33;
          }
          if ( !v19 )
          {
            memmove(v22, v23, *((unsigned __int16 *)v23 + 1));
            if ( (*(_BYTE *)v22 < 0xBu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u) && (*((_BYTE *)v22 + 1) & 8) == 0 )
            {
              v29 = v22[1];
              v30 = v46;
              if ( v29 < 0 )
              {
                v29 |= v46->GenericRead;
                v22[1] = v29;
              }
              if ( (v29 & 0x40000000) != 0 )
              {
                v29 |= v30->GenericWrite;
                v22[1] = v29;
              }
              if ( (v29 & 0x20000000) != 0 )
              {
                v29 |= v30->GenericExecute;
                v22[1] = v29;
              }
              if ( (v29 & 0x10000000) != 0 )
                v29 |= v30->GenericAll;
              v31 = v29 & 0xFFFFFFF;
              v22[1] = v31;
              v32 = *(unsigned __int8 *)v22;
              if ( (unsigned __int8)v32 <= 0xAu && (v33 = 1651, _bittest(&v33, v32)) )
                GenericAll = v30->GenericAll;
              else
                GenericAll = v30->GenericAll | 0x1000000;
              v22[1] = v31 & GenericAll;
            }
            *((_BYTE *)v22 + 1) &= ~v27;
            goto LABEL_31;
          }
LABEL_61:
          v22 = (int *)((char *)Acl + Acl->AclSize);
          goto LABEL_33;
        }
        v36 = 0;
        v37 = v23[1];
        v38 = v22;
        LODWORD(v45) = 0;
        LODWORD(v28) = 0;
        LOBYTE(v44[0]) = 0;
        v48[0] = v22;
        v39 = a10 && (v37 & 3) != 0;
        if ( (v37 & 8) == 0 )
        {
          if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                   v23,
                                   v51,
                                   v50,
                                   v49,
                                   GenericMapping,
                                   0LL,
                                   0,
                                   (__int64)v48,
                                   (__int64)&v45,
                                   (__int64)Acl,
                                   0LL,
                                   (__int64)v44,
                                   (__int64)v44 + 1) )
            return 3221225597LL;
          if ( HIBYTE(v44[0]) )
          {
            v19 = 1;
            v43 = 1;
          }
          else
          {
            v19 = v43;
          }
          v36 = v45;
          LODWORD(v28) = v45;
          if ( !v19 && (_DWORD)v45 )
          {
            v40 = a4;
            v38 = (int *)v48[0];
            *((_BYTE *)v22 + 1) &= ~a4;
LABEL_47:
            if ( !v39 )
              goto LABEL_48;
            v41 = *(_DWORD *)(v23 + 10);
            v53 = 0;
            v54 = 768;
            if ( !v41 )
              v41 = *((unsigned __int16 *)v23 + 7) - v54;
            if ( v36 && !LOBYTE(v44[0]) )
            {
              v16 = *(_QWORD *)&v44[3];
              v27 = a4;
              if ( !v19 )
              {
                *((_BYTE *)v22 + 1) = ~v40 & (*((_BYTE *)v22 + 1) | v23[1] & 0x1F);
                goto LABEL_32;
              }
              goto LABEL_61;
            }
            if ( *v23 > 8u || *((_DWORD *)v23 + 1) || !v41 )
            {
              LODWORD(v28) = *((unsigned __int16 *)v23 + 1) + (_DWORD)v28;
              if ( (unsigned int)v28 > 0xFFFF )
                return 3221225597LL;
              if ( *((unsigned __int16 *)v23 + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v38 )
              {
                v19 = 1;
                v43 = 1;
              }
              else if ( !v19 )
              {
                memmove(v38, v23, *((unsigned __int16 *)v23 + 1));
                v27 = a4;
                *((_BYTE *)v38 + 1) = ~a4 & (*((_BYTE *)v38 + 1) | 8);
                v16 = *(_QWORD *)&v44[3];
LABEL_31:
                v19 = v43;
                ++Acl->AceCount;
LABEL_32:
                v22 = (int *)((char *)v22 + (unsigned int)v28);
LABEL_33:
                v24 += v28;
                v14 = v47;
                break;
              }
            }
            else
            {
LABEL_48:
              if ( !v19 )
              {
                v16 = *(_QWORD *)&v44[3];
                v27 = a4;
                goto LABEL_32;
              }
            }
            v16 = *(_QWORD *)&v44[3];
            v27 = a4;
            goto LABEL_61;
          }
          v38 = (int *)v48[0];
        }
        v40 = a4;
        goto LABEL_47;
      case 1:
        if ( (v23[1] & 0x10) != 0 )
          break;
        goto LABEL_12;
      case 2:
        goto LABEL_12;
    }
LABEL_34:
    GenericMapping = v46;
    v23 += *((unsigned __int16 *)v23 + 1);
    ++v25;
    v26 = a12;
    if ( v25 >= *(unsigned __int16 *)(v16 + 4) )
      goto LABEL_35;
  }
  if ( v26 != 3 )
    goto LABEL_34;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v19 = v43;
    GenericMapping = v46;
    goto LABEL_9;
  }
LABEL_35:
  if ( v24 <= 0xFFFF )
  {
    v19 = v43;
    v17 = v52;
    goto LABEL_37;
  }
  return 3221225597LL;
}
