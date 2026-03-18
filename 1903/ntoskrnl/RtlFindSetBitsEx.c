/*
 * XREFs of RtlFindSetBitsEx @ 0x140119B90
 * Callers:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1405A8AF8 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405A9254 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiUnlockDriverPages @ 0x140887E90 (MiUnlockDriverPages.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 *     MiScrubProcessPhysicalPages @ 0x140896CF8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindSetBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r8
  signed __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  _QWORD *v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r10
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // r9
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = a3 & -(__int64)(a3 < *a1);
  v8 = *a1 - 1;
  if ( !a2 )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v7 + 1 < a2 )
      goto LABEL_14;
    v9 = v8 - a2 + 1;
    v10 = v5 + 8 * (v9 >> 6);
    v11 = (_QWORD *)(v5 + 8 * (v7 >> 6));
    v12 = ~*v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( a2 > 0x7F )
    {
      v25 = v10 + 8;
      if ( (v9 & 0x3F) == 0 )
        v25 = v5 + 8 * (v9 >> 6);
      if ( !v12 )
      {
        v27 = 0;
        goto LABEL_51;
      }
      if ( *++v11 != -1LL )
        goto LABEL_47;
      v20 = !_BitScanReverse64((unsigned __int64 *)&v26, v12);
      if ( !v20 )
      {
        v27 = 63 - v26;
        goto LABEL_51;
      }
LABEL_74:
      v27 = 64;
LABEL_51:
      while ( 1 )
      {
        v14 = ((__int64)((__int64)v11 - v5) >> 3 << 6) - v27;
        if ( v14 > v9 )
          goto LABEL_14;
        v31 = &v11[(a2 - v27) >> 6];
        while ( ++v11 != v31 )
        {
          if ( *v11 != -1LL )
            goto LABEL_47;
        }
        v28 = ((_BYTE)a2 - (_BYTE)v27) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v27) & 0x3F) == 0 )
          goto LABEL_11;
        v20 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v11);
        if ( v20 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_11;
        do
        {
LABEL_47:
          if ( (unsigned __int64)v11 > v25 )
            goto LABEL_14;
          ++v11;
        }
        while ( *v11 != -1LL );
        v20 = !_BitScanReverse64((unsigned __int64 *)&v30, ~*(v11 - 1));
        if ( v20 )
          goto LABEL_74;
        v27 = 63 - v30;
      }
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v12 < 0 )
          {
            if ( (unsigned __int64)++v11 > v10 )
              goto LABEL_14;
            v12 = ~*v11;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v32, v12);
          if ( v20 )
            v33 = 64;
          else
            v33 = 63 - v32;
          v14 = ((((__int64)((__int64)v11 - v5) >> 3) + 1) << 6) - v33;
          if ( v14 > v9 )
            goto LABEL_14;
          v34 = a2 - v33;
          if ( a2 == v33 )
            goto LABEL_11;
          v12 = ~*++v11;
          if ( v34 >= 0x40 )
            break;
LABEL_64:
          v20 = !_BitScanForward64(&v35, v12);
          if ( v20 )
            v35 = 64LL;
          if ( v35 >= v34 )
            goto LABEL_11;
        }
        if ( *v11 == -1LL )
        {
          v34 -= 64LL;
          if ( !v34 )
            goto LABEL_11;
          v12 = ~*++v11;
          goto LABEL_64;
        }
      }
    }
    if ( a2 > 1 )
    {
      v18 = 0LL;
      v19 = (_QWORD *)(v5 + 8 * (v8 >> 6));
      while ( v12 != -1 )
      {
LABEL_21:
        v20 = !_BitScanForward64((unsigned __int64 *)&v21, v12);
        if ( v20 )
          LODWORD(v21) = 64;
        if ( (unsigned int)(v18 + v21) >= a2 )
        {
          v23 = -v18;
LABEL_28:
          v14 = ((__int64)((__int64)v11 - v5) >> 3 << 6) + v23;
          goto LABEL_10;
        }
        v22 = a2;
        v23 = ~v12;
        while ( 1 )
        {
          v23 &= v23 >> (v22 >> 1);
          if ( !v23 )
            break;
          v22 -= v22 >> 1;
          if ( v22 <= 1 )
          {
            _BitScanForward64(&v23, v23);
            goto LABEL_28;
          }
        }
        if ( v11 == v19 )
          goto LABEL_14;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v12);
        if ( v20 )
          v18 = 64LL;
        else
          v18 = (unsigned int)(63 - v24);
        v12 = ~*++v11;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v11 > v10 )
          goto LABEL_14;
        v12 = ~*v11;
        if ( v12 != -1 )
        {
          v18 = 0LL;
          goto LABEL_21;
        }
      }
    }
    while ( v12 == -1 )
    {
      if ( (unsigned __int64)++v11 > v10 )
        goto LABEL_14;
      v12 = ~*v11;
    }
    _BitScanForward64(&v13, ~v12);
    v14 = v13 + ((__int64)((__int64)v11 - v5) >> 3 << 6);
LABEL_10:
    if ( v14 <= v9 )
      break;
LABEL_14:
    v14 = -1LL;
LABEL_15:
    if ( !v7 )
      return v14;
    v17 = a2 + a3;
    if ( a2 + a3 > v3 )
      v17 = v3;
    v8 = v17 - 1;
    v7 = 0LL;
  }
LABEL_11:
  if ( v14 == -1LL )
    goto LABEL_15;
  return v14;
}
