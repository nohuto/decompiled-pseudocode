/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x180109B10
 * Callers:
 *     RtlCompressBufferXpressLz @ 0x180109430 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x18010A204 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int8 *v6; // rbp
  unsigned __int64 i; // r11
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r9
  unsigned __int8 *v10; // rsi
  unsigned __int8 *v11; // r8
  int v12; // r14d
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // r12
  unsigned __int8 *v15; // r15
  __int64 v16; // r13
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rbp
  unsigned __int8 *v20; // r8
  unsigned __int8 v21; // cl
  unsigned __int8 *v22; // rdi
  __int64 v23; // rax
  unsigned __int8 v24; // al
  unsigned __int8 v25; // r9
  unsigned __int8 v26; // r10
  __int64 v27; // rdx
  unsigned __int8 *v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // bp
  unsigned __int8 v31; // r12
  __int64 v32; // rdx
  unsigned __int8 *v33; // rcx
  unsigned __int8 v34; // al
  unsigned __int8 v35; // r12
  unsigned __int8 v36; // r13
  unsigned __int64 v37; // rdx
  unsigned __int8 *v38; // rcx
  __int64 v39; // rax
  unsigned __int8 v40; // al
  unsigned __int64 v41; // rcx
  __int16 v42; // ax
  int v43; // ecx
  int v44; // eax
  unsigned __int64 v45; // rcx
  unsigned __int8 *v46; // rax
  unsigned __int8 v47; // al
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  __int64 XpressCallback; // rax
  unsigned int v51; // esi
  unsigned __int64 v53; // [rsp+20h] [rbp-78h]
  unsigned __int64 v54; // [rsp+28h] [rbp-70h]
  unsigned __int8 *v55; // [rsp+30h] [rbp-68h]
  unsigned __int64 v56; // [rsp+38h] [rbp-60h]
  _QWORD v57[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-48h]
  unsigned __int8 *v59; // [rsp+A0h] [rbp+8h]
  int v60; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v61; // [rsp+D0h] [rbp+38h]
  unsigned __int64 v62; // [rsp+D8h] [rbp+40h]

  v60 = (int)a3;
  v6 = a3;
  i = (unsigned __int64)&a1[a2];
  v8 = (unsigned __int64)&a3[a4];
  v61 = i;
  v56 = v8;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v9 = i - 38;
  v62 = i - 38;
  v54 = v8 - 41;
  v10 = a3 + 5;
  v58 = a2;
  v59 = 0LL;
  v11 = (unsigned __int8 *)(i - 38);
  v57[0] = 0LL;
  if ( i - 38 >= i )
    v11 = &a1[a2];
  v57[1] = 0LL;
  v53 = (unsigned __int64)v11;
  v12 = 2;
  v13 = a1 + 1;
  v14 = 0LL;
  v15 = v6;
  v6[4] = *a1;
  if ( a2 < 0x40 )
    goto LABEL_19;
  v16 = a6;
  v17 = (unsigned __int64)v11;
  memset64((void *)a6, (unsigned __int64)a1, 0xAF6uLL);
  memset64((void *)(a6 + 22448), (unsigned __int64)a1, 0x12EEuLL);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = v16 + 8LL * *v13;
        v19 = v13[2] + 4LL * v13[1];
        v20 = *(unsigned __int8 **)(v18 + 16 * v19);
        *(_QWORD *)(v18 + 16 * v19) = v13;
        v21 = *v13;
        if ( *v20 != *v13 || v20[1] != v13[1] || v20[2] != v13[2] || v13 - v20 >= 0x2000 )
          break;
        v25 = v13[3];
        v26 = v20[3];
        v55 = v13;
        if ( v25 != v26 )
        {
          v27 = v21 + 2 * v19;
          v28 = *(unsigned __int8 **)(v16 + 8 * (v27 + v25) + 22448);
          *(_QWORD *)(v16 + 8 * (v27 + v26) + 22448) = v20;
          if ( v13 - v28 >= 0x2000 || (v29 = *(unsigned int *)v13, (_DWORD)v29 != *(_DWORD *)v28) )
          {
            v9 = v62;
            v13 += 3;
            LOWORD(v20) = (_WORD)v20 + 3;
            goto LABEL_44;
          }
          v20 = v28;
          *(_QWORD *)(v16 + 8 * (v27 + (v29 >> 24)) + 22448) = v13;
        }
        v30 = v13[4];
        v31 = v20[4];
        if ( v30 != v31 )
        {
          v32 = 2
              * ((unsigned __int8)__ROR1__(v13[1] ^ __ROL1__(*v13 + v13[3], 3), 1)
               + 4LL * (unsigned __int8)__ROL1__(*v13 ^ __ROR1__(v13[1] + v13[2] + 97, 1), 3));
          v33 = *(unsigned __int8 **)(v16 + 8 * (v32 + v30) + 22448);
          *(_QWORD *)(v16 + 8 * (v32 + v31) + 22448) = v20;
          if ( v13 - v33 >= 0x2000 || *(_DWORD *)v13 != *(_DWORD *)v33 || (v34 = v13[4], v34 != v33[4]) || v13 == v33 )
          {
            v13 += 4;
            LOWORD(v20) = (_WORD)v20 + 4;
            goto LABEL_42;
          }
          v20 = v33;
          *(_QWORD *)(v16 + 8 * (v32 + v34) + 22448) = v13;
        }
        v35 = v13[5];
        v36 = v20[5];
        if ( v35 != v36 )
        {
          v37 = 2
              * ((v13[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v13, v13[4]))
               + 4
               * ((unsigned __int8)__ROL1__(v13[4] ^ (__ROR1__(*v13, 1) + 69), 3)
                + (unsigned __int64)(unsigned __int8)__ROR1__(v13[1] ^ __ROL1__(v13[3], 3), 1)));
          v38 = *(unsigned __int8 **)(a6 + 8 * (v37 + v35) + 22448);
          v39 = v36;
          v16 = a6;
          *(_QWORD *)(a6 + 8 * (v37 + v39) + 22448) = v20;
          if ( v13 - v38 < 0x2000 && *(_DWORD *)v13 == *(_DWORD *)v38 && v13[4] == v38[4] )
          {
            v40 = v13[5];
            if ( v40 == v38[5] && v13 != v38 )
            {
              v20 = v38;
              *(_QWORD *)(a6 + 8 * (v37 + v40) + 22448) = v13;
              goto LABEL_49;
            }
          }
          v13 += 5;
          LOWORD(v20) = (_WORD)v20 + 5;
LABEL_42:
          v9 = v62;
          goto LABEL_43;
        }
        v16 = a6;
LABEL_49:
        v9 = v62;
        v13 += 6;
        v20 += 6;
        if ( (unsigned __int64)v13 >= v62 )
        {
LABEL_59:
          for ( i = v61; (unsigned __int64)v13 < v61; ++v20 )
          {
            if ( *v13 != *v20 )
              break;
            ++v13;
          }
          v14 = v59;
        }
        else
        {
          while ( 1 )
          {
            v43 = *(_DWORD *)v13;
            v44 = *(_DWORD *)v20;
            if ( *(_DWORD *)v13 != *(_DWORD *)v20 )
              break;
            v43 = *((_DWORD *)v13 + 1);
            v44 = *((_DWORD *)v20 + 1);
            if ( v43 != v44 )
            {
              v13 += 4;
              v20 += 4;
              break;
            }
            v43 = *((_DWORD *)v13 + 2);
            v44 = *((_DWORD *)v20 + 2);
            if ( v43 != v44 )
            {
              v13 += 8;
              v20 += 8;
              break;
            }
            v43 = *((_DWORD *)v13 + 3);
            v44 = *((_DWORD *)v20 + 3);
            if ( v43 != v44 )
            {
              v13 += 12;
              v20 += 12;
              break;
            }
            v43 = *((_DWORD *)v13 + 4);
            v44 = *((_DWORD *)v20 + 4);
            if ( v43 != v44 )
            {
              v13 += 16;
              v20 += 16;
              break;
            }
            v43 = *((_DWORD *)v13 + 5);
            v44 = *((_DWORD *)v20 + 5);
            if ( v43 != v44 )
            {
              v13 += 20;
              v20 += 20;
              break;
            }
            v43 = *((_DWORD *)v13 + 6);
            v44 = *((_DWORD *)v20 + 6);
            if ( v43 != v44 )
            {
              v13 += 24;
              v20 += 24;
              break;
            }
            v43 = *((_DWORD *)v13 + 7);
            v44 = *((_DWORD *)v20 + 7);
            if ( v43 != v44 )
            {
              v13 += 28;
              v20 += 28;
              break;
            }
            v13 += 32;
            v20 += 32;
            if ( (unsigned __int64)v13 >= v62 )
              goto LABEL_59;
          }
          if ( (_BYTE)v43 != (_BYTE)v44 )
            goto LABEL_43;
          if ( v13[1] != v20[1] )
          {
            ++v13;
            LOWORD(v20) = (_WORD)v20 + 1;
LABEL_43:
            v14 = v59;
LABEL_44:
            i = v61;
            goto LABEL_45;
          }
          v14 = v59;
          i = v61;
          if ( v13[2] == v20[2] )
          {
            v13 += 3;
            LOWORD(v20) = (_WORD)v20 + 3;
          }
          else
          {
            v13 += 2;
            LOWORD(v20) = (_WORD)v20 + 2;
          }
        }
LABEL_45:
        v41 = v13 - v55 - 3;
        v42 = 8 * ((_WORD)v13 - (_WORD)v20) - 8;
        if ( v41 >= 7 )
        {
          v45 = v13 - v55 - 10;
          *(_WORD *)v10 = v42 | 7;
          v10 += 2;
          v46 = v10;
          if ( v14 )
          {
            v47 = *v14;
            if ( v45 < 0xF )
            {
              *v14 = v47 | (16 * v45);
              v14 = 0LL;
              v59 = 0LL;
              goto LABEL_88;
            }
            *v14 = v47 | 0xF0;
            v14 = 0LL;
          }
          else
          {
            v14 = v10;
            if ( v45 < 0xF )
            {
              *v10++ = v45;
              v59 = v46;
              goto LABEL_88;
            }
            *v10++ = 15;
          }
          v59 = v14;
          v48 = v13 - v55 - 25;
          if ( v48 >= 0xFF )
          {
            v49 = v48 + 22;
            *v10 = -1;
            if ( v49 >= 0x10000 )
            {
              *(_WORD *)(v10 + 1) = 0;
              *(_DWORD *)(v10 + 3) = v49;
              v10 += 7;
            }
            else
            {
              *(_WORD *)(v10 + 1) = v49;
              v10 += 3;
            }
          }
          else
          {
            *v10++ = v48;
          }
        }
        else
        {
          *(_WORD *)v10 = v41 + v42;
          v10 += 2;
        }
LABEL_88:
        if ( v12 <= 0 )
        {
          *(_DWORD *)v15 = 2 * v12 + 1;
          v12 = 1;
          v15 = v10;
          v10 += 4;
        }
        else
        {
          v12 = 2 * v12 + 1;
        }
        v17 = v53;
        if ( (unsigned __int64)v13 >= v53 )
        {
          if ( (unsigned __int64)v13 >= v9 )
            goto LABEL_18;
          XpressCallback = RtlpMakeXpressCallback(v57, v9, v13);
          v9 = v62;
          v17 = XpressCallback;
          i = v61;
          v53 = XpressCallback;
        }
        if ( (unsigned __int64)v10 >= v54 )
          goto LABEL_18;
      }
      *v10++ = v21;
      ++v13;
      v22 = v10;
      if ( v12 <= 0 )
        break;
      v12 *= 2;
    }
    v10 += 4;
    *(_DWORD *)v15 = 2 * v12;
    v12 = 1;
    if ( (unsigned __int64)v13 >= v17 )
    {
      v15 = v22;
      if ( (unsigned __int64)v13 >= v9 )
        break;
      v23 = RtlpMakeXpressCallback(v57, v9, v13);
      v9 = v62;
      v17 = v23;
      v53 = v23;
    }
    v15 = v22;
  }
  while ( (unsigned __int64)v10 < v54 );
  i = v61;
LABEL_18:
  v8 = v56;
  LODWORD(v6) = v60;
LABEL_19:
  if ( (unsigned __int64)v13 >= i )
  {
LABEL_98:
    if ( (unsigned __int64)v10 >= v8 )
      return 3221225507LL;
    for ( ; v12 > 0; v12 = 2 * v12 + 1 )
      ;
    v51 = (_DWORD)v10 - (_DWORD)v6;
    *(_DWORD *)v15 = 2 * v12 + 1;
    if ( v51 < 8 )
      v51 = 8;
    *a5 = v51;
    return 0LL;
  }
  else
  {
    while ( (unsigned __int64)v10 < v8 )
    {
      v24 = *v13++;
      *v10++ = v24;
      if ( v12 <= 0 )
      {
        *(_DWORD *)v15 = 2 * v12;
        v12 = 1;
        v15 = v10;
        v10 += 4;
      }
      else
      {
        v12 *= 2;
      }
      if ( (unsigned __int64)v13 >= i )
        goto LABEL_98;
    }
    return 3221225507LL;
  }
}
