/*
 * XREFs of MiCreateImageFileMap @ 0x140645C84
 * Callers:
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140009D4C (CcZeroEndOfLastPage.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 *     MiInitializeImageHeaderPage @ 0x14008E4F4 (MiInitializeImageHeaderPage.c)
 *     MiLegacyImageArchitecture @ 0x14008FEFC (MiLegacyImageArchitecture.c)
 *     IoIsDeviceEjectable @ 0x14008FF20 (IoIsDeviceEjectable.c)
 *     MiCopyHeaderIfResident @ 0x14008FF40 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x140090130 (MiFlushDataSection.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1400BFFF0 (MiUpdateSystemProtoPtesTree.c)
 *     PsIsCurrentThreadPrefetching @ 0x140117750 (PsIsCurrentThreadPrefetching.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiVerifyImageHeader @ 0x1406453D4 (MiVerifyImageHeader.c)
 *     MiBuildImageControlArea @ 0x1406457E8 (MiBuildImageControlArea.c)
 *     MiCreateMdl @ 0x140646858 (MiCreateMdl.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 *     MiDeleteImageCreationMdls @ 0x1406B1484 (MiDeleteImageCreationMdls.c)
 *     MiReadImageHeaders @ 0x1406DCB0C (MiReadImageHeaders.c)
 *     MiLogCreateImageFileMapFailure @ 0x140889F1C (MiLogCreateImageFileMapFailure.c)
 *     MiAllocateEntireImageFileExtents @ 0x14088B46C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x14088C184 (MiDeleteImageExtentList.c)
 *     MiInitializeImageExtents @ 0x14088C1E0 (MiInitializeImageExtents.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        struct _MDL **a6,
        __int64 a7,
        _DWORD *a8)
{
  NTSTATUS result; // eax
  unsigned __int64 v12; // rdi
  __int64 v13; // r15
  PVOID *v14; // r13
  unsigned __int64 v15; // r12
  __int64 Mdl; // rax
  int v17; // r14d
  ULONG LowPart; // r14d
  LARGE_INTEGER v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // r9
  struct _MDL *v22; // r13
  __int64 StartVa; // rdx
  __int64 v24; // r14
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // r13d
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r14
  struct _MDL *v31; // rax
  struct _MDL *v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // r13
  __int64 v35; // r9
  unsigned __int64 v36; // rcx
  __int64 v37; // rdi
  _DWORD *v38; // rcx
  __int64 v39; // r11
  unsigned int v40; // r9d
  __int128 v41; // xmm0
  int v42; // r8d
  __int64 v43; // rax
  unsigned __int64 v44; // r13
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned int v47; // r10d
  char *v48; // r13
  PFILE_OBJECT v49; // rdi
  __int64 v50; // rax
  bool v51; // zf
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdi
  struct _MDL *v54; // rcx
  unsigned __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  struct _MDL *v58; // r13
  char v59; // si
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // eax
  unsigned __int16 v63; // di
  unsigned __int16 v64; // r10
  unsigned __int64 v65; // rax
  int v66; // ecx
  char v67; // al
  PDEVICE_OBJECT DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  unsigned int v70; // r10d
  __int16 v71; // dx
  __int64 v72; // rsi
  int v73; // ebx
  __int64 v74; // rbx
  __int64 v75; // rdx
  unsigned __int64 v76; // rcx
  char v77; // [rsp+40h] [rbp-C0h]
  __int64 v78; // [rsp+48h] [rbp-B8h]
  struct _MDL *MemoryDescriptorList; // [rsp+58h] [rbp-A8h]
  unsigned int v82; // [rsp+68h] [rbp-98h]
  unsigned int v83; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER FileSize; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v85; // [rsp+80h] [rbp-80h] BYREF
  char *v86; // [rsp+88h] [rbp-78h] BYREF
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v89; // [rsp+A0h] [rbp-60h]
  signed __int64 v90; // [rsp+A8h] [rbp-58h]
  __int128 v91; // [rsp+B0h] [rbp-50h] BYREF
  int v92; // [rsp+C0h] [rbp-40h]
  int v93; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v94; // [rsp+D0h] [rbp-30h]
  _DWORD *v95; // [rsp+D8h] [rbp-28h] BYREF
  PVOID FsContext; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v97; // [rsp+E8h] [rbp-18h]
  struct _MDL *v98; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v99; // [rsp+F8h] [rbp-8h]
  _DWORD *v100; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v101; // [rsp+108h] [rbp+8h]
  struct _MDL **v102; // [rsp+110h] [rbp+10h]
  PVOID *p_FsContext; // [rsp+118h] [rbp+18h] BYREF
  int v104; // [rsp+120h] [rbp+20h]
  int v105; // [rsp+124h] [rbp+24h]

  v101 = a5;
  v102 = a6;
  v95 = a8;
  FileSize.QuadPart = 0LL;
  v91 = 0uLL;
  v92 = 0;
  v88 = 0LL;
  v89 = 0LL;
  FsContext = 0LL;
  v97 = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result < 0 )
  {
    dword_140464518 = 33;
    if ( result == -1073741638 )
      return -1073741792;
    return result;
  }
  if ( FileSize.HighPart )
  {
    dword_140464518 = 34;
    return -1073741792;
  }
  v94 = 0LL;
  v12 = 1LL;
  v90 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v87 = 0LL;
  v15 = 0LL;
  v78 = 0LL;
  v85 = 0LL;
  Mdl = MiCreateMdl(a2, a3, 4096LL, 1LL);
  MemoryDescriptorList = (struct _MDL *)Mdl;
  if ( !Mdl )
  {
    dword_140464518 = 35;
    return -1073741670;
  }
  *(_QWORD *)(Mdl + 16) = 0LL;
  v99 = *(_QWORD *)(Mdl + 48);
  CcZeroEndOfLastPage(FileObject);
  v17 = MiFlushDataSection((__int64)FileObject, &v93);
  if ( v17 == -1073741740 )
  {
    dword_140464518 = 36;
LABEL_164:
    v28 = a2;
    goto LABEL_165;
  }
  v77 = 0;
  if ( v93 == 1 )
    a4 |= 0x100000u;
  if ( (a4 & 0x100080) != 0 )
  {
    v77 = 1;
    if ( PsIsCurrentThreadPrefetching() )
    {
      dword_140464518 = 37;
      v17 = -1073740749;
      goto LABEL_164;
    }
  }
  LowPart = FileSize.LowPart;
  if ( (a4 & 0x10000) != 0 )
  {
    v19 = FileSize;
    if ( (a4 & 0x40000) != 0 )
      v19.QuadPart = 4096LL;
    v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiAllocateEntireImageFileExtents)(
            FileObject,
            (LARGE_INTEGER)v19.QuadPart,
            &v85);
    v15 = (unsigned __int64)v85;
    v17 = v20;
    if ( v20 < 0 )
    {
      dword_140464518 = 38;
      goto LABEL_162;
    }
    LowPart = FileSize.LowPart;
  }
  if ( (a4 & 0x10000) == 0 )
  {
    if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObject, v99) == 1 )
    {
      v21 = 4096LL;
      v89 = 4096LL;
LABEL_25:
      v22 = MemoryDescriptorList;
      goto LABEL_26;
    }
    if ( !v77
      && ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && LowPart <= 0x20000)
      && !FileObject->SectionObjectPointer->DataSectionObject )
    {
      v12 = ((unsigned __int64)LowPart + 4095) >> 12;
      if ( v12 > 1 )
      {
        v94 = MiCreateMdl(a2, a3, v12 << 12, 0LL);
        v24 = v94;
        if ( v94 )
        {
          MiDeleteImageCreationMdls(MemoryDescriptorList);
          *(_QWORD *)(v24 + 16) = 0LL;
          MemoryDescriptorList = (struct _MDL *)v24;
        }
        else
        {
          v12 = 1LL;
        }
      }
    }
    v21 = v89;
    if ( v89 )
      goto LABEL_25;
  }
  v22 = MemoryDescriptorList;
  v17 = MiReadImageHeaders(FileObject, v15, MemoryDescriptorList, &v88);
  if ( v17 < 0 )
  {
    dword_140464518 = 40;
    goto LABEL_162;
  }
  v21 = v89;
  if ( v89 != v12 << 12 && v89 < 0x40 )
  {
    dword_140464518 = 41;
LABEL_43:
    v17 = -1073741521;
LABEL_44:
    v14 = 0LL;
    goto LABEL_164;
  }
LABEL_26:
  if ( (v22->MdlFlags & 4) != 0 )
    StartVa = (__int64)v22->StartVa;
  else
    StartVa = (__int64)v22->MappedSystemVa;
  p_FsContext = (PVOID *)StartVa;
  if ( *(_WORD *)StartVa != 23117 )
    goto LABEL_43;
  v25 = *(unsigned int *)(StartVa + 60);
  v82 = v25;
  if ( (int)v25 + 264 < (unsigned int)v25 )
  {
    v17 = -1073741520;
    dword_140464518 = 42;
    goto LABEL_44;
  }
  v26 = v25 + 264;
  v27 = *(_DWORD *)(StartVa + 60);
  if ( (unsigned __int64)(v25 + 264) > FileSize.QuadPart )
  {
    v17 = -1073741520;
    dword_140464518 = 43;
    goto LABEL_44;
  }
  if ( v26 <= v12 << 12 )
  {
    if ( v26 > v21 )
    {
      v17 = -1073741520;
      dword_140464518 = 47;
      goto LABEL_44;
    }
    v37 = StartVa + v25;
    v35 = v21 - v25;
  }
  else
  {
    v28 = a2;
    v29 = 0x2000LL;
    v30 = (FileSize.QuadPart - (v25 & 0xFFFFFFFFFFFFF000uLL) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( v30 < 0x2000 )
      v29 = (FileSize.QuadPart - (v25 & 0xFFFFFFFFFFFFF000uLL) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v86 = (char *)v29;
    v31 = (struct _MDL *)MiCreateMdl(a2, a3, v29, 1LL);
    v98 = v31;
    v32 = v31;
    if ( !v31 )
    {
      v17 = -1073741670;
      dword_140464518 = 44;
      v14 = 0LL;
LABEL_165:
      MiDeleteImageCreationMdls(MemoryDescriptorList);
      v76 = v90;
      if ( v90 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 8584), -v90);
        MiReturnCommit(v28, v76);
        v13 = v87;
        v15 = (unsigned __int64)v85;
      }
      if ( v13 )
      {
        MiUpdateSystemProtoPtesTree(*(unsigned __int64 **)(v13 + 96), 0);
        ExFreePoolWithTag(v14[8], 0);
        ExFreePoolWithTag(v14, 0);
        ExFreePoolWithTag((PVOID)v13, 0);
      }
      goto LABEL_169;
    }
    v31->Next = MemoryDescriptorList;
    v33 = v27 & 0xFFFFF000;
    MemoryDescriptorList = v31;
    v31->Process = (struct _EPROCESS *)((__int64)(v27 & 0xFFFFF000) >> 12);
    if ( (a4 & 0x40000) != 0 )
    {
      v17 = MiAllocateEntireImageFileExtents(FileObject, v30, &v100);
      if ( v17 < 0 )
      {
        dword_140464518 = 128;
        goto LABEL_162;
      }
      MiDeleteImageExtentList((PVOID)v15);
      v15 = (unsigned __int64)v100;
      v32 = v98;
      v85 = v100;
    }
    v17 = MiReadImageHeaders(FileObject, v15, v32, &v88);
    if ( v17 < 0 )
    {
      dword_140464518 = 45;
      goto LABEL_162;
    }
    v34 = v27 & 0xFFF;
    if ( v89 != (unsigned int)v86 && v89 < v34 + 264 )
    {
      v17 = -1073741520;
      dword_140464518 = 46;
      goto LABEL_44;
    }
    v35 = v89 - v34;
    v36 = v33 + v89;
    v86 = (char *)v98->MappedSystemVa + v34;
    v37 = (__int64)v86;
    v89 = v36;
    StartVa = (__int64)p_FsContext;
  }
  v17 = MiVerifyImageHeader(a7, v37, StartVa, v35);
  if ( !v17 )
  {
    v38 = v95;
    v39 = a7;
    *v95 = v82 + 48;
    if ( *(_WORD *)(a7 + 48) == 267 )
      *v38 = v82 + 52;
    v40 = *(_DWORD *)(a7 + 16);
    if ( !((v40 >> 12) + ((v40 & 0xFFF) != 0)) )
    {
      v17 = -1073741701;
      dword_140464518 = 49;
      goto LABEL_44;
    }
    v41 = *(_OWORD *)(v37 + 4);
    v92 = *(_DWORD *)(v37 + 20);
    v42 = (unsigned __int16)v92 + 24;
    v91 = v41;
    if ( v82 + v42 + 40 * WORD1(v41) <= v82 )
    {
      v17 = -1073741701;
      dword_140464518 = 50;
      goto LABEL_44;
    }
    v43 = v42 + v82;
    v44 = (unsigned int)v43;
    v45 = 40LL * WORD1(v41);
    v46 = v45 + v43;
    v47 = v45 + v43;
    if ( *(unsigned int *)(a7 + 24) >= (unsigned __int64)(v45 + v43) )
      v47 = *(_DWORD *)(a7 + 24);
    v83 = v47;
    if ( v47 > v40 )
    {
      v17 = -1073741701;
      dword_140464518 = 48;
      goto LABEL_44;
    }
    if ( v46 <= v89 )
    {
      LODWORD(v48) = v37 + v42;
      v49 = FileObject;
LABEL_96:
      if ( *(_DWORD *)(v39 + 12) < 0x1000u )
      {
        if ( (a4 & 0x80000) != 0 )
        {
          v17 = -1073741701;
          MiLogCreateImageFileMapFailure(v46, v49, *(unsigned int *)(v39 + 64), DWORD1(v91));
          dword_140464518 = 55;
          goto LABEL_44;
        }
        if ( !MiLegacyImageArchitecture(v91) )
        {
          v17 = -1073741701;
          dword_140464518 = 56;
          goto LABEL_44;
        }
        a4 |= 0x200000u;
      }
      v56 = MiBuildImageControlArea(a3, (int)v48, v39, (__int64)&v91, a4, (unsigned int *)&FileSize, &v87);
      v13 = v87;
      v17 = v56;
      if ( v56 < 0 )
      {
LABEL_163:
        v14 = (PVOID *)v78;
        goto LABEL_164;
      }
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v87 + 56LL) + 64LL) = v83;
      *(_WORD *)(v13 + 60) ^= (*(_WORD *)(v13 + 60) ^ *(_WORD *)a2) & 0x3FF;
      if ( (a4 & 0x200) != 0 )
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v13 + 56LL) + 51LL) |= 0x10u;
      v58 = MemoryDescriptorList;
      v59 = 0;
      v60 = *(_QWORD *)v13;
      v78 = *(_QWORD *)v13;
      if ( MemoryDescriptorList->Next || v94 )
      {
        v61 = 1LL;
      }
      else
      {
        v61 = 1LL;
        if ( (a4 & 0x210000) == 0 )
        {
          v62 = *(_DWORD *)(a7 + 24);
          if ( v62 < 0x1000 )
          {
            if ( (v62 & 0x1FF) != 0 )
              ++*(_QWORD *)(v60 + 16);
            v59 = 1;
          }
        }
      }
      v63 = HIWORD(v92);
      if ( !v77
        && (IoIsDeviceEjectable((__int64)FileObject->DeviceObject)
         || (v63 & 0x400) != 0 && ((unsigned __int8)*(_DWORD *)(v57 + 52) & (unsigned __int8)v61) != 0
         || (v63 & v64) != 0 && (*(_DWORD *)(v57 + 52) & 0x10) != 0) )
      {
        v77 = v61;
      }
      v65 = *(_QWORD *)(v60 + 16);
      v90 = v65;
      if ( v65 )
      {
        v28 = a2;
        if ( !(unsigned int)MiChargeCommit(a2, v65, 0) )
        {
          v14 = (PVOID *)v78;
          v90 = 0LL;
          v17 = -1073741523;
          dword_140464518 = 57;
          goto LABEL_165;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8584), v90);
        v63 = HIWORD(v92);
        v13 = v87;
        v15 = (unsigned __int64)v85;
      }
      v66 = *(_DWORD *)(v13 + 56);
      if ( (v66 & 0x20000) != 0 && (a4 & 0x200000) == 0 && (*(_DWORD *)(a7 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(v13 + 56) = v66 | 0x4000000;
      if ( v94 )
        MiInitializeImageProtos(v13, v94);
      if ( v59 == 1 )
        MiInitializeImageHeaderPage(v99, *(unsigned int *)(a7 + 24));
      if ( *(_WORD *)(a7 + 48) == 267 )
        *(_BYTE *)(v78 + 14) |= 0x40u;
      v67 = v77;
      if ( v77 )
      {
        *(_DWORD *)(v13 + 56) |= 0x800u;
        if ( (a4 & 0x100080) != 0 )
          *(_DWORD *)(v13 + 56) |= 0x40000u;
        if ( (PerfGlobalGroupMask & 4) != 0 )
        {
          DeviceObject = FileObject->DeviceObject;
          FsContext = FileObject->FsContext;
          WORD2(v97) = v63;
          LODWORD(v97) = DeviceObject->Characteristics;
          HIWORD(v97) = (a4 >> 20) & 1;
          IsDeviceEjectable = IoIsDeviceEjectable((__int64)DeviceObject);
          v105 = 0;
          v104 = 16;
          p_FsContext = &FsContext;
          HIWORD(v97) = v71 | (2 * ((2 * (v70 & (a4 >> 7))) | (unsigned __int8)v70 & IsDeviceEjectable));
          EtwTraceKernelEvent((__int64)&p_FsContext, v70, 4u, 0x269u, 0x401802u);
        }
        v67 = v77;
      }
      if ( (a4 & 0x10000) == 0 )
        goto LABEL_159;
      v72 = *(_QWORD *)(v13 + 96);
      if ( !v67 && (MiFlags & 0x2000) == 0 && (a4 & 0x20000) == 0 )
        *(_DWORD *)(v13 + 56) |= 0x40000000u;
      v73 = a4 & 0x40000;
      if ( v73 )
        *(_QWORD *)(v72 + 48) |= 1uLL;
      if ( (*(_DWORD *)(v13 + 56) & 0x40000000) == 0 )
        goto LABEL_154;
      *(_QWORD *)(v13 + 64) = FileObject;
      v17 = MiInitializeImageExtents(v13, v57, v60, v61);
      ObFastReplaceObject((volatile __int64 *)(v13 + 64), 0LL);
      if ( v17 < 0 )
      {
        if ( v17 != -1073741800 )
        {
          dword_140464518 = 58;
          goto LABEL_162;
        }
        *(_DWORD *)(v13 + 56) &= ~0x40000000u;
      }
      else
      {
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        v58 = 0LL;
        MemoryDescriptorList = 0LL;
      }
      if ( (*(_DWORD *)(v13 + 56) & 0x40000000) != 0 )
      {
LABEL_159:
        v74 = v78;
      }
      else
      {
LABEL_154:
        v51 = v73 == 0;
        v74 = v78;
        if ( !v51 )
        {
          v75 = (unsigned int)(*(_DWORD *)(v78 + 8) << 12);
          FileSize.QuadPart = (unsigned int)v75;
          v17 = MiAllocateEntireImageFileExtents(FileObject, v75, &v86);
          if ( v17 < 0 )
          {
            dword_140464518 = 91;
            goto LABEL_162;
          }
          MiDeleteImageExtentList((PVOID)v15);
          v15 = (unsigned __int64)v86;
        }
        *(_QWORD *)(v72 + 48) |= v15;
        v15 = 0LL;
      }
      v17 = 0;
      *v101 = v74;
      *v102 = v58;
      goto LABEL_169;
    }
    v50 = ((int)v37 + v42) & 0xFFFLL;
    v51 = v45 + v50 == 0;
    v52 = v45 + v50;
    v86 = (char *)v52;
    if ( !v51 )
    {
      v53 = (v52 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      if ( v52 <= v53 )
      {
        p_FsContext = (PVOID *)MiCreateMdl(a2, a3, (v52 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1LL);
        v54 = (struct _MDL *)p_FsContext;
        if ( !p_FsContext )
        {
          v17 = -1073741670;
          dword_140464518 = 52;
          goto LABEL_44;
        }
        p_FsContext[2] = (PVOID)(v44 >> 12);
        v54->Next = MemoryDescriptorList;
        MemoryDescriptorList = v54;
        if ( (a4 & 0x40000) != 0 )
        {
          v55 = v53;
          v49 = FileObject;
          v17 = MiAllocateEntireImageFileExtents(FileObject, v55, &v95);
          if ( v17 < 0 )
          {
            dword_140464518 = 129;
            goto LABEL_162;
          }
          MiDeleteImageExtentList((PVOID)v15);
          v15 = (unsigned __int64)v95;
          v54 = (struct _MDL *)p_FsContext;
          v85 = v95;
        }
        else
        {
          v49 = FileObject;
        }
        v17 = MiReadImageHeaders(v49, v15, v54, &v88);
        if ( v17 < 0 )
        {
          dword_140464518 = 53;
          goto LABEL_162;
        }
        if ( v89 < (unsigned __int64)v86 )
        {
          v17 = -1073741701;
          dword_140464518 = 54;
          goto LABEL_44;
        }
        v39 = a7;
        v48 = (char *)p_FsContext[3] + (v44 & 0xFFF);
        goto LABEL_96;
      }
    }
    v17 = -1073741701;
    dword_140464518 = 51;
  }
LABEL_162:
  if ( v17 < 0 )
    goto LABEL_163;
LABEL_169:
  if ( v15 )
    MiDeleteImageExtentList((PVOID)v15);
  return v17;
}
