/*
 * XREFs of MiComputeFaultCluster @ 0x1400F55B4
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAdvanceFaultList @ 0x1400F57E0 (MiAdvanceFaultList.c)
 *     MiIsPteInStore @ 0x1401587DC (MiIsPteInStore.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r11
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 result; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r13d
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int16 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r10
  int IsPteInStore; // eax
  unsigned __int64 v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  int v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  v4 = a2[3];
  v5 = a2[4];
  v6 = a2[2];
  v25 = v4;
  v8 = *(_QWORD *)(a2[1] + 16 * v4) + (v5 << 12);
  v26 = v5;
  v24 = v6;
  MiAdvanceFaultList(a2);
  v10 = v9[3];
  v11 = 1LL;
  if ( v10 < v6 )
  {
    LODWORD(v28) = 0;
    v13 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    v14 = 256LL;
    if ( v29 && *(unsigned int *)(a1 + 1148) < 0x100uLL )
      v14 = *(unsigned int *)(a1 + 1148);
    if ( a3 )
    {
      v15 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12) + 1;
      if ( v14 <= v15 )
        v15 = v14;
      v14 = v15;
      v16 = *(unsigned int *)(a3 + 52);
      LODWORD(v16) = v16 & 0x7FFFFFFF;
      if ( v16 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31) )
      {
        a3 = 0LL;
        LODWORD(v28) = 1;
      }
    }
    if ( v14 > 1 )
    {
      v17 = v28;
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v13 & 0xFFF) == 0 || (v19 = MI_READ_PTE_LOCK_FREE(v13), v28 = v19, v20 = v19, (v19 & 1) != 0) )
          {
LABEL_15:
            v4 = v25;
            v5 = v26;
            break;
          }
          v21 = v19 & 0x400;
          if ( v17 )
          {
            if ( !v21 )
              goto LABEL_15;
          }
          else
          {
            if ( v21 )
              goto LABEL_15;
            if ( (v20 & 0x800) != 0 )
              goto LABEL_15;
            if ( !(unsigned int)MiGetPagingFileOffset((unsigned __int64)&v28) )
              goto LABEL_15;
            IsPteInStore = MiIsPteInStore(a1, v22);
            if ( v29 != IsPteInStore )
              goto LABEL_15;
          }
          v13 += 8LL;
        }
        v18 = *(_QWORD *)(v9[1] + 16 * v10) + (v9[4] << 12);
        if ( (v18 & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v8 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v11;
          MiAdvanceFaultList(v9);
          v10 = v9[3];
          if ( v10 != v24 )
          {
            v8 = v18;
            if ( v11 < v14 )
              continue;
          }
        }
        goto LABEL_15;
      }
    }
  }
  result = (unsigned int)v11;
  v9[3] = v4;
  v9[4] = v5;
  return result;
}
