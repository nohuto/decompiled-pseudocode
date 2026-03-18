/*
 * XREFs of GreCreateDIBBrush @ 0x1C01319DC
 * Callers:
 *     GreExtCreatePen @ 0x1C00E94CC (GreExtCreatePen.c)
 *     NtGdiCreateDIBBrush @ 0x1C01318E0 (NtGdiCreateDIBBrush.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0131BB0 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall GreCreateDIBBrush(unsigned int *a1, unsigned int a2, unsigned int a3, int a4, int a5, HBITMAP a6)
{
  __int64 v6; // rsi
  __int64 v11; // r11
  unsigned int v12; // edx
  unsigned int v13; // eax
  char *v14; // r12
  int v15; // ecx
  unsigned int v16; // r14d
  int v17; // r8d
  int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  int v21; // eax
  __int64 DIBitmapReal; // rax
  __int64 v23; // rdx
  HBITMAP v24; // r15
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rax
  int v33; // ecx
  unsigned __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // rdi
  __int64 v37; // rbx
  void *v38; // rcx
  ULONG v39; // ecx
  _QWORD v40[2]; // [rsp+70h] [rbp-48h] BYREF
  int v41; // [rsp+80h] [rbp-38h]
  unsigned __int64 v42; // [rsp+C0h] [rbp+8h]

  v6 = 0LL;
  if ( !a1 )
    goto LABEL_59;
  if ( a3 < 0x28 )
    goto LABEL_59;
  v11 = *a1;
  if ( (unsigned int)v11 > a3 )
    goto LABEL_59;
  v12 = 2;
  if ( a2 > 2 )
    goto LABEL_59;
  v13 = a1[4];
  v14 = (char *)a1 + v11;
  v15 = *((unsigned __int16 *)a1 + 7);
  v16 = a1[8];
  v17 = 4;
  if ( v13 == 3 )
  {
    v26 = 0;
    v16 = 3;
    if ( a2 != 1 )
      v26 = a2;
    a2 = v26;
    if ( ((v15 - 16) & 0xFFFFFFEF) != 0 )
      return 0LL;
  }
  else if ( v13 )
  {
    if ( v13 == 2 )
    {
      if ( v15 != 4 )
        return 0LL;
      if ( !v16 )
        v16 = 16;
    }
    else
    {
      if ( v13 != 1 || v15 != 8 )
        return 0LL;
      if ( !v16 )
        v16 = 256;
    }
  }
  else
  {
    v18 = v15 - 1;
    if ( v18 )
    {
      v27 = v18 - 3;
      if ( v27 )
      {
        v28 = v27 - 4;
        if ( v28 )
        {
          v29 = v28 - 8;
          if ( v29 )
          {
            v30 = v29 - 8;
            if ( v30 )
            {
              if ( v30 != 8 )
                return 0LL;
            }
          }
          v31 = 0;
          v19 = 0;
          if ( a2 != 1 )
            v31 = a2;
          a2 = v31;
          goto LABEL_10;
        }
        v19 = 256;
      }
      else
      {
        v19 = 16;
      }
    }
    else
    {
      v19 = 2;
    }
    if ( !v16 || v19 < v16 )
LABEL_10:
      v16 = v19;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v17 = 0;
    v12 = v17;
  }
  v20 = v12 * (unsigned __int64)v16;
  if ( v20 > 0xFFFFFFFF || (v21 = v20 + 3, (int)v20 + 3 < (unsigned int)v20) )
  {
    v39 = 534;
LABEL_60:
    EngSetLastError(v39);
    return 0LL;
  }
  if ( (v21 & 0xFFFFFFFC) > a3 - (unsigned int)v11 )
  {
LABEL_59:
    v39 = 87;
    goto LABEL_60;
  }
  DIBitmapReal = GreCreateDIBitmapReal(
                   0LL,
                   a3 + (_DWORD)a1 - ((v21 & 0xFFFFFFFC) + (_DWORD)v14),
                   &v14[v21 & 0xFFFFFFFC],
                   a1,
                   a2 != 0 ? 3 : 0,
                   a3,
                   a3 + (_DWORD)a1 - ((v21 & 0xFFFFFFFC) + (_DWORD)v14),
                   0LL,
                   0,
                   0LL,
                   1,
                   0LL,
                   0LL);
  v24 = (HBITMAP)DIBitmapReal;
  if ( !DIBitmapReal )
    return 0LL;
  if ( a4 )
  {
    LOBYTE(v23) = 5;
    v32 = HmgShareLockCheck(DIBitmapReal, v23);
    if ( v32 )
    {
      v42 = *(_QWORD *)(v32 + 56);
      v33 = v42;
      v34 = HIDWORD(v42);
      if ( (int)v42 > 8 )
        v33 = 8;
      LODWORD(v42) = v33;
      v35 = HIDWORD(v42);
      if ( (int)v34 > 8 )
        v35 = 8;
      HIDWORD(v42) = v35;
      *(_QWORD *)(v32 + 56) = v42;
      DEC_SHARE_REF_CNT(v32);
      goto LABEL_20;
    }
    return 0LL;
  }
LABEL_20:
  if ( a2 == 1 )
  {
    LOBYTE(v23) = 5;
    v36 = HmgShareLockCheck(v24, v23);
    v37 = *(_QWORD *)(v36 + 128);
    v38 = *(void **)(v37 + 112);
    *(_DWORD *)(v37 + 24) |= 0x4000u;
    memmove(v38, v14, 2 * v16);
    *(_DWORD *)(v37 + 60) = v16;
    DEC_SHARE_REF_CNT(v36);
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v40, v24, a6, 0, a2, 0x80u, a5);
  if ( v40[0] )
  {
    v41 = 1;
    *(_DWORD *)(v40[0] + 84LL) = a2;
    v6 = *(_QWORD *)v40[0];
  }
  else
  {
    bDeleteSurface(v24);
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v40);
  return v6;
}
