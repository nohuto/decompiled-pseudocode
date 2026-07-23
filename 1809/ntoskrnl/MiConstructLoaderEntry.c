/*
 * XREFs of MiConstructLoaderEntry @ 0x140683630
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeLoadedModuleList @ 0x1409D0350 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     MiProcessLoaderEntry @ 0x1400F5C2C (MiProcessLoaderEntry.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpCovGetSectionInfo @ 0x140683D40 (ExpCovGetSectionInfo.c)
 *     MiLockdownSections @ 0x140683DA4 (MiLockdownSections.c)
 *     MiCaptureImageExceptionValues @ 0x140683E84 (MiCaptureImageExceptionValues.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407106A4 (ExCovReadjustUnloadedModuleEntry.c)
 */

__int64 __fastcall MiConstructLoaderEntry(__int64 a1, const void **a2, const void **a3, int a4, int a5, _QWORD *a6)
{
  const void **v6; // r12
  SIZE_T v9; // rdx
  char v10; // bp
  _OWORD *v11; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v13; // r14
  char *v14; // rbx
  PIMAGE_NT_HEADERS v15; // rax
  PIMAGE_NT_HEADERS v16; // rsi
  int v17; // r8d
  unsigned __int64 NumberOfSections; // r10
  char *v19; // r15
  unsigned int v20; // ebp
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r12
  SIZE_T v26; // rbx
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  _OWORD *v29; // rbx
  char *v30; // r14
  char *v31; // rcx
  bool v32; // zf
  int v33; // r12d
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
  unsigned int v52; // r12d
  unsigned int v53; // edx
  __int64 v54; // rax
  unsigned __int128 v55; // rax
  unsigned int v56; // ebx
  __int64 v57; // [rsp+20h] [rbp-128h]
  unsigned int v58; // [rsp+20h] [rbp-128h]
  int v59; // [rsp+28h] [rbp-120h]
  __int64 v60; // [rsp+30h] [rbp-118h]
  __int64 v61; // [rsp+30h] [rbp-118h]
  _IMAGE_DATA_DIRECTORY *v62; // [rsp+38h] [rbp-110h]
  unsigned __int64 v63; // [rsp+40h] [rbp-108h]
  _OWORD *v64; // [rsp+48h] [rbp-100h]
  __int128 v65; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v66[27]; // [rsp+70h] [rbp-D8h] BYREF
  int v69; // [rsp+160h] [rbp+18h] BYREF
  int v70; // [rsp+168h] [rbp+20h]

  v70 = a4;
  v6 = a2;
  v57 = 0LL;
  v9 = *(unsigned __int16 *)a3 + 2LL;
  *a6 = 0LL;
  v10 = a4;
  v11 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x54446D4Du);
  *((_QWORD *)&v65 + 1) = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  LOWORD(v65) = *(_WORD *)a3;
  WORD1(v65) = *(_WORD *)a3;
  memmove(PoolWithTag, a3[1], *(unsigned __int16 *)a3);
  v13[(unsigned __int64)*(unsigned __int16 *)a3 >> 1] = 0;
  v14 = *(char **)(a1 + 48);
  v63 = (unsigned __int64)v14;
  v15 = RtlImageNtHeader(v14);
  v16 = v15;
  v17 = v10 & 1;
  v59 = v17;
  if ( (v10 & 1) != 0 )
  {
    LODWORD(NumberOfSections) = 0;
    v69 = 0;
  }
  else
  {
    NumberOfSections = v15->FileHeader.NumberOfSections;
    v69 = v15->FileHeader.NumberOfSections;
    if ( 0xFFFFFFFFFFFFFFFFuLL / NumberOfSections < 4 )
    {
      v56 = -1073741520;
      goto LABEL_74;
    }
  }
  v62 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( v17 )
  {
    v20 = 32;
    if ( v15->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = v15->OptionalHeader.DataDirectory[6].VirtualAddress;
      v62 = &v16->OptionalHeader.DataDirectory[6];
      if ( (_DWORD)VirtualAddress )
      {
        Size = v16->OptionalHeader.DataDirectory[6].Size;
        if ( (_DWORD)Size )
        {
          if ( (int)Size + (int)VirtualAddress > (unsigned int)VirtualAddress )
          {
            SizeOfImage = v16->OptionalHeader.SizeOfImage;
            if ( (int)Size + (int)VirtualAddress < SizeOfImage )
            {
              v20 = Size + 32;
              v42 = 0;
              v43 = &v14[VirtualAddress];
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
                v6 = a2;
              }
              v19 = &v43[-28 * v42];
            }
          }
        }
      }
      v20 = (v20 + 7) & 0xFFFFFFF8;
    }
  }
  v21 = (v16->OptionalHeader.SizeOfImage >> 12) + ((v16->OptionalHeader.SizeOfImage & 0xFFF) != 0);
  v22 = 8 * ((v21 >> 6) + ((v21 & 0x3F) != 0) + 2);
  v23 = (unsigned int)v22;
  v24 = v22 + 290;
  v60 = v23;
  if ( v24 <= 0x122 )
    goto LABEL_72;
  if ( v20 )
  {
    if ( v24 + v20 <= v24 )
      goto LABEL_72;
    v24 += v20;
  }
  v25 = (*(unsigned __int16 *)v6 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  v26 = v25 + v24;
  if ( v25 + v24 <= v24 )
  {
LABEL_72:
    v56 = -1073741701;
    goto LABEL_74;
  }
  if ( (_DWORD)NumberOfSections )
  {
    if ( v26 + 4LL * (unsigned int)NumberOfSections > v26 )
    {
      v26 += 4LL * (unsigned int)NumberOfSections;
      goto LABEL_11;
    }
    goto LABEL_72;
  }
LABEL_11:
  v64 = ExAllocatePoolWithTag(NonPagedPoolNx, v26, 0x644C6D4Du);
  v11 = v64;
  if ( !v64
    || (v27 = *(_QWORD *)(a1 + 112)) != 0
    && (v28 = MiSectionControlArea(v27),
        v57 = (*(_DWORD *)(*(_QWORD *)v28 + 8LL) >> 12)
            + (unsigned int)((*(_DWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFF) != 0),
        !(unsigned int)MiChargeResident(&MiSystemPartition, (unsigned int)v57, 0LL)) )
  {
    v56 = -1073741670;
LABEL_74:
    ExFreePoolWithTag(v13, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    return v56;
  }
  memset(v64, 0, v26);
  v29 = v64 + 10;
  *((_QWORD *)v64 + 33) = 0LL;
  v30 = (char *)v64 + v60 + 288;
  v31 = &v30[v20];
  *((_QWORD *)v64 + 34) = v64 + 18;
  v32 = v69 == 0;
  *((_QWORD *)v64 + 32) = v30;
  *((_QWORD *)v64 + 27) = v57;
  if ( !v32 )
    *((_QWORD *)v64 + 28) = &v31[v25];
  *v64 = *(_OWORD *)a1;
  v64[1] = *(_OWORD *)(a1 + 16);
  v64[2] = *(_OWORD *)(a1 + 32);
  v64[3] = *(_OWORD *)(a1 + 48);
  v64[4] = *(_OWORD *)(a1 + 64);
  v64[5] = *(_OWORD *)(a1 + 80);
  v64[6] = *(_OWORD *)(a1 + 96);
  v64[7] = *(_OWORD *)(a1 + 112);
  v64[8] = *(_OWORD *)(a1 + 128);
  v64[9] = *(_OWORD *)(a1 + 144);
  if ( v16->OptionalHeader.MajorOperatingSystemVersion >= 5u && v16->OptionalHeader.MajorImageVersion >= 5u )
    *((_DWORD *)v64 + 26) |= 0x8000000u;
  if ( (v16->OptionalHeader.DllCharacteristics & 0x80) != 0 )
    *((_DWORD *)v64 + 26) |= 0x20u;
  *((_QWORD *)v64 + 12) = v31;
  *((_WORD *)v64 + 44) = *(_WORD *)a2;
  *((_WORD *)v64 + 45) = *(_WORD *)a2;
  memmove(v31, a2[1], *(unsigned __int16 *)a2);
  v33 = v59;
  *(_WORD *)(*((_QWORD *)v64 + 12) + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1)) = 0;
  *((_QWORD *)v64 + 5) = 0LL;
  *(_OWORD *)((char *)v64 + 72) = v65;
  if ( v59 )
  {
    *((_DWORD *)v64 + 26) |= 0x20000000u;
    *((_QWORD *)v64 + 5) = v30;
    *(_DWORD *)v30 = 84302;
    *((_DWORD *)v30 + 1) = v20;
    *((_WORD *)v30 + 4) = v16->FileHeader.Machine;
    *((_WORD *)v30 + 5) = v16->FileHeader.Characteristics;
    *((_DWORD *)v30 + 3) = v16->FileHeader.TimeDateStamp;
    *((_DWORD *)v30 + 4) = v16->OptionalHeader.CheckSum;
    *((_DWORD *)v30 + 5) = v16->OptionalHeader.SizeOfImage;
    *((_QWORD *)v30 + 3) = v63;
    if ( v19 )
    {
      memmove(v30 + 32, v19, v62->Size);
      v47 = v62->Size;
      v58 = 0;
      v48 = 0;
      if ( v47 / 0x1C )
      {
        v49 = 0LL;
        v61 = 0LL;
        v50 = (unsigned int *)(v19 + 16);
        do
        {
          v51 = v50[1];
          v52 = *v50;
          v69 = v47;
          if ( (_DWORD)v51
            && (v53 = v16->OptionalHeader.SizeOfImage, (unsigned int)v51 < v53)
            && v52 + (unsigned int)v51 > (unsigned int)v51
            && v52 + (unsigned int)v51 < v53 )
          {
            memmove(&v30[(unsigned int)v47 + 32], (const void *)(v63 + v51), v52);
            v49 = v61;
            LODWORD(v47) = v52 + v47;
            v48 = v58;
          }
          else
          {
            v69 = 0;
          }
          ++v48;
          v54 = 28 * v49;
          v49 = v48;
          v50 += 7;
          v58 = v48;
          v61 = v48;
          *(_DWORD *)&v30[v54 + 52] = v69;
          v55 = v62->Size * (unsigned __int128)0x2492492492492493uLL;
        }
        while ( v48 < (*((_QWORD *)&v55 + 1) + (((unsigned __int64)v62->Size - *((_QWORD *)&v55 + 1)) >> 1)) >> 4 );
        v11 = v64;
        v33 = v59;
        v29 = v64 + 10;
      }
    }
  }
  *((_QWORD *)v11 + 7) = v63 + v16->OptionalHeader.AddressOfEntryPoint;
  *((_DWORD *)v11 + 30) = v16->OptionalHeader.CheckSum;
  if ( v27 )
  {
    v34 = MiSectionControlArea(v27);
    v35 = *((_WORD *)v11 + 55) & 0xFFF0 | (*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 4);
    *((_WORD *)v11 + 55) = v35;
    *((_WORD *)v11 + 55) = v35 & 0xFF8F | (16 * ((*(_BYTE *)(*(_QWORD *)v34 + 15LL) >> 1) & 7));
  }
  else
  {
    v34 = 0LL;
  }
  *((_DWORD *)v11 + 38) = v16->OptionalHeader.SizeOfImage;
  *((_DWORD *)v11 + 39) = v16->FileHeader.TimeDateStamp;
  MiCaptureImageExceptionValues(v11);
  MiLockdownSections(v11);
  if ( v27 )
    v36 = *(unsigned int *)(*(_QWORD *)v34 + 8LL);
  else
    v36 = (unsigned __int64)*((unsigned int *)v11 + 16) >> 12;
  if ( !v33 )
  {
    *((_QWORD *)v29 + 5) = v36;
    *((_QWORD *)v29 + 6) = v36;
  }
  if ( !a5 )
    *((_DWORD *)v29 + 9) |= 1u;
  if ( (dword_140541174 & 1) != 0 || (v70 & 2) != 0 )
    *((_DWORD *)v29 + 9) |= 0x10u;
  *((_QWORD *)v11 + 16) = 0LL;
  if ( ExCovMaxPagedPoolToUse )
  {
    SectionInfo = ExpCovGetSectionInfo(*((_QWORD *)v11 + 6), &v69);
    if ( SectionInfo )
    {
      *((_DWORD *)v11 + 31) = v69;
      *((_QWORD *)v11 + 16) = SectionInfo;
      DbgPrintEx(0x7Eu, 2u, "COV: Stored coverage section in PsLoadedModuleList at 0x%p\n", v11);
      ExCovReadjustUnloadedModuleEntry(v11, 1LL);
    }
  }
  MiProcessLoaderEntry((unsigned __int64 *)v11, 1);
  if ( !v33 )
  {
    if ( v27 )
    {
      *((_DWORD *)v29 + 8) = -2;
      *((_QWORD *)v29 + 2) = v63 | 3;
      *((_QWORD *)v29 + 3) = (v36 << 12) + v63 - 1;
      v66[0] = v34;
      MiManageSubsectionView((__int64 *)v66, v29, 3);
    }
  }
  *a6 = v11;
  return 0LL;
}
