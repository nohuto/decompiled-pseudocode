/*
 * XREFs of ?GetPinnedAllocationInfo@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1C00AC6CC
 * Callers:
 *     VidMmGetPinnedAllocationInfo @ 0x1C0024A00 (VidMmGetPinnedAllocationInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetPinnedAllocationInfo(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // eax

  v8 = *(unsigned int *)(*((_QWORD *)a2 + 63) + 12LL);
  if ( !(_DWORD)v8 && (**((_DWORD **)a2 + 63) & 0x40000000) == 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2);
    v9[3] = 270LL;
    v9[4] = 10LL;
    v9[5] = a2;
    v9[6] = 0LL;
    v9[7] = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  v10 = *((_QWORD *)a2 + 17);
  if ( (*(_DWORD *)(v10 + 80) & 0x1000) != 0 )
    v11 = 0;
  else
    v11 = *(_DWORD *)(v10 + 16) + 1;
  *a3 = v11;
  a4->QuadPart = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  if ( a5 )
    *a5 = *((_QWORD *)a2 + 18);
}
