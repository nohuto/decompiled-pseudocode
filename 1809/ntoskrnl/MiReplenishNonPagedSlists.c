/*
 * XREFs of MiReplenishNonPagedSlists @ 0x140163FA4
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x1401638F0 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x14008AB40 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x140164160 (MiAllocatingNonPagedPoolVa.c)
 *     InterlockedPushListSList @ 0x1401C55E0 (InterlockedPushListSList.c)
 */

__int64 __fastcall MiReplenishNonPagedSlists(
        __int128 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v6; // r12d
  unsigned int Alignment_low; // r8d
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdi
  _SLIST_ENTRY *v11; // rbx
  __int64 v12; // r13
  _SLIST_ENTRY *v13; // r15
  __int16 v14; // r12
  _SLIST_HEADER *v15; // r14
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v17; // rbx
  _SLIST_ENTRY *v18; // rax
  _SLIST_HEADER *v20; // [rsp+20h] [rbp-58h]
  unsigned __int64 v21; // [rsp+20h] [rbp-58h]
  _SLIST_ENTRY *v22; // [rsp+28h] [rbp-50h]
  _SLIST_HEADER *ListHead; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+38h] [rbp-40h] BYREF
  _SLIST_ENTRY *v26; // [rsp+A0h] [rbp+28h]

  v20 = &qword_14043B118[25 * a2];
  ListHead = &v20[a5 + 3];
  v6 = dword_140439B08[a5 - 1];
  Alignment_low = LOWORD(ListHead->Alignment);
  if ( Alignment_low >= v6 >> 1 )
    return 0LL;
  v8 = a4 & 0xFFFFFFFFFFFFFE00uLL;
  v24 = *a1;
  if ( a4 + 2 * a5 > (unsigned __int64)v24 + (a4 & 0xFFFFFFFFFFFFFE00uLL) )
    return 0LL;
  v9 = v24 - v8;
  *((_QWORD *)&v24 + 1) += 8 * (v8 >> 6);
  if ( (unsigned __int64)v24 - v8 > 0x200 )
    v9 = 512LL;
  v10 = 0LL;
  *(_QWORD *)&v24 = v9;
  v11 = 0LL;
  v26 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v6 - Alignment_low;
  if ( v14 )
  {
    v15 = v20;
    do
    {
      v22 = v13;
      ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)&v24, a5, a4);
      v21 = ClearBitsAndSet;
      if ( ClearBitsAndSet == -1LL )
        break;
      v17 = v15[20].Alignment + ((a3 + ClearBitsAndSet + v8) << 12);
      MiAllocatingNonPagedPoolVa(v15, 0LL, a3 + ClearBitsAndSet + v8, a5);
      ++v12;
      *(_QWORD *)v17 = v17 ^ qword_14043BF80;
      a4 = a5 + v21;
      v18 = (_SLIST_ENTRY *)(v17 + 16);
      *(_QWORD *)(v17 + 16) = v13;
      v13 = (_SLIST_ENTRY *)(v17 + 16);
      if ( v22 )
        v18 = v26;
      v26 = v18;
      v11 = v18;
      --v14;
    }
    while ( v14 );
    if ( v13 )
    {
      InterlockedPushListSList(ListHead, v13, v11, v12);
      return a5 * v12;
    }
  }
  return v10;
}
