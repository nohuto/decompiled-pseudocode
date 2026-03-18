/*
 * XREFs of MiZeroPageThread @ 0x140185720
 * Callers:
 *     <none>
 * Callees:
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     MiInitializeColorTable @ 0x140175164 (MiInitializeColorTable.c)
 *     MiSetZeroPageThreadPriority @ 0x140185814 (MiSetZeroPageThreadPriority.c)
 *     MiZeroBootLargePages @ 0x1401858A4 (MiZeroBootLargePages.c)
 *     MiDeleteZeroThreadContext @ 0x14018FB94 (MiDeleteZeroThreadContext.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageThread(ULONG_PTR *a1)
{
  _DWORD *v2; // rbp
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v5; // r12d
  int i; // eax
  unsigned int v7; // edi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 == &MiSystemPartition )
    MiZeroBootLargePages();
  v2 = (_DWORD *)a1[924];
  v3 = 0;
  v2[63] = -1;
  MiInitializeColorTable(v2 + 58, 0);
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v5 = MiSetZeroPageThreadPriority(a1, CurrentThread, 0LL);
  for ( i = MiWaitForFreePagesToZero((__int64)a1, &v8, 0); i != -1; i = MiWaitForFreePagesToZero((__int64)a1, &v8, v3) )
  {
    if ( v3 != i )
    {
      v3 = i;
      MiInitializeColorTable(v2 + 58, i);
    }
    v7 = 0;
    while ( !(unsigned int)MiGetPagesToZero((__int64)a1, (unsigned __int64)v2, v7) )
    {
      if ( ++v7 > 3 )
        goto LABEL_11;
    }
    MiZeroPage((__int64)v2, (__int64)a1);
LABEL_11:
    ;
  }
  MiSetZeroPageThreadPriority(a1, CurrentThread, v5);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
  MiDeleteZeroThreadContext(v2);
  ExFreePoolWithTag(v2, 0);
  a1[924] = 0LL;
}
