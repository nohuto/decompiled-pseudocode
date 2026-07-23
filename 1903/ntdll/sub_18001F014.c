/*
 * XREFs of sub_18001F014 @ 0x18001F014
 * Callers:
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     sub_18005A624 @ 0x18005A624 (sub_18005A624.c)
 *     sub_180067D14 @ 0x180067D14 (sub_180067D14.c)
 * Callees:
 *     sub_18001A870 @ 0x18001A870 (sub_18001A870.c)
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlImageRvaToSection @ 0x18001EFD0 (RtlImageRvaToSection.c)
 *     RtlAddressInSectionTable @ 0x180075A80 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall sub_18001F014(unsigned __int64 BaseOfImage, ULONG *a2, unsigned __int64 *a3, _DWORD *a4)
{
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  _IMAGE_SECTION_HEADER *v7; // r13
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  BOOL v12; // eax
  void *v13; // rdx
  PIMAGE_NT_HEADERS v14; // r11
  ULONG VirtualAddress; // r8d
  PIMAGE_SECTION_HEADER v16; // rax
  void *v17; // rdx
  _IMAGE_NT_HEADERS64 *v18; // r11
  ULONG v19; // r8d
  unsigned __int64 v20; // rcx
  PIMAGE_SECTION_HEADER v21; // rax
  _IMAGE_NT_HEADERS64 *v22; // r11
  _BYTE *v23; // rax
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-38h]
  PIMAGE_SECTION_HEADER v27; // [rsp+48h] [rbp-30h] BYREF

  v5 = BaseOfImage;
  v6 = sub_18001C4DC(BaseOfImage, 1, 2u, (DWORD *)&v25, &v27);
  v7 = v27;
  v8 = 0LL;
  if ( v6 < 0 )
    v7 = 0LL;
  v27 = v7;
  if ( !v7 )
    return 3221225609LL;
  v25 = 0LL;
  v9 = sub_18001A870(v5, &v25);
  v26 = v9;
  if ( v9 == -1073741701 )
    return 3221225595LL;
  v10 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v5 & 0xFFFFFFFFFFFFFFFCuLL) )
    return 3221225595LL;
  v11 = v25;
  if ( v25 )
  {
    if ( (unsigned __int64)a2 >= v10 + v25 )
      return 3221225595LL;
  }
  v12 = 0;
  if ( (v5 & 3) != 0 )
  {
    v12 = (v5 & 1) != 0;
    v5 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( v12 )
  {
    v14 = RtlImageNtHeader((PVOID)v5);
    if ( !v14 )
      return 3221225609LL;
    if ( v14->OptionalHeader.Magic == 267 )
    {
      VirtualAddress = v14->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else if ( v14->OptionalHeader.Magic == 523 )
    {
      VirtualAddress = v14->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      VirtualAddress = 0;
    }
    if ( !VirtualAddress )
      return 3221225609LL;
    v8 = v5 + VirtualAddress - (_QWORD)v7;
    v16 = RtlImageRvaToSection(v14, v13, VirtualAddress);
    if ( !v16 )
      return 3221225609LL;
    v19 = *a2;
    if ( *a2 > v16->Misc.PhysicalAddress )
    {
      LODWORD(v25) = v16->VirtualAddress;
      v21 = RtlImageRvaToSection(v18, v17, v19);
      v27 = v21;
      if ( !v21 )
        return 3221225609LL;
      v23 = RtlAddressInSectionTable(v22, (PVOID)v5, v21->VirtualAddress);
      v8 += &v7->Name[v27->VirtualAddress - (unsigned __int64)(unsigned int)v25] - v23;
    }
  }
  if ( a3 && ((v20 = v5 + *a2 - v8, *a3 = v20, v20 <= v10) || v11 && v20 >= v10 + v11) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = a2[1];
    return v9;
  }
}
