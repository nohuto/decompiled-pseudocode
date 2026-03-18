/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00A1B80
 * Callers:
 *     GreSubtractRgnRectList @ 0x1C00A1AF4 (GreSubtractRgnRectList.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00DD798 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // r9d
  unsigned int v11; // edi
  LONG top; // r10d
  LONG v13; // r11d
  LONG left; // r15d
  LONG v15; // ecx
  LONG bottom; // edx
  LONG v17; // r12d
  LONG right; // r9d
  LONG v19; // eax
  bool v20; // cc
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  LONG v34; // eax
  _DWORD *v35; // rdx
  LONG v36; // eax
  LONG v37; // eax
  char *v38; // rdx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  struct _RECTL *v42; // rdx
  unsigned int v43; // ecx
  _DWORD *v44; // rdx
  _DWORD *v45; // rdx
  _DWORD *v46; // rdx
  LONG v47; // eax
  LONG v48; // eax
  _DWORD *v49; // rdx
  unsigned int v50; // ecx
  LONG v51; // eax
  _DWORD *v52; // rdx
  LONG v53; // eax
  _DWORD *v54; // rdx
  _QWORD v55[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v56; // [rsp+30h] [rbp-28h] BYREF

  v11 = 0;
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_20;
  if ( v10 == 1 )
  {
    top = a3->top;
    v13 = *(_DWORD *)(v8 + 12);
    if ( top >= v13
      || (left = a3->left, v15 = *(_DWORD *)(v8 + 8), a3->left >= v15)
      || (bottom = a3->bottom, v17 = a2->top, bottom <= v17)
      || (right = a3->right, v19 = a2->left, right <= a2->left) )
    {
      v42 = a2;
      goto LABEL_43;
    }
    v56 = 0uLL;
    v20 = left <= v19;
    v21 = right >= v15;
    if ( !v20 )
      v21 += 2;
    if ( top > v17 )
    {
      v22 = 8;
      if ( bottom >= v13 )
        v22 = 12;
    }
    else
    {
      v22 = 0;
      if ( bottom >= v13 )
        v22 = 4;
    }
    v23 = v21 + v22;
    if ( v23 <= 8 )
    {
      if ( v23 == 8 )
      {
        *(_DWORD *)(v9 + 80) = 208;
        *(_DWORD *)(v9 + 84) = 5;
        *(struct _RECTL *)(v9 + 88) = *a2;
        *(_DWORD *)(v9 + 104) = 0;
        *(_DWORD *)(v9 + 108) = 0x80000000;
        *(_DWORD *)(v9 + 112) = a2->top;
        *(_DWORD *)(v9 + 116) = 0;
        v54 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
        *v54 = 2;
        v54[1] = a2->top;
        v54[2] = a3->top;
        v54[3] = a2->left;
        v54[4] = a2->right;
        v54[5] = 2;
        v33 = (_DWORD *)((char *)v54 + (unsigned int)(4 * *v54 + 16));
        *v33 = 2;
        v53 = a3->top;
      }
      else
      {
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  v28 = v27 - 1;
                  if ( !v28 )
                  {
LABEL_20:
                    RGNOBJ::vSet(this);
                    return 1LL;
                  }
                  v50 = v28 - 1;
                  if ( !v50 )
                  {
                    *(_DWORD *)(v9 + 80) = 168;
                    *(_DWORD *)(v9 + 84) = 3;
                    *(struct _RECTL *)(v9 + 88) = *a2;
                    *(_DWORD *)(v9 + 104) = 0;
                    *(_DWORD *)(v9 + 108) = 0x80000000;
                    *(_DWORD *)(v9 + 112) = a2->top;
                    *(_DWORD *)(v9 + 116) = 0;
                    v35 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
                    *v35 = 4;
                    v51 = a2->top;
LABEL_56:
                    v35[1] = v51;
                    v35[2] = a2->bottom;
                    v35[3] = a2->left;
                    v35[4] = a3->left;
                    v35[5] = a3->right;
                    v35[6] = a2->right;
                    v35[7] = 4;
                    goto LABEL_36;
                  }
                  if ( v50 != 1 )
                    return 1LL;
                  v56 = (__int128)*a2;
                  DWORD2(v56) = left;
                }
                else
                {
                  v56 = (__int128)*a2;
                  LODWORD(v56) = right;
                }
                goto LABEL_42;
              }
              *(_DWORD *)(v9 + 80) = 184;
              *(_DWORD *)(v9 + 84) = 4;
              *(struct _RECTL *)(v9 + 88) = *a2;
              *(_DWORD *)(v9 + 104) = 0;
              *(_DWORD *)(v9 + 108) = 0x80000000;
              *(_DWORD *)(v9 + 112) = a2->top;
              *(_DWORD *)(v9 + 116) = 0;
              v33 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
              *v33 = 2;
              v47 = a2->top;
              goto LABEL_50;
            }
            *(_DWORD *)(v9 + 80) = 192;
            *(_DWORD *)(v9 + 84) = 4;
            *(struct _RECTL *)(v9 + 88) = *a2;
            *(_DWORD *)(v9 + 104) = 0;
            *(_DWORD *)(v9 + 108) = 0x80000000;
            *(_DWORD *)(v9 + 112) = a2->top;
            *(_DWORD *)(v9 + 116) = 0;
            v33 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
            *v33 = 4;
            v34 = a2->top;
            goto LABEL_32;
          }
          v56 = (__int128)*a2;
          DWORD1(v56) = bottom;
          goto LABEL_42;
        }
        *(_DWORD *)(v9 + 80) = 184;
        *(_DWORD *)(v9 + 84) = 4;
        *(struct _RECTL *)(v9 + 88) = *a2;
        *(_DWORD *)(v9 + 104) = 0;
        *(_DWORD *)(v9 + 108) = 0x80000000;
        *(_DWORD *)(v9 + 112) = a2->top;
        *(_DWORD *)(v9 + 116) = 0;
        v33 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
        *v33 = 2;
        v53 = a2->top;
      }
      v33[1] = v53;
      v33[2] = a3->bottom;
      v33[3] = a3->right;
      v48 = a2->right;
      goto LABEL_51;
    }
    v30 = v23 - 9;
    if ( !v30 )
    {
      *(_DWORD *)(v9 + 80) = 200;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 88) = *a2;
      *(_DWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 108) = 0x80000000;
      *(_DWORD *)(v9 + 112) = a2->top;
      *(_DWORD *)(v9 + 116) = 0;
      v45 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
      *v45 = 2;
      v45[1] = a2->top;
      v45[2] = a3->top;
      v45[3] = a2->left;
      v45[4] = a2->right;
      v45[5] = 2;
      v33 = (_DWORD *)((char *)v45 + (unsigned int)(4 * *v45 + 16));
      *v33 = 0;
      v33[1] = a3->top;
      *((_QWORD *)v33 + 1) = (unsigned int)a3->bottom;
      goto LABEL_33;
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
      *(_DWORD *)(v9 + 80) = 216;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 88) = *a2;
      *(_DWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 108) = 0x80000000;
      *(_DWORD *)(v9 + 112) = a2->top;
      *(_DWORD *)(v9 + 116) = 0;
      v32 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
      *v32 = 2;
      v32[1] = a2->top;
      v32[2] = a3->top;
      v32[3] = a2->left;
      v32[4] = a2->right;
      v32[5] = 2;
      v33 = (_DWORD *)((char *)v32 + (unsigned int)(4 * *v32 + 16));
      *v33 = 4;
      v34 = a3->top;
LABEL_32:
      v33[1] = v34;
      v33[2] = a3->bottom;
      v33[3] = a2->left;
      v33[4] = a3->left;
      v33[5] = a3->right;
      v33[6] = a2->right;
      v33[7] = 4;
LABEL_33:
      v35 = (_DWORD *)((char *)v33 + (unsigned int)(4 * *v33 + 16));
      *v35 = 2;
      v35[1] = a3->bottom;
      v35[2] = a2->bottom;
      v36 = a2->left;
LABEL_34:
      v35[3] = v36;
      v37 = a2->right;
      goto LABEL_35;
    }
    v39 = v31 - 1;
    if ( !v39 )
    {
      *(_DWORD *)(v9 + 80) = 208;
      *(_DWORD *)(v9 + 84) = 5;
      *(struct _RECTL *)(v9 + 88) = *a2;
      *(_DWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 108) = 0x80000000;
      *(_DWORD *)(v9 + 112) = a2->top;
      *(_DWORD *)(v9 + 116) = 0;
      v46 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
      *v46 = 2;
      v46[1] = a2->top;
      v46[2] = a3->top;
      v46[3] = a2->left;
      v46[4] = a2->right;
      v46[5] = 2;
      v33 = (_DWORD *)((char *)v46 + (unsigned int)(4 * *v46 + 16));
      *v33 = 2;
      v47 = a3->top;
LABEL_50:
      v33[1] = v47;
      v33[2] = a3->bottom;
      v33[3] = a2->left;
      v48 = a3->left;
LABEL_51:
      v33[4] = v48;
      v33[5] = 2;
      goto LABEL_33;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      *(_DWORD *)(v9 + 80) = 184;
      *(_DWORD *)(v9 + 84) = 4;
      *(struct _RECTL *)(v9 + 88) = *a2;
      *(_DWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 108) = 0x80000000;
      *(_DWORD *)(v9 + 112) = a2->top;
      *(_DWORD *)(v9 + 116) = 0;
      v49 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
      *v49 = 2;
      v49[1] = a2->top;
      v49[2] = a3->top;
      v49[3] = a2->left;
      v49[4] = a2->right;
      v49[5] = 2;
      v35 = (_DWORD *)((char *)v49 + (unsigned int)(4 * *v49 + 16));
      *v35 = 2;
      v35[1] = a3->top;
      v35[2] = a2->bottom;
      v36 = a3->right;
      goto LABEL_34;
    }
    v41 = v40 - 1;
    if ( v41 )
    {
      v43 = v41 - 1;
      if ( !v43 )
      {
        *(_DWORD *)(v9 + 80) = 192;
        *(_DWORD *)(v9 + 84) = 4;
        *(struct _RECTL *)(v9 + 88) = *a2;
        *(_DWORD *)(v9 + 104) = 0;
        *(_DWORD *)(v9 + 108) = 0x80000000;
        *(_DWORD *)(v9 + 112) = a2->top;
        *(_DWORD *)(v9 + 116) = 0;
        v52 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
        *v52 = 2;
        v52[1] = a2->top;
        v52[2] = a3->top;
        v52[3] = a2->left;
        v52[4] = a2->right;
        v52[5] = 2;
        v35 = (_DWORD *)((char *)v52 + (unsigned int)(4 * *v52 + 16));
        *v35 = 4;
        v51 = a3->top;
        goto LABEL_56;
      }
      if ( v43 != 1 )
        return 1LL;
      *(_DWORD *)(v9 + 80) = 184;
      *(_DWORD *)(v9 + 84) = 4;
      *(struct _RECTL *)(v9 + 88) = *a2;
      *(_DWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 108) = 0x80000000;
      *(_DWORD *)(v9 + 112) = a2->top;
      *(_DWORD *)(v9 + 116) = 0;
      v44 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v9 + 104) + 16) + v9 + 104);
      *v44 = 2;
      v44[1] = a2->top;
      v44[2] = a3->top;
      v44[3] = a2->left;
      v44[4] = a2->right;
      v44[5] = 2;
      v35 = (_DWORD *)((char *)v44 + (unsigned int)(4 * *v44 + 16));
      *v35 = 2;
      v35[1] = a3->top;
      v35[2] = a2->bottom;
      v35[3] = a2->left;
      v37 = a3->left;
LABEL_35:
      v35[5] = 2;
      v35[4] = v37;
LABEL_36:
      v38 = (char *)v35 + (unsigned int)(4 * *v35 + 16);
      *(_DWORD *)v38 = 0;
      *((_DWORD *)v38 + 1) = a2->bottom;
      *((_QWORD *)v38 + 1) = 0x7FFFFFFFLL;
      *(_QWORD *)(v9 + 40) = v38 + 16;
      return 1LL;
    }
    v56 = (__int128)*a2;
    HIDWORD(v56) = top;
LABEL_42:
    v42 = (struct _RECTL *)&v56;
LABEL_43:
    RGNOBJ::vSet(this, v42);
    return 1LL;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v55, *(_DWORD *)(v9 + 80));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v55);
  if ( v55[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v55, this);
    if ( (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)v55, a2, a3, a4) )
      v11 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)v55);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v55);
  return v11;
}
