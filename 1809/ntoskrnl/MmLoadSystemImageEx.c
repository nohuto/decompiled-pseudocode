/*
 * XREFs of MmLoadSystemImageEx @ 0x1406821B8
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14017827C (IopLoadCrashdumpDriver.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x14071C8F8 (MiLoadImportDll.c)
 *     IopLoadCrashdmpImage @ 0x1407200D0 (IopLoadCrashdmpImage.c)
 *     PnprLoadPluginDriver @ 0x140836518 (PnprLoadPluginDriver.c)
 *     MmLoadSystemImage @ 0x140850100 (MmLoadSystemImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     IoIsDeviceEjectable @ 0x1400935CC (IoIsDeviceEjectable.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MiSessionLookupImage @ 0x14009DB08 (MiSessionLookupImage.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     MiSetImageProtection @ 0x1400DA5A4 (MiSetImageProtection.c)
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiValidateStrongCodeDriverImage @ 0x1402AB324 (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140652C20 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     MiObtainSectionForDriver @ 0x140682AB0 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140682C2C (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MiApplyRequiredDriverHotPatches @ 0x140682FA0 (MiApplyRequiredDriverHotPatches.c)
 *     MiProcessLoadConfigForDriver @ 0x140683008 (MiProcessLoadConfigForDriver.c)
 *     MiMapSystemImage @ 0x1406832A4 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     MiBackSingleImageWithPagefile @ 0x14070E700 (MiBackSingleImageWithPagefile.c)
 *     MiCompactServiceTable @ 0x1407195C8 (MiCompactServiceTable.c)
 *     MiLogFailedDriverLoad @ 0x14084FBC8 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084FDEC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiMapRetpolineStubs @ 0x140854EDC (MiMapRetpolineStubs.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140854F64 (MiMarkKernelImageRetpolineBits.c)
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        char **a6)
{
  int v7; // esi
  __int64 result; // rax
  unsigned int v9; // r14d
  int v10; // eax
  char *v11; // rdi
  signed int active; // ebx
  void *v13; // r15
  __int64 *v14; // rax
  char *SystemAddressForImage; // r12
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 *v18; // rbx
  PVOID *v19; // r15
  int v20; // eax
  int inserted; // eax
  __int64 *v22; // rbx
  __int64 v23; // rax
  PIMAGE_NT_HEADERS v24; // r14
  unsigned __int64 v25; // rax
  unsigned int TimeDateStamp; // eax
  ULONG_PTR v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  unsigned int v30; // r15d
  PVOID v31; // rax
  unsigned int *v32; // rsi
  int v33; // r14d
  char *v34; // rcx
  void *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r14d
  _QWORD *v39; // rax
  unsigned __int64 v40; // rdx
  int v41; // ecx
  unsigned int *i; // rsi
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  _QWORD *v46; // rcx
  unsigned __int64 v47; // rdx
  int j; // eax
  _QWORD *v49; // r14
  ULONG_PTR v50; // rsi
  char *v51; // rbx
  __int64 v52; // rcx
  int v53; // [rsp+30h] [rbp-D0h]
  char v54; // [rsp+34h] [rbp-CCh]
  char v55; // [rsp+35h] [rbp-CBh]
  char v56; // [rsp+38h] [rbp-C8h]
  struct _KTHREAD *Lock; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v59; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Size; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h]
  void *v63; // [rsp+70h] [rbp-90h]
  unsigned __int64 v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v66; // [rsp+88h] [rbp-78h]
  __int128 v67; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING String1; // [rsp+A0h] [rbp-60h] BYREF
  ULONG v69; // [rsp+B0h] [rbp-50h] BYREF
  char *v70; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v71[56]; // [rsp+C0h] [rbp-40h] BYREF
  char v74; // [rsp+1C8h] [rbp+C8h]

  v58 = 1;
  *a6 = 0LL;
  v7 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 4) == 0 )
      goto LABEL_8;
    return 3221225714LL;
  }
  if ( (a4 & 2) != 0 || (a4 & 0x80000004) == 4 )
    return 3221225714LL;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225495LL;
LABEL_8:
  result = MiGenerateSystemImageNames(a1, a2, a3, &v67, v71, &String1);
  if ( (int)result < 0 )
    return result;
  v53 = 1;
  v9 = 0;
  v55 = 0;
  v56 = 0;
  P = 0LL;
  v54 = 0;
  Lock = MmAcquireLoadLock();
  v10 = MiObtainSectionForDriver(&String1, &P);
  v11 = (char *)P;
  active = v10;
  if ( v10 < 0 )
    goto LABEL_43;
  v13 = (void *)*((_QWORD *)P + 14);
  v63 = v13;
  if ( v13 )
  {
    v14 = (__int64 *)MiSectionControlArea((__int64)v13);
    v9 = *(_DWORD *)(*v14 + 8);
  }
  else
  {
    v14 = 0LL;
  }
  v59 = v14;
  if ( active )
  {
    v19 = (PVOID *)(v11 + 48);
    SystemAddressForImage = (char *)*((_QWORD *)v11 + 6);
    if ( v7 )
    {
      inserted = MiSessionInsertImage(*((_QWORD *)v11 + 6), v14);
      active = inserted;
      if ( inserted < 0 )
      {
LABEL_24:
        MmReleaseLoadLock((__int64)Lock);
        goto LABEL_52;
      }
      if ( inserted == 272 )
      {
LABEL_28:
        *a5 = v11;
        *a6 = SystemAddressForImage;
        if ( (*((_DWORD *)v11 + 26) & 0x4000000) != 0 )
          active = -1073741411;
        else
          active = v7 == 0 ? 0xC000010E : 0;
        goto LABEL_24;
      }
      v54 = 1;
    }
    if ( active != 272 )
    {
      ++*((_WORD *)v11 + 54);
      v74 = 0;
      goto LABEL_32;
    }
    goto LABEL_28;
  }
  *((_DWORD *)v11 + 16) = v9 << 12;
  SystemAddressForImage = (char *)MiGetSystemAddressForImage(v13, a4, &v58);
  if ( !SystemAddressForImage )
  {
    ObDereferenceObjectDeferDelete(v13);
    ExFreePoolWithTag(v11, 0);
    v16 = (__int64)Lock;
    active = -1073741670;
    v17 = a1;
LABEL_50:
    MmReleaseLoadLock(v16);
    if ( v55 == 1 )
      MiLogFailedDriverLoad(v17, 0LL, 0LL, (unsigned int)active);
    goto LABEL_52;
  }
  v18 = v59;
  MiCheckPurgeAndUpMapCount((__int64)v59);
  v54 = v7;
  v19 = (PVOID *)(v11 + 48);
  *((_QWORD *)v11 + 6) = SystemAddressForImage;
  v74 = 1;
  if ( !(_BYTE)v7 )
  {
    v20 = MiControlAreaRequiresCharge((__int64)v18);
    v53 = v20;
    if ( !v20 )
    {
      LOBYTE(v9) = 0;
      active = -1073740277;
LABEL_44:
      v17 = a1;
      v16 = (__int64)Lock;
      goto LABEL_45;
    }
    if ( v20 == 2 )
    {
      active = MiReferenceActiveSubsection(v18 + 16, 136, 0x11u);
      if ( active < 0 )
      {
        LOBYTE(v9) = 0;
        v20 = 1;
        v16 = (__int64)Lock;
        v17 = a1;
        goto LABEL_122;
      }
    }
  }
LABEL_32:
  active = MiMapSystemImage(v63, SystemAddressForImage, a4);
  if ( active < 0 )
  {
LABEL_42:
    LOBYTE(v9) = v56;
LABEL_43:
    v20 = v53;
    goto LABEL_44;
  }
  if ( !v7 )
  {
    _InterlockedExchangeAdd(&dword_14043C0F8, v9);
    v11 = (char *)P;
  }
  v62 = 0LL;
  v22 = v59;
  v56 = 1;
  if ( !v7 && SystemAddressForImage == *(char **)(*v59 + 32) )
  {
    v23 = MiUseLargeDriverPage(v63, v9, SystemAddressForImage, &v67);
    v62 = v23;
    if ( v23 )
    {
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140439FE0 + 3, -v9);
      v11 = (char *)P;
      SystemAddressForImage = (char *)v23;
      *v19 = (PVOID)v23;
    }
  }
  v55 = 1;
  v66 = v22 + 16;
  if ( v74 == 1 )
  {
    v24 = RtlImageNtHeader(*v19);
    if ( !v24 )
    {
      active = -1073741279;
      goto LABEL_42;
    }
    if ( v24->FileHeader.Machine != 0x8664 || v24->OptionalHeader.Magic != 523 )
    {
      active = -1073741520;
      goto LABEL_42;
    }
    if ( (MiFlags & 0x10000) != 0 )
    {
      active = MiValidateStrongCodeDriverImage((__int64)v24);
      if ( active < 0 )
      {
        memset(&v71[4], 0, 0xA0uLL);
        v71[34] = v24->OptionalHeader.CheckSum;
        TimeDateStamp = v24->FileHeader.TimeDateStamp;
        *(_OWORD *)&v71[26] = v67;
        v71[43] = TimeDateStamp;
        MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_61:
        LOBYTE(v9) = v56;
        v16 = (__int64)Lock;
        v17 = a1;
        goto LABEL_121;
      }
    }
    active = MiConstructLoaderEntry((_DWORD)v11, (unsigned int)&v67, (unsigned int)&String1, a4, v58, (__int64)&v70);
    if ( active < 0 )
      goto LABEL_42;
    ExFreePoolWithTag(v11, 0);
    v11 = v70;
    v22 = v59;
    P = v70;
  }
  v56 = 5;
  if ( v53 == 2 )
    *((_DWORD *)v11 + 49) = *((_DWORD *)v11 + 49) & 0x7F | 0x80;
  if ( !v62 && !v7 )
  {
    if ( !v58 )
      goto LABEL_73;
    v27 = MiReferenceControlAreaFile((__int64)v22);
    if ( IoIsDeviceEjectable(*(_QWORD *)(v27 + 8)) || (*(_DWORD *)(v28 + 52) & 0x11) != 0 )
      v58 = 0;
    MiDereferenceControlAreaFile((__int64)v22, v29);
    if ( !v58 )
LABEL_73:
      MiBackSingleImageWithPagefile(v11);
  }
  v30 = 0;
  v31 = RtlImageDirectoryEntryToData(*((PVOID *)v11 + 6), 1u, 0xCu, &Size);
  v64 = (unsigned __int64)v31;
  v32 = 0LL;
  if ( v31 && (v33 = Size) != 0 )
  {
    if ( !(unsigned int)MiSetImageProtection((__int64)v11, (unsigned __int64)v31, Size, 4u) )
    {
      v34 = "UnwritableIAT";
LABEL_78:
      MiLogStrongCodeDriverLoadFailure(v34);
      dword_140439EB0 = 192;
      active = -1073741701;
      goto LABEL_42;
    }
    v30 = 1;
  }
  else
  {
    v35 = (void *)*((_QWORD *)v11 + 6);
    v64 = 0LL;
    v33 = 0;
    v32 = (unsigned int *)RtlImageDirectoryEntryToData(v35, 1u, 1u, &v69);
    if ( !v32 )
      goto LABEL_102;
    do
    {
      v36 = *v32;
      if ( !(_DWORD)v36 )
        break;
      v37 = *((_QWORD *)v11 + 6);
      v38 = 0;
      v39 = (_QWORD *)(v37 + v36);
      v40 = v37 + v32[4];
      v41 = 0;
      while ( *v39 )
      {
        ++v41;
        ++v39;
        v38 = v41;
      }
      v33 = 8 * v38;
      Size = v33;
      if ( !(unsigned int)MiSetImageProtection((__int64)v11, v40, v33, 4u) )
      {
        v34 = "UnwritableImportDirectory";
        goto LABEL_78;
      }
      ++v30;
      v32 += 5;
    }
    while ( v32 );
    if ( !v30 )
      goto LABEL_102;
  }
  *((_DWORD *)v11 + 26) |= 0x1000u;
  v65 = -2LL;
  active = MiResolveImageReferences(
             SystemAddressForImage,
             (__int64)&v67,
             v71,
             a2,
             (_QWORD *)((unsigned __int64)&v65 & -(__int64)(v74 != 0)));
  if ( v66[2] )
  {
    if ( v64 )
    {
      MiSetImageProtection((__int64)v11, v64, v33, 0x100u);
    }
    else
    {
      for ( i = &v32[-5 * v30]; i; i += 5 )
      {
        v43 = *i;
        if ( !(_DWORD)v43 )
          break;
        v44 = *((_QWORD *)v11 + 6);
        v45 = 0;
        v46 = (_QWORD *)(v44 + v43);
        v47 = v44 + i[4];
        for ( j = 0; *v46; v45 = j )
        {
          ++j;
          ++v46;
        }
        MiSetImageProtection((__int64)v11, v47, 8 * v45, 0x100u);
      }
    }
  }
  *((_DWORD *)v11 + 26) &= ~0x1000u;
  if ( active < 0 )
  {
    v55 = 0;
    goto LABEL_61;
  }
  if ( v74 == 1 )
    *((_QWORD *)v11 + 17) = v65;
LABEL_102:
  v49 = v66;
  active = MiProcessLoadConfigForDriver(v11, a4, v66);
  if ( active < 0 )
    goto LABEL_42;
  if ( MiIsRetpolineEnabled() )
  {
    if ( !v62 )
      MiMapRetpolineStubs(*((_QWORD *)v11 + 6), (unsigned __int64)*((unsigned int *)v11 + 16) >> 12);
    active = MiMarkKernelImageRetpolineBits(v11, 1LL);
    if ( active < 0 )
      goto LABEL_42;
  }
  v50 = (ULONG_PTR)v59;
  if ( (*(_BYTE *)(*(_QWORD *)(*v59 + 56) + 46LL) & 0x40) == 0 )
  {
    v51 = &SystemAddressForImage[*(unsigned int *)(*(_QWORD *)(v59[12] + 32) + 64LL)];
    MiSetImageProtection((__int64)v11, (unsigned __int64)v51, 8u, 4u);
    v52 = *(_QWORD *)(*(_QWORD *)(v50 + 96) + 32LL);
    if ( v52 )
      v52 = *(_QWORD *)(v52 + 40);
    *(_QWORD *)v51 = &SystemAddressForImage[-v52];
    if ( v49[2] )
      MiSetImageProtection((__int64)v11, (unsigned __int64)v51, 8u, 0x100u);
  }
  VfDriverLoadImage(v11, 0LL, 0LL, 0LL);
  KseDriverLoadImage((__int64)v11);
  LOBYTE(v9) = 23;
  if ( v54 == 1 && (a4 & 4) != 0 )
  {
    active = MiCompactServiceTable(v11);
    if ( active < 0 )
      goto LABEL_43;
  }
  active = MiApplyImportOptimizationToRuntimeDriver((__int64)v11, v50);
  if ( active < 0 )
    goto LABEL_43;
  active = MiHandleDriverNonPagedSections((__int64)v11, a4, 1);
  if ( active < 0 )
    goto LABEL_43;
  LOBYTE(v9) = 31;
  if ( v54 == 1 )
    *((_BYTE *)MiSessionLookupImage((unsigned __int64)SystemAddressForImage) + 64) = 1;
  active = MiApplyRequiredDriverHotPatches(v11);
  if ( active < 0 )
    goto LABEL_43;
  v17 = a1;
  MiDriverLoadSucceeded((_DWORD)v11, (_DWORD)v63, a1, (unsigned int)&String1, (__int64)&v67, v74);
  v16 = (__int64)Lock;
  MmReleaseLoadLock((__int64)Lock);
  active = 0;
  *a5 = v11;
  *a6 = SystemAddressForImage;
LABEL_121:
  v20 = v53;
LABEL_122:
  if ( active < 0 )
  {
LABEL_45:
    if ( v11 )
    {
      if ( v20 == 2 && (v9 & 4) == 0 )
      {
        v25 = MiSectionControlArea(*((_QWORD *)v11 + 14));
        MiReturnCrossPartitionControlAreaCharges(v25);
      }
      MiUnloadSystemImage((__int64)v11, v9);
    }
    goto LABEL_50;
  }
LABEL_52:
  if ( a2 )
    ExFreePoolWithTag(String1.Buffer, 0);
  return (unsigned int)active;
}
