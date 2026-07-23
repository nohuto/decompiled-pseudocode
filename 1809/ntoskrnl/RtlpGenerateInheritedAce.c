/*
 * XREFs of RtlpGenerateInheritedAce @ 0x1406302F0
 * Callers:
 *     RtlpInheritAcl2 @ 0x14062FD60 (RtlpInheritAcl2.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlpIsDuplicateAce @ 0x14062DC00 (RtlpIsDuplicateAce.c)
 *     RtlpCopyEffectiveAce @ 0x140631420 (RtlpCopyEffectiveAce.c)
 */

__int64 RtlpGenerateInheritedAce(
        unsigned __int16 *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        int a10,
        unsigned int *a11,
        __int64 a12,
        unsigned int *a13,
        ...)
{
  __int64 v13; // r9
  unsigned int v14; // edi
  char v15; // r11
  char v16; // bp
  unsigned int v17; // r14d
  unsigned int v18; // r13d
  unsigned int v19; // r15d
  bool v20; // r12
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned __int64 v23; // rbx
  char v24; // al
  char v26; // al
  char v27; // al
  unsigned __int64 v28; // rcx
  char v29; // al
  unsigned int v30; // eax
  char v31; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+84h] [rbp-54h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-50h]
  unsigned __int16 *Srca; // [rsp+E0h] [rbp+8h]
  __int64 v35; // [rsp+E8h] [rbp+10h] BYREF
  char v36; // [rsp+F0h] [rbp+18h]
  __int64 v37; // [rsp+F8h] [rbp+20h]
  _BYTE *v38; // [rsp+148h] [rbp+70h] BYREF
  va_list va; // [rsp+148h] [rbp+70h]
  va_list va1; // [rsp+150h] [rbp+78h] BYREF

  va_start(va1, a13);
  va_start(va, a13);
  v38 = va_arg(va1, _BYTE *);
  v37 = a4;
  v36 = a3;
  Srca = Src;
  v13 = (__int64)v38;
  v14 = 0;
  v15 = 0;
  v33 = 0LL;
  v16 = 0;
  v32 = 0;
  v31 = 0;
  *v38 = 0;
  v17 = 0;
  LOBYTE(v35) = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( a2 )
  {
    v26 = *((_BYTE *)Src + 1);
    if ( (v26 & 4) == 0 && ((v26 & 1) != 0 || (v26 & 2) != 0) )
      v20 = 1;
  }
  v21 = a12;
  v22 = 0;
  v23 = a12 + 8;
  if ( *(_WORD *)(a12 + 4) )
  {
    while ( v23 < a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    {
      ++v22;
      v23 += *(unsigned __int16 *)(v23 + 2);
      if ( v22 >= *(unsigned __int16 *)(a12 + 4) )
        goto LABEL_6;
    }
    return 3221225597LL;
  }
LABEL_6:
  if ( v23 > a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    return 3221225597LL;
  v38 = (_BYTE *)v23;
  if ( !v23 )
    return 3221225597LL;
  v24 = *((_BYTE *)Src + 1);
  if ( a2 )
  {
    if ( (v24 & 2) == 0 )
      goto LABEL_10;
  }
  else if ( (v24 & 1) == 0 )
  {
    goto LABEL_10;
  }
  v33 = v23;
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           a5,
                           a6,
                           a7,
                           GenericMapping,
                           a9,
                           a10,
                           (__int64)va,
                           (__int64)&v32,
                           a12,
                           v13,
                           (__int64)&v31,
                           (__int64)&v35) )
    return 3221225597LL;
  v16 = v35;
  v19 = v32;
  if ( !(_BYTE)v35 && v32 && RtlpIsDuplicateAce(v21, v23) )
  {
    v15 = v31;
    --*(_WORD *)(v21 + 4);
    v18 = v19;
    Src = Srca;
    v19 = 0;
    v17 = 0;
  }
  else
  {
    v23 = (unsigned __int64)v38;
    v15 = v31;
    v17 = v19;
    Src = Srca;
  }
LABEL_10:
  if ( v20 )
  {
    if ( v19 && !v15 )
    {
      if ( !v16 )
      {
        v27 = *((_BYTE *)Src + 1);
        v28 = v33;
        v29 = *(_BYTE *)(v33 + 1) | v27 & 3;
        *(_BYTE *)(v33 + 1) = v29;
        if ( v36 )
          *(_BYTE *)(v28 + 1) = v29 | 0x10;
      }
      goto LABEL_11;
    }
    if ( *(_BYTE *)Src > 8u || *((_DWORD *)Src + 1) )
    {
      v17 += Src[1];
      if ( v17 <= 0xFFFF )
      {
        if ( Src[1] > (__int64)(v21 + *(unsigned __int16 *)(v21 + 2) - v23) )
        {
          v16 = 1;
        }
        else if ( !v16 )
        {
          memmove((void *)v23, Src, Src[1]);
          *(_BYTE *)(v23 + 1) |= 8u;
          ++*(_WORD *)(v21 + 4);
          if ( v36 )
          {
            *(_BYTE *)(v23 + 1) |= 0x10u;
            if ( RtlpIsDuplicateAce(v21, v23) )
            {
              --*(_WORD *)(v21 + 4);
              v30 = Srca[1];
              v17 -= v30;
              if ( v18 > v30 )
                v30 = v18;
              v18 = v30;
            }
          }
        }
        goto LABEL_11;
      }
      return 3221225597LL;
    }
  }
LABEL_11:
  *a11 = v17;
  *a13 = v18;
  if ( v16 )
    return (unsigned int)-1073741789;
  return v14;
}
