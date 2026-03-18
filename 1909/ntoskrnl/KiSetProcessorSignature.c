/*
 * XREFs of KiSetProcessorSignature @ 0x1405A2304
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFA0 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x1405A09A4 (KiSetFeatureBits.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     KiPublishProcessorFeatures @ 0x140A09304 (KiPublishProcessorFeatures.c)
 */

ULONG_PTR __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  unsigned int v8; // r10d
  ULONG_PTR v14; // r9
  ULONG_PTR v15; // r13
  ULONG_PTR v16; // r12
  int v17; // edx
  __int64 v18; // r14
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  int v26; // ebx
  __int64 v27; // r9
  unsigned int v28; // r10d
  int v29; // edx
  int v30; // eax
  int v31; // ebx
  __int64 i; // r8
  unsigned int *v33; // r14
  unsigned int v34; // edx
  unsigned int v35; // ecx
  ULONG_PTR v36; // rdx
  unsigned __int64 v37; // r10
  __int64 j; // rbx
  unsigned int v39; // ecx
  unsigned int v40; // edx
  int v41; // edx
  int v42; // eax
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  ULONG_PTR result; // rax
  int v48; // [rsp+30h] [rbp-78h]
  unsigned int v49; // [rsp+34h] [rbp-74h]
  unsigned int v50; // [rsp+38h] [rbp-70h]
  unsigned int v51; // [rsp+40h] [rbp-68h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]
  unsigned __int64 v53; // [rsp+70h] [rbp-38h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v8 = _RAX;
  v51 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v14 = (unsigned int)_RAX;
  v49 = _RAX;
  v52 = __PAIR64__(_RBX, _RAX);
  v53 = __PAIR64__(_RDX, _RCX);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v48 = 0;
  v50 = 0;
  v18 = 0LL;
  do
  {
    v19 = *(_DWORD *)((char *)&unk_14037B68C + v18);
    if ( (v19 & 2) == 0 )
    {
      if ( !HIBYTE(v19) || (v20 = HIBYTE(v19), _bittest((const int *)&v20, *(unsigned __int8 *)(a1 + 141))) )
      {
        _RAX = *(unsigned int *)((char *)&KiCpuFeatureTable + v18);
        if ( (_DWORD)_RAX != v17 )
        {
          v48 = *(_DWORD *)((char *)&KiCpuFeatureTable + v18);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v8) && (unsigned int)_RAX > (unsigned int)v14 )
          {
            v52 = 0LL;
            v53 = 0LL;
          }
          else
          {
            __asm { cpuid }
            v52 = __PAIR64__(_RBX, _RAX);
            v53 = __PAIR64__(_RDX, _RCX);
          }
        }
        v26 = 0;
        v27 = *(int *)((char *)&unk_14037B688 + v18);
        v28 = *(_DWORD *)((char *)&unk_14037B684 + v18);
        if ( (v28 & *((_DWORD *)&v52 + v27)) != 0 )
        {
          v26 = 1;
          v29 = v19 & 8;
        }
        else
        {
          v29 = v19 & 8;
          if ( (v19 & 8) != 0
            && (v15 & *(_QWORD *)((_BYTE *)&unk_14037B690 + v18)) == *(_QWORD *)((char *)&unk_14037B690 + v18) )
          {
            v26 = 1;
          }
          else if ( (v19 & 0x10) != 0
                 && (v16 & *(_QWORD *)((_BYTE *)&unk_14037B690 + v18)) == *(_QWORD *)((char *)&unk_14037B690 + v18) )
          {
            v26 = 1;
          }
        }
        if ( !v26 )
        {
          if ( (v19 & 1) != 0 )
          {
            if ( !*(_DWORD *)(a1 + 36) )
            {
              KdInitSystem(0LL, KeLoaderBlock_0);
              LODWORD(v27) = *(_DWORD *)((char *)&unk_14037B688 + v18);
              v28 = *(_DWORD *)((char *)&unk_14037B684 + v18);
            }
            KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, *(unsigned int *)((char *)&KiCpuFeatureTable + v18), v28, (int)v27);
          }
          if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
          {
            if ( v29 )
            {
              LOBYTE(v26) = (KeFeatureBits & *(_QWORD *)((_BYTE *)&unk_14037B690 + v18)) == *(_QWORD *)((char *)&unk_14037B690 + v18);
            }
            else if ( (v19 & 0x10) != 0
                   && (KeFeatureBits2 & *(_QWORD *)((_BYTE *)&unk_14037B690 + v18)) == *(_QWORD *)((char *)&unk_14037B690
                                                                                                 + v18) )
            {
LABEL_93:
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFEuLL,
                *(unsigned int *)((char *)&KiCpuFeatureTable + v18),
                *(unsigned int *)((char *)&unk_14037B684 + v18),
                *(int *)((char *)&unk_14037B688 + v18));
            }
            if ( v26 )
              goto LABEL_93;
          }
          goto LABEL_40;
        }
        if ( v29 )
        {
          v15 |= *(_QWORD *)((char *)&unk_14037B690 + v18);
          v30 = v19 & 0x10;
        }
        else
        {
          v30 = v19 & 0x10;
          if ( (v19 & 0x10) != 0 )
            v16 |= *(_QWORD *)((char *)&unk_14037B690 + v18);
        }
        if ( (v19 & 4) != 0 && *(_DWORD *)(a1 + 36) )
        {
          v31 = 0;
          if ( v29 )
          {
            LOBYTE(v31) = (KeFeatureBits & *(_QWORD *)((_BYTE *)&unk_14037B690 + v18)) == *(_QWORD *)((char *)&unk_14037B690 + v18);
            goto LABEL_39;
          }
          if ( !v30
            || (KeFeatureBits2 & *(_QWORD *)((_BYTE *)&unk_14037B690 + v18)) != *(_QWORD *)((char *)&unk_14037B690 + v18) )
          {
LABEL_39:
            if ( !v31 )
              KeBugCheckEx(
                0x5Du,
                0xFFFFFFFDuLL,
                *(unsigned int *)((char *)&KiCpuFeatureTable + v18),
                *(unsigned int *)((char *)&unk_14037B684 + v18),
                *(int *)((char *)&unk_14037B688 + v18));
          }
        }
LABEL_40:
        v17 = v48;
        v14 = v49;
        v8 = v51;
      }
    }
    ++v50;
    v18 += 24LL;
  }
  while ( v50 < 0x1F );
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    v33 = (unsigned int *)(0x140000000LL + 24 * i + 3619440);
    v34 = *(_DWORD *)(0x140000004LL + 24 * i + 3619440);
    if ( (v34 & 2) == 0 )
    {
      if ( !HIBYTE(v34) || (v35 = HIBYTE(v34), _bittest((const int *)&v35, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v34 & 8) != 0 )
        {
          v36 = v15;
        }
        else
        {
          if ( (v34 & 0x10) == 0 )
            continue;
          v36 = v16;
        }
        if ( (v36 & *(_QWORD *)(0x140000010LL + 24 * i + 3619440)) == *(_QWORD *)(0x140000010LL + 24 * i + 3619440) )
        {
          v37 = __readmsr(*v33);
          for ( j = *(_QWORD *)(0x140000008LL + 24 * i + 3619440); ; j += 24LL )
          {
            v14 = *(_QWORD *)j;
            if ( !*(_QWORD *)j )
              break;
            v39 = *(_DWORD *)(j + 8);
            if ( (v39 & 2) == 0 )
            {
              if ( !HIBYTE(v39) || (v40 = HIBYTE(v39), _bittest((const int *)&v40, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (v14 & v37) != 0 )
                {
                  if ( (v39 & 8) != 0 )
                  {
                    v15 |= *(_QWORD *)(j + 16);
                    v42 = *(_DWORD *)(j + 8) & 0x10;
                  }
                  else
                  {
                    v42 = *(_DWORD *)(j + 8) & 0x10;
                    if ( (v39 & 0x10) != 0 )
                      v16 |= *(_QWORD *)(j + 16);
                  }
                  if ( (v39 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v43 = 0;
                    if ( (v39 & 8) != 0 )
                    {
                      LOBYTE(v43) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( v42 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
                      continue;
                    }
                    if ( !v43 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v33, *(_QWORD *)j, HIDWORD(*(_QWORD *)j));
                  }
                }
                else
                {
                  if ( (v39 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                    {
                      KdInitSystem(0LL, KeLoaderBlock_0);
                      v14 = *(_QWORD *)j;
                    }
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v33, v14, HIDWORD(v14));
                  }
                  if ( (v39 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v41 = 0;
                    if ( (v39 & 8) != 0 )
                    {
                      LOBYTE(v41) = (KeFeatureBits & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16);
                    }
                    else if ( (v39 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(j + 16)) == *(_QWORD *)(j + 16) )
                    {
LABEL_98:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v33, v14, HIDWORD(v14));
                    }
                    if ( v41 )
                      goto LABEL_98;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  while ( *(_DWORD *)((char *)&KiCpuTable + v46) != *(unsigned __int8 *)(a1 + 141)
       || *(_DWORD *)((char *)&unk_14038ACB4 + v46) != a2 )
  {
    v44 = (unsigned int)(v44 + 1);
    v45 = (unsigned int)v44;
    v46 = 20 * v44;
    if ( *((_DWORD *)&unk_14038ACB8 + 5 * v44) == 19 )
      goto LABEL_86;
  }
  *(_DWORD *)(a1 + 1740) = dword_14038ACC0[5 * v45];
LABEL_86:
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    KeGetPrcb(0);
    result = *(unsigned int *)(a1 + 36);
  }
  *(_DWORD *)(a1 + 1736) = a2;
  *(_QWORD *)(a1 + 25248) |= v15;
  if ( (_DWORD)result )
  {
    if ( v16 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, v16, KeFeatureBits2, result);
  }
  else
  {
    KeFeatureBits2 |= v16;
    return KiPublishProcessorFeatures(a1, v44, i, v14);
  }
  return result;
}
