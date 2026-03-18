/*
 * XREFs of ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C009EB3C
 * Callers:
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C009E3D4 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memcmp @ 0x1C015AFC0 (memcmp.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bSubtractComplex(RGNOBJ *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v4; // r15
  struct _RECTL *v6; // r12
  RGNOBJ *v7; // rsi
  _BYTE *v8; // rdi
  int v9; // r9d
  __int64 v10; // rdx
  LONG *p_top; // r8
  __int64 i; // rcx
  __int64 v13; // r11
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // r14
  unsigned int *v17; // r14
  unsigned int *v18; // rbx
  LONG top; // r11d
  __int64 v20; // rbp
  __int64 v21; // r13
  int v22; // r8d
  const void *v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rax
  LONG v26; // r12d
  __int64 v27; // rdx
  LONG v28; // r8d
  LONG v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // rcx
  int v33; // esi
  int *v34; // rax
  __int64 v35; // r10
  int v36; // r9d
  int v37; // r11d
  int v38; // edi
  int v39; // r14d
  _DWORD *v40; // r15
  _DWORD *v41; // r8
  int v42; // r13d
  _DWORD *v43; // r12
  int v44; // ebp
  __int64 v45; // rax
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  LONG bottom; // r15d
  __int64 v50; // rax
  signed int v51; // ecx
  signed int v52; // ecx
  int v53; // ecx
  _DWORD *v54; // rdx
  unsigned int v55; // eax
  unsigned __int64 v57; // rax
  _BYTE *v58; // rcx
  int v59; // [rsp+20h] [rbp-3F8h]
  unsigned int v60; // [rsp+24h] [rbp-3F4h]
  __int64 v61; // [rsp+28h] [rbp-3F0h]
  LONG v62; // [rsp+30h] [rbp-3E8h]
  int v63; // [rsp+34h] [rbp-3E4h]
  int v64; // [rsp+38h] [rbp-3E0h]
  LONG v65; // [rsp+48h] [rbp-3D0h]
  __int64 v67; // [rsp+50h] [rbp-3C8h]
  _DWORD *v68; // [rsp+58h] [rbp-3C0h]
  unsigned int *v69; // [rsp+60h] [rbp-3B8h]
  __int64 v70; // [rsp+68h] [rbp-3B0h]
  _BYTE *v71; // [rsp+70h] [rbp-3A8h]
  __int64 v72; // [rsp+78h] [rbp-3A0h]
  __int64 v73; // [rsp+80h] [rbp-398h]
  _DWORD v76[4]; // [rsp+A0h] [rbp-378h] BYREF
  _BYTE v77[800]; // [rsp+B0h] [rbp-368h] BYREF

  v4 = a4;
  v6 = a2;
  v7 = this;
  if ( a4 < 100 )
  {
    v8 = v77;
    v71 = v77;
LABEL_3:
    v9 = 0;
    if ( (int)v4 > 0 )
    {
      v10 = 0LL;
      p_top = &a3->top;
      do
      {
        for ( i = v10; i; *(_QWORD *)&v8[8 * i--] = v13 )
        {
          v13 = *(_QWORD *)&v8[8 * i - 8];
          if ( *p_top >= *(_DWORD *)(v13 + 4) )
            break;
        }
        ++v10;
        v14 = v9++;
        p_top += 4;
        *(_QWORD *)&v8[8 * i] = &a3[v14];
      }
      while ( v10 < v4 );
    }
    v76[1] = v6->bottom;
    v76[0] = 0;
    v76[2] = 0;
    v76[3] = 0x7FFFFFFF;
    v15 = 0;
    *(_QWORD *)&v8[8 * v4] = v76;
    v16 = *(_QWORD *)v7;
    *(_DWORD *)(v16 + 108) = 0x80000000;
    v17 = (unsigned int *)(v16 + 104);
    v18 = v17 + 4;
    v69 = v17;
    v59 = 0;
    *v17 = 0;
    *((_QWORD *)v17 + 1) = 0x7FFFFFFFLL;
    *(_DWORD *)(*(_QWORD *)v7 + 80LL) = 120;
    *(_DWORD *)(*(_QWORD *)v7 + 84LL) = 1;
    *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0x80000000;
    top = v6->top;
    v62 = top;
    if ( *(_DWORD *)(*(_QWORD *)v8 + 12LL) <= top )
    {
      v58 = v8;
      do
      {
        v58 += 8;
        ++v15;
      }
      while ( *(_DWORD *)(*(_QWORD *)v58 + 12LL) <= top );
      v59 = v15;
    }
    v20 = v15;
    v70 = v15;
    v21 = v15;
    v72 = v15;
    while ( 1 )
    {
      v22 = *(_DWORD *)(*(_QWORD *)v7 + 80LL) + 8 * (v4 - v15 + 5);
      if ( v22 > *(_DWORD *)(*(_QWORD *)v7 + 24LL) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v18;
        if ( !RGNOBJ::bExpand(v7, v22 + 4 * (v4 - v15) * (v4 - v15 + 4)) )
        {
          if ( v8 != v77 )
            Win32FreePool(v8);
          return 0LL;
        }
        v15 = v59;
        top = v62;
        v18 = *(unsigned int **)(*(_QWORD *)v7 + 40LL);
        v17 = &v18[-*(v18 - 1) - 4];
        v69 = v17;
      }
      v23 = v18 + 3;
      v18[3] = v6->left;
      v24 = 2LL;
      v18[4] = v6->right;
      v25 = *(_QWORD *)&v8[8 * v20];
      v60 = 2;
      v61 = 2LL;
      v26 = *(_DWORD *)(v25 + 4);
      if ( v26 <= top )
      {
        v27 = *(_QWORD *)&v8[8 * v21];
        v28 = *(_DWORD *)(v25 + 12);
        if ( *(_DWORD *)(v27 + 4) <= top )
        {
          do
          {
            v29 = *(_DWORD *)(v27 + 12);
            v30 = v21;
            if ( v29 >= v28 )
              v29 = v28;
            v28 = v29;
            if ( v21 > v20 )
            {
              do
              {
                v31 = *(_QWORD *)&v8[8 * v30 - 8];
                if ( *(_DWORD *)(v27 + 12) >= *(_DWORD *)(v31 + 12) )
                  break;
                *(_QWORD *)&v8[8 * v30--] = v31;
              }
              while ( v30 > v20 );
            }
            if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v30] + 12LL) <= top )
            {
              ++v15;
              ++v20;
            }
            else
            {
              *(_QWORD *)&v8[8 * v30] = v27;
            }
            ++v21;
            v27 = *(_QWORD *)&v8[8 * v21];
          }
          while ( *(_DWORD *)(v27 + 4) <= top );
          v59 = v15;
          v72 = v21;
          v70 = v20;
        }
        v32 = v20;
        v73 = v20;
        v26 = *(_DWORD *)(*(_QWORD *)&v8[8 * v21] + 4LL);
        if ( v26 >= v28 )
          v26 = v28;
        v65 = v26;
        if ( v20 < v21 )
        {
          v33 = 2;
          while ( 1 )
          {
            v34 = *(int **)&v8[8 * v32];
            v35 = 0LL;
            v67 = 0LL;
            v36 = *v34;
            v37 = v34[2];
            v63 = *v34;
            v64 = v37;
            if ( v24 <= 0 )
              goto LABEL_38;
            v38 = 0;
            v39 = 3;
            v40 = v18 + 4;
            v41 = v18 + 3;
            v42 = 1;
            v43 = v18 + 5;
            v44 = 2;
            v68 = v18 + 3;
            v45 = v61;
            do
            {
              if ( v36 >= *v40 )
                goto LABEL_36;
              if ( v37 <= *v41 )
                break;
              v46 = v36 <= *v41;
              if ( v37 >= *v40 )
                v46 += 2;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( !v47 )
                {
                  *v41 = v37;
                  goto LABEL_35;
                }
                v48 = v47 - 1;
                if ( v48 )
                {
                  if ( v48 == 1 )
                  {
                    memmove(&v18[v38 + 3], &v18[v44 + 3], 4LL * (v33 - v38 - 2));
                    v33 -= 2;
                    v35 = v67 - 2;
                    v61 -= 2LL;
                    v41 = v68 - 2;
                    v36 = v63;
                    v38 -= 2;
                    v37 = v64;
                    v44 -= 2;
                    v42 -= 2;
                    v39 -= 2;
                    v40 -= 2;
                    v43 -= 2;
                  }
                  goto LABEL_35;
                }
              }
              else
              {
                memmove(&v18[v39 + 3], &v18[v42 + 3], 4LL * (v33 - v38 - 1));
                v37 = v64;
                v33 += 2;
                v61 += 2LL;
                v36 = v63;
                v41 = v68;
                v35 = v67;
                *v43 = v64;
              }
              *v40 = v36;
LABEL_35:
              v45 = v61;
LABEL_36:
              v35 += 2LL;
              v41 += 2;
              v38 += 2;
              v67 = v35;
              v44 += 2;
              v68 = v41;
              v42 += 2;
              v39 += 2;
              v40 += 2;
              v43 += 2;
            }
            while ( v35 < v45 );
            v8 = v71;
            v21 = v72;
            v32 = v73;
            v24 = v61;
            v60 = v33;
LABEL_38:
            v73 = ++v32;
            if ( v32 >= v21 )
            {
              v7 = this;
              v17 = v69;
              v20 = v70;
              v26 = v65;
              break;
            }
          }
        }
        v23 = v18 + 3;
      }
      bottom = a2->bottom;
      if ( v26 <= bottom )
        bottom = v26;
      if ( *v17 == v60 && !memcmp(v17 + 3, v23, 4LL * v60) )
      {
        v17[2] = bottom;
      }
      else
      {
        if ( v60 )
        {
          v50 = *(_QWORD *)v7;
          v51 = v18[3];
          if ( v51 < *(_DWORD *)(*(_QWORD *)v7 + 88LL) )
          {
            *(_DWORD *)(v50 + 88) = v51;
            v50 = *(_QWORD *)v7;
          }
          v52 = v18[v61 + 2];
          if ( v52 > *(_DWORD *)(v50 + 96) )
            *(_DWORD *)(v50 + 96) = v52;
        }
        v17 = v18;
        v69 = v18;
        ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
        *v18 = v60;
        *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * v60 + 16;
        v18[1] = v62;
        v18[2] = bottom;
        v18[v61 + 3] = v60;
        v18 += *v18 + 4;
      }
      v62 = bottom;
      top = bottom;
      if ( v20 < v21 )
      {
        v53 = v59;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)&v8[8 * v20] + 12LL) > bottom )
            break;
          ++v53;
          ++v20;
        }
        while ( v20 < v21 );
        v59 = v53;
        v70 = v20;
      }
      v6 = a2;
      if ( bottom >= a2->bottom )
      {
        v54 = *(_DWORD **)v7;
        if ( *(_DWORD *)(*(_QWORD *)v7 + 84LL) == 1 )
        {
          v54[23] = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 88LL) = 0;
          *(_DWORD *)(*(_QWORD *)v7 + 96LL) = 0;
          v17[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = v18;
        }
        else
        {
          if ( *v17 )
          {
            v18[1] = v17[2];
            ++*(_DWORD *)(*(_QWORD *)v7 + 84LL);
            *v18 = 0;
            v18[3] = 0;
            *(_DWORD *)(*(_QWORD *)v7 + 80LL) += 4 * *v18 + 16;
            v54 = *(_DWORD **)v7;
          }
          else
          {
            v18 = v17;
          }
          v54[28] = *(_DWORD *)((char *)v54 + (unsigned int)(4 * v54[26] + 16) + 108);
          *(_DWORD *)(*(_QWORD *)v7 + 92LL) = *(_DWORD *)(*(_QWORD *)v7 + 112LL);
          *(_DWORD *)(*(_QWORD *)v7 + 100LL) = v18[1];
          v55 = *v18;
          v18[2] = 0x7FFFFFFF;
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = &v18[v55 + 4];
        }
        if ( v8 != v77 )
          Win32FreePool(v8);
        return 1LL;
      }
      v15 = v59;
      LODWORD(v4) = a4;
    }
  }
  v57 = 8LL * (unsigned int)(a4 + 1);
  if ( v57 <= 0xFFFFFFFF )
  {
    v71 = PALLOCMEM2((unsigned int)v57, 1852273223LL, 0);
    v8 = v71;
    if ( v71 )
      goto LABEL_3;
  }
  return 0LL;
}
