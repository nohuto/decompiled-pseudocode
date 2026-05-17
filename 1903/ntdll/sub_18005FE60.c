/*
 * XREFs of sub_18005FE60 @ 0x18005FE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180060380 @ 0x180060380 (sub_180060380.c)
 */

__int64 __fastcall sub_18005FE60(_BYTE *a1, int a2, unsigned __int8 *a3, int a4, int a5, _DWORD *a6, __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int16 *v14; // rbx
  _BYTE *v15; // r13
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // ecx
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r11
  _BYTE *v27; // rsi
  int v28; // edx
  int v29; // edx
  _DWORD *v30; // rsi
  int v31; // ecx
  unsigned __int64 v32; // r10
  char v33; // al
  __int64 v34; // rax
  unsigned __int64 v35; // r10
  int v36; // ecx
  unsigned __int64 v37; // r10
  __int16 v38; // ax
  __int64 v39; // rcx
  int v40; // edx
  int v41; // edx
  int v42; // ecx
  unsigned __int64 v43; // r10
  unsigned __int64 v45; // r10
  _BYTE *v46; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v46 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_75;
  }
  if ( (unsigned int)sub_180060380(v9, v7) )
    return 3221226050LL;
  v13 = 16LL;
  v14 = (unsigned __int16 *)(v7 + 256);
  v15 = (_BYTE *)v12;
  v16 = v14[1];
  v17 = *v14;
  v7 = (unsigned __int8 *)(v14 + 2);
  v18 = v16 + (v17 << 16);
  if ( (unsigned __int64)(v10 + 0x10000) <= v12 )
    v15 = v10 + 0x10000;
  v19 = (unsigned __int64)(v15 - 188);
  if ( v10 < v15 - 188 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v20 <= 0 )
          {
            v18 <<= 10;
            v13 -= 10LL;
            do
            {
              --v13;
              v31 = (unsigned __int64)v18 >> 31;
              v18 *= 2;
              v20 = *(_WORD *)(v9 + 2LL * (__int16)(v31 - v20) + 3104);
            }
            while ( v20 <= 0 );
          }
          else
          {
            v21 = v20 & 0xF;
            v18 <<= v21;
            v13 -= v21;
          }
          v22 = (v20 >> 4) - 256;
          if ( v13 < 0 )
          {
            if ( (unsigned __int64)v10 >= v19 )
              goto LABEL_61;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v28 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v28 << -(char)v13;
            v13 += 16LL;
          }
          if ( v22 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v46 )
          goto LABEL_75;
        v23 = v22 / 16;
        v24 = v22 % 16;
        if ( v24 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v32 = *v7++;
          if ( v32 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v35 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v35 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v35 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v35 < 0xF || &v10[v35 + 3] < v10 )
              return 3221226050LL;
            v32 = v35 - 15;
          }
          v24 = v32 + 15;
        }
        v25 = v24 + 3;
        v26 = (1LL << v23) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v23) >> 1);
        v18 <<= v23;
        v13 -= v23;
        if ( v13 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
            goto LABEL_63;
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v29 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v29 << -(char)v13;
          v13 += 16LL;
        }
        v27 = &v10[-v26];
        if ( &v10[-v26] < a1 )
          return 3221226050LL;
        if ( v26 < 4 )
          break;
LABEL_18:
        *(_DWORD *)v10 = *(_DWORD *)v27;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v27 + 1);
        if ( v25 >= 9 )
        {
          v10 += 8;
          v30 = v27 + 8;
          v25 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v30;
            *((_DWORD *)v10 + 1) = v30[1];
            *((_DWORD *)v10 + 2) = v30[2];
            *((_DWORD *)v10 + 3) = v30[3];
            if ( v25 < 0x11 )
              goto LABEL_19;
            v10 += 16;
            v30 += 4;
            v25 -= 16LL;
          }
LABEL_53:
          if ( &v10[v25] <= v46 )
          {
            qmemcpy(v10, v30, v25);
            v10 += v25;
            goto LABEL_55;
          }
          return 3221226050LL;
        }
LABEL_19:
        v10 += v25;
      }
      *v10 = *v27;
      if ( v26 == 1 )
      {
        v10[1] = *v27;
        v33 = *v27;
      }
      else
      {
        v10[1] = v27[1];
        if ( v26 == 2 )
        {
          v10 += 2;
          v34 = -2LL;
          goto LABEL_39;
        }
        v33 = v27[2];
      }
      v10[2] = v33;
      v34 = -3LL;
      v10 += 3;
LABEL_39:
      v25 += v34;
      if ( v25 )
        goto LABEL_18;
    }
  }
  while ( 1 )
  {
LABEL_55:
    if ( v10 >= v15 )
    {
      v12 = (unsigned __int64)v46;
      goto LABEL_3;
    }
    v38 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v38 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v42 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v38 = *(_WORD *)(v9 + 2LL * (__int16)(v42 - v38) + 3104);
      }
      while ( v38 <= 0 );
    }
    else
    {
      v39 = v38 & 0xF;
      v18 <<= v39;
      v13 -= v39;
    }
    v22 = (v38 >> 4) - 256;
    if ( v13 < 0 )
    {
LABEL_61:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v40 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v40 << -(char)v13;
        v13 += 16LL;
        goto LABEL_59;
      }
      return 3221226050LL;
    }
LABEL_59:
    if ( v22 >= 0 )
      break;
    *v10++ = v22;
  }
  if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v46 )
  {
LABEL_75:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v36 = v22 / 16;
  v37 = v22 % 16;
  if ( v37 != 15 )
    goto LABEL_51;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v43 = *v7++;
  if ( v43 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v45 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v45 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v45 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v45 >= 0xF && &v10[v45 + 3] >= v10 )
    {
      v43 = v45 - 15;
      goto LABEL_70;
    }
  }
  else
  {
LABEL_70:
    v37 = v43 + 15;
LABEL_51:
    v25 = v37 + 3;
    v26 = (1LL << v36) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v36) >> 1);
    v18 <<= v36;
    v13 -= v36;
    if ( v13 < 0 )
    {
LABEL_63:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v41 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v41 << -(char)v13;
      v13 += 16LL;
    }
    v30 = &v10[-v26];
    if ( &v10[-v26] >= a1 )
      goto LABEL_53;
  }
  return 3221226050LL;
}
