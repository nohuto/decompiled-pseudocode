/*
 * XREFs of sub_1801118C0 @ 0x1801118C0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1801117B8 @ 0x1801117B8 (sub_1801117B8.c)
 */

NTSTATUS __fastcall sub_1801118C0(__int64 a1, void *a2, __int16 a3)
{
  void *v4; // rdi
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  char v8; // r15
  unsigned __int64 v10; // rcx
  int v11; // edx
  NTSTATUS v12; // eax
  ULONG_PTR v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS v17; // edi
  unsigned int v18; // r12d
  void *v19; // r14
  int v20; // r13d
  unsigned int v21; // r15d
  unsigned __int16 *v22; // rsi
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned __int16 *v25; // rdi
  unsigned int v26; // eax
  SIZE_T MemoryInformationLength; // rcx
  __int16 v28; // ax
  NTSTATUS v29; // eax
  size_t v30; // r8
  unsigned __int16 v31; // r14
  ULONG_PTR ReturnLength; // [rsp+58h] [rbp-59h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-51h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-49h] BYREF
  _QWORD MemoryInformation[6]; // [rsp+70h] [rbp-41h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-11h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD v38[11]; // [rsp+B0h] [rbp-1h] BYREF
  char v42; // [rsp+130h] [rbp+7Fh]

  v4 = 0LL;
  v42 = 0;
  v5 = 0;
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = 0;
  do
  {
    memset(MemoryInformation, 0, sizeof(MemoryInformation));
    if ( ZwQueryVirtualMemory(a2, v4, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0 )
      break;
    v10 = MemoryInformation[0];
    if ( (void *)MemoryInformation[0] != v4 )
      return -1073741503;
    if ( LODWORD(MemoryInformation[5]) == 0x1000000 || (v11 = 0, LODWORD(MemoryInformation[5]) == 0x40000) )
      v11 = 1;
    v6 += v11;
    if ( (a3 & 0x1000) != 0
      && !v8
      && (LODWORD(MemoryInformation[5]) == 0x1000000 || LODWORD(MemoryInformation[5]) == 0x40000) )
    {
      ReturnLength = 0LL;
      v38[0] = 0LL;
      v38[1] = 0LL;
      v12 = ZwQueryVirtualMemory(a2, v4, MemoryMappedFilenameInformation, v38, 0x10uLL, &ReturnLength);
      if ( v12 >= 0 || v12 == -1073741820 || v12 == -1073741789 || v12 == -2147483643 )
      {
        v13 = ReturnLength;
        if ( HIDWORD(ReturnLength) )
          v13 = 0LL;
        ReturnLength = v13;
      }
      else
      {
        LODWORD(v13) = ReturnLength;
      }
      if ( (unsigned int)v13 > 0x10 && (v12 >= 0 || v12 == -1073741820 || v12 == -1073741789 || v12 == -2147483643) )
        v14 = (v13 - 5) & 0xFFFFFFF8;
      else
        v14 = 8;
      if ( v14 + (int)v7 < (unsigned int)v7 )
      {
        v8 = 1;
        LODWORD(v7) = -1;
        v42 = 1;
      }
      else
      {
        LODWORD(v7) = v14 + v7;
      }
      v10 = MemoryInformation[0];
    }
    ++v5;
    v4 = (void *)(v10 + MemoryInformation[3]);
  }
  while ( v10 + MemoryInformation[3] >= v10 );
  v15 = 72LL * v5;
  if ( v15 > 0xFFFFFFFF )
    return -1073741675;
  if ( v8 )
  {
    v7 = 8LL * v6;
    if ( v7 > 0xFFFFFFFF )
      return -1073741675;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    if ( (int)v7 + 16 < (unsigned int)v7 )
      return -1073741675;
    LODWORD(v7) = v7 + 16;
  }
  if ( (_DWORD)v7 )
  {
    if ( (int)v15 + (int)v7 < (unsigned int)v15 )
      return -1073741675;
    LODWORD(v15) = v15 + v7;
  }
  MaximumSize.QuadPart = (unsigned int)v15;
  result = ZwCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_18013A748,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v17 = ZwMapViewOfSection(
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
    if ( v17 < 0 )
    {
      ZwClose(SectionHandle);
      return v17;
    }
    v18 = ViewSize;
    v19 = 0LL;
    v20 = 0;
    v21 = 0;
    v22 = (unsigned __int16 *)BaseAddress;
    while ( 1 )
    {
      if ( v21 + 72 < v21
        || v21 + 72 > v18
        || (memset(MemoryInformation, 0, sizeof(MemoryInformation)),
            ZwQueryVirtualMemory(a2, v19, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) < 0) )
      {
LABEL_79:
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_QWORD *)(a1 + 920) = SectionHandle;
        *(_DWORD *)(a1 + 912) = v20;
        *(_DWORD *)(a1 + 916) = v21;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( (void *)MemoryInformation[0] != v19 )
        return -1073741503;
      memset(v22, 0, 0x48uLL);
      v23 = 72;
      *(_QWORD *)v22 = MemoryInformation[0];
      *((_QWORD *)v22 + 1) = MemoryInformation[1];
      *((_DWORD *)v22 + 4) = MemoryInformation[2];
      *((_QWORD *)v22 + 3) = MemoryInformation[3];
      *((_QWORD *)v22 + 4) = MemoryInformation[4];
      *((_DWORD *)v22 + 10) = MemoryInformation[5];
      if ( (a3 & 0x1000) != 0 )
      {
        if ( LODWORD(MemoryInformation[5]) == 0x1000000 )
        {
          sub_1801117B8((__int64)(v22 + 24), a2, (char *)MemoryInformation[1]);
LABEL_55:
          if ( v21 + 76 < v21 || v21 + 76 > v18 )
            goto LABEL_79;
          if ( v42 )
            goto LABEL_71;
          v24 = v21 + 92;
          if ( v21 + 92 < v21 + 76 || v24 > v18 )
          {
            v42 = 1;
            goto LABEL_71;
          }
          v25 = v22 + 36;
          v42 = 0;
          v22[36] = 0;
          v26 = v18 - v24;
          if ( v18 - v24 >= (unsigned int)v7 )
            v26 = v7;
          MemoryInformationLength = v26;
          v28 = -1;
          if ( (unsigned int)MemoryInformationLength < 0xFFFF )
            v28 = MemoryInformationLength;
          v22[37] = v28;
          *((_QWORD *)v22 + 10) = v22 + 44;
          ReturnLength = 0LL;
          v29 = ZwQueryVirtualMemory(
                  a2,
                  v19,
                  MemoryMappedFilenameInformation,
                  v22 + 36,
                  MemoryInformationLength,
                  &ReturnLength);
          if ( v29 >= 0 || v29 == -1073741820 || v29 == -1073741789 || v29 == -2147483643 )
          {
            if ( HIDWORD(ReturnLength) )
            {
LABEL_71:
              v29 = -1073741675;
              v25 = 0LL;
            }
          }
          if ( v29 < 0 )
          {
            v22[36] = 0;
            LODWORD(v7) = v7 - 2;
            v23 = 80;
          }
          else
          {
            v30 = *v25;
            if ( v30 + 2 > 0xFFFF )
            {
              v31 = 0;
            }
            else
            {
              v31 = v30 + 2;
              memmove(v25 + 1, *((const void **)v25 + 1), v30);
              *(unsigned __int16 *)((char *)v25 + *v25 + 2) = 0;
            }
            *v25 = v31;
            LODWORD(v7) = v7 - ((v31 + 9) & 0xFFFFFFF8);
            v23 = (v31 + 81) & 0xFFFFFFF8;
          }
          goto LABEL_78;
        }
        if ( LODWORD(MemoryInformation[5]) == 0x40000 )
          goto LABEL_55;
      }
LABEL_78:
      v21 += v23;
      v19 = (void *)(MemoryInformation[0] + MemoryInformation[3]);
      ++v20;
      v22 = (unsigned __int16 *)((char *)v22 + v23);
      if ( MemoryInformation[0] + MemoryInformation[3] < MemoryInformation[0] )
        goto LABEL_79;
    }
  }
  return result;
}
