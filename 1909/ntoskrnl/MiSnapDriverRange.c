/*
 * XREFs of MiSnapDriverRange @ 0x140712BC8
 * Callers:
 *     MiCheckForDiscardableLongJumpTable @ 0x1402DD330 (MiCheckForDiscardableLongJumpTable.c)
 *     MiHandleDriverNonPagedSections @ 0x140710564 (MiHandleDriverNonPagedSections.c)
 *     MiFreeDriverInitialization @ 0x140712878 (MiFreeDriverInitialization.c)
 *     MiDisablePagingOfDriver @ 0x140712B2C (MiDisablePagingOfDriver.c)
 *     MiBackSingleImageWithPagefile @ 0x14073BB98 (MiBackSingleImageWithPagefile.c)
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 *     MiEnablePagingOfDriver @ 0x14074F8AC (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x140A3D2DC (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     MmImageSectionPagable @ 0x1406A53FC (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  char v8; // bl
  void *v10; // r13
  PIMAGE_NT_HEADERS v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 SectionAlignment; // r10
  unsigned int NumberOfSections; // r8d
  unsigned __int64 v15; // r15
  __int64 SizeOfOptionalHeader; // r11
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v18; // r12
  __int64 *v19; // rdi
  unsigned int v20; // r13d
  int v21; // edx
  unsigned int v22; // ebx
  int v23; // eax
  bool v24; // cf
  void *v25; // r13
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r10
  __int16 v30; // dx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // rax
  void *v35; // [rsp+20h] [rbp-B8h]
  unsigned int v36; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+30h] [rbp-A8h]
  __int64 v39; // [rsp+40h] [rbp-98h]
  _IMAGE_NT_HEADERS64 *v42; // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+70h] [rbp-68h] BYREF
  int v44; // [rsp+78h] [rbp-60h]
  __int128 v45; // [rsp+7Ch] [rbp-5Ch]
  __int64 v46; // [rsp+8Ch] [rbp-4Ch]
  int v47; // [rsp+94h] [rbp-44h]

  v6 = 0;
  v43 = 0LL;
  *a5 = 0LL;
  v8 = a3;
  v45 = 0LL;
  *a6 = 0LL;
  v10 = *(void **)(a1 + 48);
  v46 = 0LL;
  v35 = v10;
  v11 = RtlImageNtHeader(v10);
  v42 = v11;
  v12 = a4 - (_QWORD)v10;
  SectionAlignment = v11->OptionalHeader.SectionAlignment;
  NumberOfSections = v11->FileHeader.NumberOfSections;
  v15 = (unsigned int)SectionAlignment;
  v38 = a4 - (_QWORD)v10;
  if ( SectionAlignment > 0x1000 )
    v15 = 4096LL;
  v36 = v11->FileHeader.NumberOfSections;
  if ( a2 > NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v11->FileHeader.SizeOfOptionalHeader;
  v39 = SizeOfOptionalHeader;
  PteAddress = 0LL;
  v47 = 0x40000000;
  v18 = 0LL;
  DWORD1(v45) = SizeOfOptionalHeader + 40 * NumberOfSections + (_DWORD)v11 + 24 - (_DWORD)v10;
  v44 = DWORD1(v45);
  while ( 1 )
  {
    if ( a2 )
      v19 = (__int64 *)((char *)&v11->OptionalHeader + 40 * a2 + SizeOfOptionalHeader - 40);
    else
      v19 = &v43;
    v20 = *((_DWORD *)v19 + 4);
    if ( v20 < *((_DWORD *)v19 + 2) )
      v20 = *((_DWORD *)v19 + 2);
    if ( a4 )
      break;
    if ( (v8 & 8) != 0 )
    {
      v21 = (*((_DWORD *)v19 + 9) & 0xE0000000) != 0;
      goto LABEL_22;
    }
    if ( (v8 & 1) != 0 )
    {
      v21 = MmImageSectionPagable((__int64)v19);
      goto LABEL_21;
    }
    if ( (v8 & 4) != 0 )
    {
      v22 = *((_DWORD *)v19 + 9) & 0xE0000000;
      v23 = MmImageSectionPagable((__int64)v19);
      v24 = v22 != 0;
      v8 = a3;
      v21 = v24 && v23 == 0;
LABEL_21:
      NumberOfSections = v36;
      v12 = v38;
      SizeOfOptionalHeader = v39;
      goto LABEL_22;
    }
    if ( (v8 & 0x10) != 0 )
    {
      v21 = *((_DWORD *)v19 + 9) & 0x20000000;
      goto LABEL_22;
    }
    if ( (v8 & 0x20) == 0 )
    {
      if ( !*(_DWORD *)v19 && v19 != &v43 )
        return 0LL;
      v21 = *((_DWORD *)v19 + 9) & 0x2000000;
      if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *(_DWORD *)v19 == 1414090313 )
        v21 = 0;
LABEL_22:
      if ( !v21 )
        goto LABEL_23;
      goto LABEL_27;
    }
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 75
      || *((_BYTE *)v19 + 5) != 68 )
    {
      goto LABEL_23;
    }
LABEL_27:
    if ( PteAddress )
      v26 = *((_DWORD *)v19 + 3);
    else
      PteAddress = MiGetPteAddress(((unsigned __int64)v35 + *((unsigned int *)v19 + 3) + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v27 = v20;
    v25 = v35;
    v28 = MiGetPteAddress(-(__int64)v15 & ((unsigned __int64)v35 + v15 + v27 + v26 - 1));
    v18 = v28;
    if ( (v30 & 0xFFF) == 0 || (v8 & 0xC) == 0 || v15 >= 0x1000 )
      v18 = v28 - 8;
    if ( v29 > 0x1000 )
      goto LABEL_24;
LABEL_25:
    if ( ++a2 > NumberOfSections )
    {
      if ( PteAddress )
      {
        v31 = *((_DWORD *)v19 + 4);
        if ( v31 < *((_DWORD *)v19 + 2) )
          v31 = *((_DWORD *)v19 + 2);
        v32 = MiGetPteAddress(((-(__int64)v15 & ((unsigned __int64)v25 + v15 + v31 + *((unsigned int *)v19 + 3) - 1))
                             + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v32 )
        {
          *a5 = PteAddress;
          *a6 = v32;
        }
      }
      return 0LL;
    }
    v11 = v42;
  }
  v34 = *((unsigned int *)v19 + 3);
  if ( v12 >= v34 && v12 < (unsigned int)v34 + v20 )
    goto LABEL_27;
LABEL_23:
  v25 = v35;
LABEL_24:
  if ( !PteAddress )
    goto LABEL_25;
  if ( PteAddress > v18 )
  {
    PteAddress = 0LL;
    goto LABEL_25;
  }
  *a5 = PteAddress;
  *a6 = v18;
  if ( a2 + 1 <= NumberOfSections )
    return a2 + 1;
  return v6;
}
