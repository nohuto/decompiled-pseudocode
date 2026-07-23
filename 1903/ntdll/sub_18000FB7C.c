/*
 * XREFs of sub_18000FB7C @ 0x18000FB7C
 * Callers:
 *     sub_18001167C @ 0x18001167C (sub_18001167C.c)
 *     sub_1800888A8 @ 0x1800888A8 (sub_1800888A8.c)
 * Callees:
 *     sub_180012128 @ 0x180012128 (sub_180012128.c)
 *     RtlMapGenericMask @ 0x180012690 (RtlMapGenericMask.c)
 *     RtlFindAceByType @ 0x1800126F0 (RtlFindAceByType.c)
 *     RtlFirstFreeAce @ 0x180014B00 (RtlFirstFreeAce.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18000FB7C(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  char v14; // r14
  PGENERIC_MAPPING v15; // r15
  unsigned int *v16; // r13
  unsigned __int8 v18; // al
  _BYTE *v19; // rsi
  unsigned int v20; // ebx
  unsigned int v21; // edx
  ACCESS_MASK *v22; // rdi
  bool v23; // al
  int v25; // edx
  char v26; // al
  _BYTE *v27; // rbx
  signed __int64 v28; // r13
  char v29; // r15
  char v30; // r8
  int v31; // ecx
  int GenericAll; // eax
  int v33; // ecx
  _BYTE v35[11]; // [rsp+89h] [rbp-68h] BYREF
  int v36; // [rsp+94h] [rbp-5Dh]
  PVOID FirstFree; // [rsp+98h] [rbp-59h] BYREF
  int v38; // [rsp+A0h] [rbp-51h]
  PGENERIC_MAPPING GenericMapping; // [rsp+A8h] [rbp-49h]
  __int64 v40; // [rsp+B0h] [rbp-41h]
  __int64 v41; // [rsp+B8h] [rbp-39h]
  __int64 v42; // [rsp+C0h] [rbp-31h]
  __int64 v43; // [rsp+C8h] [rbp-29h]
  __int64 v44; // [rsp+D0h] [rbp-21h]
  unsigned int *v45; // [rsp+D8h] [rbp-19h]
  int v46; // [rsp+E0h] [rbp-11h]
  unsigned __int16 v47; // [rsp+E4h] [rbp-Dh]

  v14 = 0;
  v15 = a2;
  v16 = a13;
  v43 = a6;
  v42 = a7;
  v41 = a8;
  v40 = a9;
  v18 = Acl->AclRevision - 2;
  v38 = a3;
  GenericMapping = a2;
  v44 = a1;
  v45 = a13;
  if ( v18 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225597LL;
  v19 = (_BYTE *)(a1 + 8);
  v20 = 0;
  v21 = 0;
  v36 = 0;
  *(_DWORD *)&v35[3] = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_14;
  v22 = (ACCESS_MASK *)FirstFree;
  while ( *v19 != 17 )
  {
    if ( a12 == 3 )
      goto LABEL_11;
LABEL_7:
    switch ( v38 )
    {
      case 0:
        if ( (v19[1] & 0x10) == 0 )
        {
          v23 = 0;
LABEL_10:
          if ( v23 )
            goto LABEL_16;
          break;
        }
LABEL_16:
        if ( !a5 )
        {
          v28 = *((unsigned __int16 *)v19 + 1);
          if ( v22 && v28 <= (__int64)Acl + Acl->AclSize - (_QWORD)v22 )
          {
            if ( !v14 )
            {
              memmove(v22, v19, *((unsigned __int16 *)v19 + 1));
              if ( (*(_BYTE *)v22 <= 0xAu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
                && (*((_BYTE *)v22 + 1) & 8) == 0 )
              {
                RtlMapGenericMask(v22 + 1, v15);
                if ( *(_BYTE *)v22 <= 0xAu && (v31 = 1651, _bittest(&v31, *(unsigned __int8 *)v22)) )
                  GenericAll = v15->GenericAll;
                else
                  GenericAll = v15->GenericAll | 0x1000000;
                v22[1] &= GenericAll;
              }
              *((_BYTE *)v22 + 1) &= ~a4;
              ++Acl->AceCount;
              goto LABEL_29;
            }
            goto LABEL_44;
          }
          v14 = 1;
          goto LABEL_28;
        }
        v25 = 0;
        v26 = v19[1];
        v27 = v22;
        *(_DWORD *)&v35[7] = 0;
        LODWORD(v28) = 0;
        FirstFree = v22;
        v35[0] = 0;
        if ( !a10 || (v29 = 1, (v26 & 3) == 0) )
          v29 = 0;
        if ( (v26 & 8) == 0 )
        {
          if ( !(unsigned __int8)sub_180012128(
                                   v19,
                                   v42,
                                   v41,
                                   v40,
                                   GenericMapping,
                                   0LL,
                                   0,
                                   (__int64)&FirstFree,
                                   (__int64)&v35[7],
                                   (__int64)Acl,
                                   0LL,
                                   (__int64)v35,
                                   (__int64)&v35[1]) )
            return 3221225597LL;
          v25 = *(_DWORD *)&v35[7];
          LODWORD(v28) = *(_DWORD *)&v35[7];
          if ( v35[1] )
            v14 = 1;
          if ( !v14 && *(_DWORD *)&v35[7] )
          {
            v30 = a4;
            v27 = FirstFree;
            *((_BYTE *)v22 + 1) &= ~a4;
            goto LABEL_27;
          }
          v27 = FirstFree;
        }
        v30 = a4;
LABEL_27:
        if ( v29 )
        {
          v46 = 0;
          v33 = *(_DWORD *)(v19 + 10);
          v47 = 768;
          if ( !v33 )
            v33 = *((unsigned __int16 *)v19 + 7) - v47;
          if ( v25 && !v35[0] )
          {
            if ( !v14 )
            {
              *((_BYTE *)v22 + 1) = ~v30 & (*((_BYTE *)v22 + 1) | v19[1] & 0x1F);
              goto LABEL_29;
            }
LABEL_44:
            v22 = (ACCESS_MASK *)((char *)Acl + Acl->AclSize);
            goto LABEL_30;
          }
          if ( *v19 > 8u || *((_DWORD *)v19 + 1) || !v33 )
          {
            LODWORD(v28) = *((unsigned __int16 *)v19 + 1) + (_DWORD)v28;
            if ( (unsigned int)v28 > 0xFFFF )
              return 3221225597LL;
            if ( *((unsigned __int16 *)v19 + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v27 )
            {
              v14 = 1;
              goto LABEL_44;
            }
            if ( v14 )
              goto LABEL_44;
            memmove(v27, v19, *((unsigned __int16 *)v19 + 1));
            v27[1] = ~a4 & (v27[1] | 8);
            ++Acl->AceCount;
          }
        }
LABEL_28:
        if ( !v14 )
        {
LABEL_29:
          v22 = (ACCESS_MASK *)((char *)v22 + (unsigned int)v28);
LABEL_30:
          v15 = GenericMapping;
          v20 = v28 + v36;
          v21 = *(_DWORD *)&v35[3];
          v36 += v28;
          break;
        }
        goto LABEL_44;
      case 1:
        v23 = (v19[1] & 0x10) == 0;
        goto LABEL_10;
      case 2:
        goto LABEL_16;
    }
LABEL_11:
    ++v21;
    v19 += *((unsigned __int16 *)v19 + 1);
    *(_DWORD *)&v35[3] = v21;
    if ( v21 >= *(unsigned __int16 *)(v44 + 4) )
      goto LABEL_12;
  }
  if ( a12 != 3 )
    goto LABEL_11;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v21 = *(_DWORD *)&v35[3];
    goto LABEL_7;
  }
LABEL_12:
  if ( v20 > 0xFFFF )
    return 3221225597LL;
  v16 = v45;
LABEL_14:
  *v16 = v20;
  return v14 != 0 ? 0xC0000023 : 0;
}
