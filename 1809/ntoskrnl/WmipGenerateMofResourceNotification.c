/*
 * XREFs of WmipGenerateMofResourceNotification @ 0x1407595E0
 * Callers:
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipMRCleanup @ 0x140759570 (WmipMRCleanup.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 */

void __fastcall WmipGenerateMofResourceNotification(_WORD *Src, _WORD *a2, _OWORD *a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 v10; // rsi
  __int64 v11; // rbp
  SIZE_T v12; // rbx
  char *PoolWithTag; // rax
  char *v14; // rdi
  int v15; // eax
  size_t v16; // rsi
  char *v17; // rbx

  v4 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Src[v6] );
  v10 = 2 * v6 + 4;
  do
    ++v4;
  while ( a2[v4] );
  v11 = 2 * v4 + 4;
  v12 = v10 + 2 * v4 + 76;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v12, 0x70696D57u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v12);
    *(_DWORD *)v14 = v12;
    *((_DWORD *)v14 + 1) = a4;
    *((_QWORD *)v14 + 1) = 1LL;
    *((_DWORD *)v14 + 11) = 266;
    *(_OWORD *)(v14 + 24) = *a3;
    *((_QWORD *)v14 + 2) = MEMORY[0xFFFFF78000000014];
    v15 = v10 + v11;
    *((_DWORD *)v14 + 14) = 72;
    v16 = v10 - 2;
    *((_DWORD *)v14 + 15) = v15;
    *((_DWORD *)v14 + 12) = 64;
    *((_WORD *)v14 + 32) = 0;
    v17 = &v14[*((unsigned int *)v14 + 14)];
    *(_WORD *)v17 = v16;
    memmove(v17 + 2, Src, v16);
    v16 >>= 1;
    *(_WORD *)&v17[2 * v16 + 2] = v11 - 2;
    memmove(&v17[2 * v16 + 4], a2, v11 - 2);
    WmipProcessEvent(v14, 1, 0);
    ExFreePoolWithTag(v14, 0);
  }
}
