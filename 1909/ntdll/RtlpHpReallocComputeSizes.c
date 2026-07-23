/*
 * XREFs of RtlpHpReallocComputeSizes @ 0x180044B94
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x1800449D0 (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180044E1C (RtlpHpSegDescriptorValidate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180051688 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocSize @ 0x1800843E0 (RtlpHpLargeAllocSize.c)
 */

__int64 __fastcall RtlpHpReallocComputeSizes(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int *v9; // r14
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r10d
  int v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // r9
  unsigned int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax

  v5 = 0;
  *(_QWORD *)a5 = 0LL;
  v9 = (int *)(a5 + 16);
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 24) = a3;
  if ( (_WORD)a2 )
  {
    v10 = 0;
  }
  else
  {
    v27 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_180166A68) >> 20));
    if ( !v27 )
      goto LABEL_31;
    v10 = v27 - 1;
  }
  if ( v10 == 2 )
  {
LABEL_31:
    v14 = RtlpHpLargeAllocSize(a1, a2, a4, a5 + 16);
    goto LABEL_6;
  }
  v11 = 192LL * v10 + a1;
  v12 = RtlpHpSegDescriptorValidate(v11 + 256, a2);
  if ( v12 )
  {
    v14 = RtlpHpSegSizeInternal(v11 + 256, v12, a2, v13, (int *)(a5 + 16));
LABEL_6:
    v15 = v14;
    goto LABEL_7;
  }
  v15 = -1LL;
LABEL_7:
  *(_QWORD *)a5 = v15;
  if ( v15 != -1 )
  {
    v16 = *v9;
    v17 = a4 & 0x10000000 | 8;
    if ( !*v9 )
      v17 = a4 & 0x10000000;
    v18 = v15 + 16;
    v19 = v17 & 0x10000000;
    if ( (v17 & 0x10000000) == 0 )
      v18 = v15;
    if ( (v17 & 0x20000F08) != 0 )
      v18 = ((v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v20 = 1LL;
    if ( v18 )
      v20 = v18;
    if ( v16 )
    {
      v26 = v15 + a2 + 16;
      if ( !v19 )
        v26 = v15 + a2;
      v21 = 16 * *(unsigned __int8 *)(((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 3);
      v20 += v21;
    }
    else
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)(a5 + 24);
    *(_QWORD *)(a5 + 8) = v20;
    v23 = v22 + 16;
    if ( (a4 & 0x10000000) == 0 )
      v23 = v22;
    if ( (v16 != 0 ? 8 : 0) != 0 )
      v23 = ((v23 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v24 = 1LL;
    v5 = 1;
    if ( v23 )
      v24 = v23;
    *(_QWORD *)(a5 + 32) = v21 + v24;
  }
  return v5;
}
