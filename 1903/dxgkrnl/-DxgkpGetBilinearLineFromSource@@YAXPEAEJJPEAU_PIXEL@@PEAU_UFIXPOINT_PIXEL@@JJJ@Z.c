/*
 * XREFs of ?DxgkpGetBilinearLineFromSource@@YAXPEAEJJPEAU_PIXEL@@PEAU_UFIXPOINT_PIXEL@@JJJ@Z @ 0x1C020D158
 * Callers:
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C013D2DC (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkpGetBilinearLineFromSource(
        unsigned __int8 *a1,
        int a2,
        int a3,
        struct _PIXEL *a4,
        struct _UFIXPOINT_PIXEL *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // esi
  unsigned __int8 *v10; // r10
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  int v14; // r8d
  struct _UFIXPOINT_PIXEL *v15; // r11
  unsigned __int8 *v16; // rbx
  int v17; // r12d
  unsigned __int8 *v18; // rsi
  int v19; // r15d
  int v20; // edx
  int v21; // ecx
  bool v22; // cc
  unsigned __int8 *v23; // rax
  int v24; // r8d
  unsigned __int8 *v25; // rdx
  int v26; // ebp
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // r11d
  int v31; // edx
  int v32; // ecx
  int v33; // ebx
  int v34; // ebp
  int v35; // r15d
  int v36; // ecx
  int v37; // r12d
  struct _UFIXPOINT_PIXEL *v38; // rsi
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  __int64 v44; // [rsp+0h] [rbp-48h]
  int v45; // [rsp+58h] [rbp+10h]

  v8 = a7;
  v10 = &a1[a7 * a2];
  if ( a6 == a3 )
  {
    if ( a7 < a8 )
    {
      v11 = (_DWORD *)((char *)a5 + 8);
      v12 = (unsigned int)(a8 - a7);
      do
      {
        if ( a4 )
        {
          *(_DWORD *)a4 = *(_DWORD *)v10;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
        }
        else
        {
          v11[1] = v10[3] << 16;
          *v11 = v10[2] << 16;
          *(v11 - 1) = v10[1] << 16;
          *(v11 - 2) = *v10 << 16;
          v11 += 4;
        }
        v10 += a2;
        --v12;
      }
      while ( v12 );
    }
    return;
  }
  v13 = a2;
  v14 = a7 * a6 % a3;
  if ( a6 > a3 )
  {
    v15 = a5;
    if ( a7 < a8 )
    {
      v16 = &v10[-a2 + 2];
      do
      {
        v17 = v8;
        if ( v14 && v14 < a3 )
        {
          v18 = &v16[v13];
          v19 = (unsigned __int16)((v14 << 16) / (unsigned int)a3);
          v20 = 0x10000 - v19;
          v21 = v19 * v16[1] + (0x10000 - v19) * v16[v13 + 1];
          if ( !a4 )
          {
            *((_DWORD *)v15 + 3) = v21;
            *((_DWORD *)v15 + 2) = v20 * *v18 + v19 * *v16;
            *((_DWORD *)v15 + 1) = v20 * v16[v13 - 1] + v19 * *(v16 - 1);
            *(_DWORD *)v15 = v19 * *(v16 - 2) + v20 * *v10;
LABEL_21:
            v15 = (struct _UFIXPOINT_PIXEL *)((char *)v15 + 16);
            goto LABEL_22;
          }
          *((_BYTE *)a4 + 3) = (unsigned int)(v21 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v20 * *v18 + 0x8000 + v19 * (unsigned int)*v16) >> 16;
          *((_BYTE *)a4 + 1) = (v20 * v16[v13 - 1] + 0x8000 + v19 * (unsigned int)*(v16 - 1)) >> 16;
          *(_BYTE *)a4 = (v19 * *(v16 - 2) + v20 * (unsigned int)*v10 + 0x8000) >> 16;
        }
        else
        {
          v18 = &v16[v13];
          if ( !a4 )
          {
            *((_DWORD *)v15 + 3) = v16[v13 + 1] << 16;
            *((_DWORD *)v15 + 2) = *v18 << 16;
            *((_DWORD *)v15 + 1) = v16[v13 - 1] << 16;
            *(_DWORD *)v15 = *v10 << 16;
            goto LABEL_21;
          }
          *(_DWORD *)a4 = *(_DWORD *)v10;
        }
        a4 = (struct _PIXEL *)((char *)a4 + 4);
LABEL_22:
        v22 = v14 < a3;
        v14 -= a3;
        if ( v22 )
          v14 += a6;
        v23 = v10;
        if ( v14 < a3 )
          v16 = v18;
        v8 = v17 + 1;
        v10 += v13;
        if ( v14 >= a3 )
        {
          v8 = v17;
          v10 = v23;
        }
      }
      while ( v8 < a8 );
    }
    if ( !v14 )
      return;
    v24 = (unsigned __int16)((v14 << 16) / a3);
    v25 = &v10[-v13];
    v26 = 0x10000 - v24;
    v27 = (0x10000 - v24) * v10[3] + v24 * v10[-v13 + 3];
    if ( !a4 )
    {
      *((_DWORD *)v15 + 3) = v27;
      *((_DWORD *)v15 + 2) = v26 * v10[2] + v24 * v25[2];
      *((_DWORD *)v15 + 1) = v26 * v10[1] + v24 * v25[1];
      *(_DWORD *)v15 = v26 * *v10 + v24 * *v25;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v27 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v26 * v10[2] + 0x8000 + v24 * (unsigned int)v25[2]) >> 16;
    *((_BYTE *)a4 + 1) = (v26 * v10[1] + 0x8000 + v24 * (unsigned int)v25[1]) >> 16;
    v28 = v26 * *v10;
    v29 = v24 * *v25 + 0x8000;
LABEL_50:
    *(_BYTE *)a4 = (unsigned int)(v28 + v29) >> 16;
    return;
  }
  v30 = 0;
  v31 = (unsigned __int16)((a6 << 16) / a3);
  v45 = v31;
  if ( v14 <= 0 )
  {
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
  }
  else
  {
    v31 = (unsigned __int16)((a6 << 16) / a3);
    v32 = (unsigned __int16)((v14 << 16) / a3);
    v33 = v32 * v10[-v13 + 3];
    v34 = v32 * v10[-v13 + 2];
    v35 = v32 * v10[-v13 + 1];
    v30 = v32 * v10[-v13];
    v36 = v30;
  }
  if ( a7 >= a8 )
  {
    v38 = a5;
  }
  else
  {
    v37 = v14 << 16;
    v38 = a5;
    v44 = (unsigned int)(a8 - a7);
    do
    {
      v37 += a6 << 16;
      v14 += a6;
      if ( v14 >= a3 )
      {
        v37 -= a3 << 16;
        v14 -= a3;
        v39 = (unsigned __int16)(v37 / a3);
        v40 = v45 - v39;
        v41 = (v45 - v39) * v10[3];
        if ( a4 )
        {
          *((_BYTE *)a4 + 3) = (unsigned int)(v33 + v41 + 0x8000) >> 16;
          *((_BYTE *)a4 + 2) = (v34 + v40 * (unsigned int)v10[2] + 0x8000) >> 16;
          *((_BYTE *)a4 + 1) = (v35 + v40 * (unsigned int)v10[1] + 0x8000) >> 16;
          *(_BYTE *)a4 = (v40 * (unsigned int)*v10 + v30 + 0x8000) >> 16;
          a4 = (struct _PIXEL *)((char *)a4 + 4);
          v39 = (unsigned __int16)(v37 / a3);
        }
        else
        {
          *((_DWORD *)v38 + 3) = v33 + v41;
          *((_DWORD *)v38 + 2) = v34 + v40 * v10[2];
          *((_DWORD *)v38 + 1) = v35 + v40 * v10[1];
          *(_DWORD *)v38 = v30 + v40 * *v10;
          v38 = (struct _UFIXPOINT_PIXEL *)((char *)v38 + 16);
        }
        v31 = (unsigned __int16)((a6 << 16) / a3);
        v33 = v39 * v10[3];
        v34 = v39 * v10[2];
        v35 = v39 * v10[1];
        v36 = (unsigned __int16)(v37 / a3) * *v10;
      }
      else
      {
        v33 += v31 * v10[3];
        v34 += v31 * v10[2];
        v35 += v31 * v10[1];
        v36 += v31 * *v10;
      }
      v10 += v13;
      v30 = v36;
      --v44;
    }
    while ( v44 );
  }
  if ( v14 )
  {
    v42 = (unsigned __int16)(((a3 - v14) << 16) / a3);
    v43 = v42 * v10[3];
    if ( !a4 )
    {
      *((_DWORD *)v38 + 3) = v33 + v43;
      *((_DWORD *)v38 + 2) = v34 + v42 * v10[2];
      *((_DWORD *)v38 + 1) = v35 + v42 * v10[1];
      *(_DWORD *)v38 = v30 + v42 * *v10;
      return;
    }
    *((_BYTE *)a4 + 3) = (unsigned int)(v33 + v43 + 0x8000) >> 16;
    *((_BYTE *)a4 + 2) = (v34 + v42 * (unsigned int)v10[2] + 0x8000) >> 16;
    *((_BYTE *)a4 + 1) = (v35 + v42 * (unsigned int)v10[1] + 0x8000) >> 16;
    v29 = v30 + 0x8000;
    v28 = v42 * *v10;
    goto LABEL_50;
  }
}
