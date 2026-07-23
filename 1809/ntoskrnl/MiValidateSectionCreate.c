/*
 * XREFs of MiValidateSectionCreate @ 0x140653FD0
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x140650600 (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140858B00 (MiPromoteControlAreaToStrongCode.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     PsRevertToUserPagePriorityThread @ 0x1400DA4D0 (PsRevertToUserPagePriorityThread.c)
 *     PsSetSystemPagePriorityThread @ 0x1400DA538 (PsSetSystemPagePriorityThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x1401C0A50 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1401C0B30 (KeCopyPage.c)
 *     MiImageCantMove @ 0x1402C4768 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1402C4B00 (MiStrongCodeImage.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     SeValidateImageHeader @ 0x1406548D4 (SeValidateImageHeader.c)
 *     MiRevertRelocations @ 0x140654A4C (MiRevertRelocations.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 *     SeReleaseImageValidationContext @ 0x14071FD20 (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x14085D37C (MiCaptureSecureImageBaseAddress.c)
 */

__int64 __fastcall MiValidateSectionCreate(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        char a7)
{
  int v8; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 result; // rax
  int v11; // r13d
  int v12; // r15d
  int PerSessionProtos; // ebx
  ULONG_PTR v14; // r15
  int v15; // r9d
  __int64 v16; // r8
  signed __int64 v17; // rbx
  int v18; // r13d
  unsigned __int64 v19; // rax
  int v20; // r11d
  unsigned int v21; // r10d
  __int64 v22; // rax
  unsigned int v23; // eax
  char *PoolWithTag; // rax
  void *v25; // r12
  __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // eax
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r13
  signed __int64 v35; // rcx
  bool i; // zf
  signed __int64 v37; // rax
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rcx
  char v40[8]; // [rsp+70h] [rbp-178h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-170h] BYREF
  int v42; // [rsp+80h] [rbp-168h] BYREF
  int v43; // [rsp+84h] [rbp-164h]
  int v44; // [rsp+88h] [rbp-160h]
  int v45; // [rsp+8Ch] [rbp-15Ch]
  int v46; // [rsp+90h] [rbp-158h]
  int v47; // [rsp+94h] [rbp-154h]
  int v48; // [rsp+98h] [rbp-150h]
  int v49; // [rsp+9Ch] [rbp-14Ch]
  int v50; // [rsp+A0h] [rbp-148h]
  int v51; // [rsp+A4h] [rbp-144h]
  int v52; // [rsp+A8h] [rbp-140h]
  int v53; // [rsp+ACh] [rbp-13Ch]
  int v54; // [rsp+B0h] [rbp-138h]
  unsigned int v55; // [rsp+B4h] [rbp-134h]
  unsigned int v56; // [rsp+B8h] [rbp-130h]
  int v57; // [rsp+BCh] [rbp-12Ch] BYREF
  unsigned __int64 v58; // [rsp+C0h] [rbp-128h]
  __int64 v59; // [rsp+C8h] [rbp-120h]
  int v60; // [rsp+D0h] [rbp-118h]
  unsigned int v61; // [rsp+D8h] [rbp-110h]
  int v62; // [rsp+E0h] [rbp-108h]
  char *v63; // [rsp+E8h] [rbp-100h]
  ULONG_PTR BugCheckParameter2; // [rsp+F0h] [rbp-F8h]
  struct _KTHREAD *v65; // [rsp+F8h] [rbp-F0h]
  __int64 v66; // [rsp+100h] [rbp-E8h]
  _KPROCESS *Process; // [rsp+108h] [rbp-E0h]
  _KPROCESS *v68; // [rsp+110h] [rbp-D8h]
  __int64 v69; // [rsp+118h] [rbp-D0h]
  signed __int64 v70; // [rsp+120h] [rbp-C8h]
  PVOID v71; // [rsp+128h] [rbp-C0h]
  ULONG_PTR v72; // [rsp+130h] [rbp-B8h]
  ULONG_PTR v73; // [rsp+138h] [rbp-B0h]
  __int64 v74; // [rsp+140h] [rbp-A8h]
  unsigned __int64 v75[2]; // [rsp+150h] [rbp-98h] BYREF
  int v76; // [rsp+160h] [rbp-88h]

  v66 = a4;
  v56 = a3;
  BugCheckParameter2 = a1;
  v72 = a1;
  v73 = a2;
  v61 = a3;
  v74 = a4;
  v44 = 0;
  v52 = 1;
  v8 = 6;
  v43 = 6;
  v42 = 0;
  v57 = 0;
  v50 = 0;
  CurrentThread = 0LL;
  v65 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140439EB0 = 65;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
  {
    a5 |= 0x40u;
  }
  if ( (a5 & 0x40000000) != 0 && !*(_QWORD *)(a2 + 144) )
  {
    dword_140439EB0 = 22;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
  {
    v8 = 7;
    v43 = 7;
    v42 = 2;
  }
  v49 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v68 = Process;
  while ( 1 )
  {
    v11 = v8 & 1;
    v51 = v11;
    v53 = v11;
    if ( (v8 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v65 = CurrentThread;
      v12 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v50 = v12;
      if ( (*(_DWORD *)(a2 + 56) & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v12);
          return (unsigned int)PerSessionProtos;
        }
        v49 = 1;
        v8 = v43;
      }
      if ( v52 )
        MiPrefetchControlArea(a2, RtlpInterceptorRoutines[0], 0, 1, 0, -1);
    }
    LODWORD(v14) = MiMapImageInSystemSpace((__int64 *)a2, v8, (__int64)v75);
    if ( (v14 & 0x80000000) != 0LL )
    {
      if ( v49 == 1 )
        MiDereferencePerSessionProtos(a2);
      if ( v11 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v50);
      return (unsigned int)v14;
    }
    v15 = v75[0];
    v58 = v75[0];
    v16 = *(_QWORD *)(a2 + 96);
    v59 = v16;
    v69 = v16;
    v17 = *(_QWORD *)(v16 + 40);
    v70 = v17;
    v41 = v17;
    if ( !v17 )
    {
      v18 = 0;
LABEL_33:
      v45 = v18;
      goto LABEL_34;
    }
    if ( (v17 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
    {
      v19 = v17;
      if ( (v17 & 3) != 0 )
      {
        v19 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
        v18 = ((v17 & 3) != 1) + 2;
      }
      else
      {
        v18 = 4;
      }
      v41 = v19 & 0xFFFFFFFFFFFFFFFBuLL;
      goto LABEL_33;
    }
    v18 = 1;
    v45 = 1;
    v41 = v17 & 3;
LABEL_34:
    v46 = v76;
    v20 = v76 << 12;
    v48 = v76 << 12;
    v60 = v76 << 12;
    v21 = v76 << 12;
    v47 = v76 << 12;
    v40[0] = 1;
    v22 = *(_QWORD *)(v16 + 32);
    if ( !v22 || *(_QWORD *)(v22 + 40) == *(_QWORD *)(v22 + 48) )
    {
      v25 = (void *)v75[0];
      if ( v42 == 1 )
        v42 = 2;
    }
    else
    {
      if ( v42 == 2 )
      {
        v54 = v76;
      }
      else
      {
        v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v46 = (v23 >> 12) + ((v23 & 0xFFF) != 0);
        v54 = v46;
        v21 = v46 << 12;
        v47 = v46 << 12;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v21, 0x68496D4Du);
      v25 = PoolWithTag;
      v71 = PoolWithTag;
      if ( PoolWithTag )
      {
        LODWORD(v14) = 0;
        v62 = 0;
        v26 = (__int64)PoolWithTag;
        v63 = PoolWithTag;
        v27 = 0;
        v28 = v46;
        while ( 1 )
        {
          v55 = v27;
          if ( v27 >= v28 )
            break;
          KeCopyPage(v26, v58 + (v27 << 12));
          v28 = v46;
          v27 = v55 + 1;
          v26 = (__int64)(v63 + 4096);
          v63 += 4096;
        }
        MiRevertRelocations(v25, a2, v28);
      }
      else
      {
        LODWORD(v14) = -1073741670;
      }
      v21 = v47;
      v15 = v58;
      v20 = v48;
    }
    v53 = v42;
    if ( (v14 & 0x80000000) == 0LL )
    {
      v29 = SeValidateImageHeader(
              BugCheckParameter2,
              (_DWORD)v25,
              v21,
              v15,
              v20,
              (__int64)&v42,
              (__int64)Process,
              v66,
              a5,
              (__int64)&v41,
              a6,
              a7,
              (__int64)v40,
              (__int64)&v57);
      v14 = v29;
      if ( v29 == 301 )
      {
        MiImageCantMove(a2);
        v44 = 1;
LABEL_54:
        if ( (*(_DWORD *)(a2 + 56) & 0x40000000) != 0 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v14, 0LL);
        MiStrongCodeImage(a2, 1u);
        goto LABEL_56;
      }
      v30 = v44;
      if ( v29 == 302 )
        v30 = 1;
      v44 = v30;
      if ( v30 )
        goto LABEL_54;
    }
LABEL_56:
    if ( v25 != (void *)v58 && v25 )
      ExFreePoolWithTag(v25, 0);
    MiUnmapImageInSystemSpace(v75);
    if ( v49 == 1 )
      MiDereferencePerSessionProtos(a2);
    v32 = v51;
    if ( v51 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange(v31);
      CurrentThread = v65;
      PsRevertToUserPagePriorityThread((__int64)v65, v50);
      v32 = v51;
    }
    else
    {
      CurrentThread = v65;
    }
    if ( (v14 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v14 != -1073741789 || v53 >= v42 )
    {
      dword_140439EB0 = 4;
      return (unsigned int)v14;
    }
    v8 = v43;
    if ( v32 )
    {
      v52 = 1;
    }
    else
    {
      v8 = v43 | 1;
      v43 |= 1u;
      if ( v42 == 1 )
        v52 = 0;
    }
  }
  if ( !v18 || v18 == 1 && (v41 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v41 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v18 )
        v35 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v35 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v35 = v41 & 7 | 8;
    }
    v41 = v35;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v35 |= 4uLL;
      v41 = v35;
    }
    v34 = v59;
    v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v59 + 40), v35, v17);
    for ( i = v17 == v37; ; i = v37 == v38 )
    {
      v38 = v37;
      if ( i )
        break;
      if ( (v41 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_93;
      if ( (v37 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v41 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v41);
LABEL_93:
        v41 = v38;
        break;
      }
      v41 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 40), v41, v37);
    }
    v17 = v41;
  }
  else
  {
    v33 = v18 - 2;
    v34 = v59;
    if ( v33 <= 1 )
      v41 ^= ((unsigned __int8)v17 ^ (unsigned __int8)v41) & 3;
  }
  if ( (v41 & 3) != 0 )
  {
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a2 + 92) & 0x180000) != 0 )
    {
      if ( *(_QWORD *)(v34 + 32) )
      {
        result = MiCaptureSecureImageBaseAddress(a2);
        if ( (int)result < 0 )
        {
          dword_140439EB0 = 60;
          return result;
        }
      }
    }
    result = MiWalkEntireImage(a2, 0LL, 1u, v56);
    LODWORD(v14) = result;
    if ( (int)result < 0 )
    {
      dword_140439EB0 = 59;
      return result;
    }
    v39 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
    v41 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
    {
      v39 |= 4uLL;
      v41 = v39;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 40), v39, v17);
  }
  *(_BYTE *)(*(_QWORD *)a2 + 15LL) = HIBYTE(*(_DWORD *)(*(_QWORD *)a2 + 12LL)) & 1 | (2 * ((8 * v40[0]) | v57 & 7));
  if ( v44 )
    MiStrongCodeImage(a2, 2u);
  return (unsigned int)v14;
}
