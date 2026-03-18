/*
 * XREFs of MiCheckLargePageOk @ 0x140A178B0
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // r15
  __int64 v3; // r8
  char *v4; // rax
  void *v5; // rdx
  PIMAGE_NT_HEADERS v6; // rbx
  PIMAGE_NT_HEADERS v7; // rax
  ULONG_PTR SectionAlignment; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r14
  BOOL v14; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdi
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // r10
  unsigned __int64 v21; // r11
  _QWORD *v22; // rdx
  ULONG_PTR v23; // r9
  ULONG_PTR v24; // rcx
  PVOID v26; // rbx
  ULONG_PTR v27; // rbx
  int v28; // eax
  ULONG_PTR v29; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 240) + 3448LL);
  qword_140A4F5B8 = *(_QWORD *)(BugCheckParameter2 + 16);
  v3 = *(_QWORD *)qword_140A4F5B8;
  PsNtosImageBase = *(PVOID *)(qword_140A4F5B8 + 48);
  v4 = (char *)PsNtosImageBase + *(unsigned int *)(qword_140A4F5B8 + 64);
  MxHalDataTableEntry = v3;
  v5 = *(void **)(v3 + 48);
  PsNtosImageEnd = (__int64)v4;
  PsHalImageBase = v5;
  PsHalImageEnd = (__int64)v5 + *(unsigned int *)(v3 + 64);
  v6 = RtlImageNtHeader(PsNtosImageBase);
  v7 = RtlImageNtHeader(PsHalImageBase);
  SectionAlignment = v6->OptionalHeader.SectionAlignment;
  if ( (_DWORD)SectionAlignment != v7->OptionalHeader.SectionAlignment )
    KeBugCheckEx(
      0x1Au,
      0x3030205uLL,
      BugCheckParameter2,
      v6->OptionalHeader.SectionAlignment,
      v7->OptionalHeader.SectionAlignment);
  if ( (_DWORD)SectionAlignment == 0x200000 )
  {
    v26 = PsNtosImageBase;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)PsNtosImageBase)
      && ((PVOID)(((unsigned __int64)v26 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != v26
       || (PVOID)(((unsigned __int64)PsHalImageBase + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != PsHalImageBase) )
    {
      KeBugCheckEx(0x1Au, 0x3030206uLL, BugCheckParameter2, (ULONG_PTR)v26, (ULONG_PTR)PsHalImageBase);
    }
    MiFlags |= 0x20000000u;
  }
  else if ( (_DWORD)SectionAlignment != 4096 )
  {
    KeBugCheckEx(0x1Au, 0x3030207uLL, BugCheckParameter2, SectionAlignment, 0LL);
  }
  v9 = MxHalDataTableEntry;
  if ( *(_QWORD *)(qword_140A4F5B8 + 48) < *(_QWORD *)(MxHalDataTableEntry + 48) )
  {
    v10 = qword_140A4F5B8;
  }
  else
  {
    v10 = MxHalDataTableEntry;
    v9 = qword_140A4F5B8;
  }
  v11 = *(_QWORD *)(v10 + 48);
  v12 = MI_IS_PHYSICAL_ADDRESS(v11);
  v13 = *(_QWORD *)(v9 + 48);
  v14 = v12 != 0;
  v15 = MI_IS_PHYSICAL_ADDRESS(v13);
  v16 = v14 + 1;
  if ( !v15 )
    v16 = v14;
  if ( !v16 )
    return 0LL;
  if ( v16 != 2 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v16, 0LL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v11) != 1 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(v13) != 1 )
  {
    v27 = (int)MI_IS_PHYSICAL_ADDRESS(v13);
    v28 = MI_IS_PHYSICAL_ADDRESS(v11);
    KeBugCheckEx(0x1Au, 0x3030204uLL, BugCheckParameter2, v28, v27);
  }
  v17 = ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v17 <= (((v13 + (unsigned __int64)*(unsigned int *)(v9 + 64) + v2 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
  {
    do
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v17);
      v29 = BugCheckParameter4;
      if ( (BugCheckParameter4 & 0x80u) == 0LL )
        KeBugCheckEx(0x1Au, 0x3030200uLL, BugCheckParameter2, v17, BugCheckParameter4);
      v19 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
      v22 = (_QWORD *)*v20;
      v23 = (v19 >> 12) & 0xFFFFFFFFFLL;
      if ( (_QWORD *)*v20 == v20 )
        goto LABEL_34;
      while ( 1 )
      {
        v24 = v22[3];
        if ( v24 <= v23 && v22[4] + v24 >= v23 + 512 )
          break;
        v22 = (_QWORD *)*v22;
        if ( v22 == v20 )
          goto LABEL_20;
      }
      if ( *((_DWORD *)v22 + 4) != 9 )
        KeBugCheckEx(0x1Au, 0x3030208uLL, BugCheckParameter2, v23, *((int *)v22 + 4));
LABEL_20:
      if ( v22 == v20 )
LABEL_34:
        KeBugCheckEx(0x1Au, 0x3030202uLL, BugCheckParameter2, v23, 0LL);
      v17 += 8LL;
    }
    while ( v17 <= v21 );
  }
  MiFlags |= 4u;
  return 1LL;
}
