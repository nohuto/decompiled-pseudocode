/*
 * XREFs of RtlpCopyAces @ 0x1800450E0
 * Callers:
 *     RtlpInheritAcl2 @ 0x180043E9C (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x18008B87C (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180040DD0 (RtlFirstFreeAce.c)
 *     RtlpCopyEffectiveAce @ 0x18004494C (RtlpCopyEffectiveAce.c)
 *     RtlMapGenericMask @ 0x180044EB0 (RtlMapGenericMask.c)
 *     RtlFindAceByType @ 0x180044F10 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        _DWORD *a13,
        __int64 a14)
{
  char v14; // r14
  _DWORD *v15; // r15
  _DWORD *v16; // r13
  unsigned __int8 v18; // al
  _BYTE *v19; // rsi
  unsigned int v20; // ebx
  unsigned int v21; // edx
  int *v22; // rdi
  bool v23; // al
  int v25; // edx
  char v26; // al
  _BYTE *v27; // rbx
  __int64 v28; // r13
  char v29; // r15
  char v30; // cl
  char v31; // r8
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  _BYTE v36[11]; // [rsp+89h] [rbp-68h] BYREF
  int v37; // [rsp+94h] [rbp-5Dh]
  void *v38; // [rsp+98h] [rbp-59h] BYREF
  int v39; // [rsp+A0h] [rbp-51h]
  __int64 v40; // [rsp+A8h] [rbp-49h]
  __int64 v41; // [rsp+B0h] [rbp-41h]
  __int64 v42; // [rsp+B8h] [rbp-39h]
  __int64 v43; // [rsp+C0h] [rbp-31h]
  __int64 v44; // [rsp+C8h] [rbp-29h]
  __int64 v45; // [rsp+D0h] [rbp-21h]
  __int64 v46; // [rsp+D8h] [rbp-19h]
  int v47; // [rsp+E0h] [rbp-11h]
  unsigned __int16 v48; // [rsp+E4h] [rbp-Dh]

  v14 = 0;
  v15 = (_DWORD *)a2;
  v16 = a13;
  v44 = a6;
  v43 = a7;
  v42 = a8;
  v41 = a9;
  v18 = *(_BYTE *)a14 - 2;
  v39 = a3;
  v40 = a2;
  v45 = a1;
  v46 = (__int64)a13;
  if ( v18 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(a14, &v38) )
    return 3221225597LL;
  v19 = (_BYTE *)(a1 + 8);
  v20 = 0;
  v21 = 0;
  v37 = 0;
  *(_DWORD *)&v36[3] = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_14;
  v22 = (int *)v38;
  while ( *v19 != 17 )
  {
    if ( a12 == 3 )
      goto LABEL_11;
LABEL_7:
    switch ( v39 )
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
          if ( v22 && v28 <= a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v22 )
          {
            if ( !v14 )
            {
              memmove(v22, v19, *((unsigned __int16 *)v19 + 1));
              if ( (*(_BYTE *)v22 <= 0xAu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
                && (*((_BYTE *)v22 + 1) & 8) == 0 )
              {
                RtlMapGenericMask(v22 + 1, v15);
                if ( *(_BYTE *)v22 <= 0xAu && (v32 = 1651, _bittest(&v32, *(unsigned __int8 *)v22)) )
                  v33 = v15[3];
                else
                  v33 = v15[3] | 0x1000000;
                v22[1] &= v33;
              }
              *((_BYTE *)v22 + 1) &= ~a4;
              ++*(_WORD *)(a14 + 4);
              goto LABEL_31;
            }
            goto LABEL_46;
          }
          v14 = 1;
          goto LABEL_30;
        }
        v25 = 0;
        v26 = v19[1];
        v27 = v22;
        *(_DWORD *)&v36[7] = 0;
        LODWORD(v28) = 0;
        v38 = v22;
        v36[0] = 0;
        if ( !a10 || (v29 = 1, (v26 & 3) == 0) )
          v29 = 0;
        if ( (v26 & 8) == 0 )
        {
          v30 = 0;
          if ( a11 )
            v30 = (v26 & 0x10) != 0;
          if ( !RtlpCopyEffectiveAce(
                  (unsigned __int16 *)v19,
                  v30,
                  v29,
                  v44,
                  (unsigned __int8 *)v43,
                  v42,
                  v41,
                  v40,
                  0LL,
                  0,
                  &v38,
                  &v36[7],
                  a14,
                  0LL,
                  v36,
                  (unsigned __int16 *)&v36[1]) )
            return 3221225597LL;
          v25 = *(_DWORD *)&v36[7];
          LODWORD(v28) = *(_DWORD *)&v36[7];
          if ( v36[1] )
            v14 = 1;
          if ( !v14 && *(_DWORD *)&v36[7] )
          {
            v31 = a4;
            v27 = v38;
            *((_BYTE *)v22 + 1) &= ~a4;
            goto LABEL_29;
          }
          v27 = v38;
        }
        v31 = a4;
LABEL_29:
        if ( v29 )
        {
          v47 = 0;
          v34 = *(_DWORD *)(v19 + 10);
          v48 = 768;
          if ( !v34 )
            v34 = *((unsigned __int16 *)v19 + 7) - v48;
          if ( v25 && !v36[0] )
          {
            if ( !v14 )
            {
              *((_BYTE *)v22 + 1) = ~v31 & (*((_BYTE *)v22 + 1) | v19[1] & 0x1F);
              goto LABEL_31;
            }
LABEL_46:
            v22 = (int *)(a14 + *(unsigned __int16 *)(a14 + 2));
            goto LABEL_32;
          }
          if ( *v19 > 8u || *((_DWORD *)v19 + 1) || !v34 )
          {
            LODWORD(v28) = *((unsigned __int16 *)v19 + 1) + (_DWORD)v28;
            if ( (unsigned int)v28 > 0xFFFF )
              return 3221225597LL;
            if ( *((unsigned __int16 *)v19 + 1) > a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v27 )
            {
              v14 = 1;
              goto LABEL_46;
            }
            if ( v14 )
              goto LABEL_46;
            memmove(v27, v19, *((unsigned __int16 *)v19 + 1));
            v27[1] = ~a4 & (v27[1] | 8);
            ++*(_WORD *)(a14 + 4);
          }
        }
LABEL_30:
        if ( !v14 )
        {
LABEL_31:
          v22 = (int *)((char *)v22 + (unsigned int)v28);
LABEL_32:
          v15 = (_DWORD *)v40;
          v20 = v28 + v37;
          v21 = *(_DWORD *)&v36[3];
          v37 += v28;
          break;
        }
        goto LABEL_46;
      case 1:
        v23 = (v19[1] & 0x10) == 0;
        goto LABEL_10;
      case 2:
        goto LABEL_16;
    }
LABEL_11:
    ++v21;
    v19 += *((unsigned __int16 *)v19 + 1);
    *(_DWORD *)&v36[3] = v21;
    if ( v21 >= *(unsigned __int16 *)(v45 + 4) )
      goto LABEL_12;
  }
  if ( a12 != 3 )
    goto LABEL_11;
  if ( !RtlFindAceByType(a14, 17, 0LL) )
  {
    v21 = *(_DWORD *)&v36[3];
    goto LABEL_7;
  }
LABEL_12:
  if ( v20 > 0xFFFF )
    return 3221225597LL;
  v16 = (_DWORD *)v46;
LABEL_14:
  *v16 = v20;
  return v14 != 0 ? 0xC0000023 : 0;
}
