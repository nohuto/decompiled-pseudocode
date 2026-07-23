/*
 * XREFs of MiFreeReadListPages @ 0x140663B20
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140663A90 (MiReleaseReadListResources.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiGetPfnLink @ 0x1400E10E0 (MiGetPfnLink.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 *     MiPartitionIdToPointer @ 0x140134DB8 (MiPartitionIdToPointer.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r8

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 40);
  v3 = 0LL;
  v4 = (__int64 *)(a1 + 48);
  v5 = 2LL;
  do
  {
    while ( *v2 )
    {
      *v2 = MiGetPfnLink(*v2);
      if ( !v1 )
        v1 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF);
      MiReleaseFreshPage(v6);
      ++v3;
    }
    v2 = v4;
    --v5;
  }
  while ( v5 );
  if ( v3 )
    MiReturnFaultCharges(v1, v3, 1);
}
