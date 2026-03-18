/*
 * XREFs of ?RemoveVisual@CProjectedShadowReceiver@@AEAAXXZ @ 0x1801AF6F4
 * Callers:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x1801AE958 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ?SetVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x1801AF814 (-SetVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 */

void __fastcall CProjectedShadowReceiver::RemoveVisual(CProjectedShadowReceiver *this)
{
  __int64 v2; // rcx
  __int64 *ProjectedShadowReceivers; // rdi
  __int64 v4; // r9
  int v5; // edx
  __int64 v6; // rcx
  CProjectedShadowReceiver **v7; // rax

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    ProjectedShadowReceivers = (__int64 *)CVisual::GetProjectedShadowReceivers(v2);
    v4 = *ProjectedShadowReceivers;
    v5 = ((ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3) - 1;
    if ( v5 >= 0 )
    {
      v6 = v5;
      v7 = (CProjectedShadowReceiver **)(v4 + 8LL * v5);
      while ( *v7 != this )
      {
        --v5;
        --v7;
        if ( --v6 < 0 )
          goto LABEL_8;
      }
      memmove_0(
        (void *)(v4 + 8LL * v5),
        (const void *)(v4 + 8LL * v5 + 8),
        ProjectedShadowReceivers[1] - (v4 + 8LL * v5 + 8));
      ProjectedShadowReceivers[1] -= 8LL;
    }
LABEL_8:
    *((_QWORD *)this + 7) = 0LL;
  }
}
