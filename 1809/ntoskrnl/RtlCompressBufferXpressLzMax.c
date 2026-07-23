/*
 * XREFs of RtlCompressBufferXpressLzMax @ 0x1402F9B8C
 * Callers:
 *     RtlCompressBufferProgress @ 0x1401439F8 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressLz @ 0x140143AB0 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140144288 (RtlpMakeXpressCallback.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzMax(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int8 *v9; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  _BYTE *v17; // rbx
  char *v18; // rdi
  int v19; // esi
  unsigned __int8 *v20; // r14
  __int16 v21; // r11
  _DWORD *v22; // r8
  char *v23; // r9
  unsigned __int64 v24; // r10
  char *v25; // rax
  __int64 v26; // r11
  char *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r12
  unsigned __int64 XpressCallback; // rax
  int v31; // r15d
  unsigned __int64 v32; // rdx
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // rax
  char *v37; // r14
  __int64 v38; // r9
  unsigned __int64 v39; // r11
  char *v40; // rax
  char *v41; // r10
  unsigned __int8 *v42; // rdi
  unsigned __int8 *i; // rax
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  _BYTE *v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  char v52; // cl
  unsigned __int64 v53; // rax
  int v54; // eax
  int *v55; // rcx
  char v56; // al
  unsigned int v57; // ebx
  _BYTE *v58; // [rsp+20h] [rbp-98h]
  _DWORD *v59; // [rsp+28h] [rbp-90h]
  unsigned __int64 v60; // [rsp+30h] [rbp-88h]
  unsigned __int64 v61; // [rsp+38h] [rbp-80h]
  unsigned __int64 v62; // [rsp+40h] [rbp-78h]
  __int16 v63; // [rsp+48h] [rbp-70h]
  unsigned __int8 *v64; // [rsp+50h] [rbp-68h]
  unsigned __int64 v65; // [rsp+58h] [rbp-60h]
  _QWORD v66[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-48h]
  __int64 v68; // [rsp+C0h] [rbp+8h]
  int v69; // [rsp+D0h] [rbp+18h]

  v69 = a3;
  v9 = &a1[a2];
  v10 = a3 + a4;
  v68 = 0LL;
  v65 = v10;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  if ( (unsigned __int64)a1 <= 0x2001 )
    return 3221225659LL;
  memset(a6, 0, 0x40000uLL);
  v58 = 0LL;
  v61 = v10 - 41;
  v15 = (unsigned __int64)(v9 - 5);
  if ( !a7 || (v16 = a9, a9 > a2) )
  {
    v16 = a2;
    a9 = a2;
  }
  v66[0] = a7;
  v17 = (_BYTE *)(a3 + 5);
  v18 = (char *)(a1 + 1);
  v66[1] = a8;
  v19 = 2;
  *(_BYTE *)(a3 + 4) = *a1;
  v20 = a1;
  v67 = v16;
  v21 = 0;
  v64 = a1;
  v22 = (_DWORD *)a3;
  v59 = (_DWORD *)a3;
LABEL_9:
  v23 = a6;
  v24 = v15;
  if ( (unsigned __int64)(v20 + 0x2000) <= v15 )
    v24 = (unsigned __int64)(v20 + 0x2000);
  v25 = &v18[v16];
  v62 = v24;
  if ( v24 < (unsigned __int64)v25 )
    v25 = (char *)v24;
  v26 = v21 & 0x3FFF;
  v60 = (unsigned __int64)v25;
  v63 = v26;
  if ( (unsigned __int64)v20 < v24 )
  {
    v27 = &a6[8 * v26 + 0x40000];
    do
    {
      LOWORD(v26) = v26 + 1;
      v28 = (unsigned __int16)XpressHashFunction[v20[2] + 512] ^ (unsigned __int16)XpressHashFunction[*v20] ^ (unsigned __int64)(unsigned __int16)XpressHashFunction[v20[1] + 256];
      *(_QWORD *)v27 = *(_QWORD *)&a6[8 * v28];
      v27 += 8;
      *(_QWORD *)&a6[8 * v28] = v20++;
    }
    while ( (unsigned __int64)v20 < v24 );
    v64 = v20;
    v63 = v26;
LABEL_17:
    v25 = (char *)v60;
  }
  v29 = (unsigned __int64)(v18 - 0x2000);
  while ( 1 )
  {
    if ( v18 >= v25 )
    {
      if ( (unsigned __int64)v18 >= v24 )
      {
        v16 = a9;
        v15 = (unsigned __int64)(v9 - 5);
        v21 = v63;
        v20 = v64;
        if ( v18 >= (char *)v9 - 5 )
          goto LABEL_94;
        goto LABEL_9;
      }
      XpressCallback = RtlpMakeXpressCallback((__int64)v66, v24, (__int64)v18);
      v22 = v59;
      v23 = a6;
      v24 = v62;
      v60 = XpressCallback;
    }
    v31 = *(_DWORD *)v18;
    v32 = *(_QWORD *)&v23[8 * ((0x2000 - (_WORD)a1 + (_WORD)v29) & 0x3FFF) + 0x40000];
    if ( v32 >= v29 )
    {
      v33 = v31 ^ *(_DWORD *)v32;
      if ( !v33 )
        goto LABEL_37;
      if ( (v33 & 0xFFFFFF) == 0 )
        goto LABEL_36;
      v32 = *(_QWORD *)&v23[8 * (((_WORD)v32 - (_WORD)a1) & 0x3FFF) + 0x40000];
      if ( v32 >= v29 )
      {
        v34 = v31 ^ *(_DWORD *)v32;
        if ( !v34 )
          goto LABEL_37;
        if ( (v34 & 0xFFFFFF) == 0 )
        {
LABEL_36:
          v37 = a6;
          v29 = (unsigned __int64)(v18 - 0x2000);
          v68 = (__int64)&v18[-v32];
          v38 = 0LL;
          v39 = 3LL;
          goto LABEL_74;
        }
        v32 = *(_QWORD *)&v23[8 * (((_WORD)v32 - (_WORD)a1) & 0x3FFF) + 0x40000];
        if ( v32 >= v29 )
          break;
      }
    }
LABEL_31:
    *v17++ = v31;
    ++v18;
    ++v29;
    v36 = v17;
    if ( v19 <= 0 )
    {
      v17 += 4;
      *v22 = 2 * v19;
      v19 = 1;
      v22 = v36;
      if ( (unsigned __int64)v17 >= v61 )
        goto LABEL_94;
      v59 = v36;
    }
    else
    {
      v19 *= 2;
    }
    v25 = (char *)v60;
  }
  v35 = v31 ^ *(_DWORD *)v32;
  if ( v35 )
  {
    if ( (v35 & 0xFFFFFF) == 0 )
      goto LABEL_36;
    goto LABEL_31;
  }
LABEL_37:
  v37 = a6;
  v38 = 0LL;
  v39 = 3LL;
LABEL_38:
  v40 = v18;
  v41 = v18;
  v42 = (unsigned __int8 *)(v18 + 4);
  v32 += 4LL;
  for ( i = (unsigned __int8 *)(v40 + 36); ; i = v42 + 32 )
  {
    if ( i >= v9 )
    {
      while ( v42 < v9 && *v42 == *(_BYTE *)v32 )
      {
        ++v42;
        ++v32;
      }
      goto LABEL_66;
    }
    v44 = *(_DWORD *)v42;
    v45 = *(_DWORD *)v32;
    if ( *(_DWORD *)v42 != *(_DWORD *)v32 )
      break;
    v44 = *((_DWORD *)v42 + 1);
    v45 = *(_DWORD *)(v32 + 4);
    if ( v44 != v45 )
    {
      v42 += 4;
      v32 += 4LL;
      break;
    }
    v44 = *((_DWORD *)v42 + 2);
    v45 = *(_DWORD *)(v32 + 8);
    if ( v44 != v45 )
    {
      v42 += 8;
      v32 += 8LL;
      break;
    }
    v44 = *((_DWORD *)v42 + 3);
    v45 = *(_DWORD *)(v32 + 12);
    if ( v44 != v45 )
    {
      v42 += 12;
      v32 += 12LL;
      break;
    }
    v44 = *((_DWORD *)v42 + 4);
    v45 = *(_DWORD *)(v32 + 16);
    if ( v44 != v45 )
    {
      v42 += 16;
      v32 += 16LL;
      break;
    }
    v44 = *((_DWORD *)v42 + 5);
    v45 = *(_DWORD *)(v32 + 20);
    if ( v44 != v45 )
    {
      v42 += 20;
      v32 += 20LL;
      break;
    }
    v44 = *((_DWORD *)v42 + 6);
    v45 = *(_DWORD *)(v32 + 24);
    if ( v44 != v45 )
    {
      v42 += 24;
      v32 += 24LL;
      break;
    }
    v44 = *((_DWORD *)v42 + 7);
    v45 = *(_DWORD *)(v32 + 28);
    if ( v44 != v45 )
    {
      v42 += 28;
      v32 += 28LL;
      break;
    }
    v42 += 32;
    v32 += 32LL;
  }
  if ( (_BYTE)v44 == (_BYTE)v45 )
  {
    if ( v42[1] == *(_BYTE *)(v32 + 1) )
    {
      if ( v42[2] == *(_BYTE *)(v32 + 2) )
      {
        v42 += 3;
        v32 += 3LL;
      }
      else
      {
        v42 += 2;
        v32 += 2LL;
      }
    }
    else
    {
      ++v42;
      ++v32;
    }
  }
LABEL_66:
  v46 = v42 - (unsigned __int8 *)v41;
  if ( v42 - (unsigned __int8 *)v41 <= v39 )
  {
    v38 += v46;
  }
  else
  {
    v39 = v42 - (unsigned __int8 *)v41;
    v68 = (__int64)&v42[-v32];
    if ( v32 > (unsigned __int64)v41 )
    {
      v18 = v41;
      goto LABEL_69;
    }
  }
  LOWORD(v32) = v32 - v46;
  v18 = v41;
  while ( (unsigned __int64)++v38 < 0x18 )
  {
LABEL_74:
    v32 = *(_QWORD *)&v37[8 * (((_WORD)v32 - (_WORD)a1) & 0x3FFF) + 0x40000];
    if ( v32 < v29 )
      break;
    if ( v31 == *(_DWORD *)v32 )
      goto LABEL_38;
  }
LABEL_69:
  v18 += v39;
  v47 = 8 * v68 - 8;
  if ( v39 - 3 < 7 )
  {
    v48 = v39 - 3 + v47;
    *(_WORD *)v17 = v48;
    v17 += 2;
    v68 = v48;
    goto LABEL_88;
  }
  v49 = v58;
  v50 = v47 | 7;
  *(_WORD *)v17 = v50;
  v51 = v39 - 10;
  v17 += 2;
  v68 = v50;
  if ( v58 )
  {
    v52 = *v58;
    v58 = 0LL;
    if ( v51 >= 0xF )
    {
      *v49 = v52 | 0xF0;
      goto LABEL_83;
    }
    *v49 = v52 | (16 * v51);
  }
  else
  {
    v58 = v17;
    if ( v51 >= 0xF )
    {
      *v17++ = 15;
LABEL_83:
      v51 = v39 - 25;
      if ( v39 - 25 >= 0xFF )
      {
        v53 = v51 + 22;
        *v17 = -1;
        if ( v53 >= 0x10000 )
        {
          *(_WORD *)(v17 + 1) = 0;
          *(_DWORD *)(v17 + 3) = v53;
          v17 += 7;
        }
        else
        {
          *(_WORD *)(v17 + 1) = v53;
          v17 += 3;
        }
        goto LABEL_88;
      }
    }
    *v17++ = v51;
  }
LABEL_88:
  v54 = 2 * v19 + 1;
  if ( v19 <= 0 )
  {
    v55 = v59;
    v22 = v17;
    v59 = v17;
    v19 = 1;
    v17 += 4;
    *v55 = v54;
  }
  else
  {
    v22 = v59;
    v19 = 2 * v19 + 1;
  }
  if ( (unsigned __int64)v17 < v61 )
  {
    v23 = a6;
    v24 = v62;
    goto LABEL_17;
  }
LABEL_94:
  while ( v18 < (char *)v9 )
  {
    if ( (unsigned __int64)v17 >= v65 )
      return 3221225507LL;
    v56 = *v18++;
    *v17++ = v56;
    if ( v19 <= 0 )
    {
      *v22 = 2 * v19;
      v19 = 1;
      v22 = v17;
      v17 += 4;
    }
    else
    {
      v19 *= 2;
    }
  }
  if ( (unsigned __int64)v17 >= v65 )
    return 3221225507LL;
  while ( v19 > 0 )
    v19 = 2 * v19 + 1;
  v57 = (_DWORD)v17 - v69;
  *v22 = 2 * v19 + 1;
  if ( v57 < 8 )
    v57 = 8;
  *a5 = v57;
  return 0LL;
}
