/*
 * XREFs of MiValidateSectionCreate @ 0x14065BE44
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x14066F2D8 (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408912B4 (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x140894B78 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400B8B90 (MiFlushEntireTbDueToAttributeChange.c)
 *     PsSetSystemPagePriorityThread @ 0x14012DDC0 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14012ED5C (PsRevertToUserPagePriorityThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x1401C79D0 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1401C7AB0 (KeCopyPage.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiImageCantMove @ 0x1402DE7C0 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1402DE844 (MiStrongCodeImage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiRevertRelocations @ 0x14065A5A4 (MiRevertRelocations.c)
 *     SeValidateImageHeader @ 0x14065C680 (SeValidateImageHeader.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140670000 (MiMapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1406E6648 (MiPrefetchControlArea.c)
 *     MiDereferencePerSessionProtos @ 0x1406E88BC (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E89D4 (MiCreatePerSessionProtos.c)
 *     SeReleaseImageValidationContext @ 0x14071EC2C (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140898B30 (MiCaptureSecureImageBaseAddress.c)
 */

__int64 __fastcall MiValidateSectionCreate(
        ULONG_PTR a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        char a7)
{
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // r12
  int v10; // r13d
  ULONG_PTR v11; // r15
  int v12; // r11d
  __int64 v13; // r9
  signed __int64 v14; // rbx
  unsigned __int64 v15; // rax
  int v16; // r13d
  int v17; // r10d
  unsigned int v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // eax
  char *PoolWithTag; // rax
  void *v22; // r12
  __int64 v23; // r8
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  signed __int64 v29; // r8
  int v30; // eax
  signed __int64 v31; // rcx
  __int64 v32; // r13
  bool v33; // zf
  signed __int64 v34; // rax
  __int64 v35; // r9
  __int64 result; // rax
  unsigned __int64 v37; // rax
  unsigned int v38; // eax
  int v39; // r15d
  signed __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  int PerSessionProtos; // ebx
  __int64 v43; // [rsp+70h] [rbp-178h] BYREF
  char v44[4]; // [rsp+78h] [rbp-170h] BYREF
  int v45; // [rsp+7Ch] [rbp-16Ch] BYREF
  int v46; // [rsp+80h] [rbp-168h]
  int v47; // [rsp+84h] [rbp-164h]
  int v48; // [rsp+88h] [rbp-160h]
  int v49; // [rsp+8Ch] [rbp-15Ch]
  int v50; // [rsp+90h] [rbp-158h]
  int v51; // [rsp+94h] [rbp-154h]
  int v52; // [rsp+98h] [rbp-150h]
  int v53; // [rsp+9Ch] [rbp-14Ch]
  int v54; // [rsp+A0h] [rbp-148h]
  int v55; // [rsp+A4h] [rbp-144h]
  int v56; // [rsp+A8h] [rbp-140h]
  int v57; // [rsp+ACh] [rbp-13Ch]
  unsigned int v58; // [rsp+B0h] [rbp-138h]
  unsigned int v59; // [rsp+B4h] [rbp-134h]
  int v60; // [rsp+B8h] [rbp-130h] BYREF
  void *v61; // [rsp+C0h] [rbp-128h]
  __int64 v62; // [rsp+C8h] [rbp-120h]
  signed __int64 v63; // [rsp+D0h] [rbp-118h]
  int v64; // [rsp+D8h] [rbp-110h]
  int v65; // [rsp+DCh] [rbp-10Ch]
  int v66; // [rsp+E0h] [rbp-108h]
  unsigned int v67; // [rsp+E8h] [rbp-100h]
  char *v68; // [rsp+F0h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp-F0h]
  struct _KTHREAD *v70; // [rsp+100h] [rbp-E8h]
  __int64 v71; // [rsp+108h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+110h] [rbp-D8h]
  _KPROCESS *v73; // [rsp+118h] [rbp-D0h]
  __int64 v74; // [rsp+120h] [rbp-C8h]
  PVOID v75; // [rsp+128h] [rbp-C0h]
  ULONG_PTR v76; // [rsp+130h] [rbp-B8h]
  _DWORD *v77; // [rsp+138h] [rbp-B0h]
  __int64 v78; // [rsp+140h] [rbp-A8h]
  signed __int64 v79; // [rsp+148h] [rbp-A0h]
  _QWORD v80[10]; // [rsp+150h] [rbp-98h] BYREF

  v71 = a4;
  v59 = a3;
  BugCheckParameter2 = a1;
  v76 = a1;
  v77 = a2;
  v67 = a3;
  v78 = a4;
  v43 = 0LL;
  v63 = 0LL;
  v79 = 0LL;
  memset(v80, 0, sizeof(v80));
  v47 = 0;
  v55 = 1;
  v8 = 6;
  v46 = 6;
  v45 = 0;
  v60 = 0;
  v53 = 0;
  CurrentThread = 0LL;
  v70 = 0LL;
  if ( (a2[14] & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140464818 = 65;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  if ( (a5 & 0x40000000) != 0 && !*((_QWORD *)a2 + 18) )
  {
    dword_140464818 = 22;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
  {
    v8 = 7;
    v46 = 7;
    v45 = 2;
  }
  v52 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v73 = Process;
  while ( 1 )
  {
    v10 = v8 & 1;
    v54 = v10;
    v56 = v10;
    if ( (v8 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v70 = CurrentThread;
      v39 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v53 = v39;
      if ( (a2[14] & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v39);
          return (unsigned int)PerSessionProtos;
        }
        v52 = 1;
        v8 = v46;
      }
      if ( v55 )
        MiPrefetchControlArea((_DWORD)a2, CLFS_LSN_NULL_EXT[0], 0, 1, 0, -1);
    }
    LODWORD(v11) = MiMapImageInSystemSpace(a2, v8, v80);
    if ( (v11 & 0x80000000) != 0LL )
    {
      if ( v52 == 1 )
        MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
      if ( v10 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v53);
      return (unsigned int)v11;
    }
    v12 = v80[0];
    v61 = (void *)v80[0];
    v13 = *((_QWORD *)a2 + 12);
    v62 = v13;
    v74 = v13;
    v14 = *(_QWORD *)(v13 + 40);
    v63 = v14;
    v15 = v14;
    v43 = v14;
    if ( v14 )
    {
      if ( (v14 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v16 = 1;
        v48 = 1;
        v37 = v14 & 3;
      }
      else
      {
        v40 = v14 & 3;
        if ( (v14 & 3) != 0 )
        {
          v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
          v16 = (v40 != 1) + 2;
        }
        else
        {
          v16 = v40 + 4;
        }
        v48 = v16;
        v37 = v15 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      v43 = v37;
    }
    else
    {
      v16 = 0;
      v48 = 0;
    }
    v49 = v80[2];
    v17 = LODWORD(v80[2]) << 12;
    v51 = LODWORD(v80[2]) << 12;
    v65 = LODWORD(v80[2]) << 12;
    v18 = LODWORD(v80[2]) << 12;
    v50 = LODWORD(v80[2]) << 12;
    v44[0] = 1;
    v19 = *(_QWORD *)(v13 + 32);
    if ( !v19 || *(_QWORD *)(v19 + 40) == *(_QWORD *)(v19 + 48) )
    {
      v22 = (void *)v80[0];
      if ( v45 == 1 )
        v45 = 2;
    }
    else
    {
      if ( v45 == 2 )
      {
        v57 = v80[2];
      }
      else
      {
        v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v49 = (v20 >> 12) + ((v20 & 0xFFF) != 0);
        v57 = v49;
        v18 = v49 << 12;
        v50 = v49 << 12;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v18, 0x68496D4Du);
      v22 = PoolWithTag;
      v75 = PoolWithTag;
      if ( PoolWithTag )
      {
        LODWORD(v11) = 0;
        v64 = 0;
        v23 = (__int64)PoolWithTag;
        v68 = PoolWithTag;
        v24 = 0;
        v25 = v49;
        while ( 1 )
        {
          v58 = v24;
          if ( v24 >= v25 )
            break;
          KeCopyPage(v23, (__int64)v61 + 4096 * v24);
          v25 = v49;
          v24 = v58 + 1;
          v23 = (__int64)(v68 + 4096);
          v68 += 4096;
        }
        MiRevertRelocations((__int64)v22, (ULONG_PTR)a2, v25);
      }
      else
      {
        LODWORD(v11) = -1073741670;
      }
      v18 = v50;
      v17 = v51;
      v12 = (int)v61;
    }
    v56 = v45;
    if ( (v11 & 0x80000000) == 0LL )
    {
      v26 = SeValidateImageHeader(
              BugCheckParameter2,
              (_DWORD)v22,
              v18,
              v12,
              v17,
              (__int64)&v45,
              (__int64)Process,
              v71,
              a5,
              (__int64)&v43,
              a6,
              a7,
              (__int64)v44,
              (__int64)&v60);
      v11 = v26;
      if ( v26 == 301 )
      {
        MiImageCantMove((__int64)a2);
        v47 = 1;
LABEL_96:
        if ( (a2[14] & 0x40000000) != 0 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v11, 0LL);
        MiStrongCodeImage((__int64)a2, 1u);
        goto LABEL_25;
      }
      v27 = v47;
      if ( v26 == 302 )
        v27 = 1;
      v47 = v27;
      if ( v27 )
        goto LABEL_96;
    }
LABEL_25:
    if ( v22 != v61 && v22 )
      ExFreePoolWithTag(v22, 0);
    MiUnmapImageInSystemSpace(v80);
    if ( v52 == 1 )
      MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
    v30 = v54;
    if ( v54 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      CurrentThread = v70;
      PsRevertToUserPagePriorityThread((__int64)v70, v53);
      v30 = v54;
    }
    else
    {
      CurrentThread = v70;
    }
    if ( (v11 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v11 != -1073741789 || v56 >= v45 )
    {
      dword_140464818 = 4;
      return (unsigned int)v11;
    }
    v8 = v46;
    if ( v30 )
    {
      v55 = 1;
    }
    else
    {
      v8 = v46 | 1;
      v46 |= 1u;
      if ( v45 == 1 )
        v55 = 0;
    }
  }
  if ( !v16 || v16 == 1 && (v43 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v43 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v16 )
        v31 = v43 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v31 = v43 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v31 = v43 & 7 | 8;
    }
    v43 = v31;
    v29 = v31;
    v28 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
    if ( *(char *)(v28 + 46) < 0 )
    {
      v31 |= 4uLL;
      v43 = v29 | 4;
    }
    v32 = v62;
    while ( 1 )
    {
      v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 40), v31, v14);
      v33 = v14 == v34;
      v14 = v34;
      v79 = v34;
      if ( v33 )
        break;
      if ( (v43 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_78;
      if ( (v34 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        v43 &= 0xFFFFFFFFFFFFFFF8uLL;
        SeReleaseImageValidationContext(v43);
LABEL_78:
        v43 = v14;
        break;
      }
      v31 = v43 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v43 = v31;
      v63 = v34;
    }
    v14 = v43;
    v63 = v43;
  }
  else
  {
    v38 = v16 - 2;
    v32 = v62;
    if ( v38 <= 1 )
      v43 = ((unsigned __int8)v43 ^ (unsigned __int8)v14) & 3 ^ (unsigned __int64)v43;
  }
  if ( (v43 & 3) == 0 )
  {
LABEL_42:
    v35 = *(_QWORD *)a2;
    v66 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
    HIBYTE(v66) = HIBYTE(v66) & 1 | (2 * ((8 * v44[0]) | v60 & 7));
    *(_BYTE *)(v35 + 15) = HIBYTE(v66);
    if ( v47 )
      MiStrongCodeImage((__int64)a2, 2u);
    return (unsigned int)v11;
  }
  if ( (MiFlags & 0x4000) != 0
    && (a2[23] & 0xC0000) != 0
    && *(_QWORD *)(v32 + 32)
    && (result = MiCaptureSecureImageBaseAddress(a2, v28, v29), (int)result < 0) )
  {
    dword_140464818 = 60;
  }
  else
  {
    result = MiWalkEntireImage((ULONG_PTR)a2, 0LL, 1, v59);
    LODWORD(v11) = result;
    if ( (int)result >= 0 )
    {
      v41 = v43 & 0xFFFFFFFFFFFFFFFCuLL;
      v43 &= 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
      {
        v41 |= 4uLL;
        v43 = v41;
      }
      _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 40), v41, v14);
      goto LABEL_42;
    }
    dword_140464818 = 59;
  }
  return result;
}
