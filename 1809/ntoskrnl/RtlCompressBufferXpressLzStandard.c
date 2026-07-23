/*
 * XREFs of RtlCompressBufferXpressLzStandard @ 0x140143B20
 * Callers:
 *     RtlCompressBufferProgress @ 0x1401439F8 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressLz @ 0x140143AB0 (RtlCompressBufferXpressLz.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140144288 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressLzStandard(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  _DWORD *v9; // r15
  unsigned __int64 v10; // r11
  unsigned __int8 *v11; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r13
  unsigned int v15; // ecx
  unsigned __int8 *v16; // r14
  unsigned __int8 *v17; // rbx
  unsigned __int64 v18; // r12
  char v19; // al
  int v20; // esi
  unsigned __int8 *v21; // rbp
  unsigned __int64 v22; // rax
  unsigned __int8 *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned __int8 *v26; // r8
  unsigned __int8 v27; // cl
  unsigned __int8 *v28; // rdi
  unsigned __int8 v29; // r9
  unsigned __int8 *v30; // rbp
  unsigned __int8 v31; // r10
  unsigned __int8 v32; // r12
  unsigned __int8 v33; // r13
  unsigned __int8 v34; // r13
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rdx
  unsigned __int8 *v38; // rcx
  unsigned __int64 v39; // rcx
  __int16 v40; // ax
  __int64 v41; // rdi
  unsigned __int8 *v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int8 *v46; // rcx
  unsigned __int8 v47; // al
  unsigned __int8 v48; // al
  unsigned __int8 v49; // al
  unsigned __int64 v50; // rcx
  unsigned __int8 v51; // al
  unsigned int v52; // r14d
  unsigned __int64 v54; // rcx
  __int64 XpressCallback; // rax
  unsigned __int64 v56; // [rsp+20h] [rbp-88h]
  unsigned __int8 *v57; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v58; // [rsp+30h] [rbp-78h]
  unsigned __int64 v59; // [rsp+38h] [rbp-70h]
  unsigned __int64 v60; // [rsp+40h] [rbp-68h]
  unsigned __int64 v61; // [rsp+48h] [rbp-60h]
  _QWORD v62[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-48h]
  unsigned __int64 v64; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v65; // [rsp+B8h] [rbp+10h]

  v9 = a3;
  v10 = (unsigned __int64)a3 + a4;
  v11 = &a1[a2];
  v61 = v10;
  v60 = (unsigned __int64)v11;
  if ( a4 < 0x40 || a2 < 8 )
    return 3221225507LL;
  v13 = (unsigned __int64)(v11 - 38);
  v14 = v10 - 41;
  v59 = (unsigned __int64)(v11 - 38);
  v56 = v10 - 41;
  v57 = 0LL;
  if ( !a7 || (v15 = a9, a9 > a2) )
    v15 = a2;
  v16 = (unsigned __int8 *)v9 + 5;
  v17 = a1 + 1;
  v18 = (unsigned __int64)&a1[v15];
  v62[1] = a8;
  v19 = *a1;
  v62[0] = a7;
  v20 = 2;
  if ( v13 < v18 )
    v18 = (unsigned __int64)(v11 - 38);
  v63 = v15;
  v64 = v18;
  v21 = (unsigned __int8 *)v9;
  *((_BYTE *)v9 + 4) = v19;
  if ( a2 >= 0x40 )
  {
    v22 = (unsigned __int64)a1;
    v23 = (unsigned __int8 *)a3;
    v58 = (unsigned __int8 *)a3;
    memset64((void *)a6, v22, 0xAF6uLL);
    memset64((void *)(a6 + 22448), v22, 0x12EEuLL);
    while ( 1 )
    {
      while ( 1 )
      {
        v24 = a6 + 8LL * *v17;
        v25 = v17[2] + 4LL * v17[1];
        v26 = *(unsigned __int8 **)(v24 + 16 * v25);
        *(_QWORD *)(v24 + 16 * v25) = v17;
        v27 = *v17;
        if ( *(_WORD *)v26 == *(_WORD *)v17 && v26[2] == v17[2] && v17 - v26 < 0x2000 )
          break;
        *v16++ = v27;
        ++v17;
        v28 = v16;
        if ( v20 <= 0 )
        {
          v16 += 4;
          *(_DWORD *)v23 = 2 * v20;
          v20 = 1;
          if ( (unsigned __int64)v17 >= v18 )
          {
            v21 = v28;
            if ( (unsigned __int64)v17 >= v13 )
            {
LABEL_83:
              v11 = (unsigned __int8 *)v60;
              v10 = v61;
              LODWORD(v9) = (_DWORD)a3;
              goto LABEL_84;
            }
            XpressCallback = RtlpMakeXpressCallback(v62, v13, v17);
            v13 = v59;
            v18 = XpressCallback;
            v64 = XpressCallback;
          }
          v21 = v28;
          if ( (unsigned __int64)v16 >= v14 )
            goto LABEL_83;
          v23 = v28;
          v58 = v28;
        }
        else
        {
          v20 *= 2;
        }
      }
      v29 = v26[3];
      v30 = v17;
      v31 = v17[3];
      if ( v31 != v29 )
      {
        v41 = v27 + 2 * v25;
        v42 = *(unsigned __int8 **)(a6 + 8 * (v41 + v31) + 22448);
        *(_QWORD *)(a6 + 8 * (v41 + v29) + 22448) = v26;
        if ( v17 - v42 >= 0x2000 )
          goto LABEL_37;
        v43 = *(unsigned int *)v17;
        if ( (_DWORD)v43 != *(_DWORD *)v42 )
          goto LABEL_37;
        v26 = v42;
        *(_QWORD *)(a6 + 8 * (v41 + (v43 >> 24)) + 22448) = v17;
      }
      v32 = v26[4];
      v33 = v17[4];
      if ( v33 != v32 )
      {
        v37 = 2
            * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(*v17 + v17[3], 3), 1)
             + 4LL * (unsigned __int8)__ROL1__(*v17 ^ __ROR1__(v17[1] + v17[2] + 97, 1), 3));
        v38 = *(unsigned __int8 **)(a6 + 8 * (v37 + v33) + 22448);
        *(_QWORD *)(a6 + 8 * (v37 + v32) + 22448) = v26;
        if ( v17 - v38 >= 0x2000 || *(_DWORD *)v17 != *(_DWORD *)v38 || (v48 = v17[4], v48 != v38[4]) || v17 == v38 )
        {
          v17 += 4;
          LOWORD(v26) = (_WORD)v26 + 4;
LABEL_27:
          v14 = v56;
          v18 = v64;
          goto LABEL_28;
        }
        v26 = v38;
        *(_QWORD *)(a6 + 8 * (v37 + v48) + 22448) = v17;
      }
      v34 = v26[5];
      v65 = v17[5];
      if ( v65 != v34 )
      {
        v45 = 2
            * ((v17[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v17, v17[4]))
             + 4
             * ((unsigned __int8)__ROR1__(v17[1] ^ __ROL1__(v17[3], 3), 1)
              + (unsigned __int64)(unsigned __int8)__ROL1__(v17[4] ^ (__ROR1__(*v17, 1) + 69), 3)));
        v46 = *(unsigned __int8 **)(a6 + 8 * (v45 + v65) + 22448);
        *(_QWORD *)(a6 + 8 * (v45 + v34) + 22448) = v26;
        if ( v17 - v46 >= 0x2000
          || *(_DWORD *)v17 != *(_DWORD *)v46
          || v17[4] != v46[4]
          || (v49 = v17[5], v49 != v46[5])
          || v17 == v46 )
        {
          v17 += 5;
          LOWORD(v26) = (_WORD)v26 + 5;
          goto LABEL_27;
        }
        v26 = v46;
        *(_QWORD *)(a6 + 8 * (v45 + v49) + 22448) = v17;
      }
      v17 += 6;
      v26 += 6;
      if ( (unsigned __int64)v17 >= v59 )
      {
LABEL_46:
        while ( (unsigned __int64)v17 < v60 )
        {
          if ( *v17 != *v26 )
            break;
          ++v17;
          ++v26;
        }
        goto LABEL_27;
      }
      while ( 1 )
      {
        v35 = *(_DWORD *)v26;
        v36 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 != *(_DWORD *)v26 )
          break;
        v35 = *((_DWORD *)v26 + 1);
        v36 = *((_DWORD *)v17 + 1);
        if ( v36 != v35 )
        {
          v17 += 4;
          v26 += 4;
          break;
        }
        v35 = *((_DWORD *)v26 + 2);
        v36 = *((_DWORD *)v17 + 2);
        if ( v36 != v35 )
        {
          v17 += 8;
          v26 += 8;
          break;
        }
        v35 = *((_DWORD *)v26 + 3);
        v36 = *((_DWORD *)v17 + 3);
        if ( v36 != v35 )
        {
          v17 += 12;
          v26 += 12;
          break;
        }
        v35 = *((_DWORD *)v26 + 4);
        v36 = *((_DWORD *)v17 + 4);
        if ( v36 != v35 )
        {
          v17 += 16;
          v26 += 16;
          break;
        }
        v35 = *((_DWORD *)v26 + 5);
        v36 = *((_DWORD *)v17 + 5);
        if ( v36 != v35 )
        {
          v17 += 20;
          v26 += 20;
          break;
        }
        v35 = *((_DWORD *)v26 + 6);
        v36 = *((_DWORD *)v17 + 6);
        if ( v36 != v35 )
        {
          v17 += 24;
          v26 += 24;
          break;
        }
        v35 = *((_DWORD *)v26 + 7);
        v36 = *((_DWORD *)v17 + 7);
        if ( v36 != v35 )
        {
          v17 += 28;
          v26 += 28;
          break;
        }
        v17 += 32;
        v26 += 32;
        if ( (unsigned __int64)v17 >= v59 )
          goto LABEL_46;
      }
      if ( (_BYTE)v36 != (_BYTE)v35 )
        goto LABEL_27;
      if ( v17[1] != v26[1] )
      {
        ++v17;
        LOWORD(v26) = (_WORD)v26 + 1;
        goto LABEL_27;
      }
      v18 = v64;
      v14 = v56;
      if ( v17[2] != v26[2] )
      {
        v17 += 2;
        LOWORD(v26) = (_WORD)v26 + 2;
        goto LABEL_28;
      }
LABEL_37:
      v17 += 3;
      LOWORD(v26) = (_WORD)v26 + 3;
LABEL_28:
      v39 = v17 - v30 - 3;
      v40 = 8 * ((_WORD)v17 - (_WORD)v26) - 8;
      if ( v39 >= 7 )
      {
        *(_WORD *)v16 = v40 | 7;
        v44 = v17 - v30 - 10;
        v16 += 2;
        if ( v57 )
        {
          v47 = *v57;
          if ( v44 >= 0xF )
          {
            *v57 = v47 | 0xF0;
            v57 = 0LL;
LABEL_75:
            v50 = v17 - v30 - 25;
            if ( v50 >= 0xFF )
            {
              v54 = v50 + 22;
              *v16 = -1;
              if ( v54 >= 0x10000 )
              {
                *(_WORD *)(v16 + 1) = 0;
                *(_DWORD *)(v16 + 3) = v54;
                v16 += 7;
              }
              else
              {
                *(_WORD *)(v16 + 1) = v54;
                v16 += 3;
              }
            }
            else
            {
              *v16++ = v50;
            }
            goto LABEL_30;
          }
          *v57 = v47 | (16 * v44);
          v57 = 0LL;
        }
        else
        {
          v57 = v16;
          if ( v44 >= 0xF )
          {
            *v16++ = 15;
            goto LABEL_75;
          }
          *v16++ = v44;
        }
      }
      else
      {
        *(_WORD *)v16 = v39 + v40;
        v16 += 2;
      }
LABEL_30:
      v21 = v58;
      if ( v20 <= 0 )
      {
        *(_DWORD *)v58 = 2 * v20 + 1;
        v20 = 1;
        v21 = v16;
        v58 = v16;
        v16 += 4;
      }
      else
      {
        v20 = 2 * v20 + 1;
      }
      if ( (unsigned __int64)v17 >= v18 )
      {
        if ( (unsigned __int64)v17 >= v59 )
          goto LABEL_83;
        v18 = RtlpMakeXpressCallback(v62, v59, v17);
        v64 = v18;
      }
      v13 = v59;
      if ( (unsigned __int64)v16 >= v14 )
        goto LABEL_83;
      v23 = v58;
    }
  }
LABEL_84:
  if ( v17 < v11 )
  {
    while ( (unsigned __int64)v16 < v10 )
    {
      v51 = *v17++;
      *v16++ = v51;
      if ( v20 <= 0 )
      {
        *(_DWORD *)v21 = 2 * v20;
        v20 = 1;
        v21 = v16;
        v16 += 4;
      }
      else
      {
        v20 *= 2;
      }
      if ( v17 >= v11 )
        goto LABEL_89;
    }
    return 3221225507LL;
  }
LABEL_89:
  if ( (unsigned __int64)v16 >= v10 )
    return 3221225507LL;
  for ( ; v20 > 0; v20 = 2 * v20 + 1 )
    ;
  v52 = (_DWORD)v16 - (_DWORD)v9;
  *(_DWORD *)v21 = 2 * v20 + 1;
  *a5 = v52;
  if ( v52 < 8 )
    *a5 = 8;
  return 0LL;
}
