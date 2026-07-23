/*
 * XREFs of MiGetPagesToZero @ 0x1401853A0
 * Callers:
 *     MiZeroLargePages @ 0x14018526C (MiZeroLargePages.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     MiMapPagesToZero @ 0x1400F9160 (MiMapPagesToZero.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1401280A0 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 *     MiGetSinglePageToZero @ 0x1402C1B08 (MiGetSinglePageToZero.c)
 */

__int64 __fastcall MiGetPagesToZero(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int FirstSetLeftGroupAffinity; // eax
  struct _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  if ( !a3 && *(_BYTE *)(a2 + 210) )
    return MiGetHugePageToZero(a1, a2);
  v6 = (unsigned int)(*(_DWORD *)(a2 + 244) >> byte_14043B109);
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( (unsigned int)v3 >= 3 )
  {
    result = MiGetSinglePageToZero(a1, a2, v6);
    v7 = 1LL;
  }
  else
  {
    result = MiUnlinkNodeLargePage(a1, (unsigned int)v3, v6, 4LL, a2 + 232, 0, a2);
    v7 = MiLargePageSizes[v3];
  }
  v8 = result;
  if ( result )
  {
    v9 = *(_QWORD *)(result + 40) >> 58;
    if ( *(_DWORD *)(a2 + 252) != (_DWORD)v9 )
    {
      *(_DWORD *)(a2 + 252) = v9;
      KeQueryNodeActiveAffinity(v9, &Affinity, 0LL);
      if ( Affinity.Mask )
      {
        CurrentThread = KeGetCurrentThread();
        FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&Affinity);
        KeSetIdealProcessorThreadEx((__int64)CurrentThread, FirstSetLeftGroupAffinity, 0LL);
      }
    }
    v10 = (((unsigned __int64)MiGetUltraMapping((unsigned __int64 *)(32 * v3 + a2 + 80), v3, v7, 0) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000000LL;
    if ( (unsigned int)v3 <= 1 )
    {
      v11 = (unsigned int)(2 - v3);
      do
      {
        v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v11;
      }
      while ( v11 );
    }
    return MiMapPagesToZero(a2, v10, v8, v3);
  }
  return result;
}
