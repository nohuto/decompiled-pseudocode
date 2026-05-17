/*
 * XREFs of sub_180055FD0 @ 0x180055FD0
 * Callers:
 *     sub_1800550B8 @ 0x1800550B8 (sub_1800550B8.c)
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005611C @ 0x18005611C (sub_18005611C.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 */

__int64 __fastcall sub_180055FD0(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 *a5)
{
  __int64 Heap; // rax
  __int64 v9; // rbx
  int v10; // edi
  int v11; // edx
  __int64 *v12; // rax

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18016542C + 786432, 72LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)(Heap + 16) = *(_OWORD *)a1;
  *(_OWORD *)(Heap + 32) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(Heap + 48) = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(Heap + 24) < *(_QWORD *)(Heap + 16) )
  {
    v10 = -1073741701;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v11 = (*a3)++;
    goto LABEL_6;
  }
  v10 = sub_18005611C(a3, a4);
  if ( v10 < 0 )
  {
LABEL_13:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    return (unsigned int)v10;
  }
  v11 = *a3;
LABEL_6:
  **(_DWORD **)(v9 + 32) = v11;
  *(_DWORD *)(v9 + 64) = v11;
  *(_QWORD *)(v9 + 56) = a2;
  v12 = (__int64 *)off_18015F528;
  if ( *off_18015F528 != (_UNKNOWN *)&off_18015F520 )
    __fastfail(3u);
  *(_QWORD *)v9 = &off_18015F520;
  *(_QWORD *)(v9 + 8) = v12;
  *v12 = v9;
  off_18015F528 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
