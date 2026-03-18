/*
 * XREFs of ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x1800BA750
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800084B4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180008548 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1800085A4 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180008670 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v5; // rcx
  CProjectedShadowReceiver ***ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v7; // rsi
  CProjectedShadowReceiver **v8; // r15
  CProjectedShadowReceiver *v9; // rbp
  CProjectedShadowScene **v10; // r14
  CProjectedShadowScene **v11; // r12
  CProjectedShadowScene *v12; // rbx
  __int64 ***v13; // r13
  __int64 **i; // rbx

  v1 = *((_QWORD *)this + 100);
  v2 = 0;
  if ( (!v1 || !*(_BYTE *)(v1 + 160))
    && (!*((_BYTE *)this + 938) && (*((_QWORD *)this + 93) || *((_DWORD *)this + 194))
     || *((_QWORD *)this + 111)
     || *((_DWORD *)this + 230)) )
  {
    return 1;
  }
  v5 = *((_QWORD *)this + 32);
  if ( v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 232LL))(v5) )
      return 1;
  }
  if ( (**((_DWORD **)this + 28) & 0x10000) != 0 )
  {
    ProjectedShadowReceivers = (CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers((__int64)this);
    v7 = *ProjectedShadowReceivers;
    v8 = ProjectedShadowReceivers[1];
    while ( v7 != v8 )
    {
      v9 = *v7;
      v10 = (CProjectedShadowScene **)*((_QWORD *)*v7 + 8);
      v11 = (CProjectedShadowScene **)*((_QWORD *)*v7 + 9);
      while ( v10 != v11 )
      {
        if ( !CCommonRegistryData::m_fDisableProjectedShadows )
        {
          v12 = *v10;
          if ( !CProjectedShadowScene::IsEmptyProjection(*v10) && !CProjectedShadowReceiver::IsEmptyMaskContent(v9) )
          {
            v13 = (__int64 ***)*((_QWORD *)v12 + 7);
            for ( i = *v13; i != (__int64 **)v13; i = (__int64 **)*i )
            {
              if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)i[2]) )
                return 1;
            }
          }
        }
        ++v10;
      }
      ++v7;
    }
  }
  return v2;
}
