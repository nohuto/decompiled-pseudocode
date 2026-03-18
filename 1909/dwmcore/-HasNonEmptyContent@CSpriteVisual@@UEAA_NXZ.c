/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800B7F60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x180006CDC (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180006D70 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x180006DCC (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180006E98 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800B8008 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  char v2; // di
  __int64 v3; // rcx
  _DWORD *v5; // r10
  struct CDropShadow *DropShadow; // rax
  CProjectedShadowReceiver ***ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v8; // r14
  CProjectedShadowReceiver **v9; // rax
  CProjectedShadowReceiver *v10; // rbp
  CProjectedShadowScene **v11; // r15
  CProjectedShadowScene **v12; // r13
  CProjectedShadowScene *v13; // rbx
  __int64 ***v14; // r12
  __int64 **i; // rbx
  CProjectedShadowReceiver **v16; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3) )
    return 1;
  v5 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v5 & 0x10000) != 0 )
  {
    ProjectedShadowReceivers = (CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers((__int64)this);
    v8 = *ProjectedShadowReceivers;
    v9 = ProjectedShadowReceivers[1];
    v16 = v9;
    if ( v8 != v9 )
    {
      do
      {
        v10 = *v8;
        v11 = (CProjectedShadowScene **)*((_QWORD *)*v8 + 8);
        v12 = (CProjectedShadowScene **)*((_QWORD *)*v8 + 9);
        if ( v11 != v12 )
        {
          do
          {
            if ( !CCommonRegistryData::m_fDisableProjectedShadows )
            {
              v13 = *v11;
              if ( !CProjectedShadowScene::IsEmptyProjection(*v11) && !CProjectedShadowReceiver::IsEmptyMaskContent(v10) )
              {
                v14 = (__int64 ***)*((_QWORD *)v13 + 7);
                for ( i = *v14; i != (__int64 **)v14; i = (__int64 **)*i )
                {
                  if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)i[2]) )
                    return 1;
                }
              }
            }
            ++v11;
          }
          while ( v11 != v12 );
          v9 = v16;
        }
        ++v8;
      }
      while ( v8 != v9 );
      v5 = (_DWORD *)*((_QWORD *)this + 28);
    }
  }
  if ( (*v5 & 0x8000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 232LL))(DropShadow) )
      return 1;
  }
  return v2;
}
