/*
 * XREFs of MiSnapDriverRange @ 0x140654DA0
 * Callers:
 *     MiCheckForDiscardableLongJumpTable @ 0x1402C3530 (MiCheckForDiscardableLongJumpTable.c)
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x1406C8A2C (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x1406CC9F0 (MiDisablePagingOfDriver.c)
 *     MiBackSingleImageWithPagefile @ 0x14070E700 (MiBackSingleImageWithPagefile.c)
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 *     MiEnablePagingOfDriver @ 0x14072C760 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x1409F8A3C (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmImageSectionPagable @ 0x1406551AC (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  unsigned int v10; // esi
  void *v11; // r13
  PIMAGE_NT_HEADERS v12; // rax
  PIMAGE_NT_HEADERS v13; // rdx
  unsigned __int64 v14; // r9
  unsigned int NumberOfSections; // r8d
  unsigned __int64 SectionAlignment; // r12
  __int64 SizeOfOptionalHeader; // r11
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v19; // r15
  _DWORD *v20; // rdi
  unsigned int v21; // r13d
  int v22; // edx
  unsigned int v23; // ebx
  int v24; // eax
  bool v25; // cf
  void *v26; // r13
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r10
  __int16 v31; // dx
  unsigned int v32; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 v35; // rax
  void *v36; // [rsp+20h] [rbp-B8h]
  unsigned int v37; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+30h] [rbp-A8h]
  __int64 v40; // [rsp+40h] [rbp-98h]
  PIMAGE_NT_HEADERS v43; // [rsp+68h] [rbp-70h]
  _DWORD v44[10]; // [rsp+70h] [rbp-68h] BYREF

  v6 = a3;
  memset(v44, 0, sizeof(v44));
  v10 = 0;
  *a5 = 0LL;
  *a6 = 0LL;
  v11 = *(void **)(a1 + 48);
  v36 = v11;
  v12 = RtlImageNtHeader(v11);
  v43 = v12;
  v13 = v12;
  v14 = a4 - (_QWORD)v11;
  NumberOfSections = v12->FileHeader.NumberOfSections;
  SectionAlignment = v12->OptionalHeader.SectionAlignment;
  v39 = a4 - (_QWORD)v11;
  if ( SectionAlignment > 0x1000 )
    SectionAlignment = 4096LL;
  v37 = v12->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v12->FileHeader.SizeOfOptionalHeader;
  PteAddress = 0LL;
  v40 = SizeOfOptionalHeader;
  v19 = 0LL;
  v44[9] = 0x40000000;
  v44[4] = (_DWORD)v12 + SizeOfOptionalHeader + 40 * NumberOfSections - (_DWORD)v11 + 24;
  v44[2] = v44[4];
  while ( 1 )
  {
    if ( a2 )
      v20 = (_DWORD *)((char *)&v13->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v20 = v44;
    v21 = v20[4];
    if ( v21 < v20[2] )
      v21 = v20[2];
    if ( a4 )
      break;
    if ( (v6 & 8) != 0 )
    {
      v22 = (v20[9] & 0xE0000000) != 0;
      goto LABEL_22;
    }
    if ( (v6 & 1) != 0 )
    {
      v22 = MmImageSectionPagable(v20);
      goto LABEL_21;
    }
    if ( (v6 & 4) != 0 )
    {
      v23 = v20[9] & 0xE0000000;
      v24 = MmImageSectionPagable(v20);
      v25 = v23 != 0;
      v6 = a3;
      v22 = v25 && v24 == 0;
LABEL_21:
      NumberOfSections = v37;
      v14 = v39;
      SizeOfOptionalHeader = v40;
      goto LABEL_22;
    }
    if ( (v6 & 0x10) != 0 )
    {
      v22 = v20[9] & 0x20000000;
      goto LABEL_22;
    }
    if ( (v6 & 0x20) == 0 )
    {
      if ( !*v20 && v20 != v44 )
        return 0LL;
      v22 = v20[9] & 0x2000000;
      if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *v20 == 1414090313 )
        v22 = 0;
LABEL_22:
      if ( !v22 )
        goto LABEL_23;
      goto LABEL_27;
    }
    if ( *(_BYTE *)v20 != 80
      || *((_BYTE *)v20 + 1) != 65
      || *((_BYTE *)v20 + 2) != 71
      || *((_BYTE *)v20 + 3) != 69
      || *((_BYTE *)v20 + 4) != 75
      || *((_BYTE *)v20 + 5) != 68 )
    {
      goto LABEL_23;
    }
LABEL_27:
    if ( PteAddress )
      v27 = v20[3];
    else
      PteAddress = MiGetPteAddress(((unsigned __int64)v36 + (unsigned int)v20[3] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v28 = v21;
    v26 = v36;
    v29 = MiGetPteAddress(-(__int64)SectionAlignment & ((unsigned __int64)v36 + SectionAlignment + v28 + v27 - 1));
    v19 = v29;
    if ( (v31 & 0xFFF) == 0 || (v6 & 0xC) == 0 || SectionAlignment >= 0x1000 )
      v19 = v29 - 8;
    if ( v30 > 0x1000 )
      goto LABEL_24;
LABEL_25:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v32 = v20[4];
        if ( v32 < v20[2] )
          v32 = v20[2];
        v33 = MiGetPteAddress(((-(__int64)SectionAlignment & ((unsigned __int64)v26
                                                            + SectionAlignment
                                                            + v32
                                                            + (unsigned int)v20[3]
                                                            - 1))
                             + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v33 )
        {
          *a5 = PteAddress;
          *a6 = v33;
        }
      }
      return 0LL;
    }
    v13 = v43;
  }
  v35 = (unsigned int)v20[3];
  if ( v14 >= v35 && v14 < (unsigned int)v35 + v21 )
    goto LABEL_27;
LABEL_23:
  v26 = v36;
LABEL_24:
  if ( !PteAddress )
    goto LABEL_25;
  if ( PteAddress > v19 )
  {
    PteAddress = 0LL;
    goto LABEL_25;
  }
  *a5 = PteAddress;
  *a6 = v19;
  if ( a2 + 1 <= NumberOfSections )
    return a2 + 1;
  return v10;
}
