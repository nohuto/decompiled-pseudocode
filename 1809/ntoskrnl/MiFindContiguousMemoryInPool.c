/*
 * XREFs of MiFindContiguousMemoryInPool @ 0x1401626D4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiFreePoolPages @ 0x140161200 (MiFreePoolPages.c)
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 *     MiScanNonPagedPoolVa @ 0x1401636E0 (MiScanNonPagedPoolVa.c)
 *     MiPhysicalPoolCheck @ 0x140164648 (MiPhysicalPoolCheck.c)
 */

unsigned __int64 __fastcall MiFindContiguousMemoryInPool(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebp
  _SLIST_HEADER *v9; // rdi
  unsigned __int64 Alignment; // rax
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  int v16; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]
  unsigned __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  char v20; // [rsp+70h] [rbp-18h]
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (a4 >> 12) + ((a4 & 0xFFF) != 0);
  if ( v6 >= 0x200 )
    return 0LL;
  if ( a3 )
  {
    v7 = a3 & 0x1FF;
    if ( (a3 & 0x1FF) != 0 )
    {
      v13 = 512 - v7;
      if ( v7 <= 512 - v7 )
        v13 = a3 & 0x1FF;
      if ( v6 > v13 )
        return 0LL;
    }
  }
  v8 = a5;
  v9 = &qword_14043B118[25 * a5];
  Alignment = v9[16].Alignment;
  if ( !Alignment
    || a2 < Alignment
    || a1 > v9[16].Region
    || !*(_QWORD *)(1984LL * a5 + qword_14043DA10 + 1808) && (_DWORD)InitializationPhase )
  {
    return 0LL;
  }
  v17 = a2;
  v19 = a3;
  v16 = 1;
  v18 = a1;
  v20 = 0;
  v11 = MiScanNonPagedPoolVa(v6, a5, 0LL, &v16);
  if ( v11 != -1 )
    return v9[20].Alignment + (v11 << 12);
  v14 = MiExpandNonPagedPool(512, v6, v8, 1, (__int64)&v21);
  if ( v14 == -1 )
    return 0LL;
  v15 = v9[20].Alignment + (v14 << 12);
  if ( MiPhysicalPoolCheck(0, v14, v6, v6, v17, v18, v19, v8) == -1 )
  {
    MiFreePoolPages(v15, v6 << 12, 0LL);
    return 0LL;
  }
  return v15;
}
