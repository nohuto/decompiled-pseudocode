/*
 * XREFs of GreExtCreatePen @ 0x1C0108B9C
 * Callers:
 *     GreCreatePen @ 0x1C0108B14 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C0158BE0 (NtGdiExtCreatePen.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0108F18 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0108F98 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C015ACC8 (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B002C (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
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
  int v13; // r12d
  int v14; // r13d
  unsigned int v15; // r10d
  unsigned int v17; // r8d
  int v18; // r15d
  int v19; // ecx
  void *v20; // rsi
  int v21; // eax
  int v22; // eax
  int v23; // ebp
  unsigned int v24; // r14d
  __int64 v25; // r9
  __int64 v27; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned int v32; // ecx
  bool v34; // zf
  int v35; // eax
  ULONG v36; // ecx
  char *v37; // rax
  float *v38; // rdx
  float *v39; // r11
  int v40; // r8d
  int v41; // ecx
  int v42; // r8d
  int v43; // ecx
  int v44; // r10d
  int v45; // eax
  char v46; // [rsp+30h] [rbp-58h]
  int v47; // [rsp+34h] [rbp-54h]
  int v48; // [rsp+38h] [rbp-50h]
  _QWORD v49[9]; // [rsp+40h] [rbp-48h] BYREF

  v11 = 0LL;
  v13 = a1 & 0xF0000;
  v14 = a1 & 0xF;
  v15 = a4;
  v17 = abs32(a2);
  v18 = 0;
  v48 = v17;
  v19 = v17 >> 31;
  v20 = 0LL;
  if ( (a1 & 0xFFF000F0) != 0 )
    v19 = 1;
  if ( v14 == 5 )
    return gahStockObjects[8];
  if ( v13 )
  {
    if ( v13 != 0x10000 )
LABEL_68:
      v19 = 1;
  }
  else if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_68;
  }
  if ( v17 != 1 && !v13 && !a10 )
    v19 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_8;
  if ( v21 == 4096 )
  {
    v46 = 1;
  }
  else
  {
    if ( v21 != 0x2000 )
    {
      v19 = 1;
LABEL_8:
      v46 = 0;
      goto LABEL_9;
    }
    v46 = 2;
  }
LABEL_9:
  v22 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v22 == 512 )
    {
      v23 = 2;
      LOBYTE(v47) = 2;
    }
    else if ( v22 == 256 )
    {
      v23 = 1;
      LOBYTE(v47) = 1;
    }
    else
    {
      v23 = v47;
      v19 = 1;
    }
  }
  else
  {
    v23 = 0;
    LOBYTE(v47) = 0;
  }
  v24 = a7;
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
  v25 = 6LL;
  if ( v13 == 0x10000 )
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v24 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_16;
      case 2:
        v24 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_16;
      case 3:
        v24 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_16;
      case 4:
        v24 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_16;
    }
    v35 = v14 - 6;
    v34 = v14 == 6;
  }
  else
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v24 = 2;
        v20 = &galeCosmeticDash;
        goto LABEL_54;
      case 2:
        v24 = 8;
        v20 = &galeCosmeticDot;
LABEL_54:
        v18 = 1;
        goto LABEL_16;
      case 3:
        v24 = 4;
        v20 = &galeCosmeticDashDot;
        goto LABEL_54;
      case 4:
        v24 = 6;
        v20 = &galeCosmeticDashDotDot;
        goto LABEL_54;
      case 6:
        if ( !a10 )
          v19 = 1;
        goto LABEL_16;
    }
    v35 = v14 - 7;
    v34 = v14 == 7;
  }
  if ( !v34 && v35 != 1 )
    goto LABEL_93;
LABEL_16:
  if ( v19 )
    goto LABEL_93;
  if ( v24 && !v20 )
  {
    v37 = (char *)PALLOCMEM2(4 * v24, 2037674823LL, 0);
    v20 = v37;
    if ( !v37 )
    {
      v36 = 8;
      goto LABEL_95;
    }
    v38 = (float *)v37;
    v39 = (float *)&v37[4 * v24];
    if ( !v13 || a10 )
    {
      v42 = 1;
      v25 = 0LL;
      v43 = 1;
      if ( a8 )
      {
        do
        {
          v44 = v43;
          if ( v38 >= v39 )
            break;
          v43 = *a8;
          v25 = (unsigned int)(*a8 + v25);
          *(_DWORD *)v38 = *a8;
          v45 = v43;
          ++v38;
          if ( v42 > v43 )
            v45 = v42;
          v42 = v45;
          if ( v44 < v43 )
            v43 = v44;
          ++a8;
        }
        while ( a8 );
        if ( a8 && v43 > 0 && v42 <= 0x3FFF && (int)v25 <= 0x3FFF )
        {
          v17 = v48;
          goto LABEL_125;
        }
      }
    }
    else
    {
      v25 = 0LL;
      v40 = 0;
      if ( a8 )
      {
        do
        {
          if ( v38 >= v39 )
            break;
          v41 = *a8;
          if ( v14 != 7 )
          {
            if ( v23 != 2 )
              v41 += (((_BYTE)v38 - (_BYTE)v37) & 4) != 0 ? 1 : -1;
            v41 *= v48;
          }
          v25 = (unsigned int)(v41 + v25);
          *v38++ = (float)v41;
          if ( v40 < v41 )
            v41 = v40;
          v40 = v41;
          ++a8;
        }
        while ( a8 );
        if ( a8 && v40 >= 0 && (int)v25 > 0 )
        {
          v17 = v48;
LABEL_125:
          v15 = a4;
          goto LABEL_18;
        }
      }
    }
    Win32FreePool(v20);
LABEL_93:
    v36 = 87;
LABEL_95:
    EngSetLastError(v36);
    return 0LL;
  }
LABEL_18:
  switch ( a3 )
  {
    case 0:
      if ( v17 || (v27 = 1LL, v14) )
        v27 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v27);
      break;
    case 1:
      if ( v20 && !v18 )
        Win32FreePool(v20);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v25);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0LL, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_132;
  }
  v29 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_132:
    if ( v20 && !v18 )
      Win32FreePool(v20);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v49, SolidBrushInternal);
  v30 = v49[0];
  if ( v49[0] )
  {
    *(_DWORD *)(v49[0] + 40LL) |= 0x400u;
    *(_DWORD *)(v30 + 176) = a1;
    *(_BYTE *)(v30 + 185) = v47;
    *(_BYTE *)(v30 + 184) = v46;
    *(_QWORD *)(v30 + 152) = v20;
    *(_DWORD *)(v30 + 180) = v24;
    *(_DWORD *)(v30 + 168) = v48;
    if ( v18 )
      *(_DWORD *)(v30 + 40) |= 0x4000u;
    *(_DWORD *)(v30 + 188) = a3;
    *(_QWORD *)(v30 + 160) = a5;
    if ( a10 || v13 == 0x10000 )
      *(float *)(v30 + 172) = (float)v48;
    v31 = (unsigned __int64)v29 | 0x500000;
    if ( a10 )
    {
      v32 = *(_DWORD *)(v30 + 40) & 0xFFFFF3FB | 0xC00;
      *(_DWORD *)(v30 + 40) = v32;
      if ( v14 == 6 )
        *(_DWORD *)(v30 + 40) = v32 | 0x10004;
      v31 = (unsigned __int64)v29 | 0x300000;
    }
    else if ( v13 )
    {
      if ( v14 == 6 )
        *(_DWORD *)(v30 + 40) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v30 + 40) &= ~4u;
    }
    HmgModifyHandleType(v31);
    v11 = v31;
  }
  else if ( v20 && !v18 )
  {
    Win32FreePool(v20);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v49);
  return (void *)v11;
}
