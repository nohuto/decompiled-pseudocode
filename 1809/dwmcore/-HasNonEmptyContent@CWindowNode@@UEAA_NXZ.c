/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x18005A820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1801AF154 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  char v4; // di
  unsigned int v6; // r15d
  __int64 *ProjectedShadowReceivers; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  CProjectedShadowReceiver *v10; // rbp
  int v11; // esi
  __int64 v12; // rbx
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax

  v1 = *((_QWORD *)this + 102);
  if ( (!v1 || !*(_BYTE *)(v1 + 152))
    && (!*((_BYTE *)this + 954) && (*((_QWORD *)this + 95) || *((_DWORD *)this + 198))
     || *((_QWORD *)this + 113)
     || *((_DWORD *)this + 234)) )
  {
    return 1;
  }
  v3 = *((_QWORD *)this + 32);
  v4 = 1;
  if ( !v3 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3) )
  {
    if ( (**((_DWORD **)this + 28) & 0x10000) != 0
      && (v6 = 0,
          ProjectedShadowReceivers = (__int64 *)CVisual::GetProjectedShadowReceivers(this),
          v8 = *ProjectedShadowReceivers,
          (ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3) )
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
LABEL_22:
        v8 = *ProjectedShadowReceivers;
        v9 = ++v6;
        if ( v6 >= (unsigned __int64)((ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3) )
          return 0;
      }
      while ( 1 )
      {
        ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v10, v11);
        if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)ShadowAtIndexNoRef + 192LL))(ShadowAtIndexNoRef) )
          break;
        if ( ++v11 >= (int)v12 )
          goto LABEL_22;
      }
    }
    else
    {
      return 0;
    }
  }
  return v4;
}
