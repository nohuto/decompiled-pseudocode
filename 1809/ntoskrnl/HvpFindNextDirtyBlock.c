/*
 * XREFs of HvpFindNextDirtyBlock @ 0x1405A8B38
 * Callers:
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1405A8860 (HvpGenerateLogEntry.c)
 *     HvWriteHivePrimaryFile @ 0x1406B95D8 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x14000F28C (HvpFindNextDirtyRun.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     HvpMapEntryGetFreeBin @ 0x1405FAC1C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

char __fastcall HvpFindNextDirtyBlock(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        char a7)
{
  char *PoolWithTag; // rdi
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  __int64 CellMap; // rax
  __int64 FreeBin; // rax
  _QWORD *v15; // r10
  int v16; // r11d
  unsigned __int64 v17; // rcx
  char *v18; // rax
  unsigned int v19; // r8d
  int v20; // edx
  unsigned int v21; // r14d
  unsigned int v22; // ebp
  unsigned int v24; // esi
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // r10
  size_t v29; // r11
  const void *v30; // rdx
  unsigned int v31; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-30h]
  unsigned int v34; // [rsp+3Ch] [rbp-2Ch]

  PoolWithTag = 0LL;
  if ( !HvpFindNextDirtyRun(a2, a3, &v31, &v32) )
    return 0;
  v10 = v32;
  v11 = v31 << 9;
  v12 = (v32 << 9) - (v31 << 9);
  v34 = v32;
  v33 = v32 << 9;
  if ( a7 && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x33354D43u)) == 0LL )
  {
    *a4 = 0LL;
    return 1;
  }
  else
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v11);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11, 0xF22uLL);
    FreeBin = HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
      v17 = (v15[1] & 0xFFFFFFFFFFFFFFF0uLL) + v11 - *(_DWORD *)(FreeBin + 20);
    else
      v17 = *v15 + (v15[1] & 0xFFFFFFFFFFFFFFF0uLL);
    if ( a7 )
      v18 = PoolWithTag;
    else
      v18 = (char *)(v17 + (v11 & 0xFFF));
    *a4 = v18;
    v19 = v10 - v16;
    v20 = v16 & 7;
    v32 = v10 - v16;
    v21 = v10 - v16;
    *a6 = v11 + 4096;
    if ( v10 - v16 >= 8 - v20 )
      v21 = 8 - v20;
    v22 = v21 << 9;
    if ( a7 )
    {
      memmove(PoolWithTag, (const void *)(v17 + (unsigned int)(v20 << 9)), v22);
      v19 = v32;
      PoolWithTag += v22;
    }
    if ( v19 > v21 )
    {
      v24 = (v11 + 4096) & 0xFFFFF000;
      if ( v22 < v12 )
      {
        v25 = v33;
        do
        {
          v26 = HvpGetCellMap(BugCheckParameter2, v24);
          if ( !v26 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v24, 0xF8CuLL);
          if ( !a7 && (*(_BYTE *)(v26 + 8) & 1) != 0 )
            break;
          v27 = HvpMapEntryGetFreeBin(v26);
          if ( v27 )
            v30 = (const void *)((v28[1] & 0xFFFFFFFFFFFFFFF0uLL) + v24 - *(_DWORD *)(v27 + 20));
          else
            v30 = (const void *)(*v28 + (v28[1] & 0xFFFFFFFFFFFFFFF0uLL));
          if ( v25 - v24 <= (unsigned int)v29 )
          {
            if ( a7 )
              memmove(PoolWithTag, v30, v25 - v24);
            goto LABEL_13;
          }
          if ( a7 )
          {
            memmove(PoolWithTag, v30, v29);
            LODWORD(v29) = 4096;
            PoolWithTag += 4096;
          }
          v22 += v29;
          v21 += 8;
          v24 += v29;
        }
        while ( v22 < v12 );
      }
      *a5 = v22;
      if ( v21 + v31 != v34 )
        *a3 = v21 + v31;
    }
    else
    {
LABEL_13:
      *a5 = v12;
    }
    return 1;
  }
}
