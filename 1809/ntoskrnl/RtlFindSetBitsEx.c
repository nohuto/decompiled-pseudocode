/*
 * XREFs of RtlFindSetBitsEx @ 0x140061C10
 * Callers:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140578C58 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405793C4 (IopLiveDumpPopulateBitmapForDump.c)
 *     MiDeleteLeakedSessionPool @ 0x1406E0920 (MiDeleteLeakedSessionPool.c)
 *     MiDeleteAweInfoPages @ 0x14084FD58 (MiDeleteAweInfoPages.c)
 *     MiScrubProcessPhysicalPages @ 0x140850370 (MiScrubProcessPhysicalPages.c)
 *     MiUnlockHotPatchPages @ 0x1408583BC (MiUnlockHotPatchPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindSetBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r11
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r9
  __int64 *v11; // rax
  signed __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  unsigned __int64 v19; // r10
  unsigned int v20; // edi
  __int64 *v21; // rsi
  bool v22; // zf
  __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // sf
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // edx
  __int64 *v38; // r8
  unsigned int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx

  v3 = *a1;
  v4 = a1[1];
  v5 = a3;
  if ( a3 >= *a1 )
    v5 = 0LL;
  v8 = v3 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v8 - v5 + 1 < a2 )
        goto LABEL_13;
      v9 = v8 - a2 + 1;
      v10 = v4 + 8 * (v9 >> 6);
      v11 = (__int64 *)(v4 + 8 * (v5 >> 6));
      v12 = ~*v11 | ((1LL << (v5 & 0x3F)) - 1);
      if ( a2 > 0x7F )
        break;
      if ( a2 >= 0x40 )
      {
        while ( 2 )
        {
          v27 = v12 < 0;
          while ( 1 )
          {
            if ( v27 )
            {
              do
              {
                if ( (unsigned __int64)++v11 > v10 )
                  goto LABEL_13;
                v12 = ~*v11;
              }
              while ( *v11 >= 0 );
            }
            v22 = !_BitScanReverse64((unsigned __int64 *)&v28, v12);
            if ( v22 )
              v29 = 64;
            else
              v29 = 63 - v28;
            v17 = ((((__int64)((__int64)v11 - v4) >> 3) + 1) << 6) - v29;
            if ( v17 > v9 )
              goto LABEL_13;
            v30 = a2 - v29;
            if ( a2 == v29 )
              goto LABEL_11;
            v31 = v11[1];
            ++v11;
            v12 = ~v31;
            if ( v30 < 0x40 )
              break;
            v27 = v12 < 0;
            if ( !v12 )
            {
              v30 -= 64LL;
              if ( !v30 )
                goto LABEL_11;
              v41 = v11[1];
              ++v11;
              v12 = ~v41;
              break;
            }
          }
          v22 = !_BitScanForward64(&v32, v12);
          if ( v22 )
            v32 = 64LL;
          if ( v32 < v30 )
            continue;
          break;
        }
      }
      else
      {
        if ( a2 > 1 )
        {
          v20 = 0;
          v21 = (__int64 *)(v4 + 8 * (v8 >> 6));
          while ( v12 != -1 )
          {
LABEL_23:
            v22 = !_BitScanForward64((unsigned __int64 *)&v23, v12);
            if ( v22 )
              LODWORD(v23) = 64;
            if ( v20 + (unsigned int)v23 >= a2 )
            {
              v16 = -(__int64)v20;
LABEL_30:
              v15 = (__int64)((__int64)v11 - v4) >> 3 << 6;
              goto LABEL_10;
            }
            v24 = a2;
            v16 = ~v12;
            while ( 1 )
            {
              v16 &= v16 >> (v24 >> 1);
              if ( !v16 )
                break;
              v24 -= v24 >> 1;
              if ( v24 <= 1 )
              {
                _BitScanForward64(&v16, v16);
                goto LABEL_30;
              }
            }
            if ( v11 == v21 )
              goto LABEL_13;
            v22 = !_BitScanReverse64((unsigned __int64 *)&v25, v12);
            if ( v22 )
              v20 = 64;
            else
              v20 = 63 - v25;
            v26 = v11[1];
            ++v11;
            v12 = ~v26;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v11 > v10 )
              goto LABEL_13;
            v12 = ~*v11;
            if ( *v11 )
            {
              v20 = 0;
              goto LABEL_23;
            }
          }
        }
        if ( v12 == -1 )
        {
          while ( (unsigned __int64)++v11 <= v10 )
          {
            v12 = ~*v11;
            if ( *v11 )
              goto LABEL_9;
          }
LABEL_13:
          v17 = -1LL;
          goto LABEL_14;
        }
LABEL_9:
        _BitScanForward64(&v13, ~v12);
        v14 = (__int64)((__int64)v11 - v4) >> 3;
        v15 = (unsigned int)v13;
        v16 = v14 << 6;
LABEL_10:
        v17 = v15 + v16;
        if ( v17 > v9 )
        {
          v17 = -1LL;
          goto LABEL_14;
        }
      }
LABEL_11:
      if ( v17 != -1LL )
        return v17;
LABEL_14:
      if ( !v5 )
        return v17;
      v19 = a2 + a3;
      if ( a2 + a3 > v3 )
        v19 = v3;
      v8 = v19 - 1;
      v5 = 0LL;
    }
    v33 = v10 + 8;
    if ( (v9 & 0x3F) == 0 )
      v33 = v4 + 8 * ((v8 - a2 + 1) >> 6);
    if ( v12 )
    {
      v34 = v11[1];
      ++v11;
      if ( v34 == -1 )
      {
        v22 = !_BitScanReverse64((unsigned __int64 *)&v42, v12);
        if ( v22 )
          v37 = 64;
        else
          v37 = 63 - v42;
        goto LABEL_61;
      }
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v11 > v33 )
            goto LABEL_13;
          v35 = v11[1];
          ++v11;
        }
        while ( v35 != -1 );
        v22 = !_BitScanReverse64((unsigned __int64 *)&v36, ~*(v11 - 1));
        if ( v22 )
          v37 = 64;
        else
          v37 = 63 - v36;
LABEL_61:
        v17 = ((__int64)((__int64)v11 - v4) >> 3 << 6) - v37;
        if ( v17 > v9 )
          goto LABEL_13;
        v38 = &v11[(a2 - v37) >> 6];
        if ( ++v11 == v38 )
        {
LABEL_65:
          v39 = ((_BYTE)a2 - (_BYTE)v37) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v37) & 0x3F) == 0 )
            goto LABEL_11;
          v22 = !_BitScanForward64((unsigned __int64 *)&v40, ~*v11);
          if ( v22 )
            LODWORD(v40) = 64;
          if ( (unsigned int)v40 >= v39 )
            goto LABEL_11;
        }
        else
        {
          while ( *v11 == -1 )
          {
            if ( ++v11 == v38 )
              goto LABEL_65;
          }
        }
      }
    }
    v37 = 0;
    goto LABEL_61;
  }
  return v5 & 0xFFFFFFFFFFFFFFF8uLL;
}
