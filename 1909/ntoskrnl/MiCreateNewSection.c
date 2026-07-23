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
  int v25; // ecx
  int v26; // r12d
  unsigned int v27; // ecx
  int v28; // r13d
  struct _MDL *v29; // r12
  int v30; // eax
  int v31; // edx
  char v32; // r9
  PMDL v33; // rax
  char v34; // al
  int v35; // edx
  char v36; // r12
  int v37; // esi
  int DirectImageOriginalBase; // eax
  __int64 v39; // rax
  struct _MDL *v40; // r12
  __int64 *v41; // rbx
  _QWORD *v42; // r14
  int i; // esi
  char v44; // [rsp+60h] [rbp-A0h]
  char v45; // [rsp+61h] [rbp-9Fh]
  char v46; // [rsp+62h] [rbp-9Eh] BYREF
  _BYTE MemoryDescriptorList[13]; // [rsp+63h] [rbp-9Dh] BYREF
  int v48; // [rsp+70h] [rbp-90h]
  unsigned int Object[3]; // [rsp+74h] [rbp-8Ch] BYREF
  PMDL v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55[14]; // [rsp+B0h] [rbp-50h] BYREF

  v53 = a2;
  memset(v55, 0, sizeof(v55));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  v4 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 152);
  v44 = *(_BYTE *)(a1 + 24);
  *(_QWORD *)&Object[1] = v4;
  v48 = 0;
  v46 = 0;
  MemoryDescriptorList[1] = 0;
  Object[0] = 0;
  if ( v3 )
    v7 = *v3;
  else
    v7 = &MiSystemPartition;
  v8 = MiEnablePartitionMappedWrites(v7);
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 172);
    v11 = 0LL;
    *(_QWORD *)&MemoryDescriptorList[5] = 0LL;
    v50 = 0LL;
    v12 = v5 & 0x1000000;
    if ( (v5 & 0x1000000) != 0 )
    {
      DataFileMap = MiCreateImageFileMap(v4, (__int64)v7, v10, *(_DWORD *)a1, &v52, &v50, (__int64)v55, Object);
      v11 = (__int64 *)v50;
      *(_QWORD *)&MemoryDescriptorList[5] = v50;
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
    v15 = v52;
    *v53 = v52;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 128) = v6;
    }
    else
    {
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 24), -1LL, -1LL);
      v11 = (__int64 *)v50;
      v15 = v52;
      *(_QWORD *)&MemoryDescriptorList[5] = v50;
      *(_QWORD *)(a1 + 128) = v16;
    }
    v17 = *(_DWORD *)a1;
    v18 = *(_QWORD *)v15;
    if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    {
      *(_BYTE *)(v18 + 62) |= 1u;
      v17 = *(_DWORD *)a1;
    }
    v19 = *(_QWORD *)&Object[1];
    LOWORD(v20) = v17;
    if ( (v17 & 0x2000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&Object[1] + 8LL) + 52LL) & 0x10) == 0
      && (!v12 || (v55[1] & 0xFFF) == 0) )
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
      FsRtlReleaseFile(*(PFILE_OBJECT *)&Object[1]);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v12 )
      goto LABEL_117;
    v23 = *(_QWORD *)(v15 + 56);
    v54 = v23;
    if ( !LODWORD(v55[11]) && !HIDWORD(v55[11]) && !*(_BYTE *)(v23 + 50) )
      *(_BYTE *)(v15 + 15) |= 1u;
    if ( (*(_DWORD *)(v18 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x80000) != 0 )
      {
        dword_140464518 = 5;
        ImageRequiredSigningLevel = -1073740749;
LABEL_120:
        v29 = *(struct _MDL **)&MemoryDescriptorList[5];
        goto LABEL_121;
      }
      ImageRequiredSigningLevel = MiSetPagesModified((__int64 *)v18, *(_DWORD *)(a1 + 168));
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140464518 = 6;
        goto LABEL_120;
      }
    }
    ImageRequiredSigningLevel = MiParseComImage(v18, v55, &v46);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140464518 = 4;
      goto LABEL_120;
    }
    v24 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v25 = 4;
    }
    else if ( (v24 & 0x20) != 0 )
    {
      v25 = 1;
    }
    else if ( (v24 & 0x10) != 0 )
    {
      v25 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v25 = 0;
    }
    v26 = v25 | 0x10;
    if ( (v24 & 0x800) == 0 )
      v26 = v25;
    v27 = *(_DWORD *)a1;
    if ( (v24 & 0x8400) == 0 || (v24 & 0x10) != 0 )
    {
      v32 = v44;
    }
    else
    {
      v28 = *(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7];
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(*(PVOID *)&Object[1], (__int64)MemoryDescriptorList);
      if ( ImageRequiredSigningLevel < 0 )
      {
        v29 = v50;
        dword_140464518 = 7;
LABEL_121:
        MiDeleteImageCreationMdls(v29);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v44 )
        {
          v30 = v48;
          if ( (v28 & 0x800000) != 0 )
            v30 = 1;
          v48 = v30;
        }
        if ( (v28 & 0x1000000) != 0 )
        {
          MemoryDescriptorList[1] = 8;
        }
        else
        {
          v31 = MemoryDescriptorList[1];
          if ( (v28 & 0x2000000) != 0 )
            v31 = 6;
          *(_DWORD *)&MemoryDescriptorList[1] = v31;
        }
      }
      v32 = MemoryDescriptorList[0];
      v33 = v50;
      v15 = v52;
      *(_BYTE *)(a1 + 24) = MemoryDescriptorList[0];
      v27 = *(_DWORD *)a1;
      v44 = v32;
      *(_QWORD *)&MemoryDescriptorList[5] = v33;
    }
    if ( (v27 & 0x80000) != 0 )
    {
      v34 = v32;
      v26 |= 0x40000000u;
      if ( !v32 )
        v34 = 4;
      v32 = v34;
      v44 = v34;
    }
    v35 = v26 | 0x20000000;
    if ( (v27 & 0x400000) == 0 )
      v35 = v26;
    LODWORD(v53) = v35;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v27 |= 0x8000u;
      *(_DWORD *)a1 = v27;
      if ( !v32 )
      {
        v32 = 1;
        v44 = 1;
      }
    }
    if ( (v27 & 0x400) != 0 && v32 || (v27 & 0x8000) != 0 || (v45 = 0, *(char *)(v54 + 46) < 0) )
      v45 = 1;
    v36 = (v27 & 0x400) != 0 && MemoryDescriptorList[1];
    if ( (v27 & 0x40) == 0 )
      v21 = (v27 & 0x20) != 0;
    v37 = 0;
    if ( (*(_DWORD *)(v18 + 56) & 0x40000000) != 0 )
    {
      DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(*(PFILE_OBJECT *)&Object[1]);
      ImageRequiredSigningLevel = DirectImageOriginalBase;
      if ( DirectImageOriginalBase >= 0 )
      {
        v39 = v51;
      }
      else
      {
        if ( DirectImageOriginalBase == -1073741637 || DirectImageOriginalBase == -1073741808 )
        {
          ImageRequiredSigningLevel = 0;
          v39 = -1LL;
          v51 = -1LL;
        }
        else
        {
          v39 = v51;
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
      v39 = -1LL;
      v51 = -1LL;
    }
    if ( v45 == 1 || v36 == 1 )
    {
      if ( v39 != -1 )
      {
        ImageRequiredSigningLevel = MiRelocateImage(v15, (__int64)v55, Object[0], v21, v39, 0);
        if ( ImageRequiredSigningLevel < 0 )
        {
          dword_140464518 = 9;
          goto LABEL_120;
        }
        v37 = 1;
        if ( v46 == 1 )
          MiMakeImageReadOnly(v18);
      }
      ImageRequiredSigningLevel = MiValidateSectionSigningPolicy(
                                    0,
                                    *(ULONG_PTR *)&Object[1],
                                    (_DWORD *)v18,
                                    *(_DWORD *)(a1 + 168),
                                    *(_QWORD *)(a1 + 160),
                                    (int)v53,
                                    v45,
                                    v36,
                                    v48,
                                    v44,
                                    MemoryDescriptorList[1]);
      if ( ImageRequiredSigningLevel < 0 )
      {
        dword_140464518 = 10;
        goto LABEL_120;
      }
      if ( v37 )
        goto LABEL_109;
      v39 = v51;
    }
    ImageRequiredSigningLevel = MiRelocateImage(v15, (__int64)v55, Object[0], v21, v39, 0);
    if ( ImageRequiredSigningLevel < 0 )
    {
      dword_140464518 = 11;
      goto LABEL_120;
    }
    if ( v46 == 1 )
      MiMakeImageReadOnly(v18);
LABEL_109:
    v40 = *(struct _MDL **)&MemoryDescriptorList[5];
    v41 = *(__int64 **)&MemoryDescriptorList[5];
    if ( *(_QWORD *)&MemoryDescriptorList[5] )
    {
      do
      {
        if ( (*((_BYTE *)v41 + 10) & 4) == 0 )
        {
          v42 = v41 + 6;
          for ( i = *((_DWORD *)v41 + 10) >> 12; i; --i )
          {
            if ( *v42 != -1LL )
              MiFinalizeImageHeaderPage(48LL * *v42 - 0x58000000000LL);
            ++v42;
          }
        }
        v41 = (__int64 *)*v41;
      }
      while ( v41 );
    }
    MiDeleteImageCreationMdls(v40);
    v22 = (_QWORD *)MiReleaseImageSection(*(__int64 *)&Object[1], v18);
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
