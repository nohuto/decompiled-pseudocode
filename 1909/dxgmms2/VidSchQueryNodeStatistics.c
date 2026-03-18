/*
 * XREFs of VidSchQueryNodeStatistics @ 0x1C00CB510
 * Callers:
 *     <none>
 * Callees:
 *     CopyNodeStatistics @ 0x1C00CA800 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryNodeStatistics(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 *v10; // rdx

  v4 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 68) )
    return 3221225485LL;
  v6 = *(_QWORD **)(a1 + 616);
  v7 = 8 * v4;
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 688) )
    v6 = (_QWORD *)((char *)v6 + v7);
  CopyNodeStatistics(a3, *v6 + 2616LL);
  v9 = *(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 24) + 8LL * *(unsigned int *)(v8 + 4));
  v10 = (__int64 *)(*(_QWORD *)(v9 + 8) + v7);
  if ( (unsigned int)v4 >= *(_DWORD *)(v9 + 80) )
    v10 = *(__int64 **)(v9 + 8);
  CopyNodeStatistics(a3 + 272, *v10);
  return 0LL;
}
