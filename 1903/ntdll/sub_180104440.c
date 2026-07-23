/*
 * XREFs of sub_180104440 @ 0x180104440
 * Callers:
 *     sub_180067A40 @ 0x180067A40 (sub_180067A40.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800F085C @ 0x1800F085C (sub_1800F085C.c)
 */

__int64 __fastcall sub_180104440(_OWORD *a1, SIZE_T CommitSize, HANDLE *a3)
{
  int v6; // edi
  _OWORD *v7; // rax
  void *v8; // rcx
  HANDLE v9; // r8
  bool v10; // cc
  PVOID v11; // rbx
  LARGE_INTEGER MaximumSize; // [rsp+50h] [rbp-29h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-21h] BYREF
  HANDLE Buffer[12]; // [rsp+60h] [rbp-19h] BYREF
  PVOID BaseAddress; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  SectionHandle = 0LL;
  BaseAddress = 0LL;
  MaximumSize.QuadPart = (CommitSize + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v6 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v6 < 0 )
    goto LABEL_7;
  ViewSize = CommitSize;
  v6 = ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         CommitSize,
         0LL,
         &ViewSize,
         ViewUnmap,
         0,
         4u);
  if ( v6 < 0 )
    goto LABEL_7;
  v7 = BaseAddress;
  *(_OWORD *)BaseAddress = *a1;
  v7[1] = a1[1];
  v7[2] = a1[2];
  memset(Buffer, 0, sizeof(Buffer));
  v8 = (void *)*((_QWORD *)a1 + 1);
  Buffer[0] = SectionHandle;
  Buffer[1] = (HANDLE)MaximumSize.QuadPart;
  LODWORD(Buffer[3]) = 0x40000000;
  v6 = sub_1800F085C(v8, Buffer);
  if ( v6 < 0 )
  {
LABEL_7:
    v11 = BaseAddress;
  }
  else
  {
    v9 = Buffer[4];
    v10 = Buffer[4] <= (HANDLE)CommitSize;
    *a3 = Buffer[4];
    v11 = BaseAddress;
    if ( v10 )
    {
      memmove(a1, BaseAddress, (size_t)v9);
      v6 = 0;
    }
    else
    {
      v6 = -1073741789;
    }
  }
  if ( v11 )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  return (unsigned int)v6;
}
