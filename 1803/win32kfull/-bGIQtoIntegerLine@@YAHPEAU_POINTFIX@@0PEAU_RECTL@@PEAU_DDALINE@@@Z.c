/*
 * XREFs of ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C012FDA4
 * Callers:
 *     ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00E3690 (-vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGIQtoIntegerLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        struct _RECTL *a3,
        struct _DDALINE *a4)
{
  FIX x; // eax
  unsigned int v5; // r11d
  FIX v6; // r10d
  FIX v8; // esi
  unsigned int v10; // edx
  int v11; // edi
  int v12; // edi
  FIX y; // eax
  FIX v14; // ecx
  int v15; // ebx
  __int64 v16; // r9
  int v17; // r14d
  int v18; // r14d
  FIX v19; // r8d
  int v20; // eax
  int v21; // r9d
  int v22; // r8d
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // r10d
  int v26; // r10d
  int v27; // eax
  signed __int64 v28; // rsi
  __int64 v29; // rsi
  int v30; // r13d
  unsigned __int64 v31; // rbp
  int v32; // r10d
  int v33; // r10d
  unsigned __int64 v34; // r8
  struct _RECTL *v35; // rax
  int top; // r15d
  int left; // ebx
  int right; // r13d
  int bottom; // r12d
  int v40; // r13d
  int v41; // ebx
  int v42; // r12d
  int v43; // r15d
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  int v49; // ecx
  int v50; // eax
  int v52; // eax
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  signed __int64 v55; // rax
  __int64 v56; // [rsp+8h] [rbp-40h]
  int v57; // [rsp+50h] [rbp+8h]
  int v58; // [rsp+58h] [rbp+10h]

  x = a2->x;
  v5 = 0;
  v6 = a1->x;
  v8 = -a1->x;
  v10 = 4;
  if ( x >= a1->x )
    v8 = a1->x;
  if ( x >= v6 )
    v10 = 0;
  v11 = -x;
  if ( x >= v6 )
    v11 = x;
  v12 = v11 - v8;
  if ( v12 >= 0 )
  {
    y = a2->y;
    v14 = a1->y;
    v15 = -v14;
    if ( y >= v14 )
      v15 = v14;
    v16 = v10 | 2;
    if ( y >= v14 )
      v16 = v10;
    v17 = -y;
    if ( y >= v14 )
      v17 = y;
    v18 = v17 - v15;
    if ( v18 >= 0 )
    {
      v19 = v8;
      if ( v18 >= (unsigned int)v12 )
      {
        if ( v18 == v12 )
        {
          v16 = (unsigned int)v16 | 8;
        }
        else
        {
          v52 = v12;
          v19 = v15;
          v12 = v18;
          v15 = v8;
          v18 = v52;
          v16 = (unsigned int)v16 | 1;
        }
      }
      v20 = v19;
      v21 = gaflHardwareRound[v16] | v16;
      v22 = v19 & 0xF;
      v57 = v20 >> 4;
      v23 = v15;
      v24 = v15 & 0xF;
      v58 = v23 >> 4;
      v25 = v24 + 8;
      if ( (unsigned int)v12 > 0x1FFFFFF )
      {
        v53 = v18 * (unsigned __int64)(unsigned int)v22;
        v28 = v12 * (unsigned __int64)v25 - v53 - 1;
        if ( (v21 & 0x8000) == 0 )
          v28 = v12 * (unsigned __int64)v25 - v53;
      }
      else
      {
        v26 = v12 * v25 - v22 * v18;
        v27 = v26 - 1;
        if ( (v21 & 0x200) == 0 )
          v27 = v26;
        v28 = v27;
      }
      v29 = v28 >> 4;
      v30 = ((_BYTE)v18 + (_BYTE)v24) & 0xF;
      LODWORD(v31) = ((unsigned int)(v12 + v22) >> 4) - 1;
      v32 = ((_BYTE)v12 + (_BYTE)v22) & 0xF;
      if ( (((_BYTE)v12 + (_BYTE)v22) & 0xF) != 0 )
      {
        if ( (((_BYTE)v18 + (_BYTE)v24) & 0xF) != 0 )
        {
          if ( (int)abs32(v30 - 8) <= v32 )
            LODWORD(v31) = (unsigned int)(v12 + v22) >> 4;
        }
        else if ( v32 - (unsigned int)((v21 & 0x100) != 0) + 8 >= 0x10 )
        {
          LODWORD(v31) = (unsigned int)(v12 + v22) >> 4;
        }
      }
      if ( (v21 & 0x108) != 0x108 )
        goto LABEL_24;
      if ( (((_BYTE)v12 + (_BYTE)v22) & 0xF) != 0 && v30 == v32 + 8 )
        LODWORD(v31) = v31 - 1;
      if ( v22 && v24 == v22 + 8 )
      {
        v33 = 0;
      }
      else
      {
LABEL_24:
        v33 = 0;
        if ( v22 )
        {
          if ( v24 )
            v33 = (int)abs32(v24 - 8) <= v22;
          else
            LOBYTE(v33) = v22 - (unsigned int)((v21 & 0x100) != 0) + 8 >= 0x10;
        }
      }
      LODWORD(v34) = 0;
      if ( v29 >= 0 )
        LODWORD(v34) = v29 >= v12 - (v18 & (unsigned int)-v33);
      if ( (int)v31 < v33 )
      {
        *((_DWORD *)a4 + 3) = 0;
        return 1;
      }
      if ( !a3 )
      {
        v29 += (v18 & (unsigned int)-v33) - (unsigned __int64)(unsigned int)v12;
        if ( v29 >= 0 )
          LODWORD(v29) = v29 - v12;
LABEL_48:
        v47 = v34 + v58;
        v5 = 1;
        *(_DWORD *)a4 = v21;
        v48 = v33 + v57;
        *((_DWORD *)a4 + 4) = v12;
        if ( (v21 & 1) == 0 )
          v48 = v47;
        *((_DWORD *)a4 + 5) = v18;
        *((_DWORD *)a4 + 6) = v29;
        *((_DWORD *)a4 + 7) = 1;
        if ( (v21 & 1) == 0 )
          v47 = v33 + v57;
        v49 = -v47;
        if ( (v21 & 4) == 0 )
          v49 = v47;
        v50 = -v48;
        *((_DWORD *)a4 + 1) = v49;
        if ( (v21 & 2) == 0 )
          v50 = v48;
        *((_DWORD *)a4 + 2) = v50;
        *((_DWORD *)a4 + 3) = v31 - v33 + 1;
        return v5;
      }
      v35 = &a3[v21 & 3];
      if ( (v21 & 4) != 0 )
      {
        if ( (v21 & 1) == 0 )
        {
          top = v35->top;
          left = 1 - v35->right;
          right = 1 - v35->left;
          bottom = v35->bottom;
LABEL_32:
          v40 = right - v57;
          v41 = left - v57;
          v42 = bottom - v58;
          v43 = top - v58;
          if ( v42 <= (int)v34 || v40 <= v33 || v41 > (int)v31 )
            goto LABEL_90;
          v44 = v40 - 1;
          if ( (int)v31 < v40 )
            v44 = v31;
          v45 = v29 + v18 * (__int64)v44;
          v56 = ~v29;
          if ( v45 >= 0xFFFFFFFFLL )
            v45 /= (unsigned __int64)(unsigned int)v12;
          else
            LODWORD(v45) = (unsigned int)v45 / v12;
          if ( v43 > (int)v45 )
            goto LABEL_90;
          if ( v42 <= (int)v45 )
          {
            v54 = ~v29 + v12 * (__int64)v42;
            if ( v54 >= 0xFFFFFFFFLL )
              v31 = (~v29 + v12 * (__int64)v42) / (unsigned __int64)(unsigned int)v18;
            else
              LODWORD(v31) = (unsigned int)v54 / v18;
          }
          else
          {
            LODWORD(v31) = v44;
          }
          if ( v41 > v33 )
          {
            v33 = v41;
            v46 = v29 + v18 * (__int64)v41;
            if ( v46 >= 0xFFFFFFFFLL )
              v34 = (v29 + v18 * (__int64)v41) / (unsigned __int64)(unsigned int)v12;
            else
              LODWORD(v34) = (unsigned int)v46 / v12;
            if ( v42 <= (int)v34 )
              goto LABEL_90;
          }
          if ( v43 > (int)v34 )
          {
            LODWORD(v34) = v43;
            v55 = v56 + v12 * (__int64)v43;
            if ( v55 >= 0xFFFFFFFFLL )
              v55 = (v56 + v12 * (__int64)v43) / (unsigned __int64)(unsigned int)v18;
            else
              LODWORD(v55) = (unsigned int)v55 / v18;
            v33 = v55 + 1;
            if ( v40 <= (int)v55 + 1 )
            {
LABEL_90:
              *((_DWORD *)a4 + 3) = 0;
              return 1;
            }
          }
          LODWORD(v29) = v18 * v33 - v12 * v34 - v12 + v29;
          goto LABEL_48;
        }
        top = 1 - v35->bottom;
        bottom = 1 - v35->top;
      }
      else
      {
        top = v35->top;
        bottom = v35->bottom;
      }
      right = v35->right;
      left = v35->left;
      goto LABEL_32;
    }
  }
  return v5;
}
