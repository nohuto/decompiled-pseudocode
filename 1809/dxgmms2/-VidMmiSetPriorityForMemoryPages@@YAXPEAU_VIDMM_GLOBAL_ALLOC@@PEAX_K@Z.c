/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005A75C
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A584 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070160 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00C4420 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiSetPriorityForMemoryPages(struct _VIDMM_GLOBAL_ALLOC *a1, void *a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // ecx
  _QWORD *v11; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v12[1] = a3;
  v12[0] = a2;
  v13 = 4;
  if ( a1 && *(_WORD *)(*((_QWORD *)a1 + 63) + 4LL) == 3 )
  {
    v10 = *((_DWORD *)a1 + 108) - 1;
    if ( v10 )
    {
      if ( v10 == 2 )
        v13 = 5;
    }
    else
    {
      v13 = 3;
    }
  }
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
         -1LL,
         1LL,
         1LL,
         v12,
         &v13,
         4);
  v9 = v6;
  if ( v6 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7);
    v11[3] = a1;
    v11[4] = a2;
    v11[5] = a3;
    v11[6] = v9;
    WdLogEvent5_WdWarning(v11);
  }
}
