/*
 * XREFs of MiCopyToCfgBitMap @ 0x1405EC930
 * Callers:
 *     MiPopulateCfgBitMap @ 0x1405EC81C (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x140607108 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020860 (MiCopyToUserVa.c)
 *     RtlSetBitsEx @ 0x1400733B0 (RtlSetBitsEx.c)
 *     RtlClearAllBitsEx @ 0x1400A9490 (RtlClearAllBitsEx.c)
 *     RtlClearBitsEx @ 0x1400ACE50 (RtlClearBitsEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiEliminateZeroPages @ 0x1405EC600 (MiEliminateZeroPages.c)
 *     RtlEnumRvaListFirst @ 0x14066FB98 (RtlEnumRvaListFirst.c)
 */

__int64 __fastcall MiCopyToCfgBitMap(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        ULONG_PTR Src,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8,
        size_t Size)
{
  unsigned __int64 v9; // r8
  unsigned int *v10; // r12
  ULONG_PTR v11; // r15
  unsigned __int64 v12; // rdx
  unsigned int v13; // r13d
  unsigned int v14; // esi
  __int64 v15; // r11
  __int64 v16; // rdi
  char *PoolWithTag; // r14
  void *v18; // rsp
  char *v19; // r9
  size_t v20; // r10
  int v21; // ebx
  int v22; // r8d
  __int64 v23; // rcx
  unsigned int v24; // ebx
  size_t v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 i; // rax
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned __int64 v32; // rcx
  unsigned int v33; // edi
  unsigned int *v34; // rbx
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // ecx
  unsigned int v38; // eax
  unsigned __int64 v39; // rax
  int *v40; // r12
  unsigned int *v41; // rsi
  unsigned int v42; // ebx
  unsigned int v43; // r10d
  __int64 v44; // rax
  unsigned __int8 *v45; // r9
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rdx
  int v49; // r10d
  unsigned int v50; // r11d
  unsigned int v51; // r8d
  int v52; // edx
  __int64 v53; // r9
  __int64 v54; // rax
  int v55; // ecx
  int *v56; // rax
  ULONG_PTR v57; // rdi
  char v59; // [rsp+10h] [rbp-100h] BYREF
  int v60; // [rsp+110h] [rbp+0h]
  unsigned __int64 v61; // [rsp+118h] [rbp+8h]
  __int64 v62; // [rsp+120h] [rbp+10h]
  char *v63; // [rsp+128h] [rbp+18h]
  unsigned int v64; // [rsp+130h] [rbp+20h]
  unsigned __int64 v65; // [rsp+138h] [rbp+28h]
  unsigned __int64 v66; // [rsp+140h] [rbp+30h]
  PVOID P; // [rsp+148h] [rbp+38h]
  unsigned __int64 v68; // [rsp+150h] [rbp+40h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+158h] [rbp+48h] BYREF
  int v70; // [rsp+168h] [rbp+58h]
  unsigned int v71; // [rsp+16Ch] [rbp+5Ch]
  unsigned __int64 v72; // [rsp+170h] [rbp+60h]
  __int64 v73; // [rsp+178h] [rbp+68h]
  unsigned __int64 v74; // [rsp+180h] [rbp+70h]

  v70 = a4;
  v9 = a2;
  v66 = a2;
  v73 = a1;
  BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v10 = a8;
  if ( a2 > 1 )
  {
    if ( *a8 == -1 )
      v9 = 1LL;
    v66 = v9;
  }
  v11 = v9;
  v72 = v9;
  v74 = v9;
  v12 = v9;
  v61 = v9;
  v13 = 0;
  v14 = a7;
  v15 = a7;
  v62 = a7;
  v60 = 0;
  v16 = 4096LL;
  v65 = 4096LL;
  if ( v9 <= 1 )
  {
    PoolWithTag = (char *)qword_140466868;
    if ( !v9 )
      PoolWithTag = (char *)qword_140466870;
    goto LABEL_11;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6554694Du);
  P = PoolWithTag;
  v12 = v11;
  v15 = a7;
  if ( !PoolWithTag )
  {
    v16 = 256LL;
    v65 = 256LL;
    v18 = alloca(256LL);
    PoolWithTag = &v59;
LABEL_11:
    P = PoolWithTag;
    goto LABEL_12;
  }
  v60 = 1;
LABEL_12:
  v19 = (char *)Src;
  v63 = (char *)Src;
  v20 = Size;
  v68 = (Size >> 12) + (((Src & 0xFFF) + 4095 + (Size & 0xFFF)) >> 12);
  v21 = 0;
  while ( v20 )
  {
    v22 = v16 - 1;
    v23 = (unsigned int)v19 & ((_DWORD)v16 - 1);
    v24 = v16 - v23;
    if ( v16 - v23 >= v20 )
      v24 = v20;
    v71 = v24;
    v25 = v24;
    if ( v66 > 1 )
    {
      if ( v70 == 1 )
      {
        if ( v13 < *(_DWORD *)v12 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v13) - v15;
          v27 = (2 * ((v26 & ~(v65 - 1)) >> 4)) >> 3;
          if ( v27 >= v65 )
          {
            v62 = (v26 & ~(v65 - 1)) + v15;
            v19 += v27;
            v63 = v19;
            v20 -= v27;
            Size = v20;
          }
        }
        v28 = (unsigned int)v19 & v22;
        v25 = (unsigned int)(v65 - v28);
        if ( v65 - v28 >= v20 )
          v25 = (unsigned int)v20;
        memmove(PoolWithTag, v19, (unsigned int)v25);
        BitMapHeader.Buffer = (unsigned __int64 *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = (unsigned int)(8 * v25);
        for ( i = v61; v13 < *(_DWORD *)v61; i = v61 )
        {
          v30 = *(_QWORD *)(i + 8);
          v31 = *(_DWORD *)(v30 + 16LL * v13) - v62;
          if ( v31 >= (unsigned int)v25 >> 1 << 7 )
            break;
          if ( (*(_BYTE *)(v30 + 16LL * v13 + 8) & 5) != 0 )
          {
            v32 = 2 * ((unsigned __int64)v31 >> 4);
            _bittestandreset64((signed __int64 *)PoolWithTag, v32 + 1);
            _bittestandset64((signed __int64 *)PoolWithTag, v32);
          }
          else
          {
            RtlClearBitsEx((__int64)&BitMapHeader, 2 * ((unsigned __int64)v31 >> 4), 2uLL);
          }
          ++v13;
        }
        v62 += (unsigned int)v25 >> 1 << 7;
        goto LABEL_64;
      }
      v25 = v24;
      if ( !v70 )
      {
        BitMapHeader.Buffer = (unsigned __int64 *)PoolWithTag;
        BitMapHeader.SizeOfBitMap = 8 * v24;
        RtlClearAllBitsEx(&BitMapHeader);
        v33 = v14 + (v24 >> 1 << 7);
        v64 = v33;
        v34 = a8;
        v35 = *a8;
        if ( !*a8 )
        {
          v35 = RtlEnumRvaListFirst(v11, a8 + 2, a8 + 1);
          *a8 = v35;
          if ( !v35 )
          {
LABEL_62:
            v35 = -1;
            goto LABEL_63;
          }
        }
        while ( 1 )
        {
          if ( v35 >= v14 )
          {
            if ( v35 >= v33 )
            {
              if ( !v35 )
                goto LABEL_62;
LABEL_63:
              v14 = v33;
              a7 = v33;
              v10 = a8;
              *a8 = v35;
              v25 = v71;
LABEL_64:
              v19 = v63;
              break;
            }
            v36 = v34[1];
            if ( (v36 & 1) != 0 )
            {
              v37 = v35 & 0xF;
              v38 = v35 - v14;
              if ( v37 == *(_DWORD *)(v73 + 24) )
              {
                v39 = 2 * ((unsigned __int64)v38 >> 4);
                if ( (v36 & 4) != 0 )
                {
                  _bittestandreset64((signed __int64 *)PoolWithTag, v39);
                  _bittestandset64((signed __int64 *)PoolWithTag, v39 + 1);
                }
                else
                {
                  _bittestandset64((signed __int64 *)PoolWithTag, v39);
                  _bittestandreset64((signed __int64 *)PoolWithTag, v39 + 1);
                }
              }
              else
              {
                RtlSetBitsEx((__int64)&BitMapHeader, 2 * ((unsigned __int64)v38 >> 4), 2uLL);
              }
            }
          }
          v40 = (int *)(v34 + 1);
          v41 = v34 + 2;
          v42 = ++v34[3];
          v43 = *v41;
          v44 = v41[2];
          v45 = (unsigned __int8 *)(v44 + *(_QWORD *)(v11 + 16));
          v46 = *(_QWORD *)(v11 + 24) - v44;
          if ( !v46 )
            goto LABEL_62;
          do
          {
            if ( !v46 )
              KeBugCheckEx(0x1Au, 0x43666720uLL, v11, (ULONG_PTR)v41, v43);
            v47 = *v45++;
            --v46;
            v48 = v47 >> 6;
            v43 += (v47 & 0x3F) * RtlpRvaCompressionTableScales[v48];
          }
          while ( (_DWORD)v48 != 3 );
          *v41 = v43;
          v41[2] = (_DWORD)v45 - *(_DWORD *)(v11 + 16);
          if ( v40 )
          {
            v49 = 0;
            v50 = *(_DWORD *)(v11 + 8);
            if ( v50 <= 1 )
            {
              if ( v50 == 1 )
              {
                v56 = *(int **)(v11 + 48);
                if ( v56 )
                  v49 = *v56;
                else
                  v49 = 1;
              }
            }
            else
            {
              v51 = 0;
              v52 = 1;
              v53 = 0LL;
              do
              {
                if ( _bittest64(*(const signed __int64 **)(v74 + 40), v51 + v42 * v50) )
                {
                  v54 = *(_QWORD *)(v11 + 48);
                  if ( v54 )
                    v55 = *(_DWORD *)(v53 + v54);
                  else
                    v55 = v52;
                  v49 |= v55;
                }
                ++v51;
                v52 = __ROL4__(v52, 1);
                v53 += 4LL;
              }
              while ( v51 < v50 );
              v33 = v64;
            }
            *v40 = v49;
          }
          v35 = *v41;
          if ( !*v41 )
            goto LABEL_62;
          v14 = a7;
          v34 = a8;
        }
      }
    }
    v21 = MiSplitPrivatePage((ULONG_PTR)v19, a6);
    if ( v21 < 0 )
      break;
    v21 = MiCopyToUserVa((ULONG_PTR)v63, a6, PoolWithTag, v25);
    if ( v21 < 0 )
      break;
    if ( v13 )
    {
      v12 = v61;
      **(_DWORD **)(v61 + 16) = v13;
    }
    else
    {
      if ( v66 > 1 && *v10 == -1 )
      {
        if ( v60 )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          v60 = 0;
        }
        v66 = 1LL;
        v65 = 4096LL;
        PoolWithTag = (char *)qword_140466868;
        P = (PVOID)qword_140466868;
      }
      v12 = v61;
    }
    v19 = &v63[v25];
    v63 += v25;
    v20 = Size - v25;
    Size -= v25;
    v15 = v62;
    v16 = v65;
  }
  v57 = v68;
  if ( v60 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 )
  {
    if ( v21 >= 0 )
    {
LABEL_83:
      MiEliminateZeroPages(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6],
        Src & 0xFFFFFFFFFFFFF000uLL,
        v57 << 12);
      return (unsigned int)v21;
    }
    if ( v63 != (char *)Src && v21 != -1073741818 )
    {
      v57 = (unsigned __int64)&v63[-(Src & 0xFFFFFFFFFFFFF000uLL)] >> 12;
      goto LABEL_83;
    }
  }
  return (unsigned int)v21;
}
