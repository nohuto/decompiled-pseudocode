/*
 * XREFs of MiCreateNewSection @ 0x14061C7E0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DF390 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x14001C5F0 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiSectionCreated @ 0x140092660 (MiSectionCreated.c)
 *     MiMakeImageReadOnly @ 0x1401293E8 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DE80 (MiFinalizeImageHeaderPage.c)
 *     MiReleaseImageSection @ 0x140130064 (MiReleaseImageSection.c)
 *     MiReturnPfnReferenceCount @ 0x14013B8B0 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 *     MiEnablePartitionMappedWrites @ 0x14061CE6C (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x14061CFCC (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 *     MiValidateSectionSigningPolicy @ 0x140650600 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406BFCE0 (SeGetImageRequiredSigningLevel.c)
 *     MiParseComImage @ 0x1406C195C (MiParseComImage.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140815730 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(__int64 a1, __int64 *a2)
{
  ULONG_PTR **v2; // r14
  struct _FILE_OBJECT *v3; // rsi
  char v5; // al
  int v6; // r12d
  __int64 v7; // r15
  ULONG_PTR *v8; // r14
  int DataFileMap; // edi
  struct _FILE_OBJECT *v10; // rcx
  int v11; // r13d
  int i; // eax
  __int64 v13; // rsi
  PFILE_OBJECT v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  signed __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r14
  int v20; // r8d
  int v21; // r15d
  _QWORD *v22; // r12
  __int64 v23; // r13
  __int64 *v24; // r12
  int v25; // edx
  int v26; // ecx
  int v27; // edi
  int v28; // ecx
  unsigned int UserTime; // r12d
  int ImageRequiredSigningLevel; // esi
  int v32; // eax
  int v33; // eax
  char v34; // r8
  char v35; // al
  int v36; // edx
  int v37; // edx
  int v38; // r12d
  __int64 v39; // rax
  int v40; // r9d
  __int64 v41; // rax
  PFILE_OBJECT v42; // rbx
  int v43; // [rsp+28h] [rbp-D8h]
  int v44; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+38h] [rbp-C8h]
  char v46; // [rsp+60h] [rbp-A0h]
  char v47; // [rsp+61h] [rbp-9Fh]
  char v48; // [rsp+62h] [rbp-9Eh]
  char v49; // [rsp+63h] [rbp-9Dh] BYREF
  char v50; // [rsp+64h] [rbp-9Ch] BYREF
  int v51; // [rsp+68h] [rbp-98h]
  _DWORD v52[3]; // [rsp+6Ch] [rbp-94h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h]
  __int64 v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 v56; // [rsp+90h] [rbp-70h]
  __int64 *v57; // [rsp+98h] [rbp-68h]
  __int64 v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+B8h] [rbp-48h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]

  v2 = *(ULONG_PTR ***)(a1 + 176);
  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(_BYTE *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 152);
  v57 = a2;
  FileObject = v3;
  v54 = 0;
  v49 = 0;
  v46 = v5;
  LOBYTE(v51) = 0;
  v52[0] = 0;
  if ( v2 )
    v8 = *v2;
  else
    v8 = &MiSystemPartition;
  DataFileMap = MiEnablePartitionMappedWrites(v8);
  if ( DataFileMap >= 0 )
  {
    v11 = v6 & 0x1000000;
    if ( (v6 & 0x1000000) != 0 )
    {
      for ( i = MiCreateImageFileMap(v3, (__int64)&v55, (__int64)&v52[1], (__int64)&v59, (__int64)v52);
            ;
            i = MiCreateImageFileMap(v3, (__int64)&v55, (__int64)&v52[1], (__int64)&v59, (__int64)v52) )
      {
        DataFileMap = i;
        if ( i != -1073532108 )
          break;
        *(_DWORD *)a1 &= ~0x10000u;
      }
      v13 = *(_QWORD *)&v52[1];
      v14 = FileObject;
    }
    else
    {
      v45 = *(_DWORD *)a1;
      v13 = 0LL;
      v44 = *(_DWORD *)(a1 + 172);
      v15 = *(_DWORD *)(a1 + 28);
      v43 = v6;
      v14 = FileObject;
      *(_QWORD *)&v52[1] = 0LL;
      v60 = 0;
      DataFileMap = MiCreateDataFileMap(FileObject, v15, v43, v44, v45);
    }
    if ( DataFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) == 0 )
        return (unsigned int)DataFileMap;
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      v10 = v14;
      goto LABEL_7;
    }
    v16 = v55;
    v58 = v55;
    *v57 = v55;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 128) = v7;
    }
    else
    {
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 24), -1LL, -1LL);
      v16 = v55;
      v13 = *(_QWORD *)&v52[1];
      v58 = v55;
      *(_QWORD *)(a1 + 128) = v17;
    }
    v18 = *(_DWORD *)a1;
    v19 = *(_QWORD *)v16;
    if ( (*(_DWORD *)a1 & 0x200000) != 0 )
    {
      *(_BYTE *)(v19 + 62) |= 1u;
      v18 = *(_DWORD *)a1;
    }
    v20 = v18;
    if ( (v18 & 0x2000) != 0 && (v14->DeviceObject->Characteristics & 0x10) == 0 && (!v11 || (v60 & 0xFFF) == 0) )
    {
      *(_DWORD *)(v19 + 56) |= 0x20000000u;
      v20 = *(_DWORD *)a1;
    }
    if ( (v20 & 0x4000) != 0 )
    {
      *(_DWORD *)(v19 + 56) |= 0x20000u;
      v20 = *(_DWORD *)a1;
    }
    if ( !v11 && (v20 & 0x10000) != 0 )
      *(_DWORD *)(v19 + 56) |= 0x40000000u;
    v21 = 2;
    v22 = (_QWORD *)MiSectionCreated((__int64)v14, v19, v13);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(FileObject);
      *(_DWORD *)a1 &= ~2u;
    }
    if ( !v11 )
    {
LABEL_111:
      MiReleaseControlAreaWaiters(v22);
      return (unsigned int)DataFileMap;
    }
    v23 = v58;
    v24 = *(__int64 **)(v58 + 56);
    v57 = v24;
    DataFileMap = MiParseComImage(v19, &v59, &v49);
    if ( DataFileMap < 0 )
    {
LABEL_36:
      MiReturnPfnReferenceCount(v13);
      return (unsigned int)DataFileMap;
    }
    if ( !v61 && !v62 && !*((_BYTE *)v24 + 50) )
      *(_BYTE *)(v23 + 15) |= 1u;
    if ( (*(_DWORD *)(v19 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x20000) != 0 )
      {
        dword_140439EB0 = 80;
        DataFileMap = -1073740749;
        goto LABEL_36;
      }
      DataFileMap = MiSetPagesModified((__int64 *)v19, *(_DWORD *)(a1 + 168));
      if ( DataFileMap < 0 )
        goto LABEL_36;
    }
    v25 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v26 = 4;
    }
    else if ( (v25 & 0x20) != 0 )
    {
      v26 = 1;
    }
    else if ( (v25 & 0x10) != 0 )
    {
      v26 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v26 = 0;
    }
    v27 = v26 | 0x10;
    if ( (v25 & 0x800) == 0 )
      v27 = v26;
    v28 = *(_DWORD *)a1;
    if ( (v25 & 0x8400) == 0 || (v25 & 0x10) != 0 )
    {
      v34 = v46;
    }
    else
    {
      UserTime = KeGetCurrentThread()->ApcState.Process[2].UserTime;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)&v50);
      if ( ImageRequiredSigningLevel < 0 )
      {
        MiReturnPfnReferenceCount(*(__int64 *)&v52[1]);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v46 )
        {
          v32 = v54;
          if ( (UserTime & 0x800000) != 0 )
            v32 = 1;
          v54 = v32;
        }
        if ( (UserTime & 0x1000000) != 0 )
        {
          LOBYTE(v51) = 8;
        }
        else
        {
          v33 = (unsigned __int8)v51;
          if ( (UserTime & 0x2000000) != 0 )
            v33 = 6;
          v51 = v33;
        }
      }
      v34 = v50;
      v13 = *(_QWORD *)&v52[1];
      LODWORD(v23) = v55;
      v24 = v57;
      *(_BYTE *)(a1 + 24) = v50;
      v28 = *(_DWORD *)a1;
      v46 = v34;
    }
    if ( (v28 & 0x20000) != 0 )
    {
      v35 = v34;
      v27 |= 0x40000000u;
      if ( !v34 )
        v35 = 4;
      v34 = v35;
      v46 = v35;
    }
    v36 = v27 | 0x20000000;
    if ( (v28 & 0x100000) == 0 )
      v36 = v27;
    v52[1] = v36;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v28 |= 0x8000u;
      *(_DWORD *)a1 = v28;
      if ( !v34 )
      {
        v34 = 1;
        v46 = 1;
      }
    }
    if ( (v28 & 0x8000) != 0 || (v37 = v28 & 0x400, (v28 & 0x400) != 0) && (v34 || *((char *)v24 + 46) < 0) )
    {
      v48 = 1;
      v37 = v28 & 0x400;
    }
    else
    {
      v48 = 0;
    }
    if ( !v37 || (v47 = 1, !(_BYTE)v51) )
      v47 = 0;
    if ( (v28 & 0x40) == 0 )
      v21 = (v28 & 0x20) != 0;
    v38 = 0;
    if ( (*(_DWORD *)(v19 + 56) & 0x40000000) != 0 )
    {
      DataFileMap = FsRtlGetDirectImageOriginalBase(FileObject);
      if ( DataFileMap < 0 )
        goto LABEL_36;
      v39 = v56;
    }
    else
    {
      v39 = -1LL;
      v56 = -1LL;
    }
    if ( v48 == 1 || v47 == 1 )
    {
      if ( v39 != -1 )
      {
        DataFileMap = MiRelocateImage(v23, (unsigned int)&v59, v52[0], v21, v39, 0);
        if ( DataFileMap < 0 )
          goto LABEL_36;
        v38 = 1;
        if ( v49 == 1 )
          MiMakeImageReadOnly(v19);
      }
      v40 = *(_DWORD *)(a1 + 168);
      v41 = *(_QWORD *)(a1 + 160);
      v42 = FileObject;
      DataFileMap = MiValidateSectionSigningPolicy(
                      0,
                      (_DWORD)FileObject,
                      v19,
                      v40,
                      v41,
                      v52[1],
                      v48,
                      v47,
                      v54,
                      v46,
                      v51);
      if ( DataFileMap < 0 )
        goto LABEL_36;
      if ( v38 )
        goto LABEL_107;
      v39 = v56;
    }
    else
    {
      v42 = FileObject;
    }
    DataFileMap = MiRelocateImage(v23, (unsigned int)&v59, v52[0], v21, v39, 0);
    if ( DataFileMap < 0 )
      goto LABEL_36;
    if ( v49 == 1 )
      MiMakeImageReadOnly(v19);
LABEL_107:
    if ( (*(_DWORD *)(v19 + 56) & 0x40000000) != 0 )
      MiReturnPfnReferenceCount(v13);
    else
      MiFinalizeImageHeaderPage(v13);
    v22 = (_QWORD *)MiReleaseImageSection((__int64)v42, v19);
    goto LABEL_111;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    v10 = v3;
LABEL_7:
    FsRtlReleaseFile(v10);
    *(_DWORD *)a1 &= ~2u;
  }
  return (unsigned int)DataFileMap;
}
