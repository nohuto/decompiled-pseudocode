/*
 * XREFs of MiGetSystemAddressForImage @ 0x140684100
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140173788 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176B6C (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     MiBytesToMapSystemImage @ 0x14065339C (MiBytesToMapSystemImage.c)
 *     MiReservePrivilegedPtes @ 0x1406842F4 (MiReservePrivilegedPtes.c)
 *     MiImageSuitableForSystem @ 0x14068431C (MiImageSuitableForSystem.c)
 *     MiSelectSystemImageAddress @ 0x140684A28 (MiSelectSystemImageAddress.c)
 *     MiReturnSystemImageAddress @ 0x14070F2A0 (MiReturnSystemImageAddress.c)
 *     MiReleasePrivilegedPtes @ 0x140710818 (MiReleasePrivilegedPtes.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // r12
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  int v9; // r9d
  PVOID *v10; // r8
  PVOID *v11; // r11
  __int64 v12; // rcx
  _DWORD *v13; // r10
  int v14; // r13d
  int v15; // r12d
  unsigned int v17; // ebx
  unsigned __int64 v18; // rax
  _DWORD *v19; // rbx
  PIMAGE_NT_HEADERS v20; // rdx
  unsigned int LoaderFlags; // ecx
  unsigned int NumberOfRvaAndSizes; // eax
  unsigned int v23; // eax
  int SizeOfHeapReserve; // ecx
  unsigned int SizeOfHeapReserve_high; // eax
  int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-134h]
  unsigned int v31; // [rsp+38h] [rbp-130h]
  __int64 PteAddress; // [rsp+40h] [rbp-128h]
  int v33; // [rsp+48h] [rbp-120h]
  int v34; // [rsp+4Ch] [rbp-11Ch]
  int v35; // [rsp+50h] [rbp-118h]
  unsigned __int64 v36; // [rsp+58h] [rbp-110h]
  PVOID BaseAddress[10]; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 ImageBase_high; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int FileAlignment; // [rsp+B8h] [rbp-B0h]
  unsigned int SectionAlignment; // [rsp+BCh] [rbp-ACh]
  unsigned int SizeOfImage; // [rsp+C0h] [rbp-A8h]
  int v42; // [rsp+C4h] [rbp-A4h]
  unsigned int SizeOfHeaders; // [rsp+C8h] [rbp-A0h]
  unsigned int AddressOfEntryPoint; // [rsp+CCh] [rbp-9Ch]
  unsigned __int64 SizeOfStackReserve_low; // [rsp+D0h] [rbp-98h]
  unsigned __int64 SizeOfStackReserve_high; // [rsp+D8h] [rbp-90h]
  __int16 Magic; // [rsp+E0h] [rbp-88h]
  unsigned __int16 Subsystem; // [rsp+E2h] [rbp-86h]
  unsigned __int16 MajorSubsystemVersion; // [rsp+E4h] [rbp-84h]
  unsigned __int16 MinorSubsystemVersion; // [rsp+E6h] [rbp-82h]
  unsigned __int16 MajorOperatingSystemVersion; // [rsp+E8h] [rbp-80h]
  unsigned __int16 MinorOperatingSystemVersion; // [rsp+EAh] [rbp-7Eh]
  unsigned __int16 DllCharacteristics; // [rsp+ECh] [rbp-7Ch]
  unsigned int CheckSum; // [rsp+F0h] [rbp-78h]
  unsigned int SizeOfCode; // [rsp+F4h] [rbp-74h]
  unsigned int VirtualAddress; // [rsp+F8h] [rbp-70h]
  unsigned int Size; // [rsp+FCh] [rbp-6Ch]
  _IMAGE_DATA_DIRECTORY v58; // [rsp+100h] [rbp-68h]
  _IMAGE_DATA_DIRECTORY v59; // [rsp+108h] [rbp-60h]
  __int64 v60; // [rsp+110h] [rbp-58h]
  char v61; // [rsp+118h] [rbp-50h]

  v3 = a2;
  v35 = a2;
  *a3 = 1;
  v4 = MiSectionControlArea(a1);
  v36 = v4;
  v5 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v4 + 8LL) << 12));
  if ( !v5 )
    return 0LL;
  v7 = v5 >> 12;
  v34 = v5 >> 12;
  v8 = MiImageSuitableForSystem(v4, &v29, v6, 0LL);
  if ( v8 )
  {
    v10 = (PVOID *)PsLoadedModuleList;
    v11 = &PsLoadedModuleList;
    while ( v10 != v11 )
    {
      v12 = (__int64)v10[14];
      if ( v12 && v4 == MiSectionControlArea(v12) )
      {
        *v13 = 0;
        v9 = 1;
        break;
      }
      v10 = (PVOID *)*v10;
    }
  }
  if ( v8 )
  {
    if ( v9 != 1 && (v3 & 2) == 0 )
    {
      v14 = v3 & 1;
      if ( ((v3 & 1) == 0 || (unsigned int)MiGetSystemRegionType(v8) == 1)
        && ((v3 & 1) != 0 || (unsigned int)MiGetSystemRegionType(v8) != 1) )
      {
        PteAddress = MiGetPteAddress(v8);
        if ( (int)MiReservePrivilegedPtes(v4, PteAddress, (unsigned int)v7, v3 & 0x20) >= 0 )
        {
          v15 = 0;
          goto LABEL_17;
        }
        return 0LL;
      }
    }
  }
  v14 = v3 & 1;
  LODWORD(PteAddress) = v14;
  v31 = v14 + 1;
  if ( v29 )
  {
    v17 = v14 + 1;
    goto LABEL_21;
  }
  v33 = MiMapImageInSystemSpace((__int64 *)v4, 3, (__int64)BaseAddress);
  if ( v33 < 0 )
    return 0LL;
  v19 = BaseAddress[0];
  v20 = RtlImageNtHeader(BaseAddress[0]);
  v30 = v19[15] + 48;
  if ( v20->OptionalHeader.Magic != 523 )
  {
    Magic = v20->OptionalHeader.Magic;
    FileAlignment = v20->OptionalHeader.FileAlignment;
    SectionAlignment = v20->OptionalHeader.SectionAlignment;
    SizeOfImage = v20->OptionalHeader.SizeOfImage;
    SizeOfHeapReserve = v20->OptionalHeader.SizeOfHeapReserve;
    v42 = SizeOfHeapReserve;
    ImageBase_high = HIDWORD(v20->OptionalHeader.ImageBase);
    SizeOfHeaders = v20->OptionalHeader.SizeOfHeaders;
    AddressOfEntryPoint = v20->OptionalHeader.AddressOfEntryPoint;
    SizeOfStackReserve_low = LODWORD(v20->OptionalHeader.SizeOfStackReserve);
    SizeOfStackReserve_high = HIDWORD(v20->OptionalHeader.SizeOfStackReserve);
    Subsystem = v20->OptionalHeader.Subsystem;
    MajorSubsystemVersion = v20->OptionalHeader.MajorSubsystemVersion;
    MinorSubsystemVersion = v20->OptionalHeader.MinorSubsystemVersion;
    MajorOperatingSystemVersion = v20->OptionalHeader.MajorOperatingSystemVersion;
    MinorOperatingSystemVersion = v20->OptionalHeader.MinorOperatingSystemVersion;
    DllCharacteristics = v20->OptionalHeader.DllCharacteristics;
    CheckSum = v20->OptionalHeader.CheckSum;
    SizeOfCode = v20->OptionalHeader.SizeOfCode;
    v61 = 0;
    SizeOfHeapReserve_high = HIDWORD(v20->OptionalHeader.SizeOfHeapReserve);
    if ( SizeOfHeapReserve_high > 6 && v20->OptionalHeader.DataDirectory[4].VirtualAddress )
    {
      v61 = 1;
      SizeOfHeapReserve_high = HIDWORD(v20->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high > 0xC )
    {
      VirtualAddress = v20->OptionalHeader.DataDirectory[10].VirtualAddress;
      Size = v20->OptionalHeader.DataDirectory[10].Size;
      SizeOfHeapReserve_high = HIDWORD(v20->OptionalHeader.SizeOfHeapReserve);
    }
    if ( SizeOfHeapReserve_high <= 0xE )
    {
      v58 = 0LL;
    }
    else
    {
      v58 = v20->OptionalHeader.DataDirectory[12];
      if ( v20->OptionalHeader.DataDirectory[12].VirtualAddress && v20->OptionalHeader.DataDirectory[12].Size )
        v42 = SizeOfHeapReserve | 1;
    }
    if ( HIDWORD(v20->OptionalHeader.SizeOfHeapReserve) <= 5 )
      v59 = 0LL;
    else
      v59 = v20->OptionalHeader.DataDirectory[3];
    if ( HIDWORD(v20->OptionalHeader.SizeOfHeapReserve) > 0xA )
    {
      LODWORD(v60) = v20->OptionalHeader.DataDirectory[8].VirtualAddress;
      v23 = v20->OptionalHeader.DataDirectory[8].Size;
      goto LABEL_62;
    }
LABEL_63:
    v60 = 0LL;
    goto LABEL_64;
  }
  Magic = 523;
  FileAlignment = v20->OptionalHeader.FileAlignment;
  SectionAlignment = v20->OptionalHeader.SectionAlignment;
  SizeOfImage = v20->OptionalHeader.SizeOfImage;
  LoaderFlags = v20->OptionalHeader.LoaderFlags;
  v42 = LoaderFlags;
  ImageBase_high = v20->OptionalHeader.ImageBase;
  SizeOfHeaders = v20->OptionalHeader.SizeOfHeaders;
  AddressOfEntryPoint = v20->OptionalHeader.AddressOfEntryPoint;
  SizeOfStackReserve_low = v20->OptionalHeader.SizeOfStackReserve;
  SizeOfStackReserve_high = v20->OptionalHeader.SizeOfStackCommit;
  Subsystem = v20->OptionalHeader.Subsystem;
  MajorSubsystemVersion = v20->OptionalHeader.MajorSubsystemVersion;
  MinorSubsystemVersion = v20->OptionalHeader.MinorSubsystemVersion;
  MajorOperatingSystemVersion = v20->OptionalHeader.MajorOperatingSystemVersion;
  MinorOperatingSystemVersion = v20->OptionalHeader.MinorOperatingSystemVersion;
  DllCharacteristics = v20->OptionalHeader.DllCharacteristics;
  CheckSum = v20->OptionalHeader.CheckSum;
  SizeOfCode = v20->OptionalHeader.SizeOfCode;
  v61 = 0;
  NumberOfRvaAndSizes = v20->OptionalHeader.NumberOfRvaAndSizes;
  if ( NumberOfRvaAndSizes > 6 && v20->OptionalHeader.DataDirectory[6].VirtualAddress )
  {
    v61 = 1;
    NumberOfRvaAndSizes = v20->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes > 0xC )
  {
    VirtualAddress = v20->OptionalHeader.DataDirectory[12].VirtualAddress;
    Size = v20->OptionalHeader.DataDirectory[12].Size;
    NumberOfRvaAndSizes = v20->OptionalHeader.NumberOfRvaAndSizes;
  }
  if ( NumberOfRvaAndSizes <= 0xE )
  {
    v58 = 0LL;
  }
  else
  {
    v58 = v20->OptionalHeader.DataDirectory[14];
    if ( v20->OptionalHeader.DataDirectory[14].VirtualAddress && v20->OptionalHeader.DataDirectory[14].Size )
      v42 = LoaderFlags | 1;
  }
  if ( v20->OptionalHeader.NumberOfRvaAndSizes <= 5 )
    v59 = 0LL;
  else
    v59 = v20->OptionalHeader.DataDirectory[5];
  if ( v20->OptionalHeader.NumberOfRvaAndSizes <= 0xA )
    goto LABEL_63;
  LODWORD(v60) = v20->OptionalHeader.DataDirectory[10].VirtualAddress;
  v23 = v20->OptionalHeader.DataDirectory[10].Size;
LABEL_62:
  HIDWORD(v60) = v23;
LABEL_64:
  v26 = v33;
  MiUnmapImageInSystemSpace((unsigned __int64 *)BaseAddress);
  if ( v26 < 0 )
    return 0LL;
  v17 = v31;
  if ( (int)MiRelocateImage(*(_QWORD *)v4, (__int64)&ImageBase_high, v30, v31, -1LL, 1u) < 0 )
    return 0LL;
  MiImageSuitableForSystem(v4, &v29, v27, v28);
  if ( !v29 && (*(_DWORD *)(v4 + 56) & 0x40000000) == 0 )
    return 0LL;
LABEL_21:
  v18 = MiSelectSystemImageAddress(v17, (unsigned int)v7);
  v8 = v18;
  if ( v18 )
  {
    PteAddress = MiGetPteAddress(v18);
    if ( (int)MiReservePrivilegedPtes(v4, PteAddress, (unsigned int)v7, v3 & 0x20) < 0 )
    {
LABEL_70:
      MiReturnSystemImageAddress(v8, (unsigned int)((_DWORD)v7 << 12));
      return 0LL;
    }
    v15 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((_DWORD *)v4, v8) )
    {
LABEL_69:
      MiReleasePrivilegedPtes(PteAddress, (unsigned int)v7);
      goto LABEL_70;
    }
LABEL_17:
    if ( !v14 || (int)MiSessionInsertImage(v8, (__int64 *)v4) >= 0 )
      return v8;
    if ( v15 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v8, 1);
    goto LABEL_69;
  }
  return 0LL;
}
