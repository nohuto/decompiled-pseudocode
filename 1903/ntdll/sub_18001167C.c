/*
 * XREFs of sub_18001167C @ 0x18001167C
 * Callers:
 *     sub_180011488 @ 0x180011488 (sub_180011488.c)
 * Callees:
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     sub_180011A90 @ 0x180011A90 (sub_180011A90.c)
 *     RtlFirstFreeAce @ 0x180014B00 (RtlFirstFreeAce.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18001167C(
        _BYTE *a1,
        unsigned __int8 *a2,
        int a3,
        char a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        ULONG *a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  PACL v18; // rsi
  unsigned int v20; // ebx
  int v21; // edi
  unsigned int v22; // r14d
  char v23; // r12
  char v24; // r13
  _BYTE *v25; // r9
  int v26; // r8d
  int *v27; // rax
  int v28; // ecx
  int v29; // edx
  char v30; // cl
  __int64 result; // rax
  __int64 v32; // rax
  int v33; // r8d
  char v34; // al
  char v35; // r9
  unsigned int v36; // eax
  int v37; // edx
  int v38; // eax
  __int64 v39; // [rsp+58h] [rbp-49h]
  char v40; // [rsp+88h] [rbp-19h]
  char v41; // [rsp+89h] [rbp-18h]
  WORD AceCount; // [rsp+8Ah] [rbp-17h]
  unsigned int v43; // [rsp+8Ch] [rbp-15h] BYREF
  __int64 v44; // [rsp+90h] [rbp-11h] BYREF
  PVOID FirstFree; // [rsp+98h] [rbp-9h] BYREF

  v18 = Acl;
  v43 = 0;
  v20 = 0;
  LODWORD(v44) = 0;
  v21 = 0;
  AceCount = 0;
  FirstFree = 0LL;
  v22 = 2;
  v40 = 0;
  v41 = 1;
  v23 = 0;
  RtlCreateAcl(Acl, *a15, 2u);
  v24 = a5;
  v25 = a17;
  v26 = a3;
  v27 = a18;
  v28 = (_BYTE)a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  v29 = a3 & 8;
  LODWORD(a5) = v29;
  *v27 = v28;
  if ( (a3 & 8) == 0 )
  {
    if ( (a3 & 0x1000) != 0 )
    {
      v40 = 1;
      *v27 = v28 | 0x1000;
    }
    if ( (a3 & 0x1004) == 0 )
      goto LABEL_5;
    if ( !a2 )
    {
      v36 = 0;
      if ( v24 )
      {
        v37 = a12;
        if ( a12 == 1 )
        {
          if ( (a3 & 0x1004) == 4 )
            return 3221225591LL;
          goto LABEL_44;
        }
LABEL_49:
        v30 = v40;
        if ( v37 == 2 && (v36 || v40 || a2 && !*((_WORD *)a2 + 2)) )
          *v25 = 1;
        goto LABEL_6;
      }
LABEL_43:
      v37 = a12;
      if ( a12 == 1 )
      {
LABEL_44:
        *v25 = 1;
LABEL_5:
        v30 = v40;
LABEL_6:
        v29 = a5;
        goto LABEL_7;
      }
      goto LABEL_49;
    }
    v41 = 0;
    if ( *a2 >= 2u )
      v22 = *a2;
    if ( v24 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        v33 = 2;
        v35 = 16;
        v34 = 1;
        goto LABEL_38;
      }
      v33 = 1;
      v34 = 1;
    }
    else
    {
      v33 = 2;
      v34 = 0;
    }
    v35 = 0;
LABEL_38:
    LOBYTE(v39) = 0;
    result = sub_18000FB7C((__int64)a2, a11, v33, v35, v34, a7, a8, a9, a10, a4, v39, a12, &v43, v18);
    v20 = v43;
    if ( (_DWORD)result == -1073741789 )
    {
      v23 = 1;
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
    if ( a6 )
    {
      if ( v43 )
      {
        AceCount = v18->AceCount;
        if ( !RtlFirstFreeAce(v18, &FirstFree) )
          return 3221225597LL;
      }
    }
    v26 = a3;
    v36 = v20;
    v25 = a17;
    goto LABEL_43;
  }
  v30 = 0;
LABEL_7:
  if ( (v24 || (v26 & 4) != 0) && !v29 && (!v24 || v30) || !a1 )
    goto LABEL_20;
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  LOBYTE(v26) = v24;
  LOBYTE(v29) = a4;
  if ( v22 <= (unsigned __int8)*a1 )
    LOBYTE(v22) = *a1;
  result = sub_180011A90((int)a1, v29, v26, a7, a8, a9, a10, a11, a13, a14, a12, v23, (__int64)&v44, v18, (__int64)&a5);
  if ( (_DWORD)result == -1073741789 )
  {
    v23 = 1;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a6 && v43 && (_BYTE)a5 && !v23 )
    {
      if ( !RtlFirstFreeAce(v18, (PVOID *)&a18) )
        return 3221225597LL;
      v38 = (int)a18;
      if ( !a18 )
        v38 = (_DWORD)v18 + v18->AclSize;
      memmove(&v18[1], FirstFree, (unsigned int)(v38 - (_DWORD)FirstFree));
      v18->AceCount -= AceCount;
      v20 = 0;
    }
    v21 = v44;
LABEL_20:
    v32 = v21 + v20;
    if ( !(_DWORD)v32 )
    {
      if ( !*a17 )
      {
        result = 2147483659LL;
LABEL_23:
        *a15 = 0;
        return result;
      }
      if ( v41 )
      {
        result = 0LL;
        goto LABEL_23;
      }
    }
    if ( (unsigned __int64)(v32 + 8) <= 0xFFFF )
    {
      *a15 = v21 + v43 + 8;
      if ( v23 )
        return 3221225507LL;
      v18->AclRevision = v22;
      v18->AclSize = v21 + v20 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  return result;
}
