/*
 * XREFs of MiCreateNewSection @ 0x140689A04
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140006530 (PsGetCurrentProcess.c)
 *     IoSetTopLevelIrp @ 0x14000A230 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiMakeImageReadOnly @ 0x140128B78 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x14012F5E0 (MiFinalizeImageHeaderPage.c)
 *     MiReleaseImageSection @ 0x140130D20 (MiReleaseImageSection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiRegQueryDWORD @ 0x1405B0C14 (MiRegQueryDWORD.c)
 *     FsRtlReleaseFile @ 0x1405D5620 (FsRtlReleaseFile.c)
 *     MiValidateSectionSigningPolicy @ 0x14066F2D8 (MiValidateSectionSigningPolicy.c)
 *     MiEnablePartitionMappedWrites @ 0x14068A18C (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x14068A2EC (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 *     MiDeleteImageCreationMdls @ 0x1406AF554 (MiDeleteImageCreationMdls.c)
 *     MiParseComImage @ 0x1406DE6D4 (MiParseComImage.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406E2AC8 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084DF9C (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, __int64 *a2)
{
  ULONG_PTR **v4; // rdi
  struct _FILE_OBJECT *v5; // r12
  int v6; // ecx
  char v7; // al
  int v8; // r15d
  __int64 v9; // r14
  ULONG_PTR *v10; // rdi
  int v11; // esi
  int v13; // r12d
  PFILE_OBJECT v14; // r15
  int ImageFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v17; // rsi
  signed __int64 v18; // rax
  int v19; // edx
  __int64 v20; // r14
  int v21; // r8d
  int v22; // r13d
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // eax
  int v28; // r12d
  __int64 v29; // rcx
  int v30; // esi
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  char v34; // r8
  bool v35; // cf
  int v36; // eax
  _KPROCESS *CurrentProcess; // rax
  int v38; // r8d
  int v39; // esi
  int v40; // eax
  int v41; // ecx
  char v42; // al
  int v43; // edx
  bool v44; // r12
  int v45; // r15d
  int DirectImageOriginalBase; // eax
  __int64 v47; // rax
  PFILE_OBJECT v48; // r12
  PMDL i; // rbx
  struct _MDL *v50; // r15
  ULONG j; // esi
  int v52; // [rsp+28h] [rbp-D8h]
  char v53; // [rsp+40h] [rbp-C0h]
  char v54; // [rsp+60h] [rbp-A0h]
  char v55; // [rsp+61h] [rbp-9Fh] BYREF
  char v56; // [rsp+62h] [rbp-9Eh]
  char v57; // [rsp+63h] [rbp-9Dh] BYREF
  int v58; // [rsp+64h] [rbp-9Ch]
  int v59; // [rsp+68h] [rbp-98h]
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  int v63; // [rsp+88h] [rbp-78h] BYREF
  __int64 v64; // [rsp+90h] [rbp-70h]
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-68h] BYREF
  int v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  __int64 v68[14]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v68, 0, sizeof(v68));
  v4 = *(ULONG_PTR ***)(a1 + 176);
  v5 = *(struct _FILE_OBJECT **)(a1 + 56);
  LOBYTE(v6) = 0;
  v7 = *(_BYTE *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 152);
  v58 = v6;
  FileObject = v5;
  v59 = 0;
  v57 = 0;
  v54 = v7;
  LODWORD(v61) = 0;
  if ( v4 )
    v10 = *v4;
  else
    v10 = &MiSystemPartition;
  v11 = MiEnablePartitionMappedWrites(v10);
  if ( v11 >= 0 )
  {
    MemoryDescriptorList = 0LL;
    v13 = v8 & 0x1000000;
    if ( (v8 & 0x1000000) != 0 )
    {
      v14 = FileObject;
      ImageFileMap = MiCreateImageFileMap(
                       FileObject,
                       (__int64)&v62,
                       (__int64)&MemoryDescriptorList,
                       (__int64)v68,
                       (__int64)&v61);
    }
    else
    {
      v52 = v8;
      v14 = FileObject;
      ImageFileMap = MiCreateDataFileMap(FileObject, *(_DWORD *)(a1 + 28), v52, *(_DWORD *)(a1 + 172), *(_DWORD *)a1);
    }
    ImageRequiredSigningLevel = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v14);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v17 = v62;
    *a2 = v62;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 128) = v9;
    }
    else
    {
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), -1LL, -1LL);
      v17 = v62;
      *(_QWORD *)(a1 + 128) = v18;
    }
    v19 = *(_DWORD *)a1;
    v20 = *(_QWORD *)v17;
    if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v20 + 62) |= 1u;
      v19 = *(_DWORD *)a1;
    }
    LOWORD(v21) = v19;
    if ( (v19 & 0x2000) != 0 && (v14->DeviceObject->Characteristics & 0x10) == 0 && (!v13 || (v68[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v20 + 56) |= 0x20000000u;
      v21 = *(_DWORD *)a1;
    }
    if ( (v21 & 0x4000) != 0 )
      *(_DWORD *)(v20 + 56) |= 0x20000u;
    v22 = 2;
    v23 = (_QWORD *)MiSectionCreated((__int64)v14, v20, (__int64 *)MemoryDescriptorList);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v13 )
      goto LABEL_139;
    v24 = *(_QWORD *)(v17 + 56);
    v67 = v24;
    if ( !LODWORD(v68[11]) && !HIDWORD(v68[11]) && !*(_BYTE *)(v24 + 50) )
      *(_BYTE *)(v17 + 15) |= 1u;
    if ( (*(_DWORD *)(v20 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x80000) != 0 )
      {
        dword_140464818 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_130:
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      ImageRequiredSigningLevel = MiSetPagesModified((__int64 *)v20, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140464818 = 6;
        goto LABEL_130;
      }
    }
    ImageRequiredSigningLevel = MiParseComImage(v20, v68, &v57);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140464818 = 4;
      goto LABEL_130;
    }
    v26 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v27 = 4;
    }
    else if ( (v26 & 0x20) != 0 )
    {
      v27 = 1;
    }
    else if ( (v26 & 0x10) != 0 )
    {
      v27 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v27 = 0;
    }
    v28 = v27 | 0x10;
    v29 = v26 & 0x800;
    if ( !(_DWORD)v29 )
      v28 = v27;
    v63 = 0;
    if ( (int)MiRegQueryDWORD(v29, v25, &v63) >= 0 && v63 )
    {
      if ( (*(_DWORD *)a1 & 0x8400) != 0 && (*(_DWORD *)a1 & 0x810) == 0 )
      {
        v30 = *(_DWORD *)&PsGetCurrentProcess()[2].Spare2[7];
        if ( v54 )
        {
          LOBYTE(v31) = v54;
          ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v28, v31, 0, (__int64)&v55);
          if ( ImageRequiredSigningLevel < 0 )
          {
LABEL_55:
            dword_140464818 = 7;
            goto LABEL_130;
          }
          v54 = v55;
          *(_BYTE *)(a1 + 24) = v55;
          v33 = v59;
          if ( (v30 & 0x800000) != 0 )
            v33 = 1;
          v59 = v33;
        }
        if ( (v30 & 0x1000000) != 0 )
        {
          LODWORD(v17) = v62;
          LOBYTE(v32) = 8;
          v58 = v32;
LABEL_82:
          v34 = v54;
          goto LABEL_83;
        }
        v34 = v54;
        v35 = (v30 & 0x2000000) != 0;
        LODWORD(v17) = v62;
        if ( v35 )
        {
          LOBYTE(v32) = 6;
          v58 = v32;
        }
        else
        {
          LOBYTE(v32) = v58;
        }
LABEL_83:
        v41 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0x80000) != 0 )
        {
          v42 = v34;
          v28 |= 0x40000000u;
          if ( !v34 )
            v42 = 4;
          v34 = v42;
          v54 = v42;
        }
        v43 = v28 | 0x20000000;
        if ( (v41 & 0x400000) == 0 )
          v43 = v28;
        v66 = v43;
        if ( (MiFlags & 0x40000) != 0 )
        {
          v41 |= 0x8000u;
          *(_DWORD *)a1 = v41;
          if ( !v34 )
          {
            v34 = 1;
            v54 = 1;
          }
        }
        if ( (v41 & 0x400) != 0 && v34 || (v41 & 0x8000) != 0 || (v56 = 0, *(char *)(v67 + 46) < 0) )
          v56 = 1;
        v44 = (v41 & 0x400) != 0 && (_BYTE)v32;
        if ( (v41 & 0x40) == 0 )
          v22 = (v41 & 0x20) != 0;
        v45 = 0;
        if ( (*(_DWORD *)(v20 + 56) & 0x40000000) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
          ImageRequiredSigningLevel = DirectImageOriginalBase;
          if ( DirectImageOriginalBase >= 0 )
          {
            v47 = v64;
          }
          else
          {
            if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
            {
              ImageRequiredSigningLevel = 0;
              v47 = -1LL;
              v64 = -1LL;
            }
            else
            {
              v47 = v64;
            }
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140464818 = 8;
              goto LABEL_130;
            }
          }
        }
        else
        {
          v47 = -1LL;
          v64 = -1LL;
        }
        if ( v56 == 1 || v44 )
        {
          if ( v47 != -1 )
          {
            ImageRequiredSigningLevel = MiRelocateImage(v17, (unsigned int)v68, v61, v22, v47, 0);
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140464818 = 9;
              goto LABEL_130;
            }
            v45 = 1;
            if ( v57 == 1 )
              MiMakeImageReadOnly(v20);
          }
          v53 = v44;
          v48 = FileObject;
          ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                        0,
                                        (ULONG_PTR)FileObject,
                                        (_DWORD *)v20,
                                        *(_DWORD *)(a1 + 168),
                                        *(_QWORD *)(a1 + 160),
                                        (*(_DWORD *)a1 >> 11) & 1,
                                        v66,
                                        v56,
                                        v53,
                                        v59,
                                        v54,
                                        v58);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140464818 = 10;
            goto LABEL_130;
          }
          if ( v45 )
            goto LABEL_128;
          v47 = v64;
        }
        else
        {
          v48 = FileObject;
        }
        ImageRequiredSigningLevel = MiRelocateImage(v17, (unsigned int)v68, v61, v22, v47, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140464818 = 11;
          goto LABEL_130;
        }
        if ( v57 == 1 )
          MiMakeImageReadOnly(v20);
LABEL_128:
        for ( i = MemoryDescriptorList; i; i = i->Next )
        {
          if ( (i->MdlFlags & 4) == 0 )
          {
            v50 = i + 1;
            for ( j = i->ByteCount >> 12; j; --j )
            {
              if ( v50->Next != (struct _MDL *)-1LL )
                MiFinalizeImageHeaderPage(48 * (__int64)v50->Next - 0x58000000000LL);
              v50 = (struct _MDL *)((char *)v50 + 8);
            }
          }
        }
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        v23 = (_QWORD *)MiReleaseImageSection((__int64)v48, v20);
LABEL_139:
        MiReleaseControlAreaWaiters(v23);
        return (unsigned int)ImageRequiredSigningLevel;
      }
    }
    else
    {
      v36 = *(_DWORD *)a1;
      if ( ((*(_DWORD *)a1 & 0x400) != 0 || (v36 & 0x8000) != 0) && (v36 & 0x10) == 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        LOBYTE(v38) = v54;
        v39 = *(_DWORD *)&CurrentProcess[2].Spare2[7];
        ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v28, v38, 0, (__int64)&v55);
        if ( ImageRequiredSigningLevel < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)a1 & 0x800) != 0 )
        {
          LOBYTE(v32) = v58;
        }
        else
        {
          if ( v54 )
          {
            v40 = v59;
            if ( (v39 & 0x800000) != 0 )
              v40 = 1;
            v59 = v40;
          }
          if ( (v39 & 0x1000000) != 0 )
          {
            LOBYTE(v32) = 8;
          }
          else
          {
            v32 = (unsigned __int8)v58;
            if ( (v39 & 0x2000000) != 0 )
              v32 = 6;
          }
          v58 = v32;
        }
        v34 = v55;
        LODWORD(v17) = v62;
        v54 = v55;
        *(_BYTE *)(a1 + 24) = v55;
        goto LABEL_83;
      }
    }
    LOBYTE(v32) = v58;
    goto LABEL_82;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v5);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)v11;
}
