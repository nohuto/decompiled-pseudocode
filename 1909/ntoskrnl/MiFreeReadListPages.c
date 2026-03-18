/*
 * XREFs of MiFreeReadListPages @ 0x140647C68
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiReleaseReadListResources @ 0x140647BD8 (MiReleaseReadListResources.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400F8738 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 *     MiGetPfnLink @ 0x14013CD90 (MiGetPfnLink.c)
 *     MiFreeReadListPageList @ 0x140647CF0 (MiFreeReadListPageList.c)
 */

void __fastcall MiFreeReadListPages(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = MiFreeReadListPageList(a1 + 40, &v9);
  v3 = v9;
  v4 = v2;
  v5 = (__int64 *)(a1 + 48);
  v6 = 4LL;
  do
  {
    v7 = 0LL;
    while ( *v5 )
    {
      *v5 = MiGetPfnLink(*v5);
      if ( !v3 )
        v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v8 + 40)) >> 8) & 0x3FF);
      MiReleaseFreshPage(v8);
      ++v7;
    }
    v4 += v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v4 )
    MiReturnFaultCharges(v3, v4, 1);
}
