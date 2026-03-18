/*
 * XREFs of MiGetSystemAddressForImage @ 0x140712478
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D08C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14017AF34 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140180C9C (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiMapImageInSystemSpace @ 0x140643C44 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14064437C (MiUnmapImageInSystemSpace.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiBytesToMapSystemImage @ 0x1406A6310 (MiBytesToMapSystemImage.c)
 *     MiReservePrivilegedPtes @ 0x140712694 (MiReservePrivilegedPtes.c)
 *     MiImageSuitableForSystem @ 0x1407126BC (MiImageSuitableForSystem.c)
 *     MiSelectSystemImageAddress @ 0x140712F0C (MiSelectSystemImageAddress.c)
 *     MiReturnSystemImageAddress @ 0x140746F00 (MiReturnSystemImageAddress.c)
 *     MiReleasePrivilegedPtes @ 0x140749928 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v4; // r13
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // r9d
  PVOID *v12; // r8
  PVOID *v13; // r10
  __int64 v14; // rcx
  int v15; // r15d
  int v16; // r13d
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  _DWORD *v20; // rbx
  PIMAGE_NT_HEADERS v21; // rdx
  unsigned int LoaderFlags; // ecx
  unsigned int NumberOfRvaAndSizes; // eax
  unsigned int Size; // eax
  int SizeOfHeapReserve; // ecx
  unsigned int SizeOfHeapReserve_high; // eax
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-134h]
  int v32; // [rsp+38h] [rbp-130h]
  __int64 PteAddress; // [rsp+40h] [rbp-128h]
  int v34; // [rsp+48h] [rbp-120h]
  int v35; // [rsp+4Ch] [rbp-11Ch]
  int v36; // [rsp+50h] [rbp-118h]
  unsigned __int64 v37; // [rsp+58h] [rbp-110h]
  PVOID BaseAddress[10]; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v39[14]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = a2;
  v36 = a2;
  memset(v39, 0, sizeof(v39));
  memset(BaseAddress, 0, sizeof(BaseAddress));
  *a3 = 1;
  v6 = MiSectionControlArea(a1);
  v37 = v6;
  v7 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v6 + 8LL) << 12));
  if ( !v7 )
    return 0LL;
  v9 = v7 >> 12;
  v35 = v7 >> 12;
  v10 = MiImageSuitableForSystem(v6, &v30, v8, 0LL);
  if ( v10 )
  {
    v12 = (PVOID *)PsLoadedModuleList;
    v13 = &PsLoadedModuleList;
    while ( v12 != v13 )
    {
      v14 = (__int64)v12[14];
      if ( v14 && v6 == MiSectionControlArea(v14) )
      {
        *a3 = 0;
        v11 = 1;
        break;
      }
      v12 = (PVOID *)*v12;
    }
  }
  if ( v10 )
  {
    if ( v11 != 1 && (v4 & 2) == 0 )
    {
      v15 = v4 & 1;
      if ( ((v4 & 1) == 0 || (unsigned int)MiGetSystemRegionType(v10) == 1)
        && ((v4 & 1) != 0 || (unsigned int)MiGetSystemRegionType(v10) != 1) )
      {
        PteAddress = MiGetPteAddress(v10);
        if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v9, v4 & 0x20) >= 0 )
        {
          v16 = 0;
          goto LABEL_17;
        }
        return 0LL;
      }
    }
  }
  v15 = v4 & 1;
  LODWORD(PteAddress) = v15;
  v32 = v15 + 1;
  if ( v30 )
  {
    v18 = v15 + 1;
    goto LABEL_21;
  }
  v34 = MiMapImageInSystemSpace((__int64 *)v6, 3, (__int64)BaseAddress);
  if ( v34 < 0 )
    return 0LL;
  v20 = BaseAddress[0];
  v21 = RtlImageNtHeader(BaseAddress[0]);
  v31 = v20[15] + 48;
  if ( v21->OptionalHeader.Magic != 523 )
  {
    LOWORD(v39[6]) = v21->OptionalHeader.Magic;
    LODWORD(v39[1]) = v21->OptionalHeader.FileAlignment;
    HIDWORD(v39[1]) = v21->OptionalHeader.SectionAlignment;
    LODWORD(v39[2]) = v21->OptionalHeader.SizeOfImage;
    SizeOfHeapReserve = v21->OptionalHeader.SizeOfHeapReserve;
    HIDWORD(v39[2]) = SizeOfHeapReserve;
    v39[0] = HIDWORD(v21->OptionalHeader.ImageBase);
    LODWORD(v39[3]) = v21->OptionalHeader.SizeOfHeaders;
    HIDWORD(v39[3]) = v21->OptionalHeader.AddressOfEntryPoint;
    v39[4] = LODWORD(v21->OptionalHeader.SizeOfStackReserve);
    v39[5] = HIDWORD(v21->OptionalHeader.SizeOfStackReserve);
    WORD1(v39[6]) = v21->OptionalHeader.Subsystem;
    HIDWORD(v39[6]) = *(_DWORD *)&v21->OptionalHeader.MajorSubsystemVersion;
    LODWORD(v39[7]) = *(_DWORD *)&v21->OptionalHeader.MajorOperatingSystemVersion;
    WORD2(v39[7]) = v21->OptionalHeader.DllCharacteristics;
    LODWORD(v39[8]) = v21->OptionalHeader.CheckSum;
    HIDWORD(v39[8]) = v21->OptionalHeader.SizeOfCode;
    LOBYTE(v39[13]) = 0;
    SizeOfHeapReserve_high = HIDWORD(v21->OptionalHeader.SizeOfHeapReserve);
    if ( SizeOfHeapReserve_high > 6 && v21->OptionalHeader.DataDirectory[4].VirtualAddress )
    {
      LOBYTE(v39[13]) = 1;
      SizeOfHeapReserve_high = HIDWORD(v21->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high > 0xC )
    {
      v39[9] = v21->OptionalHeader.DataDirectory[10];
      SizeOfHeapReserve_high = HIDWORD(v21->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high <= 0xE )
    {
      v39[10] = 0LL;
    }
    else
    {
      v39[10] = v21->OptionalHeader.DataDirectory[12];
      if ( v21->OptionalHeader.DataDirectory[12].VirtualAddress && v21->OptionalHeader.DataDirectory[12].Size )
        HIDWORD(v39[2]) = SizeOfHeapReserve | 1;
    }
    if ( HIDWORD(v21->OptionalHeader.SizeOfHeapReserve) <= 5 )
      v39[11] = 0LL;
    else
      v39[11] = v21->OptionalHeader.DataDirectory[3];
    if ( HIDWORD(v21->OptionalHeader.SizeOfHeapReserve) > 0xA )
    {
      LODWORD(v39[12]) = v21->OptionalHeader.DataDirectory[8].VirtualAddress;
      Size = v21->OptionalHeader.DataDirectory[8].Size;
      goto LABEL_64;
    }
LABEL_65:
    v39[12] = 0LL;
    goto LABEL_66;
  }
  LOWORD(v39[6]) = 523;
  LODWORD(v39[1]) = v21->OptionalHeader.FileAlignment;
  HIDWORD(v39[1]) = v21->OptionalHeader.SectionAlignment;
  LODWORD(v39[2]) = v21->OptionalHeader.SizeOfImage;
  LoaderFlags = v21->OptionalHeader.LoaderFlags;
  HIDWORD(v39[2]) = LoaderFlags;
  v39[0] = v21->OptionalHeader.ImageBase;
  LODWORD(v39[3]) = v21->OptionalHeader.SizeOfHeaders;
  HIDWORD(v39[3]) = v21->OptionalHeader.AddressOfEntryPoint;
  v39[4] = v21->OptionalHeader.SizeOfStackReserve;
  v39[5] = v21->OptionalHeader.SizeOfStackCommit;
  WORD1(v39[6]) = v21->OptionalHeader.Subsystem;
  HIDWORD(v39[6]) = *(_DWORD *)&v21->OptionalHeader.MajorSubsystemVersion;
  LODWORD(v39[7]) = *(_DWORD *)&v21->OptionalHeader.MajorOperatingSystemVersion;
  WORD2(v39[7]) = v21->OptionalHeader.DllCharacteristics;
  LODWORD(v39[8]) = v21->OptionalHeader.CheckSum;
  HIDWORD(v39[8]) = v21->OptionalHeader.SizeOfCode;
  LOBYTE(v39[13]) = 0;
  NumberOfRvaAndSizes = v21->OptionalHeader.NumberOfRvaAndSizes;
  if ( NumberOfRvaAndSizes > 6 && v21->OptionalHeader.DataDirectory[6].VirtualAddress )
  {
    LOBYTE(v39[13]) = 1;
    NumberOfRvaAndSizes = v21->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes > 0xC )
  {
    v39[9] = v21->OptionalHeader.DataDirectory[12];
    NumberOfRvaAndSizes = v21->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes <= 0xE )
  {
    v39[10] = 0LL;
  }
  else
  {
    v39[10] = v21->OptionalHeader.DataDirectory[14];
    if ( v21->OptionalHeader.DataDirectory[14].VirtualAddress && v21->OptionalHeader.DataDirectory[14].Size )
      HIDWORD(v39[2]) = LoaderFlags | 1;
  }
  if ( v21->OptionalHeader.NumberOfRvaAndSizes <= 5 )
    v39[11] = 0LL;
  else
    v39[11] = v21->OptionalHeader.DataDirectory[5];
  if ( v21->OptionalHeader.NumberOfRvaAndSizes <= 0xA )
    goto LABEL_65;
  LODWORD(v39[12]) = v21->OptionalHeader.DataDirectory[10].VirtualAddress;
  Size = v21->OptionalHeader.DataDirectory[10].Size;
LABEL_64:
  HIDWORD(v39[12]) = Size;
LABEL_66:
  v27 = v34;
  MiUnmapImageInSystemSpace((__int64)BaseAddress);
  if ( v27 < 0 )
    return 0LL;
  v18 = v32;
  if ( (int)MiRelocateImage(*(_QWORD *)v6, (__int64)v39, v31, v32, -1LL, 1) < 0 )
    return 0LL;
  MiImageSuitableForSystem(v6, &v30, v28, v29);
  if ( !v30 && (*(_DWORD *)(v6 + 56) & 0x40000000) == 0 )
    return 0LL;
LABEL_21:
  v19 = MiSelectSystemImageAddress(v18, (unsigned int)v9);
  v10 = v19;
  if ( v19 )
  {
    PteAddress = MiGetPteAddress(v19);
    if ( (int)MiReservePrivilegedPtes(v6, PteAddress, (unsigned int)v9, v4 & 0x20) < 0 )
    {
LABEL_30:
      MiReturnSystemImageAddress(v10, (unsigned int)((_DWORD)v9 << 12));
      return 0LL;
    }
    v16 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v6, v10) )
    {
LABEL_29:
      MiReleasePrivilegedPtes(PteAddress, (unsigned int)v9);
      goto LABEL_30;
    }
LABEL_17:
    if ( !v15 || (int)MiSessionInsertImage(v10, (__int64 *)v6) >= 0 )
      return v10;
    if ( v16 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v10, 1);
    goto LABEL_29;
  }
  return 0LL;
}
