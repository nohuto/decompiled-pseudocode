/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x1401538E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecompressBufferXpressLz(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  __int64 v7; // r14
  _BYTE *v8; // rdx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r10
  _BYTE *v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r11
  int v14; // eax
  int v15; // r9d
  unsigned __int64 v16; // rdi
  char v17; // cl
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rcx
  _BYTE *v21; // rsi
  bool v22; // sf
  _DWORD *v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  char v28; // al
  __int16 v29; // ax
  unsigned __int64 v30; // rdi
  char v31; // cl
  unsigned __int64 v32; // rcx
  void *v33; // rdi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx

  if ( a4 >= 5 )
  {
    v7 = a2;
    v8 = a1;
    v9 = (unsigned __int64)&a1[v7];
    v10 = (unsigned __int64)&a3[a4];
    v11 = 0LL;
    v12 = v9 - 352;
    v13 = v10 - 86;
LABEL_3:
    v14 = *(_DWORD *)a3;
    a3 += 4;
    if ( (unsigned __int64)v8 < v12 && (unsigned __int64)a3 < v13 )
    {
      v15 = 2 * v14 + 1;
      if ( v14 >= 0 )
      {
        while ( 1 )
        {
          if ( v15 < 0 )
          {
            *v8++ = *a3++;
            goto LABEL_8;
          }
          v22 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          if ( v22 )
          {
            *(_WORD *)v8 = *(_WORD *)a3;
            v8 += 2;
            a3 += 2;
            goto LABEL_8;
          }
          v22 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          *(_DWORD *)v8 = *(_DWORD *)a3;
          if ( v22 )
          {
            v8 += 3;
            a3 += 3;
            goto LABEL_8;
          }
          v8 += 4;
          a3 += 4;
          v22 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          if ( v22 )
            goto LABEL_8;
LABEL_15:
          v15 *= 2;
        }
      }
      while ( 1 )
      {
        v16 = *(unsigned __int16 *)a3;
        a3 += 2;
        v17 = v16;
        v18 = (v16 >> 3) + 1;
        v19 = v17 & 7;
        if ( v19 == 7 )
        {
          if ( v11 )
          {
            v24 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
            v11 = 0LL;
          }
          else
          {
            v11 = a3++;
            v24 = *v11 & 0xF;
          }
          if ( v24 == 15 )
          {
            if ( (unsigned __int64)(a3 + 7) >= v13 )
              goto LABEL_67;
            v25 = (unsigned __int8)*a3++;
            if ( v25 == 255 )
            {
              v38 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v38 )
              {
                v38 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v38 < 0x16 || &v8[v38 + 3] < v8 )
                return 3221226050LL;
              v25 = v38 - 22;
            }
            v24 = v25 + 15;
          }
          v19 = v24 + 7;
        }
        v20 = v19 + 3;
        v21 = &v8[-v18];
        if ( &v8[-v18] < a1 )
          return 3221226050LL;
        if ( v18 >= 4 )
        {
LABEL_12:
          *(_DWORD *)v8 = *(_DWORD *)v21;
          *((_DWORD *)v8 + 1) = *((_DWORD *)v21 + 1);
          if ( v20 >= 9 )
          {
            v8 += 8;
            v23 = v21 + 8;
            for ( v20 -= 8LL; ; v20 -= 16LL )
            {
              if ( (unsigned __int64)v8 >= v12 )
                goto LABEL_58;
              *(_DWORD *)v8 = *v23;
              *((_DWORD *)v8 + 1) = v23[1];
              *((_DWORD *)v8 + 2) = v23[2];
              *((_DWORD *)v8 + 3) = v23[3];
              if ( v20 < 17 )
                break;
              v8 += 16;
              v23 += 4;
            }
          }
          v8 += v20;
          goto LABEL_14;
        }
        *v8 = *v21;
        v26 = v18 - 1;
        if ( v26 )
        {
          v8[1] = v21[1];
          if ( v26 == 1 )
          {
            v8 += 2;
            v27 = -2LL;
            goto LABEL_40;
          }
          v28 = v21[2];
        }
        else
        {
          v8[1] = *v21;
          v28 = *v21;
        }
        v8[2] = v28;
        v27 = -3LL;
        v8 += 3;
LABEL_40:
        v20 += v27;
        if ( v20 )
          goto LABEL_12;
LABEL_14:
        if ( v15 >= 0 )
          goto LABEL_15;
LABEL_8:
        v15 *= 2;
        if ( !v15 )
          goto LABEL_3;
      }
    }
LABEL_44:
    v15 = 2 * v14 + 1;
    if ( v14 < 0 )
    {
      while ( 1 )
      {
        if ( a3 == (_BYTE *)v10 )
          goto LABEL_70;
        if ( (unsigned __int64)(a3 + 1) >= v10 )
          break;
        v30 = *(unsigned __int16 *)a3;
        a3 += 2;
        v31 = v30;
        v18 = (v30 >> 3) + 1;
        v32 = v31 & 7;
        if ( v32 == 7 )
        {
          if ( v11 )
          {
            v34 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
            v11 = 0LL;
          }
          else
          {
            if ( (unsigned __int64)a3 >= v10 )
              return 3221226050LL;
            v11 = a3++;
            v34 = *v11 & 0xF;
          }
          if ( v34 == 15 )
          {
LABEL_67:
            if ( (unsigned __int64)a3 >= v10 )
              return 3221226050LL;
            v35 = (unsigned __int8)*a3++;
            if ( v35 == 255 )
            {
              if ( (unsigned __int64)(a3 + 1) >= v10 )
                return 3221226050LL;
              v37 = *(unsigned __int16 *)a3;
              a3 += 2;
              if ( !v37 )
              {
                if ( (unsigned __int64)(a3 + 3) >= v10 )
                  return 3221226050LL;
                v37 = *(unsigned int *)a3;
                a3 += 4;
              }
              if ( v37 < 0x16 || &v8[v37 + 3] < v8 )
                return 3221226050LL;
              v35 = v37 - 22;
            }
            v34 = v35 + 15;
          }
          v32 = v34 + 7;
        }
        v20 = v32 + 3;
        v23 = &v8[-v18];
        if ( &v8[-v18] < a1 )
          return 3221226050LL;
LABEL_58:
        if ( (unsigned __int64)&v8[v20] > v9 )
          return 3221226050LL;
        v33 = v8;
        v8 += v20;
        qmemcpy(v33, v23, v20);
        if ( v15 >= 0 )
        {
          v15 *= 2;
          goto LABEL_45;
        }
LABEL_53:
        v15 *= 2;
        if ( !v15 )
        {
          if ( (unsigned __int64)(a3 + 3) >= v10 )
            return 3221226050LL;
          v14 = *(_DWORD *)a3;
          a3 += 4;
          goto LABEL_44;
        }
      }
      if ( (unsigned __int64)v8 >= v9 )
      {
LABEL_70:
        *a6 = (_DWORD)v8 - (_DWORD)a1;
        return 0LL;
      }
    }
    else
    {
LABEL_45:
      if ( v15 < 0 )
      {
LABEL_50:
        if ( (unsigned __int64)a3 < v10 && (unsigned __int64)v8 < v9 )
        {
          *v8++ = *a3++;
          goto LABEL_53;
        }
      }
      else
      {
        while ( 1 )
        {
          v15 *= 2;
          if ( (unsigned __int64)(a3 + 2) > v10 || (unsigned __int64)(v8 + 2) > v9 )
            break;
          v29 = *(_WORD *)a3;
          a3 += 2;
          *(_WORD *)v8 = v29;
          v8 += 2;
          if ( v15 < 0 )
            goto LABEL_53;
          v22 = (v15 & 0x40000000) != 0;
          v15 *= 2;
          if ( v22 )
            goto LABEL_50;
        }
      }
    }
  }
  return 3221226050LL;
}
