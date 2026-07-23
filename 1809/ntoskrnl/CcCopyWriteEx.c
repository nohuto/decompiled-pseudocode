/*
 * XREFs of CcCopyWriteEx @ 0x1400312D0
 * Callers:
 *     CcCopyWrite @ 0x140269940 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x140269B70 (CcFastCopyWrite.c)
 * Callees:
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 *a2, unsigned int a3, char a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v9; // eax
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // edx
  int v13; // r9d
  int v14; // ecx
  __int64 v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v9 = 0;
  if ( ((v9 >= 2 || CurrentThread != KeGetCurrentThread() || !CurrentThread[1].Timer.DueTime.LowPart) && !v9
     || (*(_DWORD *)(a1 + 80) & 0x10) != 0)
    && !a4 )
  {
    return 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v11 = *a2;
  v12 = 2;
  v18 = v11;
  if ( (v11 & 0xFFF) == 0 && a3 >= 0x1000 )
    v12 = 3;
  HIDWORD(v16) = HIDWORD(v11);
  v13 = v12 | 4;
  if ( (((_WORD)a3 + (_WORD)v11) & 0xFFF) != 0 )
    v13 = v12;
  LODWORD(v16) = v11 & 0xFFFFF000;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( v17 - v16 > 0 )
  {
    v14 = v13;
    if ( (unsigned __int64)(v17 - v16) <= 0x1000 )
      v14 = v13 | 6;
  }
  else
  {
    v14 = 7;
  }
  return CcMapAndCopyInToCache(v10, a5, (unsigned int)&v18, a3, v14, a1, (__int64)&v17, a4, a6);
}
