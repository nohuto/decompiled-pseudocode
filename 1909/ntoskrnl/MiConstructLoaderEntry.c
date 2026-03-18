/*
 * XREFs of MiConstructLoaderEntry @ 0x140711980
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140A14554 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x1400750D0 (MiManageSubsectionView.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     MiProcessLoaderEntry @ 0x1401556A4 (MiProcessLoaderEntry.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpCovGetSectionInfo @ 0x1407120B8 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x14071211C (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x1407121FC (MiCaptureImageExceptionValues.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074911C (ExCovReadjustUnloadedModuleEntry.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, int a5, _QWORD *a6)
{
  char v9; // bp
  char *v10; // r15
  SIZE_T v11; // rdx
  _OWORD *v12; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v14; // r14
  unsigned __int64 v15; // r12
  PIMAGE_NT_HEADERS v16; // rax
  int v17; // r8d
  PIMAGE_NT_HEADERS v18; // rsi
  unsigned __int64 NumberOfSections; // r10
  unsigned int v20; // ebp
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r13
  SIZE_T v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  _OWORD *v29; // rbx
  char *v30; // r14
  char *v31; // rcx
  bool v32; // zf
  int v33; // r13d
  unsigned __int64 v34; // r14
  __int16 v35; // r8
  unsigned __int64 v36; // rsi
  __int64 SectionInfo; // rax
  __int64 VirtualAddress; // rax
  unsigned __int64 Size; // rcx
  unsigned int SizeOfImage; // r9d
  unsigned int v42; // r8d
  char *v43; // r15
  unsigned __int64 v44; // rcx
  unsigned int v45; // eax
  int v46; // edx
  unsigned __int64 v47; // rbp
  unsigned int v48; // r9d
  __int64 v49; // r8
  unsigned int *v50; // r15
  __int64 v51; // rax
  unsigned int v52; // r13d
  unsigned int v53; // edx
  __int64 v54; // rax
  unsigned __int128 v55; // rax
  unsigned __int64 v56; // rax
  unsigned int v57; // ebx
  __int64 v58; // [rsp+20h] [rbp-118h]
  unsigned int v59; // [rsp+20h] [rbp-118h]
  int v60; // [rsp+28h] [rbp-110h]
  __int64 v61; // [rsp+30h] [rbp-108h]
  __int64 v62; // [rsp+30h] [rbp-108h]
  _IMAGE_DATA_DIRECTORY *v63; // [rsp+38h] [rbp-100h]
  __int128 v64; // [rsp+40h] [rbp-F8h]
  _OWORD *v65; // [rsp+50h] [rbp-E8h]
  __int64 v66; // [rsp+58h] [rbp-E0h]
  __int64 v67[27]; // [rsp+60h] [rbp-D8h] BYREF
  int v70; // [rsp+150h] [rbp+18h] BYREF
  int v71; // [rsp+158h] [rbp+20h]

  v71 = a4;
  v9 = a4;
  memset(v67, 0, 0x90uLL);
  v10 = 0LL;
  v58 = 0LL;
  DWORD1(v64) = 0;
  v11 = *(unsigned __int16 *)a3 + 2LL;
  v12 = 0LL;
  *a6 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x54446D4Du);
  *((_QWORD *)&v64 + 1) = PoolWithTag;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  LOWORD(v64) = *(_WORD *)a3;
  WORD1(v64) = *(_WORD *)a3;
  memmove(PoolWithTag, a3[1], *(unsigned __int16 *)a3);
  v14[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v15 = *(_QWORD *)(a1 + 48);
  v16 = RtlImageNtHeader((PVOID)v15);
  v17 = v9 & 1;
  v18 = v16;
  v60 = v17;
  if ( (v9 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v70 = 0;
  }
  else
  {
    NumberOfSections = v16->FileHeader.NumberOfSections;
    v70 = v16->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v57 = -1073741520;
      goto LABEL_77;
    }
  }
  v63 = 0LL;
  v20 = 0;
  if ( v17 )
  {
    v20 = 32;
    if ( v16->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v16->OptionalHeader.DataDirectory[6].VirtualAddress;
      v63 = &v18->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v18->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v18->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v20 = Size + 32;
              v42 = 0;
              v43 = (char *)(v15 + VirtualAddress);
              v44 = Size / 0x1C;
              if ( v44 )
              {
                do
                {
                  v45 = *((_DWORD *)v43 + 5);
                  if ( v45 )
                  {
                    if ( v45 < SizeOfImage )
                    {
                      v46 = *((_DWORD *)v43 + 4);
                      if ( v46 + v45 < SizeOfImage )
                        v20 += v46;
                    }
                  }
                  ++v42;
                  v43 += 28;
                }
                while ( v42 < v44 );
              }
              v10 = &v43[-28 * v42];
            }
          }
        }
      }
      v20 = (v20 + 7) & 0xFFFFFFF8;
    }
  }
  v21 = (v18->OptionalHeader.SizeOfImage >> 12) + ((v18->OptionalHeader.SizeOfImage & 0xFFF) != 0);
  v22 = 8 * ((v21 >> 6) + ((v21 & 0x3F) != 0) + 2);
  v23 = (unsigned int)v22;
  v24 = v22 + 290;
  v61 = v23;
  if ( v24 <= 0x122 )
    goto LABEL_75;
  if ( v20 )
  {
    if ( v24 + v20 <= v24 )
      goto LABEL_75;
    v24 += v20;
  }
  v25 = (*(unsigned __int16 *)a2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v24 + v25;
  if ( v24 + v25 <= v24 )
  {
LABEL_75:
    v57 = -1073741701;
    goto LABEL_77;
  }
  if ( (_DWORD)NumberOfSections )
  {
    if ( v26 + 4LL * (unsigned int)NumberOfSections > v26 )
    {
      v26 += 4LL * (unsigned int)NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_75;
  }
LABEL_11:
  v65 = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x644C6D4Du);
  v12 = v65;
  if ( !v65
    || (v27 = *(_QWORD *)(a1 + 112), (v66 = v27) != 0)
    && (v28 = MiSectionControlArea(v27),
        v58 = (*(_DWORD *)(*(_QWORD *)v28 + 8LL) >> 12)
            + (unsigned int)((*(_DWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFF) != 0),
        !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v58, 0LL)) )
  {
    v57 = -1073741670;
LABEL_77:
    ExFreePoolWithTag(v14, 0);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    return v57;
  }
  memset(v65, 0, v26);
  v29 = v65 + 10;
  *((_QWORD *)v65 + 33) = 0LL;
  v30 = (char *)v65 + v61 + 288;
  v31 = &v30[v20];
  *((_QWORD *)v65 + 34) = v65 + 18;
  v32 = v70 == 0;
  *((_QWORD *)v65 + 32) = v30;
  *((_QWORD *)v65 + 27) = v58;
  if ( !v32 )
    *((_QWORD *)v65 + 28) = &v31[v25];
  *v65 = *(_OWORD *)a1;
  v65[1] = *(_OWORD *)(a1 + 16);
  v65[2] = *(_OWORD *)(a1 + 32);
  v65[3] = *(_OWORD *)(a1 + 48);
  v65[4] = *(_OWORD *)(a1 + 64);
  v65[5] = *(_OWORD *)(a1 + 80);
  v65[6] = *(_OWORD *)(a1 + 96);
  v65[7] = *(_OWORD *)(a1 + 112);
  v65[8] = *(_OWORD *)(a1 + 128);
  v65[9] = *(_OWORD *)(a1 + 144);
  if ( v18->OptionalHeader.MajorOperatingSystemVersion >= 5u && v18->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v65 + 26) |= 0x8000000u;
  if ( (v18->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v65 + 26) |= 0x20u;
  *((_QWORD *)v65 + 12) = v31;
  *((_WORD *)v65 + 44) = *(_WORD *)a2;
  *((_WORD *)v65 + 45) = *(_WORD *)a2;
  memmove(v31, a2[1], *(unsigned __int16 *)a2);
  v33 = v60;
  *(_WORD *)(*((_QWORD *)v65 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v65 + 5) = 0LL;
  *(_OWORD *)((char *)v65 + 72) = v64;
  if ( v60 )
  {
    *((_DWORD *)v65 + 26) |= 0x20000000u;
    *((_QWORD *)v65 + 5) = v30;
    *(_DWORD *)v30 = 84302;
    *((_DWORD *)v30 + 1) = v20;
    *((_WORD *)v30 + 4) = v18->FileHeader.Machine;
    *((_WORD *)v30 + 5) = v18->FileHeader.Characteristics;
    *((_DWORD *)v30 + 3) = v18->FileHeader.TimeDateStamp;
    *((_DWORD *)v30 + 4) = v18->OptionalHeader.CheckSum;
    *((_DWORD *)v30 + 5) = v18->OptionalHeader.SizeOfImage;
    *((_QWORD *)v30 + 3) = v15;
    if ( v10 )
    {
      memmove(v30 + 32, v10, v63->Size);
      v47 = v63->Size;
      v59 = 0;
      v48 = 0;
      if ( v47 / 0x1C )
      {
        v49 = 0LL;
        v62 = 0LL;
        v50 = (unsigned int *)(v10 + 16);
        do
        {
          v51 = v50[1];
          v52 = *v50;
          v70 = v47;
          if ( (_DWORD)v51
            && (v53 = v18->OptionalHeader.SizeOfImage, (unsigned int)v51 < v53)
            && (unsigned int)v51 + v52 > (unsigned int)v51
            && (unsigned int)v51 + v52 < v53 )
          {
            memmove(&v30[(unsigned int)v47 + 32], (const void *)(v15 + v51), v52);
            v49 = v62;
            LODWORD(v47) = v52 + v47;
            v48 = v59;
          }
          else
          {
            v70 = 0;
          }
          ++v48;
          v54 = 28 * v49;
          v49 = v48;
          v50 += 7;
          v59 = v48;
          v62 = v48;
          *(_DWORD *)&v30[v54 + 52] = v70;
          v55 = v63->Size * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v48 < (*((_QWORD *)&v55 + 1) + (((unsigned __int64)v63->Size - *((_QWORD *)&v55 + 1)) >> 1)) >> 4 );
        v12 = v65;
        v33 = v60;
        v29 = v65 + 10;
      }
    }
  }
  *((_QWORD *)v12 + 7) = v15 + v18->OptionalHeader.AddressOfEntryPoint;
  *((_DWORD *)v12 + 30) = v18->OptionalHeader.CheckSum;
  if ( v66 )
  {
    v34 = MiSectionControlArea(v66);
    v35 = *((_WORD *)v12 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 4);
    *((_WORD *)v12 + 55) = v35;
    *((_WORD *)v12 + 55) = v35 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 1) & 7));
  }
  else
  {
    v34 = 0LL;
  }
  *((_DWORD *)v12 + 38) = v18->OptionalHeader.SizeOfImage;
  *((_DWORD *)v12 + 39) = v18->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v12);
  MiLockdownSections(v12);
  if ( v66 )
    v36 = *(unsigned int *)(*(_QWORD *)v34 + 8LL);
  else
    v36 = (unsigned __int64)*((unsigned int *)v12 + 16) >> 12;
  if ( v33 )
    goto LABEL_29;
  *((_QWORD *)v29 + 5) = v36;
  *((_QWORD *)v29 + 6) = v36;
  if ( (PVOID)v15 == PsNtosImageBase )
    goto LABEL_69;
  if ( (PVOID)v15 == PsHalImageBase )
  {
    if ( (PVOID)v15 != PsNtosImageBase )
    {
      v56 = v36 - MxHalFreedGapCharges;
      goto LABEL_70;
    }
LABEL_69:
    v56 = v36 - MxKernelFreedGapCharges;
LABEL_70:
    *((_QWORD *)v29 + 5) = v56;
  }
LABEL_29:
  if ( !a5 )
    *((_DWORD *)v29 + 9) |= 1u;
  if ( (dword_140571184 & 1) != 0 || (v71 & 2) != 0 )
    *((_DWORD *)v29 + 9) |= 0x10u;
  *((_QWORD *)v12 + 16) = 0LL;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v12 + 6), &v70);
    if ( SectionInfo )
    {
      *((_DWORD *)v12 + 31) = v70;
      *((_QWORD *)v12 + 16) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v12);
      ExCovReadjustUnloadedModuleEntry(v12, 1LL);
    }
  }
  MiProcessLoaderEntry((unsigned __int64 *)v12, 1);
  if ( !v33 )
  {
    if ( v66 )
    {
      *((_DWORD *)v29 + 8) = -2;
      *((_QWORD *)v29 + 2) = v15 | 3;
      *((_QWORD *)v29 + 3) = (v36 << 12) + v15 - 1;
      v67[0] = v34;
      MiManageSubsectionView(v67, v29, 3);
    }
  }
  *a6 = v12;
  return 0LL;
}
