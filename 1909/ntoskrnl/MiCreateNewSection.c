/*
 * XREFs of MiCreateNewSection @ 0x14064FBD4
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D7290 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x14000A2C0 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiMakeImageReadOnly @ 0x140129598 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 *     MiReleaseImageSection @ 0x1401318B0 (MiReleaseImageSection.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     FsRtlReleaseFile @ 0x1405D5DE0 (FsRtlReleaseFile.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 *     MiValidateSectionSigningPolicy @ 0x140648C94 (MiValidateSectionSigningPolicy.c)
 *     MiEnablePartitionMappedWrites @ 0x1406502AC (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x14065040C (MiCreateDataFileMap.c)
 *     MiDeleteImageCreationMdls @ 0x1406B1484 (MiDeleteImageCreationMdls.c)
 *     MiParseComImage @ 0x1406DFA74 (MiParseComImage.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406E10F4 (SeGetImageRequiredSigningLevel.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14084D69C (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, __int64 *a2)
{
  ULONG_PTR **v3; // rdi
  struct _FILE_OBJECT *v4; // r13
  int v5; // r15d
  __int64 v6; // r14
  ULONG_PTR *v7; // rdi
  int v8; // esi
  unsigned int v10; // eax
  __int64 *v11; // rsi
  int v12; // r12d
  NTSTATUS DataFileMap; // eax
  int ImageRequiredSigningLevel; // edi
  __int64 v15; // r13
  signed __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r15
  __int64 v19; // r9
  unsigned int v20; // r8d
  int v21; // r14d
  _QWORD *v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // r8d
  int v26; // ecx
  int v27; // r12d
  unsigned int v28; // ecx
  int v29; // r13d
  struct _MDL *v30; // r12
  int v31; // eax
  int v32; // edx
  char v33; // r9
  struct _MDL *v34; // rax
  char v35; // al
  int v36; // edx
  char v37; // r12
  int v38; // esi
  int DirectImageOriginalBase; // eax
  __int64 v40; // rax
  struct _MDL *v41; // r12
  PMDL i; // rbx
  struct _MDL *v43; // r14
  ULONG j; // esi
  char v45; // [rsp+60h] [rbp-A0h]
  char v46; // [rsp+61h] [rbp-9Fh]
  char v47; // [rsp+62h] [rbp-9Eh] BYREF
  char v48; // [rsp+63h] [rbp-9Dh] BYREF
  int v49; // [rsp+64h] [rbp-9Ch]
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+70h] [rbp-90h]
  unsigned int FileObject[3]; // [rsp+74h] [rbp-8Ch] BYREF
  PMDL v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58[14]; // [rsp+B0h] [rbp-50h] BYREF

  v56 = a2;
  memset(v58, 0, sizeof(v58));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 152);
  v45 = *(_BYTE *)(a1 + 24);
  *(_QWORD *)&FileObject[1] = v4;
  v51 = 0;
  v47 = 0;
  LOBYTE(v49) = 0;
  FileObject[0] = 0;
  if ( v3 )
    v7 = *v3;
  else
    v7 = &MiSystemPartition;
  v8 = MiEnablePartitionMappedWrites(v7);
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 172);
    v11 = 0LL;
    MemoryDescriptorList = 0LL;
    v53 = 0LL;
    v12 = v5 & 0x1000000;
    if ( (v5 & 0x1000000) != 0 )
    {
      DataFileMap = MiCreateImageFileMap(v4, (__int64)v7, v10, *(_DWORD *)a1, &v55, &v53, (__int64)v58, FileObject);
      v11 = (__int64 *)v53;
      MemoryDescriptorList = v53;
    }
    else
    {
      DataFileMap = MiCreateDataFileMap(v4, *(_DWORD *)(a1 + 28), v5, v10, *(_DWORD *)a1);
    }
    ImageRequiredSigningLevel = DataFileMap;
    if ( DataFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) != 0 )
      {
        IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
        FsRtlReleaseFile(v4);
        *(_DWORD *)a1 &= ~2u;
      }
      return (unsigned int)ImageRequiredSigningLevel;
    }
    v15 = v55;
    *v56 = v55;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 128) = v6;
    }
    else
    {
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), -1LL, -1LL);
      v11 = (__int64 *)v53;
      v15 = v55;
      MemoryDescriptorList = v53;
      *(_QWORD *)(a1 + 128) = v16;
    }
    v17 = *(_DWORD *)a1;
    v18 = *(_QWORD *)v15;
    if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v18 + 62) |= 1u;
      v17 = *(_DWORD *)a1;
    }
    v19 = *(_QWORD *)&FileObject[1];
    LOWORD(v20) = v17;
    if ( (v17 & 0x2000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&FileObject[1] + 8LL) + 52LL) & 0x10) == 0
      && (!v12 || (v58[1] & 0xFFF) == 0) )
    {
      *(_DWORD *)(v18 + 56) |= 0x20000000u;
      v20 = *(_DWORD *)a1;
    }
    if ( (v20 & 0x4000) != 0 )
      *(_DWORD *)(v18 + 56) |= 0x20000u;
    v21 = 2;
    v22 = (_QWORD *)MiSectionCreated(v19, v18, v11);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(*(PFILE_OBJECT *)&FileObject[1]);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v12 )
      goto LABEL_117;
    v23 = *(_QWORD *)(v15 + 56);
    v57 = v23;
    if ( !LODWORD(v58[11]) && !HIDWORD(v58[11]) && !*(_BYTE *)(v23 + 50) )
      *(_BYTE *)(v15 + 15) |= 1u;
    if ( (*(_DWORD *)(v18 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x80000) != 0 )
      {
        dword_140464518 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_120:
        v30 = MemoryDescriptorList;
        goto LABEL_121;
      }
      ImageRequiredSigningLevel = MiSetPagesModified((__int64 *)v18, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140464518 = 6;
        goto LABEL_120;
      }
    }
    ImageRequiredSigningLevel = MiParseComImage(v18, v58, &v47);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140464518 = 4;
      goto LABEL_120;
    }
    v24 = *(_DWORD *)a1;
    v25 = 4;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v26 = 4;
    }
    else if ( (v24 & 0x20) != 0 )
    {
      v26 = 1;
    }
    else if ( (v24 & 0x10) != 0 )
    {
      v26 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v26 = 0;
    }
    v27 = v26 | 0x10;
    if ( (v24 & 0x800) == 0 )
      v27 = v26;
    v28 = *(_DWORD *)a1;
    if ( (v24 & 0x8400) == 0 || (v24 & 0x10) != 0 )
    {
      v33 = v45;
    }
    else
    {
      LOBYTE(v25) = v45;
      v29 = *(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7];
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject[1], v27, v25, 0, (__int64)&v48);
      if ( ImageRequiredSigningLevel < 0 )
      {
        v30 = v53;
        dword_140464518 = 7;
LABEL_121:
        MiDeleteImageCreationMdls(v30);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v45 )
        {
          v31 = v51;
          if ( (v29 & 0x800000) != 0 )
            v31 = 1;
          v51 = v31;
        }
        if ( (v29 & 0x1000000) != 0 )
        {
          LOBYTE(v49) = 8;
        }
        else
        {
          v32 = (unsigned __int8)v49;
          if ( (v29 & 0x2000000) != 0 )
            v32 = 6;
          v49 = v32;
        }
      }
      v33 = v48;
      v34 = v53;
      v15 = v55;
      *(_BYTE *)(a1 + 24) = v48;
      v28 = *(_DWORD *)a1;
      v45 = v33;
      MemoryDescriptorList = v34;
    }
    if ( (v28 & 0x80000) != 0 )
    {
      v35 = v33;
      v27 |= 0x40000000u;
      if ( !v33 )
        v35 = 4;
      v33 = v35;
      v45 = v35;
    }
    v36 = v27 | 0x20000000;
    if ( (v28 & 0x400000) == 0 )
      v36 = v27;
    LODWORD(v56) = v36;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v28 |= 0x8000u;
      *(_DWORD *)a1 = v28;
      if ( !v33 )
      {
        v33 = 1;
        v45 = 1;
      }
    }
    if ( (v28 & 0x400) != 0 && v33 || (v28 & 0x8000) != 0 || (v46 = 0, *(char *)(v57 + 46) < 0) )
      v46 = 1;
    v37 = (v28 & 0x400) != 0 && (_BYTE)v49;
    if ( (v28 & 0x40) == 0 )
      v21 = (v28 & 0x20) != 0;
    v38 = 0;
    if ( (*(_DWORD *)(v18 + 56) & 0x40000000) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(*(PFILE_OBJECT *)&FileObject[1]);
      ImageRequiredSigningLevel = DirectImageOriginalBase;
      if ( DirectImageOriginalBase >= 0 )
      {
        v40 = v54;
      }
      else
      {
        if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
        {
          ImageRequiredSigningLevel = 0;
          v40 = -1LL;
          v54 = -1LL;
        }
        else
        {
          v40 = v54;
        }
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140464518 = 8;
          goto LABEL_120;
        }
      }
    }
    else
    {
      v40 = -1LL;
      v54 = -1LL;
    }
    if ( v46 == 1 || v37 == 1 )
    {
      if ( v40 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v15, (__int64)v58, FileObject[0], v21, v40, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140464518 = 9;
          goto LABEL_120;
        }
        v38 = 1;
        if ( v47 == 1 )
          MiMakeImageReadOnly(v18);
      }
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    *(ULONG_PTR *)&FileObject[1],
                                    (_DWORD *)v18,
                                    *(_DWORD *)(a1 + 168),
                                    *(_QWORD *)(a1 + 160),
                                    (int)v56,
                                    v46,
                                    v37,
                                    v51,
                                    v45,
                                    v49);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140464518 = 10;
        goto LABEL_120;
      }
      if ( v38 )
        goto LABEL_109;
      v40 = v54;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v15, (__int64)v58, FileObject[0], v21, v40, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140464518 = 11;
      goto LABEL_120;
    }
    if ( v47 == 1 )
      MiMakeImageReadOnly(v18);
LABEL_109:
    v41 = MemoryDescriptorList;
    for ( i = MemoryDescriptorList; i; i = i->Next )
    {
      if ( (i->MdlFlags & 4) == 0 )
      {
        v43 = i + 1;
        for ( j = i->ByteCount >> 12; j; --j )
        {
          if ( v43->Next != (struct _MDL *)-1LL )
            MiFinalizeImageHeaderPage(48 * (__int64)v43->Next - 0x58000000000LL);
          v43 = (struct _MDL *)((char *)v43 + 8);
        }
      }
    }
    MiDeleteImageCreationMdls(v41);
    v22 = (_QWORD *)MiReleaseImageSection(*(__int64 *)&FileObject[1], v18);
LABEL_117:
    MiReleaseControlAreaWaiters(v22);
    return (unsigned int)ImageRequiredSigningLevel;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v4);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)v8;
}
