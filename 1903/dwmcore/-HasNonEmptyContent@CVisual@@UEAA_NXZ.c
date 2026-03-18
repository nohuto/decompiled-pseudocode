/*
 * XREFs of ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800A1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800084B4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180008548 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1800085A4 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180008670 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasNonEmptyContent(CVisual *this)
{
  __int64 v2; // rcx
  CProjectedShadowReceiver ***ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v5; // rsi
  CProjectedShadowReceiver **v6; // r12
  CProjectedShadowReceiver *v7; // rbp
  CProjectedShadowScene **v8; // r14
  CProjectedShadowScene **i; // r15
  CProjectedShadowScene *v10; // rdi
  __int64 ***v11; // rdi
  __int64 **j; // rbx

  v2 = *((_QWORD *)this + 32);
  if ( v2 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2) )
    return 1;
  if ( (**((_DWORD **)this + 28) & 0x10000) != 0 )
  {
    ProjectedShadowReceivers = (CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers((__int64)this);
    v5 = *ProjectedShadowReceivers;
    v6 = ProjectedShadowReceivers[1];
    if ( *ProjectedShadowReceivers != v6 )
    {
      do
      {
        v7 = *v5;
        v8 = (CProjectedShadowScene **)*((_QWORD *)*v5 + 8);
        for ( i = (CProjectedShadowScene **)*((_QWORD *)*v5 + 9); v8 != i; ++v8 )
        {
          if ( !CCommonRegistryData::m_fDisableProjectedShadows )
          {
            v10 = *v8;
            if ( !CProjectedShadowScene::IsEmptyProjection(*v8) && !CProjectedShadowReceiver::IsEmptyMaskContent(v7) )
            {
              v11 = (__int64 ***)*((_QWORD *)v10 + 7);
              for ( j = *v11; j != (__int64 **)v11; j = (__int64 **)*j )
              {
                if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)j[2]) )
                  return 1;
              }
            }
          }
        }
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  return 0;
}
