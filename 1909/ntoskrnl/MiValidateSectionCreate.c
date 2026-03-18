/*
 * XREFs of MiValidateSectionCreate @ 0x1406423A4
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x140648C94 (MiValidateSectionSigningPolicy.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140890AD4 (MiPromoteControlAreaToStrongCode.c)
 *     MiMapImageForEnclaveUse @ 0x140894398 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     PsSetSystemPagePriorityThread @ 0x14008E57C (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x14008E600 (PsRevertToUserPagePriorityThread.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeZeroSinglePage @ 0x1401C8550 (KeZeroSinglePage.c)
 *     KeCopyPage @ 0x1401C8630 (KeCopyPage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiImageCantMove @ 0x1402DE520 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1402DE5A4 (MiStrongCodeImage.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeValidateImageHeader @ 0x14064226C (SeValidateImageHeader.c)
 *     MiRevertRelocations @ 0x14064325C (MiRevertRelocations.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14064437C (MiUnmapImageInSystemSpace.c)
 *     MiPrefetchControlArea @ 0x1406E7830 (MiPrefetchControlArea.c)
 *     MiDereferencePerSessionProtos @ 0x1406E9B08 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E9C20 (MiCreatePerSessionProtos.c)
 *     SeReleaseImageValidationContext @ 0x140720ABC (SeReleaseImageValidationContext.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140898350 (MiCaptureSecureImageBaseAddress.c)
 */

__int64 __fastcall MiValidateSectionCreate(ULONG_PTR a1, _DWORD *a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // r12
  int v8; // r13d
  ULONG_PTR v9; // r15
  __int64 v10; // r11
  __int64 v11; // r9
  signed __int64 v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // r13d
  int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // eax
  char *PoolWithTag; // rax
  void *v20; // r12
  __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // ecx
  __int64 v26; // rdx
  signed __int64 v27; // r8
  int v28; // eax
  signed __int64 v29; // rcx
  __int64 v30; // r13
  bool v31; // zf
  signed __int64 v32; // rax
  __int64 v33; // r9
  __int64 result; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  int v37; // r15d
  signed __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  int PerSessionProtos; // ebx
  __int64 v41; // [rsp+70h] [rbp-178h]
  int v42; // [rsp+7Ch] [rbp-16Ch] BYREF
  int v43; // [rsp+80h] [rbp-168h]
  int v44; // [rsp+84h] [rbp-164h]
  int v45; // [rsp+88h] [rbp-160h]
  int v46; // [rsp+8Ch] [rbp-15Ch]
  unsigned int v47; // [rsp+90h] [rbp-158h]
  int v48; // [rsp+94h] [rbp-154h]
  int v49; // [rsp+98h] [rbp-150h]
  int v50; // [rsp+9Ch] [rbp-14Ch]
  int v51; // [rsp+A0h] [rbp-148h]
  int v52; // [rsp+A4h] [rbp-144h]
  int v53; // [rsp+A8h] [rbp-140h]
  int v54; // [rsp+ACh] [rbp-13Ch]
  unsigned int v55; // [rsp+B0h] [rbp-138h]
  unsigned int v56; // [rsp+B4h] [rbp-134h]
  int v57; // [rsp+B8h] [rbp-130h]
  void *v58; // [rsp+C0h] [rbp-128h]
  __int64 v59; // [rsp+C8h] [rbp-120h]
  signed __int64 v60; // [rsp+D0h] [rbp-118h]
  int v61; // [rsp+D8h] [rbp-110h]
  int v62; // [rsp+DCh] [rbp-10Ch]
  int v63; // [rsp+E0h] [rbp-108h]
  unsigned int v64; // [rsp+E8h] [rbp-100h]
  char *v65; // [rsp+F0h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+F8h] [rbp-F0h]
  struct _KTHREAD *v67; // [rsp+100h] [rbp-E8h]
  __int64 v68; // [rsp+108h] [rbp-E0h]
  _KPROCESS *Process; // [rsp+110h] [rbp-D8h]
  _KPROCESS *v70; // [rsp+118h] [rbp-D0h]
  __int64 v71; // [rsp+120h] [rbp-C8h]
  PVOID v72; // [rsp+128h] [rbp-C0h]
  ULONG_PTR v73; // [rsp+130h] [rbp-B8h]
  _DWORD *v74; // [rsp+138h] [rbp-B0h]
  __int64 v75; // [rsp+140h] [rbp-A8h]
  signed __int64 v76; // [rsp+148h] [rbp-A0h]
  _QWORD v77[10]; // [rsp+150h] [rbp-98h] BYREF

  v68 = a4;
  v56 = a3;
  BugCheckParameter2 = a1;
  v73 = a1;
  v74 = a2;
  v64 = a3;
  v75 = a4;
  v60 = 0LL;
  v76 = 0LL;
  memset(v77, 0, sizeof(v77));
  v44 = 0;
  v52 = 1;
  v6 = 6;
  v43 = 6;
  v42 = 0;
  v57 = 0;
  v50 = 0;
  CurrentThread = 0LL;
  v67 = 0LL;
  if ( (a2[14] & 0x800) != 0 )
  {
    if ( (a5 & 0x40000000) != 0 )
    {
      dword_140464518 = 65;
      return 3221226547LL;
    }
    a5 |= 0x10000000u;
  }
  if ( (a5 & 0x40000000) != 0 && !*((_QWORD *)a2 + 18) )
  {
    dword_140464518 = 22;
    return 3221225595LL;
  }
  if ( (a5 & 5) != 0 )
  {
    v6 = 7;
    v43 = 7;
    v42 = 2;
  }
  v49 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v70 = Process;
  while ( 1 )
  {
    v8 = v6 & 1;
    v51 = v8;
    v53 = v8;
    if ( (v6 & 1) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v67 = CurrentThread;
      v37 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1);
      v50 = v37;
      if ( (a2[14] & 0x4000000) != 0 )
      {
        PerSessionProtos = MiCreatePerSessionProtos(a2, 0xFFFFFFFFLL);
        if ( PerSessionProtos < 0 )
        {
          PsRevertToUserPagePriorityThread((__int64)CurrentThread, v37);
          return (unsigned int)PerSessionProtos;
        }
        v49 = 1;
        v6 = v43;
      }
      if ( v52 )
        MiPrefetchControlArea((_DWORD)a2, CLFS_LSN_NULL_EXT[0], 0, 1, 0, -1);
    }
    LODWORD(v9) = MiMapImageInSystemSpace(a2, v6, v77);
    if ( (v9 & 0x80000000) != 0LL )
    {
      if ( v49 == 1 )
        MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
      if ( v8 )
        PsRevertToUserPagePriorityThread((__int64)CurrentThread, v50);
      return (unsigned int)v9;
    }
    v10 = v77[0];
    v58 = (void *)v77[0];
    v11 = *((_QWORD *)a2 + 12);
    v59 = v11;
    v71 = v11;
    v12 = *(_QWORD *)(v11 + 40);
    v60 = v12;
    v13 = v12;
    v41 = v12;
    if ( v12 )
    {
      if ( (v12 & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
      {
        v14 = 1;
        v45 = 1;
        v35 = v12 & 3;
      }
      else
      {
        v38 = v12 & 3;
        if ( (v12 & 3) != 0 )
        {
          v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
          v14 = (v38 != 1) + 2;
        }
        else
        {
          v14 = v38 + 4;
        }
        v45 = v14;
        v35 = v13 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      v41 = v35;
    }
    else
    {
      v14 = 0;
      v45 = 0;
    }
    v46 = v77[2];
    v15 = LODWORD(v77[2]) << 12;
    v48 = LODWORD(v77[2]) << 12;
    v62 = LODWORD(v77[2]) << 12;
    v16 = (unsigned int)(LODWORD(v77[2]) << 12);
    v47 = LODWORD(v77[2]) << 12;
    v17 = *(_QWORD *)(v11 + 32);
    if ( !v17 || *(_QWORD *)(v17 + 40) == *(_QWORD *)(v17 + 48) )
    {
      v20 = (void *)v77[0];
      if ( v42 == 1 )
        v42 = 2;
    }
    else
    {
      if ( v42 == 2 )
      {
        v54 = v77[2];
      }
      else
      {
        v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 64LL);
        v46 = (v18 >> 12) + ((v18 & 0xFFF) != 0);
        v54 = v46;
        LODWORD(v16) = v46 << 12;
        v47 = v46 << 12;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x68496D4Du);
      v20 = PoolWithTag;
      v72 = PoolWithTag;
      if ( PoolWithTag )
      {
        LODWORD(v9) = 0;
        v61 = 0;
        v21 = (__int64)PoolWithTag;
        v65 = PoolWithTag;
        v22 = 0;
        v23 = v46;
        while ( 1 )
        {
          v55 = v22;
          if ( v22 >= v23 )
            break;
          KeCopyPage(v21, (__int64)v58 + 4096 * v22);
          v23 = v46;
          v22 = v55 + 1;
          v21 = (__int64)(v65 + 4096);
          v65 += 4096;
        }
        MiRevertRelocations(v20, a2, v23);
      }
      else
      {
        LODWORD(v9) = -1073741670;
      }
      v16 = v47;
      v15 = v48;
      v10 = (__int64)v58;
    }
    v53 = v42;
    if ( (v9 & 0x80000000) == 0LL )
    {
      v24 = SeValidateImageHeader(
              BugCheckParameter2,
              (__int64)v20,
              v16,
              v10,
              v15,
              (__int64)&v42,
              (__int64)Process,
              v68,
              a5);
      v9 = v24;
      if ( v24 == 301 )
      {
        MiImageCantMove((__int64)a2);
        v44 = 1;
LABEL_96:
        if ( (a2[14] & 0x40000000) != 0 )
          KeBugCheckEx(0x1Au, 0x5150EuLL, BugCheckParameter2, v9, 0LL);
        MiStrongCodeImage((__int64)a2, 1u);
        goto LABEL_25;
      }
      v25 = v44;
      if ( v24 == 302 )
        v25 = 1;
      v44 = v25;
      if ( v25 )
        goto LABEL_96;
    }
LABEL_25:
    if ( v20 != v58 && v20 )
      ExFreePoolWithTag(v20, 0);
    MiUnmapImageInSystemSpace(v77);
    if ( v49 == 1 )
      MiDereferencePerSessionProtos(a2, 0xFFFFFFFFLL);
    v28 = v51;
    if ( v51 )
    {
      if ( (MiFlags & 0x40000) != 0 )
        MiFlushEntireTbDueToAttributeChange();
      CurrentThread = v67;
      PsRevertToUserPagePriorityThread((__int64)v67, v50);
      v28 = v51;
    }
    else
    {
      CurrentThread = v67;
    }
    if ( (v9 & 0x80000000) == 0LL )
      break;
    if ( (_DWORD)v9 != -1073741789 || v53 >= v42 )
    {
      dword_140464518 = 4;
      return (unsigned int)v9;
    }
    v6 = v43;
    if ( v28 )
    {
      v52 = 1;
    }
    else
    {
      v6 = v43 | 1;
      v43 |= 1u;
      if ( v42 == 1 )
        v52 = 0;
    }
  }
  if ( !v14 || v14 == 1 && (v41 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    if ( (v41 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      if ( v14 )
        v29 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v29 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 1;
    }
    else
    {
      v29 = v41 & 7 | 8;
    }
    v41 = v29;
    v27 = v29;
    v26 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
    if ( *(char *)(v26 + 46) < 0 )
    {
      v29 |= 4uLL;
      v41 = v27 | 4;
    }
    v30 = v59;
    while ( 1 )
    {
      v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 40), v29, v12);
      v31 = v12 == v32;
      v12 = v32;
      v76 = v32;
      if ( v31 )
        break;
      if ( (v41 & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
        goto LABEL_78;
      if ( (v32 & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
      {
        SeReleaseImageValidationContext(v41 & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_78:
        v41 = v12;
        break;
      }
      v29 = v41 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      v41 = v29;
      v60 = v32;
    }
    v12 = v41;
    v60 = v41;
  }
  else
  {
    v36 = v14 - 2;
    v30 = v59;
    if ( v36 <= 1 )
      v41 = ((unsigned __int8)v41 ^ (unsigned __int8)v12) & 3 ^ (unsigned __int64)v41;
  }
  if ( (v41 & 3) == 0 )
  {
LABEL_42:
    v33 = *(_QWORD *)a2;
    v63 = *(_DWORD *)(*(_QWORD *)a2 + 12LL);
    HIBYTE(v63) = HIBYTE(v63) & 1 | (2 * (v57 & 7 | 8));
    *(_BYTE *)(v33 + 15) = HIBYTE(v63);
    if ( v44 )
      MiStrongCodeImage((__int64)a2, 2u);
    return (unsigned int)v9;
  }
  if ( (MiFlags & 0x4000) != 0
    && (a2[23] & 0xC0000) != 0
    && *(_QWORD *)(v30 + 32)
    && (result = MiCaptureSecureImageBaseAddress(a2, v26, v27), (int)result < 0) )
  {
    dword_140464518 = 60;
  }
  else
  {
    result = MiWalkEntireImage((ULONG_PTR)a2, 0LL, 1, v56);
    LODWORD(v9) = result;
    if ( (int)result >= 0 )
    {
      v39 = v41 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)a2 + 56LL) + 46LL) < 0 )
        v39 = v41 & 0xFFFFFFFFFFFFFFF8uLL | 4;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 40), v39, v12);
      goto LABEL_42;
    }
    dword_140464518 = 59;
  }
  return result;
}
