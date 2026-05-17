/*
 * XREFs of sub_1800593F0 @ 0x1800593F0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     LdrResGetRCConfig @ 0x180058E50 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x18008BA60 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     sub_1800E0728 @ 0x1800E0728 (sub_1800E0728.c)
 */

char __fastcall sub_1800593F0(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int16 a5, int a6, int a7, __int64 a8)
{
  unsigned int i; // edi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned int j; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 Heap; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rcx

  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive(&qword_1801664B0);
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_180164340 )
      goto LABEL_10;
    v12 = (unsigned __int64)i << 6;
    v13 = v12 + qword_180164338;
    if ( *(_QWORD *)(v12 + qword_180164338 + 8) != a1 )
    {
      if ( (a6 & 0x10) != 0
        && dword_18016434C
        && (unsigned __int64)(*(_QWORD *)(v13 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_1800E0728(v13, 0LL);
      }
      continue;
    }
    if ( (a6 & 2) != 0 && *(_QWORD *)(v13 + 16) )
      goto LABEL_73;
    if ( (a6 & 1) != 0 && *(_QWORD *)(v13 + 32) && a5 && *(_WORD *)v13 == a5 )
      break;
  }
  if ( *a2 == -1LL )
  {
LABEL_50:
    v27 = qword_180164338;
    *a2 = *(_QWORD *)(v12 + qword_180164338 + 32);
    if ( a3 )
      *a3 = *(_QWORD *)(v12 + v27 + 40);
    goto LABEL_73;
  }
  if ( (a6 & 0x20) == 0 )
  {
    ZwUnmapViewOfSection(-1LL);
    if ( a3 )
      ZwClose(*a3);
    goto LABEL_50;
  }
  if ( *(_QWORD *)(v13 + 32) == -1LL )
    *(_QWORD *)(v13 + 32) = 0LL;
LABEL_10:
  if ( (a6 & 0x10) != 0 )
    goto LABEL_73;
  if ( qword_180164338 )
  {
    if ( dword_180164340 >= (unsigned int)dword_180164344 )
    {
      Heap = RtlReAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               8u,
               qword_180164338,
               (unsigned __int64)(unsigned int)(dword_180164344 + 32) << 6);
      if ( !Heap )
        goto LABEL_73;
      qword_180164338 = Heap;
      dword_180164344 += 32;
    }
  }
  else
  {
    v24 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2048LL);
    if ( !v24 )
      goto LABEL_73;
    qword_180164338 = v24;
    dword_180164344 = 32;
  }
  for ( j = 0; j < dword_180164340; ++j )
  {
    v15 = (unsigned __int64)j << 6;
    v16 = qword_180164338;
    if ( *(_QWORD *)(v15 + qword_180164338 + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)(v15 + qword_180164338 + 16) )
      {
        *(_QWORD *)(v15 + qword_180164338 + 16) = a4;
        *(_DWORD *)(v15 + v16 + 56) = a7;
        goto LABEL_73;
      }
      if ( (a6 & 1) != 0 )
      {
        v21 = (unsigned __int64)j << 6;
        v22 = v21 + qword_180164338;
        if ( !*(_QWORD *)(v21 + qword_180164338 + 32) && (!*(_WORD *)v22 || *(_WORD *)v22 == a5) )
        {
          *(_QWORD *)(v22 + 32) = *a2;
          if ( a3 )
            v23 = *a3;
          else
            v23 = 0LL;
          *(_QWORD *)(v22 + 40) = v23;
          *(_WORD *)v22 = a5;
          *(_DWORD *)(v22 + 56) = a7;
          *(_QWORD *)(v22 + 48) = a8;
          if ( dword_18016434C )
          {
            LOBYTE(v16) = 1;
            if ( (int)sub_1800E0728(v22, v16) >= 0
              && (dword_18016434C & 2) != 0
              && *(_DWORD *)(v21 + qword_180164338 + 56) == -1073741799 )
            {
              *a2 = *(_QWORD *)(v21 + qword_180164338 + 32);
            }
          }
          goto LABEL_73;
        }
      }
    }
  }
  v17 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 88);
    v19 = (unsigned __int64)(unsigned int)dword_180164340 << 6;
    v20 = qword_180164338;
    *(_QWORD *)(v19 + qword_180164338 + 8) = a1;
    *(_QWORD *)(v19 + v20 + 16) = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v25 = *a2;
      else
        v25 = 0LL;
      *(_QWORD *)(v19 + v20 + 32) = v25;
      if ( a3 )
        v26 = *a3;
      else
        v26 = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = v26;
      *(_QWORD *)(v19 + v20 + 48) = a8;
    }
    else
    {
      *(_QWORD *)(v19 + v20 + 32) = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = 0LL;
      *(_QWORD *)(v19 + v20 + 48) = 0LL;
    }
    *(_WORD *)(v19 + v20) = a5;
    *(_DWORD *)(v19 + v20 + 24) = v18;
    *(_DWORD *)(v19 + v20 + 56) = a7;
    if ( dword_18016434C )
    {
      if ( (a6 & 1) != 0 )
      {
        v29 = (unsigned __int64)j << 6;
        v30 = v29 + v20;
        LOBYTE(v20) = 1;
        if ( (int)sub_1800E0728(v30, v20) >= 0
          && (dword_18016434C & 2) != 0
          && *(_DWORD *)(v29 + qword_180164338 + 56) == -1073741799 )
        {
          *a2 = *(_QWORD *)(v29 + qword_180164338 + 32);
        }
      }
    }
    ++dword_180164340;
  }
LABEL_73:
  RtlReleaseSRWLockExclusive(&qword_1801664B0);
  return 1;
}
