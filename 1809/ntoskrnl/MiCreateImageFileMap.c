/*
 * XREFs of MiCreateImageFileMap @ 0x14061DEB8
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiCopyHeaderIfResident @ 0x140092DB0 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x140092FE8 (MiFlushDataSection.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400933F8 (MiGetPageForHeader.c)
 *     IoIsDeviceEjectable @ 0x1400935CC (IoIsDeviceEjectable.c)
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     MiLegacyImageArchitecture @ 0x1400DA4AC (MiLegacyImageArchitecture.c)
 *     MiPageRead @ 0x1400DE78C (MiPageRead.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiCreateMdl @ 0x140101FCC (MiCreateMdl.c)
 *     PsIsCurrentThreadPrefetching @ 0x1401190D0 (PsIsCurrentThreadPrefetching.c)
 *     MiInitializeImageHeaderPage @ 0x140130778 (MiInitializeImageHeaderPage.c)
 *     MiReturnPfnReferenceCount @ 0x14013B8B0 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     MiBuildImageControlArea @ 0x14061EA70 (MiBuildImageControlArea.c)
 *     MiVerifyImageHeader @ 0x1406B5B64 (MiVerifyImageHeader.c)
 *     MiLogCreateImageFileMapFailure @ 0x14084F884 (MiLogCreateImageFileMapFailure.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x140854124 (MiInitializeImageExtents.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        ULONG_PTR *a2,
        int a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  NTSTATUS result; // eax
  char *v13; // r12
  struct _MDL *p_MemoryDescriptorList; // r15
  __int64 PageForHeader; // rax
  unsigned int *StartVa; // r13
  int LowPart; // esi
  __int64 v18; // rsi
  unsigned __int64 v19; // r9
  LARGE_INTEGER v20; // rdi
  __int64 v21; // rdx
  int v22; // esi
  unsigned __int64 v23; // rax
  struct _MDL *v24; // rax
  PVOID *v25; // r15
  unsigned __int64 v26; // r13
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  unsigned __int64 v30; // rcx
  struct _MDL *v31; // r13
  unsigned int v32; // edi
  __int64 v33; // r15
  char *v34; // r13
  unsigned __int64 v35; // r9
  __int64 v36; // rdi
  BOOL v37; // r8d
  _DWORD *v38; // rcx
  BOOL v39; // eax
  unsigned int v40; // r8d
  unsigned int v41; // r10d
  unsigned int v42; // edx
  unsigned int v43; // edx
  BOOL v44; // r11d
  int v45; // edx
  int v46; // r15d
  unsigned __int64 v47; // rcx
  unsigned int v48; // r9d
  char *v49; // r15
  PFILE_OBJECT v50; // r13
  unsigned __int64 v51; // rdi
  SIZE_T v52; // rcx
  int v53; // esi
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // r8
  unsigned int v57; // eax
  unsigned __int16 v58; // si
  __int64 v59; // rdx
  unsigned __int16 v60; // r9
  int *v61; // rdi
  int v62; // ecx
  unsigned __int64 v63; // rax
  __int64 v64; // rsi
  __int64 DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int16 v67; // dx
  unsigned int v68; // r8d
  _QWORD *v69; // rcx
  PFILE_OBJECT v70; // rax
  int v71; // ebx
  unsigned __int64 i; // rdi
  __int64 v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v76; // [rsp+48h] [rbp-B8h]
  char v77; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v78; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v79; // [rsp+60h] [rbp-A0h]
  PFILE_OBJECT v80; // [rsp+68h] [rbp-98h]
  BOOL v81; // [rsp+70h] [rbp-90h]
  unsigned __int64 v82; // [rsp+78h] [rbp-88h]
  unsigned int *v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h] BYREF
  __int64 v85; // [rsp+90h] [rbp-70h]
  char *v86; // [rsp+98h] [rbp-68h] BYREF
  int v87; // [rsp+A0h] [rbp-60h] BYREF
  int v88; // [rsp+A4h] [rbp-5Ch]
  LARGE_INTEGER FileSize; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v90; // [rsp+B0h] [rbp-50h]
  ULONG_PTR *v91; // [rsp+B8h] [rbp-48h]
  __int64 v92; // [rsp+C0h] [rbp-40h]
  __int128 v93; // [rsp+C8h] [rbp-38h] BYREF
  int v94; // [rsp+D8h] [rbp-28h]
  PVOID FsContext; // [rsp+E0h] [rbp-20h] BYREF
  int v96; // [rsp+E8h] [rbp-18h]
  unsigned __int16 v97; // [rsp+ECh] [rbp-14h]
  __int16 v98; // [rsp+EEh] [rbp-12h]
  struct _KEVENT Event; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v100; // [rsp+108h] [rbp+8h]
  __int64 v101; // [rsp+110h] [rbp+10h]
  _DWORD *p_FsContext; // [rsp+118h] [rbp+18h] BYREF
  int v103; // [rsp+120h] [rbp+20h]
  int v104; // [rsp+124h] [rbp+24h]
  struct _MDL MemoryDescriptorList; // [rsp+128h] [rbp+28h] BYREF
  __int64 v106; // [rsp+158h] [rbp+58h]
  PMDL Mdl; // [rsp+160h] [rbp+60h]
  struct _MDL *v108; // [rsp+168h] [rbp+68h]
  struct _MDL *v109; // [rsp+170h] [rbp+70h]

  v100 = a5;
  v101 = a6;
  v85 = a7;
  p_FsContext = a8;
  v91 = a2;
  Mdl = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v88 = a3;
  v80 = FileObject;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result < 0 )
  {
    dword_140439EB0 = 1;
    if ( result == -1073741638 )
      return -1073741792;
    return result;
  }
  if ( FileSize.HighPart )
    return -1073741792;
  v76 = 0LL;
  v13 = 0LL;
  v82 = 1LL;
  v86 = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.Next = 0LL;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  PageForHeader = MiGetPageForHeader(a2, a3);
  v90 = PageForHeader;
  if ( PageForHeader == -1 )
    return -1073741670;
  v106 = PageForHeader;
  v92 = 48 * PageForHeader - 0x58000000000LL;
  StartVa = 0LL;
  v83 = 0LL;
  CcZeroEndOfLastPage(FileObject);
  LowPart = MiFlushDataSection((__int64)FileObject, &v87);
  if ( LowPart == -1073741740 )
    goto LABEL_162;
  if ( v87 == 1 )
    a4 |= 0x40000u;
  if ( (a4 & 0x40080) == 0 || !PsIsCurrentThreadPrefetching() )
  {
    v18 = v90;
    v19 = 0LL;
    v79 = 0LL;
    if ( (a4 & 0x10000) != 0 )
    {
      if ( (int)MiCopyDirectMapHeader(FileObject, v90) < 0 )
      {
        v19 = v79;
        a4 &= ~0x10000u;
      }
      else
      {
        v19 = 4096LL;
        v79 = 4096LL;
      }
    }
    v20 = FileSize;
    if ( (a4 & 0x10000) != 0 )
    {
      v22 = (int)v80;
    }
    else
    {
      v21 = v18;
      v22 = (int)v80;
      if ( (unsigned int)MiCopyHeaderIfResident((__int64)v80, v21) == 1 )
      {
        v19 = 4096LL;
        v79 = 4096LL;
      }
      else if ( ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && v20.LowPart <= 0x20000)
             && !v80->SectionObjectPointer->DataSectionObject
             && (v23 = ((unsigned __int64)v20.LowPart + 4095) >> 12, v82 = v23, v23 > 1) )
      {
        v24 = MiCreateMdl(v23 << 12);
        v19 = v79;
        Mdl = v24;
        if ( v24 )
        {
          StartVa = (unsigned int *)v24->StartVa;
          p_MemoryDescriptorList = v24;
          v83 = StartVa;
        }
        else
        {
          v82 = 1LL;
        }
      }
      else
      {
        v19 = v79;
      }
    }
    if ( (p_MemoryDescriptorList->MdlFlags & 2) != 0 )
    {
      v83 = (unsigned int *)MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      StartVa = v83;
      if ( !v83 )
      {
        dword_140439EB0 = 37;
        LowPart = -1073741670;
        goto LABEL_162;
      }
      v19 = v79;
      Mdl = p_MemoryDescriptorList;
    }
    if ( !v19 )
    {
      v84 = 0LL;
      LowPart = MiPageRead(v22, (int)p_MemoryDescriptorList, (int)&v84, (int)&Event, (__int64)&v78, 0, 0LL);
      if ( LowPart == 259 )
      {
        KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
        LowPart = v78.LowPart;
      }
      if ( LowPart < 0 )
      {
        dword_140439EB0 = 2;
        goto LABEL_41;
      }
      v27 = v82;
      v19 = v79;
      if ( v79 == v82 << 12 )
      {
LABEL_49:
        if ( *(_WORD *)StartVa != 23117 )
        {
          LowPart = -1073741521;
          goto LABEL_162;
        }
        v28 = StartVa[15];
        v81 = v28;
        if ( (int)v28 + 264 < (unsigned int)v28 )
        {
          LowPart = -1073741520;
          dword_140439EB0 = 6;
          goto LABEL_162;
        }
        v29 = v28;
        v30 = v28 + 264;
        if ( v30 > v20.QuadPart )
        {
          LowPart = -1073741520;
          dword_140439EB0 = 5;
          goto LABEL_162;
        }
        if ( v30 <= v27 << 12 )
        {
          if ( v30 > v19 )
          {
            LowPart = -1073741520;
            dword_140439EB0 = 39;
            goto LABEL_162;
          }
          v34 = (char *)StartVa + v29;
          v35 = v19 - v29;
        }
        else
        {
          v108 = MiCreateMdl(0x2000uLL);
          v31 = v108;
          if ( !v108 )
          {
            LowPart = -1073741670;
            dword_140439EB0 = 7;
            goto LABEL_162;
          }
          v32 = v29 & 0xFFFFF000;
          v84 = (unsigned int)v29 & 0xFFFFF000;
          KeResetEvent(&Event);
          v79 = 0LL;
          LowPart = MiPageRead((int)v80, (int)v31, (int)&v84, (int)&Event, (__int64)&v78, 0, 0LL);
          if ( LowPart == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            LowPart = v78.LowPart;
          }
          if ( LowPart < 0 )
          {
            dword_140439EB0 = 8;
            goto LABEL_41;
          }
          v33 = v29 & 0xFFF;
          if ( v79 != 0x2000 && v79 < v33 + 264 )
          {
            LowPart = -1073741520;
            dword_140439EB0 = 24;
            goto LABEL_162;
          }
          v34 = (char *)v31->StartVa + v33;
          v35 = v79 - v33;
          v79 += v32;
        }
        v36 = v85;
        LowPart = MiVerifyImageHeader(v85, v34, v83, v35);
        if ( LowPart )
        {
          dword_140439EB0 = 9;
          goto LABEL_162;
        }
        if ( *(_DWORD *)(v36 + 24) >= *(_DWORD *)(v36 + 16) )
        {
          dword_140439EB0 = 16;
LABEL_161:
          LowPart = -1073741701;
          goto LABEL_162;
        }
        v37 = v81;
        v38 = p_FsContext;
        *p_FsContext = v81 + 48;
        if ( *(_WORD *)(v36 + 48) == 267 )
          *v38 = v37 + 52;
        if ( !((*(_DWORD *)(v36 + 16) >> 12) + ((*(_DWORD *)(v36 + 16) & 0xFFF) != 0)) )
        {
          dword_140439EB0 = 10;
          goto LABEL_161;
        }
        v94 = *((_DWORD *)v34 + 5);
        v93 = *(_OWORD *)(v34 + 4);
        if ( (v94 & 7) != 0 )
        {
          dword_140439EB0 = 14;
          goto LABEL_161;
        }
        if ( *(_WORD *)v36 )
        {
          dword_140439EB0 = 15;
          goto LABEL_161;
        }
        v39 = MiLegacyImageArchitecture(v93);
        v43 = HIWORD(v42);
        v44 = v39;
        v81 = v39;
        if ( v39 )
        {
          if ( (v43 & 1) != 0 && (*(_WORD *)(v36 + 60) & 0x1000) != 0 )
            goto LABEL_84;
        }
        else
        {
          if ( (v43 & 1) != 0 )
          {
LABEL_84:
            dword_140439EB0 = 23;
            goto LABEL_161;
          }
          if ( (*(_WORD *)(v36 + 60) & 0x140) != 0x140 )
          {
            dword_140439EB0 = 44;
            goto LABEL_161;
          }
        }
        v45 = (unsigned __int16)v94 + 24;
        if ( v40 + v45 + 40 * WORD1(v93) <= v40 )
        {
          dword_140439EB0 = 52;
          goto LABEL_161;
        }
        v46 = v45 + v40;
        v47 = 40LL * WORD1(v93) + v45 + v40;
        v48 = 40 * WORD1(v93) + v45 + v40;
        if ( *(unsigned int *)(v36 + 24) >= v47 )
          v48 = *(_DWORD *)(v36 + 24);
        LODWORD(v83) = v48;
        if ( v48 > v41 )
        {
          dword_140439EB0 = 48;
          goto LABEL_161;
        }
        if ( v47 > v79 )
        {
          v51 = 40LL * WORD1(v93) + ((v45 + (int)v34) & 0xFFFLL);
          if ( !v51 || (v52 = (v51 + 4095) & 0xFFFFFFFFFFFFF000uLL, v51 > v52) )
          {
            dword_140439EB0 = 53;
            goto LABEL_161;
          }
          v109 = MiCreateMdl(v52);
          v53 = (int)v109;
          if ( !v109 )
          {
            LowPart = -1073741670;
            dword_140439EB0 = 18;
            goto LABEL_162;
          }
          v54 = v46 & 0xFFFFF000;
          v49 = (char *)v109->StartVa + (v46 & 0xFFF);
          v84 = v54;
          KeResetEvent(&Event);
          v79 = 0LL;
          v50 = v80;
          LowPart = MiPageRead((int)v80, v53, (int)&v84, (int)&Event, (__int64)&v78, 0, 0LL);
          if ( LowPart == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            LowPart = v78.LowPart;
          }
          if ( LowPart < 0 )
          {
            dword_140439EB0 = 19;
LABEL_41:
            if ( LowPart != -1073741740 )
            {
              v25 = 0LL;
              v26 = 0LL;
              if ( LowPart != -1073741209 )
                LowPart = -1073741792;
              goto LABEL_163;
            }
            goto LABEL_162;
          }
          if ( v79 < v51 )
          {
            dword_140439EB0 = 40;
            goto LABEL_161;
          }
          v36 = v85;
          v44 = v81;
        }
        else
        {
          LODWORD(v49) = (_DWORD)v34 + v45;
          v50 = v80;
        }
        if ( *(_DWORD *)(v36 + 12) < 0x1000u )
        {
          if ( (a4 & 0x20000) != 0 )
          {
            LowPart = -1073741701;
            MiLogCreateImageFileMapFailure(v47, v50, *(unsigned int *)(v36 + 64), DWORD1(v93));
LABEL_109:
            dword_140439EB0 = 22;
            goto LABEL_162;
          }
          if ( !v44 )
          {
            LowPart = -1073741701;
            goto LABEL_109;
          }
          a4 |= 0x80000u;
        }
        v55 = MiBuildImageControlArea(v88, (_DWORD)v49, v36, (unsigned int)&v93, a4, (__int64)&FileSize, (__int64)&v86);
        v13 = v86;
        v25 = 0LL;
        LowPart = v55;
        if ( v55 < 0 )
        {
          v26 = 0LL;
          goto LABEL_163;
        }
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v86 + 56LL) + 64LL) = (_DWORD)v83;
        *((_WORD *)v13 + 30) ^= (*(_WORD *)v91 ^ *((_WORD *)v13 + 30)) & 0x3FF;
        if ( (a4 & 0x200) != 0 )
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v13 + 56LL) + 51LL) |= 0x10u;
        v56 = *(_QWORD *)v13;
        v75 = *(_QWORD *)v13;
        v77 = 0;
        if ( !v108 && !v109 && (a4 & 0x90000) == 0 )
        {
          v57 = *(_DWORD *)(v36 + 24);
          if ( v57 < 0x1000 )
          {
            if ( (v57 & 0x1FF) != 0 )
              ++*(_QWORD *)(v56 + 16);
            v77 = 1;
          }
        }
        v58 = HIWORD(v94);
        if ( (a4 & 0x40080) != 0
          || IoIsDeviceEjectable((__int64)v80->DeviceObject)
          || (v58 & 0x400) != 0 && (*(_DWORD *)(v59 + 52) & 1) != 0
          || (v58 & v60) != 0 && (*(_DWORD *)(v59 + 52) & 0x10) != 0 )
        {
          LOBYTE(v25) = 1;
        }
        v61 = (int *)(v13 + 56);
        v62 = *((_DWORD *)v13 + 14);
        if ( (v62 & 0x20000) != 0 && (a4 & 0x10000) != 0 )
        {
          v25 = (PVOID *)v56;
LABEL_132:
          LowPart = -1073532108;
LABEL_133:
          v26 = v76;
          goto LABEL_163;
        }
        v63 = *(_QWORD *)(v56 + 16);
        v76 = v63;
        if ( v63 )
        {
          v64 = (__int64)v91;
          if ( !(unsigned int)MiChargeCommit((__int64)v91, v63, 0) )
          {
            v25 = (PVOID *)v75;
            LowPart = -1073741523;
            dword_140439EB0 = 35;
            v26 = 0LL;
            goto LABEL_163;
          }
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v64 + 7816), v76);
          v62 = *v61;
          v13 = v86;
          v58 = HIWORD(v94);
        }
        if ( (v62 & 0x20000) != 0 && (a4 & 0x80000) == 0 && (*(_DWORD *)(v85 + 20) & 0x1000000) == 0 )
          *v61 = v62 | 0x4000000;
        if ( v82 > 1 )
          MiInitializeImageProtos((__int64)v13, (__int64)Mdl, v92);
        if ( v77 == 1 )
          MiInitializeImageHeaderPage(v90, *(unsigned int *)(v85 + 24));
        if ( *(_WORD *)(v85 + 48) == 267 )
          *(_BYTE *)(v75 + 14) |= 0x40u;
        if ( (_BYTE)v25 == 1 )
        {
          *v61 |= 0x800u;
          if ( (a4 & 0x40080) != 0 )
            *v61 |= 0x40000u;
          if ( (PerfGlobalGroupMask & 4) != 0 )
          {
            v97 = v58;
            DeviceObject = (__int64)v80->DeviceObject;
            FsContext = v80->FsContext;
            v96 = *(_DWORD *)(DeviceObject + 52);
            v98 = (a4 >> 18) & 1;
            IsDeviceEjectable = IoIsDeviceEjectable(DeviceObject);
            v104 = 0;
            p_FsContext = &FsContext;
            v103 = 16;
            v98 = v67 | (2 * ((2 * ((a4 >> 7) & 1)) | IsDeviceEjectable));
            EtwTraceKernelEvent((__int64)&p_FsContext, 1u, v68, 0x269u, 0x401802u);
          }
        }
        else if ( (a4 & 0x10000) != 0 )
        {
          v70 = v80;
          *v61 |= 0x40000000u;
          *((_QWORD *)v13 + 8) = v70;
          v71 = MiInitializeImageExtents(v13);
          ObFastReplaceObject((volatile __int64 *)v13 + 8, 0LL);
          if ( v71 < 0 )
          {
            v25 = (PVOID *)v75;
            dword_140439EB0 = 11;
            goto LABEL_132;
          }
        }
        LowPart = 0;
        v25 = (PVOID *)v75;
        v69 = (_QWORD *)v101;
        *v100 = v75;
        *v69 = v92;
        goto LABEL_133;
      }
      if ( v79 < 0x40 )
      {
        LowPart = -1073741521;
        dword_140439EB0 = 38;
        goto LABEL_162;
      }
      memset((char *)StartVa + v79, 0, (v82 << 12) - v79);
      v19 = v79;
    }
    v27 = v82;
    goto LABEL_49;
  }
  dword_140439EB0 = 64;
  LowPart = -1073740749;
LABEL_162:
  v26 = 0LL;
  v25 = 0LL;
LABEL_163:
  for ( i = 0LL; i < 3; ++i )
  {
    v73 = (__int64)*(&Mdl + i);
    if ( v73 )
    {
      if ( (*(_BYTE *)(v73 + 10) & 1) != 0 )
      {
        MmUnmapLockedPages(*(PVOID *)(v73 + 24), *(&Mdl + i));
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(v73 + 32), 0);
        IoFreeMdl((PMDL)v73);
      }
    }
  }
  if ( LowPart < 0 )
  {
    if ( v26 )
    {
      v74 = (__int64)v91;
      _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + 977, -(__int64)v26);
      MiReturnCommit(v74, v26);
      v13 = v86;
    }
    MiReturnPfnReferenceCount(v92);
    if ( v13 )
    {
      MiUpdateSystemProtoPtesTree(*((unsigned __int64 **)v13 + 12), 0);
      ExFreePoolWithTag(v25[8], 0);
      ExFreePoolWithTag(v25, 0);
      ExFreePoolWithTag(v13, 0);
    }
  }
  return LowPart;
}
