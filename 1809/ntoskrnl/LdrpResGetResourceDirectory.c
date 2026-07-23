/*
 * XREFs of LdrpResGetResourceDirectory @ 0x14068BB5C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400FDA8C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x14068C6EC (LdrpSectionTableFromVirtualAddress.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 BaseAddress,
        ULONGLONG Size,
        __int16 a3,
        unsigned __int64 *a4,
        PIMAGE_NT_HEADERS *a5)
{
  unsigned __int64 v5; // rdi
  char v6; // r15
  bool v7; // r14
  int v8; // ebx
  int v9; // r12d
  NTSTATUS result; // eax
  int v11; // r9d
  PIMAGE_NT_HEADERS v12; // r13
  unsigned __int16 Magic; // ax
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned __int64 v16; // rdx
  ULONGLONG v17; // r14
  unsigned int *v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // cx
  __int128 v22; // [rsp+80h] [rbp-F8h]
  __int128 v23; // [rsp+A0h] [rbp-D8h]
  __int128 v24; // [rsp+B0h] [rbp-C8h]
  __int128 v25; // [rsp+C0h] [rbp-B8h]
  __int128 v26; // [rsp+D0h] [rbp-A8h]
  PIMAGE_NT_HEADERS NtHeader; // [rsp+180h] [rbp+8h] BYREF
  ULONGLONG v28; // [rsp+188h] [rbp+10h]
  unsigned __int64 *v29; // [rsp+198h] [rbp+20h]

  v29 = a4;
  v28 = Size;
  v5 = BaseAddress;
  v6 = 1;
  v7 = 1;
  v8 = 0;
  if ( !BaseAddress || !a4 || !a5 )
    return -1073741811;
  if ( (BaseAddress & 3) != 0 )
  {
    v5 = BaseAddress & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = !(BaseAddress & 1);
  }
  v9 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v9 == 0, (PVOID)v5, Size, &NtHeader);
  if ( result >= 0 )
  {
    v12 = NtHeader;
    Magic = NtHeader->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      v22 = *(_OWORD *)&NtHeader->OptionalHeader.MajorSubsystemVersion;
      v23 = *(_OWORD *)&NtHeader->OptionalHeader.SizeOfStackCommit;
      v24 = *(_OWORD *)&NtHeader->OptionalHeader.SizeOfHeapCommit;
      v25 = *(_OWORD *)&NtHeader->OptionalHeader.DataDirectory[0].VirtualAddress;
      v26 = *(_OWORD *)&NtHeader->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      if ( Magic != 523 )
        return -1073741701;
      v22 = *(_OWORD *)&NtHeader->OptionalHeader.MajorSubsystemVersion;
      v23 = *(_OWORD *)&NtHeader->OptionalHeader.SizeOfStackCommit;
      v24 = *(_OWORD *)&NtHeader->OptionalHeader.SizeOfHeapCommit;
      v25 = *(_OWORD *)&NtHeader->OptionalHeader.DataDirectory[0].VirtualAddress;
      v26 = *(_OWORD *)&NtHeader->OptionalHeader.DataDirectory[2].VirtualAddress;
      v6 = 0;
    }
    v14 = HIDWORD(v24);
    if ( v6 )
      v14 = HIDWORD(v23);
    if ( v14 <= 2 )
      return -1073741687;
    v15 = v26;
    if ( v6 )
      v15 = v25;
    if ( !v15 )
      return -1073741687;
    if ( v5 < 0x7FFFFFFEFFFFLL && v5 + v15 >= 0x7FFFFFFEFFFFLL )
      return -1073741701;
    if ( v7 || v15 < HIDWORD(v22) )
    {
      if ( v5 + v15 < v5 )
        return -1073741701;
      v16 = v5 + v15;
      v17 = v28;
    }
    else
    {
      v17 = v28;
      v18 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v5, v28, (_DWORD)NtHeader, v11, v15, v9 != 0);
      if ( !v18 )
        return -1073741701;
      if ( !v18[4] )
        return -1073741687;
      v16 = v5 + v18[5] - (unsigned __int64)v18[3] + v15;
    }
    if ( !v16 )
      return -1073741687;
    if ( v9 )
    {
      if ( v16 <= v5 )
        return -1073741701;
      v19 = (v5 & 0xFFFFFFFFFFFFFFFCuLL) + v17;
      if ( v16 + 16 > v19 )
        return -1073741701;
      v20 = *(_WORD *)(v16 + 12);
      v21 = *(_WORD *)(v16 + 14);
      if ( !v20 && !v21 )
        return -1073741686;
      if ( v16 + 8LL * (v20 + (unsigned int)v21) > v19 )
        return -1073741701;
    }
    *v29 = v16;
    *a5 = v12;
    return v8;
  }
  return result;
}
