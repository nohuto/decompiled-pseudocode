/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800564B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x180056554 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1801AF154 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  __int64 v2; // rcx
  _DWORD *v4; // r10
  struct CDropShadow *DropShadow; // rax
  unsigned int v6; // r15d
  __int64 *ProjectedShadowReceivers; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  CProjectedShadowReceiver *v10; // rbp
  int v11; // esi
  __int64 v12; // rdi
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax

  v2 = *((_QWORD *)this + 32);
  if ( v2 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
    return 1;
  v4 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v4 & 0x10000) != 0 )
  {
    v6 = 0;
    ProjectedShadowReceivers = (__int64 *)CVisual::GetProjectedShadowReceivers(this);
    v8 = *ProjectedShadowReceivers;
    if ( (ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        v10 = *(CProjectedShadowReceiver **)(v8 + 8 * v9);
        if ( v10 )
        {
          v11 = 0;
          v12 = (__int64)(*((_QWORD *)v10 + 9) - *((_QWORD *)v10 + 8)) >> 3;
          if ( (int)v12 > 0 )
            break;
        }
LABEL_15:
        v8 = *ProjectedShadowReceivers;
        v9 = ++v6;
        if ( v6 >= (unsigned __int64)((ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3) )
        {
          v4 = (_DWORD *)*((_QWORD *)this + 28);
          goto LABEL_5;
        }
      }
      while ( 1 )
      {
        ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v10, v11);
        if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)ShadowAtIndexNoRef + 192LL))(ShadowAtIndexNoRef) )
          return 1;
        if ( ++v11 >= (int)v12 )
          goto LABEL_15;
      }
    }
  }
LABEL_5:
  if ( (*v4 & 0x8000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 192LL))(DropShadow) )
      return 1;
  }
  return 0;
}
