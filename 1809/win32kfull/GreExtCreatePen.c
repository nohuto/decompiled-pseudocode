/*
 * XREFs of GreExtCreatePen @ 0x1C01017FC
 * Callers:
 *     GreCreatePen @ 0x1C0101774 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C0153010 (NtGdiExtCreatePen.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0101B78 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0101C00 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C01544C8 (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C029B1A8 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 */

void *__fastcall GreExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rbx
  int v13; // r13d
  int v14; // r14d
  unsigned int v15; // r10d
  unsigned int v17; // r8d
  int v18; // r12d
  int v19; // ecx
  void *v20; // rsi
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // r9
  __int64 v26; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v28; // r14
  __int64 v29; // rdi
  bool v31; // zf
  int v32; // eax
  ULONG v33; // ecx
  char *v34; // rax
  float *v35; // rdx
  float *v36; // r11
  int v37; // r8d
  int v38; // ecx
  int v39; // r8d
  int v40; // ecx
  int v41; // r10d
  int v42; // eax
  char v43; // [rsp+30h] [rbp-50h]
  int v44; // [rsp+34h] [rbp-4Ch]
  int v45; // [rsp+38h] [rbp-48h]
  int v46; // [rsp+3Ch] [rbp-44h]
  int v47; // [rsp+40h] [rbp-40h]
  _QWORD v48[7]; // [rsp+48h] [rbp-38h] BYREF

  v11 = 0LL;
  v13 = a1 & 0xF0000;
  v14 = a1 & 0xF;
  v47 = a1 & 0xF0000;
  v46 = (unsigned __int8)v14;
  v15 = a4;
  v17 = abs32(a2);
  v18 = 0;
  v45 = v17;
  v19 = v17 >> 31;
  v20 = 0LL;
  if ( (a1 & 0xFFF000F0) != 0 )
    v19 = 1;
  if ( v14 == 5 )
    return gahStockObjects[8];
  if ( v13 )
  {
    if ( v13 != 0x10000 )
LABEL_66:
      v19 = 1;
  }
  else if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_66;
  }
  if ( v17 != 1 && !v13 && !a10 )
    v19 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_8;
  if ( v21 == 4096 )
  {
    v43 = 1;
  }
  else
  {
    if ( v21 != 0x2000 )
    {
      v19 = 1;
LABEL_8:
      v43 = 0;
      goto LABEL_9;
    }
    v43 = 2;
  }
LABEL_9:
  v22 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v22 == 512 )
    {
      v44 = 2;
    }
    else if ( v22 == 256 )
    {
      v44 = 1;
    }
    else
    {
      v19 = 1;
    }
  }
  else
  {
    v44 = 0;
  }
  v23 = a7;
  if ( v14 == 7 )
  {
    if ( a7 )
    {
LABEL_13:
      if ( a7 <= 0x10 )
        goto LABEL_14;
    }
  }
  else if ( !a7 )
  {
    goto LABEL_13;
  }
  v19 = 1;
LABEL_14:
  v24 = 6LL;
  if ( v13 == 0x10000 )
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v23 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_16;
      case 2:
        v23 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_16;
      case 3:
        v23 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_16;
      case 4:
        v23 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_16;
    }
    v32 = v14 - 6;
    v31 = v14 == 6;
  }
  else
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v23 = 2;
        v20 = &galeCosmeticDash;
        goto LABEL_54;
      case 2:
        v23 = 8;
        v20 = &galeCosmeticDot;
LABEL_54:
        v18 = 1;
        goto LABEL_16;
      case 3:
        v23 = 4;
        v20 = &galeCosmeticDashDot;
        goto LABEL_54;
      case 4:
        v23 = 6;
        v20 = &galeCosmeticDashDotDot;
        goto LABEL_54;
      case 6:
        if ( !a10 )
          v19 = 1;
        goto LABEL_16;
    }
    v32 = v14 - 7;
    v31 = v14 == 7;
  }
  if ( !v31 && v32 != 1 )
    goto LABEL_93;
LABEL_16:
  if ( v19 )
    goto LABEL_93;
  if ( v23 && !v20 )
  {
    v34 = (char *)PALLOCMEM2(4 * v23, 2037674823LL, 0);
    v20 = v34;
    if ( !v34 )
    {
      v33 = 8;
      goto LABEL_95;
    }
    v35 = (float *)v34;
    v36 = (float *)&v34[4 * v23];
    if ( !v13 || a10 )
    {
      v39 = 1;
      v24 = 0LL;
      v40 = 1;
      if ( a8 )
      {
        do
        {
          v41 = v40;
          if ( v35 >= v36 )
            break;
          v40 = *a8;
          v24 = (unsigned int)(*a8 + v24);
          *(_DWORD *)v35 = *a8;
          v42 = v40;
          ++v35;
          if ( v39 > v40 )
            v42 = v39;
          v39 = v42;
          if ( v41 < v40 )
            v40 = v41;
          ++a8;
        }
        while ( a8 );
        if ( a8 && v40 > 0 && v39 <= 0x3FFF && (int)v24 <= 0x3FFF )
        {
          v17 = v45;
          goto LABEL_125;
        }
      }
    }
    else
    {
      v24 = 0LL;
      v37 = 0;
      if ( a8 )
      {
        do
        {
          if ( v35 >= v36 )
            break;
          v38 = *a8;
          if ( v14 != 7 )
          {
            if ( v44 != 2 )
              v38 += (((_BYTE)v35 - (_BYTE)v34) & 4) != 0 ? 1 : -1;
            v38 *= v45;
          }
          v24 = (unsigned int)(v38 + v24);
          *v35++ = (float)v38;
          if ( v37 < v38 )
            v38 = v37;
          v37 = v38;
          ++a8;
        }
        while ( a8 );
        v13 = v47;
        if ( a8 )
        {
          if ( v37 >= 0 && (int)v24 > 0 )
          {
            v17 = v45;
LABEL_125:
            v15 = a4;
            goto LABEL_18;
          }
        }
      }
    }
    Win32FreePool(v20);
LABEL_93:
    v33 = 87;
LABEL_95:
    EngSetLastError(v33);
    return 0LL;
  }
LABEL_18:
  switch ( a3 )
  {
    case 0:
      if ( v17 || (v26 = 1LL, v14) )
        v26 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v26);
      break;
    case 1:
      if ( v20 && !v18 )
        Win32FreePool(v20);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v24);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0LL, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_132;
  }
  v28 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_132:
    if ( v20 && !v18 )
      Win32FreePool(v20);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v48, SolidBrushInternal);
  if ( v48[0] )
  {
    *(_DWORD *)(v48[0] + 40LL) |= 0x400u;
    *(_DWORD *)(v48[0] + 176LL) = a1;
    *(_BYTE *)(v48[0] + 185LL) = v44;
    *(_BYTE *)(v48[0] + 184LL) = v43;
    *(_QWORD *)(v48[0] + 152LL) = v20;
    *(_DWORD *)(v48[0] + 180LL) = v23;
    *(_DWORD *)(v48[0] + 168LL) = v45;
    if ( v18 )
      *(_DWORD *)(v48[0] + 40LL) |= 0x4000u;
    *(_DWORD *)(v48[0] + 188LL) = a3;
    *(_QWORD *)(v48[0] + 160LL) = a5;
    if ( a10 || v13 == 0x10000 )
      *(float *)(v48[0] + 172LL) = (float)v45;
    v29 = (unsigned __int64)v28 | 0x500000;
    if ( a10 )
    {
      *(_DWORD *)(v48[0] + 40LL) |= 0xC00u;
      *(_DWORD *)(v48[0] + 40LL) &= ~4u;
      if ( v46 == 6 )
      {
        *(_DWORD *)(v48[0] + 40LL) |= 4u;
        *(_DWORD *)(v48[0] + 40LL) |= 0x10000u;
      }
      v29 = (unsigned __int64)v28 | 0x300000;
    }
    else if ( v13 )
    {
      if ( v46 == 6 )
        *(_DWORD *)(v48[0] + 40LL) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v48[0] + 40LL) &= ~4u;
    }
    HmgModifyHandleType(v29);
    v11 = v29;
  }
  else if ( v20 && !v18 )
  {
    Win32FreePool(v20);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v48);
  return (void *)v11;
}
