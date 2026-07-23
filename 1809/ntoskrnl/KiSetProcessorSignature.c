/*
 * XREFs of KiSetProcessorSignature @ 0x1405707A8
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x1405717EC (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiDetectModelSpecificFeatures @ 0x1405662E0 (KiDetectModelSpecificFeatures.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     KiPublishProcessorFeatures @ 0x1409ABE10 (KiPublishProcessorFeatures.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  unsigned int v8; // r10d
  unsigned int v14; // r9d
  __int64 v15; // r12
  ULONG_PTR v16; // rbx
  int v17; // r13d
  int v18; // edx
  unsigned int v19; // r11d
  __int64 v20; // r14
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  int v28; // r10d
  __int64 v29; // rbx
  ULONG_PTR v30; // r9
  int v31; // edx
  int v32; // ebx
  __int64 v33; // r8
  __int64 v34; // r11
  unsigned int *v35; // r14
  unsigned int v36; // edx
  unsigned int v37; // ecx
  ULONG_PTR v38; // rdx
  unsigned __int64 v39; // r10
  __int64 i; // rbx
  ULONG_PTR v41; // r9
  unsigned int v42; // ecx
  unsigned int v43; // edx
  int v44; // edx
  int v45; // edx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 result; // rax
  unsigned int v50; // [rsp+30h] [rbp-78h]
  int v51; // [rsp+34h] [rbp-74h]
  unsigned int v52; // [rsp+38h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h]
  unsigned int v54; // [rsp+48h] [rbp-60h]
  __int64 v55; // [rsp+50h] [rbp-58h]
  unsigned __int64 v56; // [rsp+68h] [rbp-40h]
  unsigned __int64 v57; // [rsp+70h] [rbp-38h]

  _RAX = 0x80000000LL;
  __asm { cpuid }
  v8 = _RAX;
  v54 = _RAX;
  _RAX = 0LL;
  __asm { cpuid }
  v14 = _RAX;
  v52 = _RAX;
  v56 = __PAIR64__(_RBX, _RAX);
  v57 = __PAIR64__(_RDX, _RCX);
  v15 = 0LL;
  v55 = 0LL;
  v16 = 0LL;
  BugCheckParameter2 = 0LL;
  v17 = 0;
  v18 = 0;
  v51 = 0;
  v19 = 0;
  v50 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    v21 = *(_DWORD *)((char *)&unk_14035B9B0 + v20);
    if ( (v21 & 2) == 0 )
    {
      if ( !HIBYTE(v21) || (v22 = HIBYTE(v21), _bittest((const int *)&v22, *(unsigned __int8 *)(a1 + 141))) )
      {
        _RAX = *(unsigned int *)((char *)&KiCpuFeatureTable + v20);
        if ( (_DWORD)_RAX != v17 || *(_DWORD *)((char *)&unk_14035B9A4 + v20) != v18 )
        {
          v17 = *(_DWORD *)((char *)&KiCpuFeatureTable + v20);
          v51 = *(_DWORD *)((char *)&unk_14035B9A4 + v20);
          if ( ((unsigned int)_RAX < 0x80000000 || (unsigned int)_RAX > v8) && (unsigned int)_RAX > v14 )
          {
            v56 = 0LL;
            v57 = 0LL;
          }
          else
          {
            __asm { cpuid }
            v56 = __PAIR64__(_RBX, _RAX);
            v57 = __PAIR64__(_RDX, _RCX);
          }
        }
        v28 = 0;
        v29 = *(int *)((char *)&unk_14035B9AC + v20);
        v30 = *(unsigned int *)((char *)&unk_14035B9A8 + v20);
        if ( ((unsigned int)v30 & *((_DWORD *)&v56 + v29)) == 0 )
        {
          if ( (v21 & 8) == 0
            || (v15 & *(_QWORD *)((_BYTE *)&unk_14035B9B8 + v20)) != *(_QWORD *)((char *)&unk_14035B9B8 + v20) )
          {
            if ( (v21 & 0x10) != 0
              && (BugCheckParameter2 & *(_QWORD *)((_BYTE *)&unk_14035B9B8 + v20)) == *(_QWORD *)((char *)&unk_14035B9B8
                                                                                                + v20) )
            {
              v28 = 1;
            }
            if ( !v28 )
            {
              if ( (v21 & 1) != 0 )
              {
                if ( !*(_DWORD *)(a1 + 36) )
                {
                  KdInitSystem(0LL, KeLoaderBlock_0);
                  LODWORD(v29) = *(_DWORD *)((char *)&unk_14035B9AC + v20);
                  v30 = *(unsigned int *)((char *)&unk_14035B9A8 + v20);
                }
                KeBugCheckEx(0x5Du, 0xFFFFFFFFuLL, *(unsigned int *)((char *)&KiCpuFeatureTable + v20), v30, (int)v29);
              }
              if ( (v21 & 4) != 0 && *(_DWORD *)(a1 + 36) )
              {
                v31 = 0;
                if ( (v21 & 8) != 0 )
                {
                  LOBYTE(v31) = (KeFeatureBits & *(_QWORD *)((_BYTE *)&unk_14035B9B8 + v20)) == *(_QWORD *)((char *)&unk_14035B9B8 + v20);
                }
                else if ( (v21 & 0x10) != 0
                       && (KeFeatureBits2 & *(_QWORD *)((_BYTE *)&unk_14035B9B8 + v20)) == *(_QWORD *)((char *)&unk_14035B9B8 + v20) )
                {
LABEL_95:
                  KeBugCheckEx(
                    0x5Du,
                    0xFFFFFFFEuLL,
                    *(unsigned int *)((char *)&KiCpuFeatureTable + v20),
                    v30,
                    *(int *)((char *)&unk_14035B9AC + v20));
                }
                if ( v31 )
                  goto LABEL_95;
              }
              v19 = v50;
              goto LABEL_42;
            }
            v15 = v55;
          }
          v19 = v50;
        }
        if ( (v21 & 8) != 0 )
        {
          v55 = *(_QWORD *)((char *)&unk_14035B9B8 + v20) | v15;
        }
        else if ( (v21 & 0x10) != 0 )
        {
          v16 = *(_QWORD *)((char *)&unk_14035B9B8 + v20) | BugCheckParameter2;
          BugCheckParameter2 = v16;
          goto LABEL_33;
        }
        v16 = BugCheckParameter2;
LABEL_33:
        if ( (v21 & 4) == 0 || !*(_DWORD *)(a1 + 36) )
          goto LABEL_43;
        v32 = 0;
        if ( (v21 & 8) != 0 )
        {
          LOBYTE(v32) = (KeFeatureBits & *(_QWORD *)((_BYTE *)&unk_14035B9B8 + v20)) == *(_QWORD *)((char *)&unk_14035B9B8
                                                                                                  + v20);
        }
        else if ( (v21 & 0x10) != 0
               && (KeFeatureBits2 & *(_QWORD *)((_BYTE *)&unk_14035B9B8 + v20)) == *(_QWORD *)((char *)&unk_14035B9B8
                                                                                             + v20) )
        {
LABEL_42:
          v16 = BugCheckParameter2;
LABEL_43:
          v18 = v51;
          v14 = v52;
          v8 = v54;
          goto LABEL_44;
        }
        if ( !v32 )
          KeBugCheckEx(
            0x5Du,
            0xFFFFFFFDuLL,
            *(unsigned int *)((char *)&KiCpuFeatureTable + v20),
            *(unsigned int *)((char *)&unk_14035B9A8 + v20),
            *(int *)((char *)&unk_14035B9AC + v20));
        goto LABEL_42;
      }
    }
LABEL_44:
    v50 = ++v19;
    v20 += 32LL;
    if ( v19 >= 0x25 )
      break;
    v15 = v55;
  }
  v33 = 0LL;
  v34 = v55;
  while ( (unsigned int)v33 < 2 )
  {
    v35 = (unsigned int *)(0x140000000LL + 24 * v33 + 3492368);
    v36 = *(_DWORD *)(0x140000004LL + 24 * v33 + 3492368);
    if ( (v36 & 2) == 0 )
    {
      if ( !HIBYTE(v36) || (v37 = HIBYTE(v36), _bittest((const int *)&v37, *(unsigned __int8 *)(a1 + 141))) )
      {
        if ( (v36 & 8) != 0 )
        {
          v38 = v34;
        }
        else
        {
          if ( (v36 & 0x10) == 0 )
            goto LABEL_83;
          v38 = v16;
        }
        if ( (v38 & *(_QWORD *)(0x140000010LL + 24 * v33 + 3492368)) == *(_QWORD *)(0x140000010LL + 24 * v33 + 3492368) )
        {
          v39 = __readmsr(*v35);
          for ( i = *(_QWORD *)(0x140000008LL + 24 * v33 + 3492368); ; i += 24LL )
          {
            v41 = *(_QWORD *)i;
            if ( !*(_QWORD *)i )
              break;
            v42 = *(_DWORD *)(i + 8);
            if ( (v42 & 2) == 0 )
            {
              if ( !HIBYTE(v42) || (v43 = HIBYTE(v42), _bittest((const int *)&v43, *(unsigned __int8 *)(a1 + 141))) )
              {
                if ( (v41 & v39) != 0 )
                {
                  if ( (v42 & 8) != 0 )
                  {
                    v34 |= *(_QWORD *)(i + 16);
                    v55 = v34;
                  }
                  else if ( (v42 & 0x10) != 0 )
                  {
                    BugCheckParameter2 |= *(_QWORD *)(i + 16);
                  }
                  if ( (v42 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v45 = 0;
                    if ( (v42 & 8) != 0 )
                    {
                      LOBYTE(v45) = (*(_QWORD *)(i + 16) & KeFeatureBits) == *(_QWORD *)(i + 16);
                    }
                    else if ( (v42 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(i + 16)) == *(_QWORD *)(i + 16) )
                    {
                      continue;
                    }
                    if ( !v45 )
                      KeBugCheckEx(0x5Du, 0xFFFFFFFAuLL, *v35, *(_QWORD *)i, HIDWORD(*(_QWORD *)i));
                  }
                }
                else
                {
                  if ( (v42 & 1) != 0 )
                  {
                    if ( !*(_DWORD *)(a1 + 36) )
                    {
                      KdInitSystem(0LL, KeLoaderBlock_0);
                      v41 = *(_QWORD *)i;
                    }
                    KeBugCheckEx(0x5Du, 0xFFFFFFFCuLL, *v35, v41, HIDWORD(v41));
                  }
                  if ( (v42 & 4) != 0 && *(_DWORD *)(a1 + 36) )
                  {
                    v44 = 0;
                    if ( (v42 & 8) != 0 )
                    {
                      LOBYTE(v44) = (KeFeatureBits & *(_QWORD *)(i + 16)) == *(_QWORD *)(i + 16);
                    }
                    else if ( (v42 & 0x10) != 0 && (KeFeatureBits2 & *(_QWORD *)(i + 16)) == *(_QWORD *)(i + 16) )
                    {
LABEL_100:
                      KeBugCheckEx(0x5Du, 0xFFFFFFFBuLL, *v35, v41, HIDWORD(v41));
                    }
                    if ( v44 )
                      goto LABEL_100;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_83:
    v33 = (unsigned int)(v33 + 1);
    v16 = BugCheckParameter2;
  }
  LODWORD(v46) = 0;
  v47 = 0LL;
  v48 = 0LL;
  while ( *(_DWORD *)((char *)&KiCpuTable + v48) != *(unsigned __int8 *)(a1 + 141)
       || *(_DWORD *)((char *)&unk_14036B944 + v48) != a2 )
  {
    v46 = (unsigned int)(v46 + 1);
    v47 = (unsigned int)v46;
    v48 = 20 * v46;
    if ( *((_DWORD *)&unk_14036B948 + 5 * v46) == 19 )
      goto LABEL_90;
  }
  *(_DWORD *)(a1 + 1740) = dword_14036B950[5 * v47];
LABEL_90:
  KiDetectModelSpecificFeatures(a1);
  *(_DWORD *)(a1 + 1736) = a2;
  *(_QWORD *)(a1 + 25248) |= v55;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( BugCheckParameter2 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, BugCheckParameter2, KeFeatureBits2, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 |= BugCheckParameter2;
    return KiPublishProcessorFeatures();
  }
  return result;
}
