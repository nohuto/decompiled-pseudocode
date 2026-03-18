/*
 * XREFs of MiCreateNewSection @ 0x14061B7E0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405DE390 (MiCreateImageOrDataSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x14001C5F0 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiSectionCreated @ 0x140092720 (MiSectionCreated.c)
 *     MiMakeImageReadOnly @ 0x1401292F8 (MiMakeImageReadOnly.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DD90 (MiFinalizeImageHeaderPage.c)
 *     MiReleaseImageSection @ 0x14012FF74 (MiReleaseImageSection.c)
 *     MiReturnPfnReferenceCount @ 0x14013B790 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x1402AA6EC (MiSetPagesModified.c)
 *     FsRtlReleaseFile @ 0x1405DE940 (FsRtlReleaseFile.c)
 *     MiEnablePartitionMappedWrites @ 0x14061BE6C (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x14061BFCC (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiValidateSectionSigningPolicy @ 0x14064F460 (MiValidateSectionSigningPolicy.c)
 *     MiRelocateImage @ 0x14064FEE4 (MiRelocateImage.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406BEA60 (SeGetImageRequiredSigningLevel.c)
 *     MiParseComImage @ 0x1406C06DC (MiParseComImage.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140814550 (FsRtlGetDirectImageOriginalBase.c)
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
  int v26; // r8d
  int v27; // ecx
  int v28; // edi
  int v29; // ecx
  unsigned int UserTime; // r12d
  int ImageRequiredSigningLevel; // esi
  int v33; // eax
  int v34; // eax
  char v35; // r8
  char v36; // al
  int v37; // edx
  int v38; // edx
  int v39; // r12d
  __int64 v40; // rax
  int v41; // r9d
  __int64 v42; // rax
  PFILE_OBJECT v43; // rbx
  int v44; // [rsp+28h] [rbp-D8h]
  int v45; // [rsp+30h] [rbp-D0h]
  int v46; // [rsp+38h] [rbp-C8h]
  char v47; // [rsp+60h] [rbp-A0h]
  char v48; // [rsp+61h] [rbp-9Fh]
  char v49; // [rsp+62h] [rbp-9Eh]
  char v50; // [rsp+63h] [rbp-9Dh] BYREF
  char v51[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h]
  _DWORD v53[3]; // [rsp+6Ch] [rbp-94h] BYREF
  PFILE_OBJECT FileObject; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 *v58; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+B0h] [rbp-50h] BYREF
  int v61; // [rsp+B8h] [rbp-48h]
  int v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+10Ch] [rbp+Ch]

  v2 = *(ULONG_PTR ***)(a1 + 176);
  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v5 = *(_BYTE *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 152);
  v58 = a2;
  FileObject = v3;
  v55 = 0;
  v50 = 0;
  v47 = v5;
  LOBYTE(v52) = 0;
  v53[0] = 0;
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
      for ( i = MiCreateImageFileMap(v3, (__int64)&v56, (__int64)&v53[1], (__int64)&v60, (__int64)v53);
            ;
            i = MiCreateImageFileMap(v3, (__int64)&v56, (__int64)&v53[1], (__int64)&v60, (__int64)v53) )
      {
        DataFileMap = i;
        if ( i != -1073532108 )
          break;
        *(_DWORD *)a1 &= ~0x10000u;
      }
      v13 = *(_QWORD *)&v53[1];
      v14 = FileObject;
    }
    else
    {
      v46 = *(_DWORD *)a1;
      v13 = 0LL;
      v45 = *(_DWORD *)(a1 + 172);
      v15 = *(_DWORD *)(a1 + 28);
      v44 = v6;
      v14 = FileObject;
      *(_QWORD *)&v53[1] = 0LL;
      v61 = 0;
      DataFileMap = MiCreateDataFileMap(FileObject, v15, v44, v45, v46);
    }
    if ( DataFileMap < 0 )
    {
      if ( (*(_DWORD *)a1 & 2) == 0 )
        return (unsigned int)DataFileMap;
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      v10 = v14;
      goto LABEL_7;
    }
    v16 = v56;
    v59 = v56;
    *v58 = v56;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 128) = v7;
    }
    else
    {
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 24), -1LL, -1LL);
      v16 = v56;
      v13 = *(_QWORD *)&v53[1];
      v59 = v56;
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
    if ( (v18 & 0x2000) != 0 && (v14->DeviceObject->Characteristics & 0x10) == 0 && (!v11 || (v61 & 0xFFF) == 0) )
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
    v23 = v59;
    v24 = *(__int64 **)(v59 + 56);
    v58 = v24;
    DataFileMap = MiParseComImage(v19, &v60, &v50);
    if ( DataFileMap < 0 )
    {
LABEL_36:
      MiReturnPfnReferenceCount(v13);
      return (unsigned int)DataFileMap;
    }
    if ( !v62 && !v63 && !*((_BYTE *)v24 + 50) )
      *(_BYTE *)(v23 + 15) |= 1u;
    if ( (*(_DWORD *)(v19 + 56) & 0x800) != 0 )
    {
      if ( (*(_DWORD *)a1 & 0x20000) != 0 )
      {
        dword_140438DF0 = 80;
        DataFileMap = -1073740749;
        goto LABEL_36;
      }
      DataFileMap = MiSetPagesModified((__int64 *)v19, *(_DWORD *)(a1 + 168));
      if ( DataFileMap < 0 )
        goto LABEL_36;
    }
    v25 = *(_DWORD *)a1;
    v26 = 6;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v27 = 4;
    }
    else if ( (v25 & 0x20) != 0 )
    {
      v27 = 1;
    }
    else if ( (v25 & 0x10) != 0 )
    {
      v27 = (*(_DWORD *)a1 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v27 = 0;
    }
    v28 = v27 | 0x10;
    if ( (v25 & 0x800) == 0 )
      v28 = v27;
    v29 = *(_DWORD *)a1;
    if ( (v25 & 0x8400) == 0 || (v25 & 0x10) != 0 )
    {
      v35 = v47;
    }
    else
    {
      LOBYTE(v26) = v47;
      UserTime = KeGetCurrentThread()->ApcState.Process[2].UserTime;
      ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel((_DWORD)FileObject, v28, v26, 0, (__int64)v51);
      if ( ImageRequiredSigningLevel < 0 )
      {
        MiReturnPfnReferenceCount(*(__int64 *)&v53[1]);
        return (unsigned int)ImageRequiredSigningLevel;
      }
      if ( (*(_DWORD *)a1 & 0x800) == 0 )
      {
        if ( v47 )
        {
          v33 = v55;
          if ( (UserTime & 0x800000) != 0 )
            v33 = 1;
          v55 = v33;
        }
        if ( (UserTime & 0x1000000) != 0 )
        {
          LOBYTE(v52) = 8;
        }
        else
        {
          v34 = (unsigned __int8)v52;
          if ( (UserTime & 0x2000000) != 0 )
            v34 = 6;
          v52 = v34;
        }
      }
      v35 = v51[0];
      v13 = *(_QWORD *)&v53[1];
      LODWORD(v23) = v56;
      v24 = v58;
      *(_BYTE *)(a1 + 24) = v51[0];
      v29 = *(_DWORD *)a1;
      v47 = v35;
    }
    if ( (v29 & 0x20000) != 0 )
    {
      v36 = v35;
      v28 |= 0x40000000u;
      if ( !v35 )
        v36 = 4;
      v35 = v36;
      v47 = v36;
    }
    v37 = v28 | 0x20000000;
    if ( (v29 & 0x100000) == 0 )
      v37 = v28;
    v53[1] = v37;
    if ( (MiFlags & 0x40000) != 0 )
    {
      v29 |= 0x8000u;
      *(_DWORD *)a1 = v29;
      if ( !v35 )
      {
        v35 = 1;
        v47 = 1;
      }
    }
    if ( (v29 & 0x8000) != 0 || (v38 = v29 & 0x400, (v29 & 0x400) != 0) && (v35 || *((char *)v24 + 46) < 0) )
    {
      v49 = 1;
      v38 = v29 & 0x400;
    }
    else
    {
      v49 = 0;
    }
    if ( !v38 || (v48 = 1, !(_BYTE)v52) )
      v48 = 0;
    if ( (v29 & 0x40) == 0 )
      v21 = (v29 & 0x20) != 0;
    v39 = 0;
    if ( (*(_DWORD *)(v19 + 56) & 0x40000000) != 0 )
    {
      DataFileMap = FsRtlGetDirectImageOriginalBase(FileObject);
      if ( DataFileMap < 0 )
        goto LABEL_36;
      v40 = v57;
    }
    else
    {
      v40 = -1LL;
      v57 = -1LL;
    }
    if ( v49 == 1 || v48 == 1 )
    {
      if ( v40 != -1 )
      {
        DataFileMap = MiRelocateImage(v23, (unsigned int)&v60, v53[0], v21, v40, 0);
        if ( DataFileMap < 0 )
          goto LABEL_36;
        v39 = 1;
        if ( v50 == 1 )
          MiMakeImageReadOnly(v19);
      }
      v41 = *(_DWORD *)(a1 + 168);
      v42 = *(_QWORD *)(a1 + 160);
      v43 = FileObject;
      DataFileMap = MiValidateSectionSigningPolicy(
                      0,
                      (_DWORD)FileObject,
                      v19,
                      v41,
                      v42,
                      v53[1],
                      v49,
                      v48,
                      v55,
                      v47,
                      v52);
      if ( DataFileMap < 0 )
        goto LABEL_36;
      if ( v39 )
        goto LABEL_107;
      v40 = v57;
    }
    else
    {
      v43 = FileObject;
    }
    DataFileMap = MiRelocateImage(v23, (unsigned int)&v60, v53[0], v21, v40, 0);
    if ( DataFileMap < 0 )
      goto LABEL_36;
    if ( v50 == 1 )
      MiMakeImageReadOnly(v19);
LABEL_107:
    if ( (*(_DWORD *)(v19 + 56) & 0x40000000) != 0 )
      MiReturnPfnReferenceCount(v13);
    else
      MiFinalizeImageHeaderPage(v13);
    v22 = (_QWORD *)MiReleaseImageSection((__int64)v43, v19);
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
