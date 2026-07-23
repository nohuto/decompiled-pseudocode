/*
 * XREFs of RtlpInheritAcl2 @ 0x14062FD60
 * Callers:
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400A8EF0 (RtlFindAceByType.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpGenerateInheritedAce @ 0x1406302F0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x140630DE0 (RtlpCopyAces.c)
 *     RtlFirstFreeAce @ 0x140631A10 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        char *a1,
        unsigned __int8 *a2,
        __int16 a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        unsigned int *a15,
        PACL Acl,
        _BYTE *a17,
        PACE a18)
{
  char v19; // r12
  unsigned int v20; // edi
  char v21; // r10
  __int64 v24; // r9
  unsigned int v25; // ebp
  unsigned int v26; // ebx
  char v27; // r8
  _BYTE *v28; // r11
  PACE v29; // rax
  int v30; // ecx
  char v31; // al
  __int64 result; // rax
  int v33; // ecx
  unsigned __int8 v34; // cl
  unsigned __int16 *v35; // rbx
  unsigned int v36; // edi
  int v37; // r15d
  unsigned int v38; // esi
  int InheritedAce; // eax
  char v40; // r8
  int v41; // edx
  int v42; // ecx
  unsigned int v43; // ebx
  __int16 v44; // dx
  __int64 v45; // rax
  int v46; // eax
  char v47; // [rsp+70h] [rbp-68h]
  char v48; // [rsp+71h] [rbp-67h]
  unsigned int v49; // [rsp+74h] [rbp-64h] BYREF
  char v50; // [rsp+78h] [rbp-60h] BYREF
  USHORT AceCount; // [rsp+7Ah] [rbp-5Eh]
  unsigned int v52; // [rsp+7Ch] [rbp-5Ch]
  int v53; // [rsp+80h] [rbp-58h]
  unsigned int v54; // [rsp+84h] [rbp-54h] BYREF
  unsigned int v55; // [rsp+88h] [rbp-50h] BYREF
  PACE Ace; // [rsp+90h] [rbp-48h] BYREF
  char v57; // [rsp+F0h] [rbp+18h]

  v48 = 1;
  v49 = 0;
  v19 = 0;
  Ace = 0LL;
  v20 = 2;
  v53 = 0;
  v57 = 0;
  v21 = a4;
  AceCount = 0;
  v24 = 0LL;
  v52 = 2;
  v25 = 0;
  v26 = *a15;
  if ( *a15 - 8 <= 0xFFF4 )
  {
    memset(Acl, 0, v26);
    v24 = v49;
    v21 = a4;
    *(_WORD *)&Acl->AclRevision = 2;
    *(_DWORD *)&Acl->AceCount = 0;
    Acl->AclSize = v26 & 0xFFFC;
  }
  v27 = a5;
  v28 = a17;
  v29 = a18;
  v30 = a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  v29->Header = (ACE_HEADER)v30;
  if ( (a3 & 8) != 0 )
    goto LABEL_20;
  if ( (a3 & 0x1000) != 0 )
  {
    v19 = 1;
    v29->Header = (ACE_HEADER)(v30 | 0x1000);
  }
  if ( (a3 & 0x1004) == 0 )
    goto LABEL_20;
  if ( a2 )
  {
    if ( *a2 >= 2u )
      v52 = *a2;
    v48 = 0;
    if ( a5 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        LOBYTE(v24) = 16;
      }
      else
      {
        v20 = 1;
        LOBYTE(v24) = 0;
      }
      v31 = 1;
    }
    else
    {
      LOBYTE(v24) = 0;
      v31 = 0;
    }
    result = RtlpCopyAces(a2, a11, v20, v24, v31, a7, a8, a9, a10, v21, 0, a12, &v49, Acl);
    LODWORD(v24) = v49;
    v25 = v49;
    if ( (_DWORD)result == -1073741789 )
    {
      v57 = 1;
    }
    else if ( (int)result < 0 )
    {
      return result;
    }
    if ( a6 && v49 )
    {
      AceCount = Acl->AceCount;
      if ( !RtlFirstFreeAce(Acl, &Ace) )
        return 3221225597LL;
      LODWORD(v24) = v49;
    }
    v27 = a5;
    v28 = a17;
LABEL_18:
    v33 = a12;
    if ( a12 == 1 )
    {
LABEL_68:
      *v28 = 1;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( !a5 )
    goto LABEL_18;
  v33 = a12;
  if ( a12 == 1 )
  {
    if ( (a3 & 0x1004) == 4 )
      return 3221225591LL;
    goto LABEL_68;
  }
LABEL_19:
  if ( v33 == 2 && ((_DWORD)v24 || v19 || a2 && !*((_WORD *)a2 + 2)) )
    goto LABEL_68;
LABEL_20:
  if ( (v27 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v27 || v19) || !a1 )
  {
    v43 = v49;
LABEL_48:
    v40 = v57;
    goto LABEL_49;
  }
  v34 = *a1;
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  if ( v52 <= v34 )
    v52 = v34;
  LOBYTE(a18) = 0;
  v35 = (unsigned __int16 *)(a1 + 8);
  v36 = 0;
  v37 = 0;
  v47 = 0;
  v38 = 0;
  if ( *((_WORD *)a1 + 2) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)v35 == 17 )
      {
        if ( a12 == 3 )
        {
          if ( RtlFindAceByType(Acl, 0x11u, 0LL) )
          {
LABEL_39:
            if ( !(_BYTE)a18 )
              break;
            v40 = v57;
            goto LABEL_71;
          }
LABEL_31:
          InheritedAce = RtlpGenerateInheritedAce(
                           v35,
                           a8,
                           a9,
                           a10,
                           a11,
                           a13,
                           a14,
                           (__int64)&v54,
                           (__int64)Acl,
                           (__int64)&v55,
                           (__int64)&v50);
          if ( InheritedAce == -1073741789 )
          {
            LOBYTE(a18) = 1;
          }
          else if ( InheritedAce < 0 )
          {
            v40 = v57;
            goto LABEL_72;
          }
          if ( v50 )
            v47 = 1;
          v37 += v54;
          if ( v54 > v36 || (v36 -= v54, v36 <= v55) )
            v36 = v55;
        }
      }
      else if ( a12 != 3 )
      {
        goto LABEL_31;
      }
      ++v38;
      v35 = (unsigned __int16 *)((char *)v35 + v35[1]);
      if ( v38 >= *((unsigned __int16 *)a1 + 2) )
        goto LABEL_39;
    }
  }
  v40 = v57;
  if ( v57 )
  {
LABEL_71:
    v53 = v36 + v37;
    InheritedAce = -1073741789;
LABEL_72:
    v41 = InheritedAce;
    if ( InheritedAce == -1073741789 )
    {
      v40 = 1;
      v57 = 1;
    }
  }
  else
  {
    v53 = v37;
    InheritedAce = 0;
    v41 = 0;
  }
  v42 = 0;
  if ( InheritedAce != -1073741789 )
    v42 = v41;
  if ( v42 < 0 )
    return (unsigned int)v42;
  v43 = v49;
  if ( a6 && v49 && v47 && !v40 )
  {
    if ( !RtlFirstFreeAce(Acl, &a18) )
      return 3221225597LL;
    v46 = (int)a18;
    if ( !a18 )
      v46 = (_DWORD)Acl + Acl->AclSize;
    memmove(&Acl[1], Ace, (unsigned int)(v46 - (_DWORD)Ace));
    v25 = 0;
    Acl->AceCount -= AceCount;
    goto LABEL_48;
  }
LABEL_49:
  v44 = v53;
  v45 = v53 + v25;
  if ( (_DWORD)v45 )
    goto LABEL_50;
  if ( !*a17 )
  {
    *a15 = 0;
    return 2147483659LL;
  }
  if ( !v48 )
  {
LABEL_50:
    if ( (unsigned __int64)(v45 + 8) <= 0xFFFF )
    {
      *a15 = v43 + v53 + 8;
      if ( v40 )
        return 3221225507LL;
      Acl->AclRevision = v52;
      Acl->AclSize = v44 + v25 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  *a15 = 0;
  return 0LL;
}
