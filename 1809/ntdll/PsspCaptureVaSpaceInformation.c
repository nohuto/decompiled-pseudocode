/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x180112ADC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180111A70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwQueryVirtualMemory @ 0x1800A0760 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A0800 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C40 (NtCreateSection.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     PsspCaptureImageInformation @ 0x1801129D4 (PsspCaptureImageInformation.c)
 */

NTSTATUS __fastcall PsspCaptureVaSpaceInformation(__int64 a1, void *a2, __int16 a3)
{
  void *v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  char v8; // r12
  unsigned __int64 v9; // rcx
  int v10; // edx
  NTSTATUS v11; // eax
  ULONG_PTR v12; // rdx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned __int64 v18; // rdx
  unsigned int v19; // r10d
  bool v20; // cf
  NTSTATUS result; // eax
  unsigned int v22; // esi
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // r8d
  int v26; // eax
  NTSTATUS v27; // edi
  unsigned int v28; // r13d
  void *v29; // r15
  unsigned __int16 *v30; // r14
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned __int16 *v33; // rdi
  unsigned int v34; // eax
  SIZE_T MemoryInformationLength; // rcx
  __int16 v36; // ax
  NTSTATUS v37; // eax
  size_t v38; // r8
  unsigned __int16 v39; // r15
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp-59h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-51h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-49h] BYREF
  _QWORD MemoryInformation[6]; // [rsp+70h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-11h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v46[11]; // [rsp+B0h] [rbp-1h] BYREF
  int v50; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    if ( ZwQueryVirtualMemory(a2, v4, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0 )
      break;
    v9 = MemoryInformation[0];
    if ( (void *)MemoryInformation[0] != v4 )
      return -1073741503;
    v10 = LODWORD(MemoryInformation[5]) == 0x1000000 || LODWORD(MemoryInformation[5]) == 0x40000;
    v6 += v10;
    if ( (a3 & 0x1000) != 0
      && !v8
      && (LODWORD(MemoryInformation[5]) == 0x1000000 || LODWORD(MemoryInformation[5]) == 0x40000) )
    {
      ReturnLength = 0LL;
      v46[0] = 0LL;
      v46[1] = 0LL;
      v11 = ZwQueryVirtualMemory(a2, v4, MemoryMappedFilenameInformation, v46, 0x10uLL, &ReturnLength);
      if ( v11 >= 0 || v11 == -1073741820 || v11 == -1073741789 || v11 == -2147483643 )
      {
        v12 = ReturnLength;
        if ( HIDWORD(ReturnLength) )
          v12 = 0LL;
        ReturnLength = v12;
      }
      else
      {
        LODWORD(v12) = ReturnLength;
      }
      if ( (unsigned int)v12 > 0x10 && (v11 >= 0 || v11 == -1073741820 || v11 == -1073741789 || v11 == -2147483643) )
        v13 = (v12 - 5) & 0xFFFFFFF8;
      else
        v13 = 8;
      v14 = v13 + v7;
      v15 = -1;
      if ( v14 >= v7 )
        v15 = v14;
      v20 = v14 < v7;
      v9 = MemoryInformation[0];
      v7 = v15;
      if ( v20 )
        v8 = 1;
    }
    ++v5;
    v4 = (void *)(v9 + MemoryInformation[3]);
  }
  while ( v9 + MemoryInformation[3] >= v9 );
  v16 = -1;
  v17 = v7;
  v18 = 72LL * v5;
  if ( v18 <= 0xFFFFFFFF )
    v16 = 72 * v5;
  v19 = v16;
  if ( v18 > 0xFFFFFFFF )
  {
    v20 = 1;
    return v20 ? 0xC0000095 : 0;
  }
  v22 = 0;
  if ( v8 )
  {
    if ( 8 * (unsigned __int64)v6 > 0xFFFFFFFF )
    {
      v20 = 1;
      return v20 ? 0xC0000095 : 0;
    }
    v7 = 8 * v6;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v23 = v7 + 16;
    v24 = -1;
    v25 = v7;
    if ( v7 + 16 >= v7 )
      v24 = v7 + 16;
    v7 = v24;
    if ( v23 < v17 )
      goto LABEL_45;
  }
  if ( v7 )
  {
    v23 = v16 + v7;
    v26 = -1;
    v25 = v16;
    if ( v16 + v7 >= v16 )
      v26 = v16 + v7;
    v16 = v26;
    if ( v23 < v19 )
    {
LABEL_45:
      v20 = v23 < v25;
      return v20 ? 0xC0000095 : 0;
    }
  }
  MaximumSize.QuadPart = v16;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_18013A458,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result < 0 )
    return result;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v27 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          0LL,
          0LL,
          &ViewSize,
          ViewShare,
          0,
          4u);
  if ( v27 < 0 )
  {
    NtClose(SectionHandle);
    return v27;
  }
  v28 = ViewSize;
  v29 = 0LL;
  v30 = (unsigned __int16 *)BaseAddress;
  v50 = 0;
  do
  {
    if ( v22 + 72 < v22 )
      break;
    if ( v22 + 72 > v28 )
      break;
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    if ( ZwQueryVirtualMemory(a2, v29, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0 )
      break;
    if ( (void *)MemoryInformation[0] != v29 )
      return -1073741503;
    memset(v30, 0, 0x48uLL);
    v31 = 72;
    *(_QWORD *)v30 = MemoryInformation[0];
    *((_QWORD *)v30 + 1) = MemoryInformation[1];
    *((_DWORD *)v30 + 4) = MemoryInformation[2];
    *((_QWORD *)v30 + 3) = MemoryInformation[3];
    *((_QWORD *)v30 + 4) = MemoryInformation[4];
    *((_DWORD *)v30 + 10) = MemoryInformation[5];
    if ( (a3 & 0x1000) == 0 )
      goto LABEL_86;
    if ( LODWORD(MemoryInformation[5]) == 0x1000000 )
    {
      PsspCaptureImageInformation((__int64)(v30 + 24), a2, (char *)MemoryInformation[1]);
LABEL_63:
      if ( v22 + 76 < v22 || v22 + 76 > v28 )
        break;
      if ( v8 )
        goto LABEL_79;
      v32 = v22 + 92;
      if ( v22 + 92 < v22 + 76 || v32 > v28 )
      {
        v8 = 1;
        goto LABEL_79;
      }
      v33 = v30 + 36;
      v34 = v28 - v32;
      v30[36] = 0;
      v8 = 0;
      if ( v34 >= v7 )
        v34 = v7;
      MemoryInformationLength = v34;
      v36 = -1;
      if ( (unsigned int)MemoryInformationLength < 0xFFFF )
        v36 = MemoryInformationLength;
      v30[37] = v36;
      *((_QWORD *)v30 + 10) = v30 + 44;
      ReturnLength = 0LL;
      v37 = ZwQueryVirtualMemory(
              a2,
              v29,
              MemoryMappedFilenameInformation,
              v30 + 36,
              MemoryInformationLength,
              &ReturnLength);
      if ( v37 >= 0 || v37 == -1073741820 || v37 == -1073741789 || v37 == -2147483643 )
      {
        if ( HIDWORD(ReturnLength) )
        {
LABEL_79:
          v37 = -1073741675;
          v33 = 0LL;
        }
      }
      if ( v37 < 0 )
      {
        v30[36] = 0;
        v7 -= 2;
        v31 = 80;
      }
      else
      {
        v38 = *v33;
        if ( v38 + 2 > 0xFFFF )
        {
          v39 = 0;
        }
        else
        {
          v39 = v38 + 2;
          memmove(v33 + 1, *((const void **)v33 + 1), v38);
          *(unsigned __int16 *)((char *)v33 + *v33 + 2) = 0;
        }
        *v33 = v39;
        v7 -= (v39 + 9) & 0xFFFFFFF8;
        v31 = (v39 + 81) & 0xFFFFFFF8;
      }
      goto LABEL_86;
    }
    if ( LODWORD(MemoryInformation[5]) == 0x40000 )
      goto LABEL_63;
LABEL_86:
    v22 += v31;
    v29 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
    ++v50;
    v30 = (unsigned __int16 *)((char *)v30 + v31);
  }
  while ( MemoryInformation[0] + MemoryInformation[3] >= MemoryInformation[0] );
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  *(_DWORD *)(a1 + 912) = v50;
  *(_QWORD *)(a1 + 920) = SectionHandle;
  *(_DWORD *)(a1 + 916) = v22;
  *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
  return 0;
}
