/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x14008AB40
 * Callers:
 *     MiObtainSessionVa @ 0x1400F7324 (MiObtainSessionVa.c)
 *     RtlpHpFixedVsAllocate @ 0x140139570 (RtlpHpFixedVsAllocate.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     MiScanLeafNonPagedPool @ 0x1401638F0 (MiScanLeafNonPagedPool.c)
 *     MiReplenishNonPagedSlists @ 0x140163FA4 (MiReplenishNonPagedSlists.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140167C28 (ExpSaPageGroupAllocateMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F9BBC (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r9
  unsigned __int64 *v12; // rax
  signed __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rax
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rbx
  __int64 v21; // r10
  bool v22; // zf
  __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  bool v27; // sf
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  __int64 v33; // r8
  unsigned int v34; // edx
  unsigned __int64 *v35; // r8
  unsigned int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx

  v4 = *a1;
  v5 = a3;
  v7 = a1[1];
  v8 = *a1 - 1;
  if ( a3 >= *a1 )
    v5 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( v8 - v5 + 1 < a2 )
        goto LABEL_33;
      v10 = v8 - a2 + 1;
      v11 = v7 + 8 * (v10 >> 6);
      v12 = (unsigned __int64 *)(v7 + 8 * (v5 >> 6));
      v13 = *v12 | ((1LL << (v5 & 0x3F)) - 1);
      if ( a2 > 0x7F )
        break;
      if ( a2 >= 0x40 )
      {
        while ( 2 )
        {
          v27 = v13 < 0;
          while ( 1 )
          {
            if ( v27 )
            {
              do
              {
                if ( (unsigned __int64)++v12 > v11 )
                  goto LABEL_33;
                v13 = *v12;
              }
              while ( (*v12 & 0x8000000000000000uLL) != 0LL );
            }
            v22 = !_BitScanReverse64((unsigned __int64 *)&v28, v13);
            if ( v22 )
              v29 = 64;
            else
              v29 = 63 - v28;
            v18 = ((((__int64)((__int64)v12 - v7) >> 3) + 1) << 6) - v29;
            if ( v18 > v10 )
              goto LABEL_33;
            v30 = a2 - v29;
            if ( a2 == v29 )
              goto LABEL_11;
            v13 = v12[1];
            ++v12;
            if ( v30 < 0x40 )
              break;
            v27 = v13 < 0;
            if ( !v13 )
            {
              v30 -= 64LL;
              if ( !v30 )
                goto LABEL_11;
              v13 = v12[1];
              ++v12;
              break;
            }
          }
          v22 = !_BitScanForward64(&v31, v13);
          if ( v22 )
            v31 = 64LL;
          if ( v31 < v30 )
            continue;
          break;
        }
      }
      else
      {
        if ( a2 > 1 )
        {
          v21 = 0LL;
          while ( v13 != -1 )
          {
LABEL_21:
            v22 = !_BitScanForward64((unsigned __int64 *)&v23, v13);
            if ( v22 )
              LODWORD(v23) = 64;
            if ( (unsigned int)(v21 + v23) >= a2 )
            {
              v17 = -v21;
LABEL_28:
              v16 = (__int64)((__int64)v12 - v7) >> 3 << 6;
              goto LABEL_10;
            }
            v24 = a2;
            v17 = ~v13;
            while ( 1 )
            {
              v17 &= v17 >> (v24 >> 1);
              if ( !v17 )
                break;
              v24 -= v24 >> 1;
              if ( v24 <= 1 )
              {
                _BitScanForward64(&v17, v17);
                goto LABEL_28;
              }
            }
            if ( v12 == (unsigned __int64 *)(v7 + 8 * (v8 >> 6)) )
              goto LABEL_33;
            v22 = !_BitScanReverse64((unsigned __int64 *)&v25, v13);
            if ( v22 )
              v21 = 64LL;
            else
              v21 = (unsigned int)(63 - v25);
            v13 = v12[1];
            ++v12;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v12 > v11 )
              goto LABEL_33;
            v13 = *v12;
            if ( *v12 != -1LL )
            {
              v21 = 0LL;
              goto LABEL_21;
            }
          }
        }
        if ( v13 == -1 )
        {
          while ( (unsigned __int64)++v12 <= v11 )
          {
            v13 = *v12;
            if ( *v12 != -1LL )
              goto LABEL_9;
          }
LABEL_33:
          v18 = -1LL;
          goto LABEL_34;
        }
LABEL_9:
        _BitScanForward64(&v14, ~v13);
        v15 = (__int64)((__int64)v12 - v7) >> 3;
        v16 = (unsigned int)v14;
        v17 = v15 << 6;
LABEL_10:
        v18 = v16 + v17;
        if ( v18 > v10 )
        {
          v18 = -1LL;
          goto LABEL_34;
        }
      }
LABEL_11:
      if ( v18 != -1LL )
        goto LABEL_12;
LABEL_34:
      if ( !v5 )
      {
LABEL_12:
        v19 = v18;
        goto LABEL_13;
      }
      v26 = a2 + a3;
      if ( a2 + a3 > v4 )
        v26 = v4;
      v8 = v26 - 1;
      v5 = 0LL;
    }
    v32 = v11 + 8;
    if ( (v10 & 0x3F) == 0 )
      v32 = v7 + 8 * ((v8 - a2 + 1) >> 6);
    if ( v13 )
    {
      if ( !*++v12 )
      {
        v22 = !_BitScanReverse64((unsigned __int64 *)&v38, v13);
        if ( v22 )
          v34 = 64;
        else
          v34 = 63 - v38;
        goto LABEL_64;
      }
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v12 > v32 )
            goto LABEL_33;
          ++v12;
        }
        while ( *v12 );
        v22 = !_BitScanReverse64((unsigned __int64 *)&v33, *(v12 - 1));
        if ( v22 )
          v34 = 64;
        else
          v34 = 63 - v33;
LABEL_64:
        v18 = ((__int64)((__int64)v12 - v7) >> 3 << 6) - v34;
        if ( v18 > v10 )
          goto LABEL_33;
        v35 = &v12[(a2 - v34) >> 6];
        if ( ++v12 == v35 )
        {
LABEL_68:
          v36 = ((_BYTE)a2 - (_BYTE)v34) & 0x3F;
          if ( (((_BYTE)a2 - (_BYTE)v34) & 0x3F) == 0 )
            goto LABEL_11;
          v22 = !_BitScanForward64((unsigned __int64 *)&v37, *v12);
          if ( v22 )
            LODWORD(v37) = 64;
          if ( (unsigned int)v37 >= v36 )
            goto LABEL_11;
        }
        else
        {
          while ( !*v12 )
          {
            if ( ++v12 == v35 )
              goto LABEL_68;
          }
        }
      }
    }
    v34 = 0;
    goto LABEL_64;
  }
  v19 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v19 != -1LL )
    RtlSetBitsEx(a1, v19, a2);
  return v19;
}
