/*
 * XREFs of MiDeleteUltraMapContext @ 0x1400F5884
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F1EE8 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteUltraThreadContext @ 0x1400F584C (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x1402E8224 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rdi

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    if ( a2 > 2 )
      v4 = 1LL;
    else
      v4 = MiLargePageSizes[a2];
    MiGetUltraMapping((unsigned __int64 *)a1, a2, v4, 2);
    _InterlockedDecrement(&dword_14046676C);
    v5 = (_QWORD *)(a1 + 8);
    do
    {
      if ( *v5 != -1LL )
      {
        MiReleaseFreshPage(48LL * *v5 - 0x58000000000LL);
        MiReleaseNonPagedResources((__int64)&MiSystemPartition, 1uLL);
        *v5 = -1LL;
      }
      ++v5;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
  }
}
