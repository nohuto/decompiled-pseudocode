/*
 * XREFs of MiDeleteUltraMapContext @ 0x1400E18C4
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x1400E188C (MiDeleteUltraThreadContext.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0B34 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiGetUltraMdlContext @ 0x1402CE1DC (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiReleaseNonPagedResources @ 0x1400E1968 (MiReleaseNonPagedResources.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rdi

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    if ( a2 <= 2 )
      v4 = MiLargePageSizes[a2];
    else
      v4 = 1LL;
    MiGetUltraMapping((unsigned __int64 *)a1, a2, v4, 2);
    _InterlockedDecrement(&dword_14043BDA4);
    v5 = (_QWORD *)(a1 + 8);
    do
    {
      if ( *v5 != -1LL )
      {
        MiReleaseFreshPage(48LL * *v5 - 0x58000000000LL);
        MiReleaseNonPagedResources(&MiSystemPartition, 1LL);
        *v5 = -1LL;
      }
      ++v5;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
  }
}
