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
  unsigned int v6; // ecx
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
  int v31; // r9d
  int v32; // eax
  char v33; // r8
  bool v34; // cf
  int v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // ecx
  char v39; // al
  int v40; // edx
  bool v41; // r12
  int v42; // r15d
  int DirectImageOriginalBase; // eax
  __int64 v44; // rax
  PFILE_OBJECT v45; // r12
  PMDL i; // rbx
  struct _MDL *v47; // r15
  ULONG j; // esi
  int v49; // [rsp+28h] [rbp-D8h]
  char v50; // [rsp+40h] [rbp-C0h]
  char v51; // [rsp+60h] [rbp-A0h]
  _BYTE v52[15]; // [rsp+61h] [rbp-9Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h]
  PMDL MemoryDescriptorList; // [rsp+98h] [rbp-68h] BYREF
  int v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  __int64 v61[14]; // [rsp+B0h] [rbp-50h] BYREF

  memset(v61, 0, sizeof(v61));
  v4 = *(ULONG_PTR ***)(a1 + 176);
  v5 = *(struct _FILE_OBJECT **)(a1 + 56);
  LOBYTE(v6) = 0;
  v7 = *(_BYTE *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)&v52[3] = v6;
  FileObject = v5;
  v52[2] = 0;
  v51 = v7;
  LODWORD(v54) = 0;
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
                       (__int64)&v55,
                       (__int64)&MemoryDescriptorList,
                       (__int64)v61,
                       (__int64)&v54);
    }
    else
    {
      v49 = v8;
      v14 = FileObject;
      ImageFileMap = MiCreateDataFileMap(FileObject, *(_DWORD *)(a1 + 28), v49, *(_DWORD *)(a1 + 172), *(_DWORD *)a1);
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
    v17 = v55;
    *a2 = v55;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 128) = v9;
    }
    else
    {
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), -1LL, -1LL);
      v17 = v55;
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
    if ( (v19 & 0x2000) != 0 && (v14->DeviceObject->Characteristics & 0x10) == 0 && (!v13 || (v61[1] & 0xFFF) == 0) )
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
    v60 = v24;
    if ( !LODWORD(v61[11]) && !HIDWORD(v61[11]) && !*(_BYTE *)(v24 + 50) )
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
    ImageRequiredSigningLevel = MiParseComImage(v20, v61, &v52[2]);
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
    v56 = 0;
    if ( (int)MiRegQueryDWORD(v29, v25, &v56) >= 0 && v56 )
    {
      if ( (*(_DWORD *)a1 & 0x8400) != 0 && (*(_DWORD *)a1 & 0x810) == 0 )
      {
        v30 = *(_DWORD *)&PsGetCurrentProcess()[2].Spare2[7];
        if ( v51 )
        {
          ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)v52);
          if ( ImageRequiredSigningLevel < 0 )
          {
LABEL_55:
            dword_140464818 = 7;
            goto LABEL_130;
          }
          v51 = v52[0];
          *(_BYTE *)(a1 + 24) = v52[0];
          v32 = *(_DWORD *)&v52[7];
          if ( (v30 & 0x800000) != 0 )
            v32 = 1;
          *(_DWORD *)&v52[7] = v32;
        }
        if ( (v30 & 0x1000000) != 0 )
        {
          LODWORD(v17) = v55;
          LOBYTE(v31) = 8;
          *(_DWORD *)&v52[3] = v31;
LABEL_82:
          v33 = v51;
          goto LABEL_83;
        }
        v33 = v51;
        v34 = (v30 & 0x2000000) != 0;
        LODWORD(v17) = v55;
        if ( v34 )
        {
          LOBYTE(v31) = 6;
          *(_DWORD *)&v52[3] = v31;
        }
        else
        {
          LOBYTE(v31) = v52[3];
        }
LABEL_83:
        v38 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0x80000) != 0 )
        {
          v39 = v33;
          v28 |= 0x40000000u;
          if ( !v33 )
            v39 = 4;
          v33 = v39;
          v51 = v39;
        }
        v40 = v28 | 0x20000000;
        if ( (v38 & 0x400000) == 0 )
          v40 = v28;
        v59 = v40;
        if ( (MiFlags & 0x40000) != 0 )
        {
          v38 |= 0x8000u;
          *(_DWORD *)a1 = v38;
          if ( !v33 )
          {
            v33 = 1;
            v51 = 1;
          }
        }
        if ( (v38 & 0x400) != 0 && v33 || (v38 & 0x8000) != 0 || (v52[1] = 0, *(char *)(v60 + 46) < 0) )
          v52[1] = 1;
        v41 = (v38 & 0x400) != 0 && (_BYTE)v31;
        if ( (v38 & 0x40) == 0 )
          v22 = (v38 & 0x20) != 0;
        v42 = 0;
        if ( (*(_DWORD *)(v20 + 56) & 0x40000000) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(FileObject);
          ImageRequiredSigningLevel = DirectImageOriginalBase;
          if ( DirectImageOriginalBase >= 0 )
          {
            v44 = v57;
          }
          else
          {
            if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
            {
              ImageRequiredSigningLevel = 0;
              v44 = -1LL;
              v57 = -1LL;
            }
            else
            {
              v44 = v57;
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
          v44 = -1LL;
          v57 = -1LL;
        }
        if ( v52[1] == 1 || v41 )
        {
          if ( v44 != -1 )
          {
            ImageRequiredSigningLevel = MiRelocateImage(v17, (unsigned int)v61, v54, v22, v44, 0);
            if ( ImageRequiredSigningLevel < 0 )
            {
              dword_140464818 = 9;
              goto LABEL_130;
            }
            v42 = 1;
            if ( v52[2] == 1 )
              MiMakeImageReadOnly(v20);
          }
          v50 = v41;
          v45 = FileObject;
          ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                        0,
                                        (ULONG_PTR)FileObject,
                                        (_DWORD *)v20,
                                        *(_DWORD *)(a1 + 168),
                                        *(_QWORD *)(a1 + 160),
                                        (*(_DWORD *)a1 >> 11) & 1,
                                        v59,
                                        v52[1],
                                        v50,
                                        *(int *)&v52[7],
                                        v51,
                                        v52[3]);
          if ( ImageRequiredSigningLevel < 0 )
          {
            dword_140464818 = 10;
            goto LABEL_130;
          }
          if ( v42 )
            goto LABEL_128;
          v44 = v57;
        }
        else
        {
          v45 = FileObject;
        }
        ImageRequiredSigningLevel = MiRelocateImage(v17, (unsigned int)v61, v54, v22, v44, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140464818 = 11;
          goto LABEL_130;
        }
        if ( v52[2] == 1 )
          MiMakeImageReadOnly(v20);
LABEL_128:
        for ( i = MemoryDescriptorList; i; i = i->Next )
        {
          if ( (i->MdlFlags & 4) == 0 )
          {
            v47 = i + 1;
            for ( j = i->ByteCount >> 12; j; --j )
            {
              if ( v47->Next != (struct _MDL *)-1LL )
                MiFinalizeImageHeaderPage(48 * (__int64)v47->Next - 0x58000000000LL);
              v47 = (struct _MDL *)((char *)v47 + 8);
            }
          }
        }
        MiDeleteImageCreationMdls(MemoryDescriptorList);
        v23 = (_QWORD *)MiReleaseImageSection((__int64)v45, v20);
LABEL_139:
        MiReleaseControlAreaWaiters(v23);
        return (unsigned int)ImageRequiredSigningLevel;
      }
    }
    else
    {
      v35 = *(_DWORD *)a1;
      if ( ((*(_DWORD *)a1 & 0x400) != 0 || (v35 & 0x8000) != 0) && (v35 & 0x10) == 0 )
      {
        v36 = *(_DWORD *)&PsGetCurrentProcess()[2].Spare2[7];
        ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)v52);
        if ( ImageRequiredSigningLevel < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)a1 & 0x800) != 0 )
        {
          LOBYTE(v31) = v52[3];
        }
        else
        {
          if ( v51 )
          {
            v37 = *(_DWORD *)&v52[7];
            if ( (v36 & 0x800000) != 0 )
              v37 = 1;
            *(_DWORD *)&v52[7] = v37;
          }
          if ( (v36 & 0x1000000) != 0 )
          {
            LOBYTE(v31) = 8;
          }
          else
          {
            v31 = v52[3];
            if ( (v36 & 0x2000000) != 0 )
              v31 = 6;
          }
          *(_DWORD *)&v52[3] = v31;
        }
        v33 = v52[0];
        LODWORD(v17) = v55;
        v51 = v52[0];
        *(_BYTE *)(a1 + 24) = v52[0];
        goto LABEL_83;
      }
    }
    LOBYTE(v31) = v52[3];
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
