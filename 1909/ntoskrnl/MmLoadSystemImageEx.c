/*
 * XREFs of MmLoadSystemImageEx @ 0x14070F890
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140182104 (IopLoadCrashdumpDriver.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     MmLoadSystemImage @ 0x14070B620 (MmLoadSystemImage.c)
 *     MiLoadImportDll @ 0x14074604C (MiLoadImportDll.c)
 *     IopLoadCrashdmpImage @ 0x140749B90 (IopLoadCrashdmpImage.c)
 *     PnprLoadPluginDriver @ 0x14086F368 (PnprLoadPluginDriver.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     MiControlAreaRequiresCharge @ 0x140071490 (MiControlAreaRequiresCharge.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140072850 (MiCheckPurgeAndUpMapCount.c)
 *     IoIsDeviceEjectable @ 0x14008FF20 (IoIsDeviceEjectable.c)
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 *     MiSetImageProtection @ 0x1400FA72C (MiSetImageProtection.c)
 *     MiProcessKernelCfgImage @ 0x140154A34 (MiProcessKernelCfgImage.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiValidateStrongCodeDriverImage @ 0x1402C3AA4 (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     KseDriverLoadImage @ 0x14070EE94 (KseDriverLoadImage.c)
 *     MiObtainSectionForDriver @ 0x14070FFE8 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140710164 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     MiApplyRequiredDriverHotPatches @ 0x1407104F0 (MiApplyRequiredDriverHotPatches.c)
 *     MiHandleDriverNonPagedSections @ 0x140710564 (MiHandleDriverNonPagedSections.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407107C0 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFinalizeImageRetpolineState @ 0x1407108C8 (MiFinalizeImageRetpolineState.c)
 *     MiProcessLoadConfigForDriver @ 0x14071092C (MiProcessLoadConfigForDriver.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     MiMapSystemImage @ 0x140711384 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140711980 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 *     MiUseLargeDriverPage @ 0x14071EE20 (MiUseLargeDriverPage.c)
 *     MiBackSingleImageWithPagefile @ 0x14073BB98 (MiBackSingleImageWithPagefile.c)
 *     MiCompactServiceTable @ 0x140742D58 (MiCompactServiceTable.c)
 *     VslCompleteSecureDriverLoad @ 0x1408511A0 (VslCompleteSecureDriverLoad.c)
 *     MiLogFailedDriverLoad @ 0x14088A278 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14088A4A4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  int v8; // r14d
  __int64 result; // rax
  char v10; // r12
  int v11; // eax
  char *v12; // rdi
  signed int ConfigForDriver; // ebx
  void *v14; // r12
  __int64 *v15; // r15
  __int64 v16; // rbx
  PVOID *v17; // r12
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r15
  PIMAGE_NT_HEADERS v21; // rsi
  ULONG_PTR v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned int v25; // r15d
  PVOID v26; // rax
  unsigned int *v27; // rsi
  unsigned __int64 v28; // r12
  int v29; // r14d
  __int64 v30; // r15
  __int64 *v31; // rsi
  unsigned __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  char v38; // r8
  int inserted; // eax
  _QWORD *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int TimeDateStamp; // eax
  char *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // r14d
  _QWORD *v48; // rax
  unsigned __int64 v49; // rdx
  int i; // ecx
  unsigned int *j; // rsi
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // r8d
  _QWORD *v55; // rcx
  unsigned __int64 v56; // rdx
  int k; // eax
  unsigned __int64 v58; // rax
  int v59; // [rsp+30h] [rbp-D0h]
  char v60; // [rsp+34h] [rbp-CCh]
  char v61; // [rsp+35h] [rbp-CBh]
  char v62; // [rsp+38h] [rbp-C8h]
  struct _KTHREAD *Lock; // [rsp+40h] [rbp-C0h]
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  __int64 SystemAddressForImage; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Size; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v68; // [rsp+68h] [rbp-98h]
  void *v69; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String1; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v71; // [rsp+88h] [rbp-78h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-60h]
  ULONG v74; // [rsp+A8h] [rbp-58h] BYREF
  char *v75; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v76[14]; // [rsp+B8h] [rbp-48h] BYREF
  char v79; // [rsp+1C8h] [rbp+C8h]

  v6 = 0;
  *(_QWORD *)&v71.Length = 0LL;
  v71.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v76[0] = 0uLL;
  v64 = 1;
  *a6 = 0LL;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    if ( (a4 & 4) == 0 )
      goto LABEL_3;
    return 3221225714LL;
  }
  if ( (a4 & 2) != 0 || (a4 & 0x80000004) == 4 )
    return 3221225714LL;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
    return 3221225495LL;
LABEL_3:
  result = MiGenerateSystemImageNames(a1, a2, a3, &String1, v76, &v71);
  if ( (int)result < 0 )
    return result;
  v59 = 1;
  v10 = 0;
  v61 = 0;
  v62 = 0;
  P = 0LL;
  v60 = 0;
  Lock = MmAcquireLoadLock();
  v11 = MiObtainSectionForDriver(&v71, &P);
  v12 = (char *)P;
  ConfigForDriver = v11;
  if ( v11 < 0 )
    goto LABEL_80;
  v14 = (void *)*((_QWORD *)P + 14);
  v69 = v14;
  if ( v14 )
  {
    v15 = (__int64 *)MiSectionControlArea((__int64)v14);
    v6 = *(_DWORD *)(*v15 + 8);
  }
  else
  {
    v15 = 0LL;
  }
  v68 = v15;
  if ( ConfigForDriver )
  {
    v17 = (PVOID *)(v12 + 48);
    v35 = *((_QWORD *)v12 + 6);
    SystemAddressForImage = v35;
    if ( v8 )
    {
      inserted = MiSessionInsertImage(v35, v15);
      ConfigForDriver = inserted;
      if ( inserted < 0 )
      {
LABEL_68:
        MmReleaseLoadLock((__int64)Lock);
        goto LABEL_60;
      }
      if ( inserted == 272 )
      {
LABEL_66:
        v36 = SystemAddressForImage;
        *a5 = v12;
        *a6 = v36;
        if ( (*((_DWORD *)v12 + 26) & 0x4000000) != 0 )
          ConfigForDriver = -1073741411;
        else
          ConfigForDriver = v8 == 0 ? 0xC000010E : 0;
        goto LABEL_68;
      }
      v60 = 1;
    }
    if ( ConfigForDriver != 272 )
    {
      ++*((_WORD *)v12 + 54);
      v79 = 0;
      goto LABEL_12;
    }
    goto LABEL_66;
  }
  *((_DWORD *)v12 + 16) = v6 << 12;
  SystemAddressForImage = MiGetSystemAddressForImage(v14, a4, &v64);
  v16 = SystemAddressForImage;
  if ( !SystemAddressForImage )
  {
    ObDereferenceObjectDeferDelete(v14);
    ExFreePoolWithTag(v12, 0);
    v34 = (__int64)Lock;
    ConfigForDriver = -1073741670;
    v33 = a1;
LABEL_83:
    MmReleaseLoadLock(v34);
    if ( v61 == 1 )
      MiLogFailedDriverLoad(v33, 0LL, 0LL, (unsigned int)ConfigForDriver);
    goto LABEL_60;
  }
  MiCheckPurgeAndUpMapCount((__int64)v15);
  v60 = v8;
  v17 = (PVOID *)(v12 + 48);
  *((_QWORD *)v12 + 6) = v16;
  v79 = 1;
  if ( (_BYTE)v8 )
    goto LABEL_12;
  v18 = MiControlAreaRequiresCharge((__int64)v15, 3LL);
  v59 = v18;
  if ( !v18 )
  {
    v10 = 0;
    ConfigForDriver = -1073740277;
    goto LABEL_81;
  }
  if ( v18 != 2 || (ConfigForDriver = MiReferenceActiveSubsection(v15 + 16, 136, 0x11u), ConfigForDriver >= 0) )
  {
LABEL_12:
    ConfigForDriver = MiMapSystemImage(v69, SystemAddressForImage, a4);
    if ( ConfigForDriver < 0 )
      goto LABEL_101;
    if ( !v8 )
    {
      _InterlockedExchangeAdd(&dword_140466750, v6);
      v12 = (char *)P;
    }
    v19 = (__int64)v68;
    v62 = 1;
    v20 = 0LL;
    if ( (a4 & 0x21) == 0 && SystemAddressForImage == *(_QWORD *)(*v68 + 32) )
    {
      if ( (unsigned int)MiUseLargeDriverPage(&String1) )
      {
        v42 = MiMapSystemImageWithLargePage(v69, v6, SystemAddressForImage);
        v20 = v42;
        if ( v42 )
        {
          _InterlockedExchangeAdd((_DWORD *)&xmmword_140464640 + 3, -v6);
          v12 = (char *)P;
          SystemAddressForImage = v42;
          *v17 = (PVOID)v42;
        }
      }
    }
    v61 = 1;
    v73 = v19 + 128;
    if ( v79 == 1 )
    {
      v21 = RtlImageNtHeader(*v17);
      if ( !v21 )
      {
        ConfigForDriver = -1073741279;
        goto LABEL_101;
      }
      if ( v21->FileHeader.Machine != 0x8664 || v21->OptionalHeader.Magic != 523 )
      {
        ConfigForDriver = -1073741520;
        goto LABEL_101;
      }
      if ( (MiFlags & 0x10000) != 0 )
      {
        ConfigForDriver = MiValidateStrongCodeDriverImage((__int64)v21);
        if ( ConfigForDriver < 0 )
        {
          memset((char *)&v76[1] + 8, 0, 0xA0uLL);
          LODWORD(v76[9]) = v21->OptionalHeader.CheckSum;
          TimeDateStamp = v21->FileHeader.TimeDateStamp;
          v76[7] = String1;
          DWORD1(v76[11]) = TimeDateStamp;
          MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_105:
          v10 = v62;
          v34 = (__int64)Lock;
          v33 = a1;
          goto LABEL_58;
        }
      }
      ConfigForDriver = MiConstructLoaderEntry(
                          (_DWORD)v12,
                          (unsigned int)&String1,
                          (unsigned int)&v71,
                          a4,
                          v64,
                          (__int64)&v75);
      if ( ConfigForDriver < 0 )
        goto LABEL_101;
      ExFreePoolWithTag(v12, 0);
      v12 = v75;
      v19 = (__int64)v68;
      P = v75;
    }
    v62 = 5;
    if ( v59 == 2 )
      *((_DWORD *)v12 + 49) = *((_DWORD *)v12 + 49) & 0x7F | 0x80;
    if ( !v20 && !v8 )
    {
      if ( !v64 )
        goto LABEL_87;
      v22 = MiReferenceControlAreaFile(v19);
      if ( IoIsDeviceEjectable(*(_QWORD *)(v22 + 8)) || (*(_DWORD *)(v23 + 52) & 0x11) != 0 )
        v64 = 0;
      MiDereferenceControlAreaFile(v19, v24);
      if ( !v64 )
LABEL_87:
        MiBackSingleImageWithPagefile(v12);
    }
    v25 = 0;
    v26 = RtlImageDirectoryEntryToData(*((PVOID *)v12 + 6), 1u, 0xCu, &Size);
    v27 = 0LL;
    v28 = (unsigned __int64)v26;
    if ( v26 && (v29 = Size) != 0 )
    {
      if ( !(unsigned int)MiSetImageProtection((__int64)v12, (unsigned __int64)v26, Size) )
      {
        v44 = "UnwritableIAT";
LABEL_109:
        MiLogStrongCodeDriverLoadFailure(v44);
        dword_140464518 = 192;
        ConfigForDriver = -1073741701;
        goto LABEL_101;
      }
      v25 = 1;
    }
    else
    {
      v28 = 0LL;
      v29 = 0;
      v27 = (unsigned int *)RtlImageDirectoryEntryToData(*((PVOID *)v12 + 6), 1u, 1u, &v74);
      if ( !v27 )
        goto LABEL_44;
      do
      {
        v45 = *v27;
        if ( !(_DWORD)v45 )
          break;
        v46 = *((_QWORD *)v12 + 6);
        v47 = 0;
        v48 = (_QWORD *)(v46 + v45);
        v49 = v46 + v27[4];
        for ( i = 0; *v48; v47 = i )
        {
          ++i;
          ++v48;
        }
        v29 = 8 * v47;
        Size = v29;
        if ( !(unsigned int)MiSetImageProtection((__int64)v12, v49, v29) )
        {
          v44 = "UnwritableImportDirectory";
          goto LABEL_109;
        }
        ++v25;
        v27 += 5;
      }
      while ( v27 );
      if ( !v25 )
        goto LABEL_44;
    }
    *((_DWORD *)v12 + 26) |= 0x1000u;
    v72 = -2LL;
    ConfigForDriver = MiResolveImageReferences(
                        SystemAddressForImage,
                        (unsigned int)&String1,
                        (unsigned int)v76,
                        a2,
                        (unsigned __int64)&v72 & -(__int64)(v79 != 0));
    if ( *(_QWORD *)(v73 + 16) )
    {
      if ( v28 )
      {
        MiSetImageProtection((__int64)v12, v28, v29);
      }
      else
      {
        for ( j = &v27[-5 * v25]; j; j += 5 )
        {
          v52 = *j;
          if ( !(_DWORD)v52 )
            break;
          v53 = *((_QWORD *)v12 + 6);
          v54 = 0;
          v55 = (_QWORD *)(v53 + v52);
          v56 = v53 + j[4];
          for ( k = 0; *v55; v54 = k )
          {
            ++k;
            ++v55;
          }
          MiSetImageProtection((__int64)v12, v56, 8 * v54);
        }
      }
    }
    *((_DWORD *)v12 + 26) &= ~0x1000u;
    if ( ConfigForDriver < 0 )
    {
      v61 = 0;
      goto LABEL_105;
    }
    if ( v79 == 1 )
      *((_QWORD *)v12 + 17) = v72;
LABEL_44:
    v30 = v73;
    ConfigForDriver = MiProcessLoadConfigForDriver(v12, v73);
    if ( ConfigForDriver >= 0 )
    {
      ConfigForDriver = MiFinalizeImageRetpolineState(v12);
      if ( ConfigForDriver >= 0 )
      {
        v31 = v68;
        v32 = SystemAddressForImage;
        if ( (*(_BYTE *)(*(_QWORD *)(*v68 + 56) + 46LL) & 0x40) == 0 )
        {
          v40 = (_QWORD *)(SystemAddressForImage + *(unsigned int *)(*(_QWORD *)(v68[12] + 32) + 64LL));
          MiSetImageProtection((__int64)v12, (unsigned __int64)v40, 8u);
          v41 = *(_QWORD *)(v31[12] + 32);
          if ( v41 )
            v41 = *(_QWORD *)(v41 + 40);
          *v40 = v32 - v41;
          if ( *(_QWORD *)(v30 + 16) )
            MiSetImageProtection((__int64)v12, (unsigned __int64)v40, 8u);
        }
        VfDriverLoadImage(v12, 0LL, 0LL, 0LL);
        KseDriverLoadImage((__int64)v12);
        v10 = 23;
        ConfigForDriver = MiApplyImportOptimizationToRuntimeDriver(v12, v31, a4);
        if ( ConfigForDriver >= 0 )
        {
          if ( v60 != 1 || (a4 & 4) == 0 || (ConfigForDriver = MiCompactServiceTable(v12), ConfigForDriver >= 0) )
          {
            ConfigForDriver = MiHandleDriverNonPagedSections(v12, a4, 1LL);
            if ( ConfigForDriver >= 0 )
            {
              v10 = 31;
              if ( v60 == 1 )
              {
                v37 = MiSessionLookupImage(v32);
                *((_BYTE *)v37 + 64) = v38;
              }
              ConfigForDriver = MiProcessKernelCfgImage((__int64)v12, a4, v30);
              if ( ConfigForDriver >= 0 )
              {
                if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x80000) == 0 && (*((_DWORD *)v12 + 26) & 0x2000) == 0 )
                {
                  ConfigForDriver = VslCompleteSecureDriverLoad(0LL, *((_QWORD *)v12 + 6), *((unsigned int *)v12 + 16));
                  if ( ConfigForDriver < 0 )
                    goto LABEL_55;
                  *((_DWORD *)v12 + 26) |= 0x2000u;
                }
                ConfigForDriver = 0;
              }
LABEL_55:
              if ( ConfigForDriver >= 0 )
              {
                ConfigForDriver = MiApplyRequiredDriverHotPatches(v12);
                if ( ConfigForDriver >= 0 )
                {
                  v33 = a1;
                  MiDriverLoadSucceeded((_DWORD)v12, (_DWORD)v69, a1, (unsigned int)&v71, (__int64)&String1, v79);
                  v34 = (__int64)Lock;
                  MmReleaseLoadLock((__int64)Lock);
                  ConfigForDriver = 0;
                  *a5 = v12;
                  *a6 = v32;
LABEL_58:
                  v18 = v59;
                  goto LABEL_59;
                }
              }
            }
          }
        }
LABEL_80:
        v18 = v59;
LABEL_81:
        v34 = (__int64)Lock;
        v33 = a1;
LABEL_82:
        if ( v12 )
        {
          if ( v18 == 2 && (v10 & 4) == 0 )
          {
            v58 = MiSectionControlArea(*((_QWORD *)v12 + 14));
            MiReturnCrossPartitionControlAreaCharges(v58);
          }
          MiUnloadSystemImage((__int64)v12, v10);
        }
        goto LABEL_83;
      }
    }
LABEL_101:
    v10 = v62;
    goto LABEL_80;
  }
  v10 = 0;
  v18 = 1;
  v34 = (__int64)Lock;
  v33 = a1;
LABEL_59:
  if ( ConfigForDriver < 0 )
    goto LABEL_82;
LABEL_60:
  if ( a2 )
    ExFreePoolWithTag(v71.Buffer, 0);
  return (unsigned int)ConfigForDriver;
}
