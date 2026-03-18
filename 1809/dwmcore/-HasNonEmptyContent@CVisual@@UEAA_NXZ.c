/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x180055D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1801AF154 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 */

char __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  __int64 v2; // rcx
  unsigned int v4; // ebp
  __int64 *ProjectedShadowReceivers; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  CProjectedShadowReceiver *v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax

  v2 = *((_QWORD *)this + 32);
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
  {
    if ( (**((_DWORD **)this + 28) & 0x10000) == 0 )
      return 0;
    v4 = 0;
    ProjectedShadowReceivers = (__int64 *)CVisual::GetProjectedShadowReceivers(this);
    v6 = *ProjectedShadowReceivers;
    if ( !((ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3) )
      return 0;
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *(CProjectedShadowReceiver **)(v6 + 8 * v7);
      if ( v8 )
      {
        v9 = 0;
        v10 = (__int64)(*((_QWORD *)v8 + 9) - *((_QWORD *)v8 + 8)) >> 3;
        if ( (int)v10 > 0 )
          break;
      }
LABEL_12:
      v6 = *ProjectedShadowReceivers;
      v7 = ++v4;
      if ( v4 >= (unsigned __int64)((ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3) )
        return 0;
    }
    while ( 1 )
    {
      ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v8, v9);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)ShadowAtIndexNoRef + 192LL))(ShadowAtIndexNoRef) )
        break;
      if ( ++v9 >= (int)v10 )
        goto LABEL_12;
    }
  }
  return 1;
}
