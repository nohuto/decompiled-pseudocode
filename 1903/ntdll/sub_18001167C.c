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
        int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        _DWORD *a15,
        __int64 a16,
        _BYTE *a17,
        int *a18)
{
  __int64 v18; // rsi
  int v20; // ebx
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
  int v36; // eax
  int v37; // edx
  int v38; // eax
  char v39; // [rsp+88h] [rbp-19h]
  char v40; // [rsp+89h] [rbp-18h]
  __int16 v41; // [rsp+8Ah] [rbp-17h]
  int v42; // [rsp+8Ch] [rbp-15h] BYREF
  int v43; // [rsp+90h] [rbp-11h] BYREF
  void *Src; // [rsp+98h] [rbp-9h] BYREF

  v18 = a16;
  v42 = 0;
  v20 = 0;
  v43 = 0;
  v21 = 0;
  v41 = 0;
  Src = 0LL;
  v22 = 2;
  v39 = 0;
  v40 = 1;
  v23 = 0;
  RtlCreateAcl(a16, (unsigned int)*a15, 2LL);
  v24 = a5;
  v25 = a17;
  v26 = a3;
  v27 = a18;
  v28 = (_BYTE)a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  v29 = a3 & 8;
  a5 = v29;
  *v27 = v28;
  if ( (a3 & 8) == 0 )
  {
    if ( (a3 & 0x1000) != 0 )
    {
      v39 = 1;
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
        v30 = v39;
        if ( v37 == 2 && (v36 || v39 || a2 && !*((_WORD *)a2 + 2)) )
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
        v30 = v39;
LABEL_6:
        v29 = a5;
        goto LABEL_7;
      }
      goto LABEL_49;
    }
    v40 = 0;
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
    result = sub_18000FB7C((__int64)a2, a11, v33, v35, v34, a7, a8, a9, a10, a4, 0, a12, &v42, v18);
    v20 = v42;
    if ( (_DWORD)result == -1073741789 )
    {
      v23 = 1;
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
    if ( a6 )
    {
      if ( v42 )
      {
        v41 = *(_WORD *)(v18 + 4);
        if ( !(unsigned __int8)RtlFirstFreeAce(v18, &Src) )
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
  result = sub_180011A90(
             (_DWORD)a1,
             v29,
             v26,
             a7,
             a8,
             a9,
             a10,
             a11,
             a13,
             a14,
             a12,
             v23,
             (__int64)&v43,
             v18,
             (__int64)&a5);
  if ( (_DWORD)result == -1073741789 )
  {
    v23 = 1;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a6 && v42 && (_BYTE)a5 && !v23 )
    {
      if ( !(unsigned __int8)RtlFirstFreeAce(v18, &a18) )
        return 3221225597LL;
      v38 = (int)a18;
      if ( !a18 )
        v38 = v18 + *(unsigned __int16 *)(v18 + 2);
      memmove((void *)(v18 + 8), Src, (unsigned int)(v38 - (_DWORD)Src));
      *(_WORD *)(v18 + 4) -= v41;
      v20 = 0;
    }
    v21 = v43;
LABEL_20:
    v32 = (unsigned int)(v21 + v20);
    if ( !(_DWORD)v32 )
    {
      if ( !*a17 )
      {
        result = 2147483659LL;
LABEL_23:
        *a15 = 0;
        return result;
      }
      if ( v40 )
      {
        result = 0LL;
        goto LABEL_23;
      }
    }
    if ( (unsigned __int64)(v32 + 8) <= 0xFFFF )
    {
      *a15 = v21 + v42 + 8;
      if ( v23 )
        return 3221225507LL;
      *(_BYTE *)v18 = v22;
      *(_WORD *)(v18 + 2) = v21 + v20 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  return result;
}
