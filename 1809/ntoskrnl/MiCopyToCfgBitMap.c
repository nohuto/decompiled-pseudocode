/*
 * XREFs of MiCopyToCfgBitMap @ 0x1405F3A10
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1405F11D0 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1405F7560 (MiPopulateCfgBitMap.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiEliminateZeroPages @ 0x14066D070 (MiEliminateZeroPages.c)
 *     RtlEnumRvaListFirst @ 0x1406AC3E4 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        unsigned __int64 Src,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8,
        size_t Size)
{
  unsigned int v10; // edx
  unsigned int v11; // r15d
  __int64 v12; // r11
  unsigned __int64 v13; // r10
  char *PoolWithTag; // r13
  char *v15; // rsi
  size_t v16; // r9
  unsigned __int64 v17; // rdi
  int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  size_t v21; // rdi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // esi
  unsigned int v27; // ebx
  unsigned int i; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // r11d
  unsigned int v36; // r10d
  __int64 v37; // rax
  unsigned __int8 *v38; // r8
  __int64 v39; // r9
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // edi
  unsigned int v43; // r8d
  int v44; // r10d
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // r11d
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  int *v52; // rax
  void *v53; // rsp
  char v54; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v55; // [rsp+100h] [rbp+0h]
  unsigned int v56; // [rsp+104h] [rbp+4h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  int v58; // [rsp+110h] [rbp+10h]
  char *v59; // [rsp+118h] [rbp+18h]
  char *v60; // [rsp+120h] [rbp+20h]
  unsigned __int64 v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+130h] [rbp+30h]
  _RTL_BITMAP BitMapHeader; // [rsp+138h] [rbp+38h] BYREF
  __int64 v64; // [rsp+148h] [rbp+48h]
  ULONG_PTR v65; // [rsp+150h] [rbp+50h]

  v62 = a4;
  v65 = a2;
  v10 = 0;
  v55 = 0;
  v11 = a7;
  v12 = a7;
  v57 = a7;
  v58 = 0;
  v13 = 4096LL;
  v64 = 4096LL;
  if ( a2 <= 1 )
  {
    if ( a2 )
      PoolWithTag = (char *)qword_14043BEA8;
    else
      PoolWithTag = (char *)qword_14043BEB0;
    goto LABEL_32;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6554694Du);
  v60 = PoolWithTag;
  v10 = v55;
  v12 = a7;
  if ( !PoolWithTag )
  {
    v13 = 256LL;
    v64 = 256LL;
    v53 = alloca(256LL);
    PoolWithTag = &v54;
LABEL_32:
    v60 = PoolWithTag;
    goto LABEL_4;
  }
  v58 = 1;
  v13 = 4096LL;
LABEL_4:
  v15 = (char *)Src;
  v59 = (char *)Src;
  v16 = Size;
  v17 = (Size >> 12) + (((Size & 0xFFF) + (unsigned int)(Src & 0xFFF) + 4095) >> 12);
  v61 = v17;
  v18 = 0;
  while ( v16 )
  {
    v19 = (unsigned int)v15 & ((_DWORD)v13 - 1);
    v20 = v13 - v19;
    if ( v13 - v19 >= v16 )
      v20 = v16;
    v21 = v20;
    if ( a2 > 1 )
    {
      if ( v62 == 1 )
      {
        if ( v10 < *(_DWORD *)a2 )
        {
          v23 = (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL * v10) - v12) & ~(v13 - 1);
          v24 = (2 * (v23 >> 4)) >> 3;
          if ( v24 >= v13 )
          {
            v57 = v23 + v12;
            v15 += v24;
            v59 = v15;
            v16 -= v24;
            Size = v16;
          }
        }
        v25 = (unsigned int)v15 & ((_DWORD)v13 - 1);
        if ( v13 - v25 < v16 )
          v21 = (unsigned int)(v13 - v25);
        else
          v21 = (unsigned int)v16;
        memmove(PoolWithTag, v15, (unsigned int)v21);
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v21;
        v26 = (unsigned int)v21 >> 1;
        v27 = (unsigned int)v21 >> 1 << 7;
        for ( i = v55; i < *(_DWORD *)a2; i = ++v55 )
        {
          v29 = 2LL * i;
          v30 = *(_QWORD *)(a2 + 8);
          v31 = *(_DWORD *)(v30 + 8 * v29) - v57;
          v27 = v26 << 7;
          if ( v31 >= v26 << 7 )
            break;
          v32 = v31 >> 4;
          if ( (*(_BYTE *)(v30 + 8 * v29 + 8) & 5) != 0 )
          {
            _bittestandreset((signed __int32 *)PoolWithTag, 2 * v32 + 1);
            _bittestandset((signed __int32 *)PoolWithTag, 2 * v32);
          }
          else
          {
            RtlClearBits(&BitMapHeader, 2 * v32, 2u);
          }
        }
        v57 += v27;
      }
      else
      {
        v21 = v20;
        if ( v62 )
          goto LABEL_9;
        BitMapHeader.Buffer = (unsigned int *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v20;
        RtlClearAllBits(&BitMapHeader);
        v33 = v11 + (v20 >> 1 << 7);
        v56 = v33;
        v34 = *a8;
        if ( !*a8 )
        {
          v34 = RtlEnumRvaListFirst(a2, a8 + 2, a8 + 1);
          *a8 = v34;
          goto LABEL_42;
        }
        do
        {
          if ( v34 >= v11 )
          {
            if ( v34 >= v33 )
              break;
            v48 = a8[1];
            if ( (v48 & 1) != 0 )
            {
              v49 = (v34 - v11) >> 4;
              if ( (v34 & 0xF) != 0 )
              {
                RtlSetBits(&BitMapHeader, 2 * v49, 2u);
              }
              else
              {
                v50 = 2 * v49;
                v51 = v50 + 1;
                if ( (v48 & 4) != 0 )
                {
                  _bittestandreset((signed __int32 *)PoolWithTag, v50);
                  _bittestandset((signed __int32 *)PoolWithTag, v51);
                }
                else
                {
                  _bittestandset((signed __int32 *)PoolWithTag, v50);
                  _bittestandreset((signed __int32 *)PoolWithTag, v51);
                }
              }
            }
          }
          v35 = ++a8[3];
          v36 = a8[2];
          v37 = a8[4];
          v38 = (unsigned __int8 *)(v37 + *(_QWORD *)(a2 + 16));
          v39 = *(_QWORD *)(a2 + 24) - v37;
          if ( v39 )
          {
            do
            {
              if ( !v39 )
                KeBugCheckEx(0x1Au, 0x43666720uLL, a2, (ULONG_PTR)(a8 + 2), v36);
              v40 = *v38++;
              --v39;
              v41 = v40 >> 6;
              v36 += (v40 & 0x3F) * RtlpRvaCompressionTableScales[v41];
            }
            while ( (_DWORD)v41 != 3 );
            a8[2] = v36;
            a8[4] = (_DWORD)v38 - *(_DWORD *)(a2 + 16);
            if ( a8 != (unsigned int *)-4LL )
            {
              v42 = 0;
              v43 = *(_DWORD *)(a2 + 8);
              if ( v43 <= 1 )
              {
                if ( v43 == 1 )
                {
                  v52 = *(int **)(a2 + 48);
                  if ( v52 )
                    v42 = *v52;
                  else
                    v42 = 1;
                }
              }
              else
              {
                v44 = v35 * v43;
                v45 = 0LL;
                do
                {
                  if ( _bittest64(*(const signed __int64 **)(a2 + 40), (unsigned int)(v45 + v44)) )
                  {
                    v46 = *(_QWORD *)(a2 + 48);
                    if ( v46 )
                      v47 = *(_DWORD *)(v46 + 4 * v45);
                    else
                      v47 = 1 << v45;
                    v42 |= v47;
                  }
                  v45 = (unsigned int)(v45 + 1);
                }
                while ( (unsigned int)v45 < v43 );
              }
              a8[1] = v42;
            }
            v34 = a8[2];
          }
          else
          {
            v34 = 0;
          }
LABEL_42:
          v33 = v56;
        }
        while ( v34 );
        v11 = v33;
        *a8 = v34;
        v21 = v20;
      }
      v15 = v59;
    }
LABEL_9:
    v18 = MiSplitPrivatePage((ULONG_PTR)v15, a6);
    if ( v18 < 0 || (v18 = MiCopyToUserVa((ULONG_PTR)v15, a6, PoolWithTag, v21), v18 < 0) )
    {
      v17 = v61;
      break;
    }
    v10 = v55;
    if ( v55 )
      **(_DWORD **)(a2 + 16) = v55;
    v15 += v21;
    v59 = v15;
    v16 = Size - v21;
    Size -= v21;
    v13 = v64;
    v17 = v61;
    v12 = v57;
  }
  if ( v58 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( a2 )
  {
    if ( v18 >= 0 )
      goto LABEL_18;
    if ( v15 != (char *)Src && v18 != -1073741818 )
    {
      v17 = (unsigned __int64)&v15[-(Src & 0xFFFFFFFFFFFFF000uLL)] >> 12;
LABEL_18:
      MiEliminateZeroPages(
        &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
        Src & 0xFFFFFFFFFFFFF000uLL,
        v17 << 12);
    }
  }
  return (unsigned int)v18;
}
