/*
 * XREFs of ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180067014
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x180066A40 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 *     ?OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180066B30 (-OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800669B8 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 *     ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@0@Z @ 0x1800670A4 (-erase@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObj_ea_1800670A4.c)
 */

void __fastcall InputSite::RemoveAllObjectsForElement(InputSite *this, struct InputSiteElementProxy *a2)
{
  _QWORD *v2; // rsi
  char *v3; // r14
  _QWORD *i; // rbx
  _QWORD *j; // rdi
  char v6; // [rsp+40h] [rbp+8h] BYREF
  struct InputSiteElementProxy *v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  v2 = (_QWORD *)*((_QWORD *)this + 50);
  v3 = (char *)this + 392;
  for ( i = (_QWORD *)*((_QWORD *)this + 49); i != v2 && (struct InputSiteElementProxy *)*i != a2; i += 2 )
    ;
  if ( i != v2 )
  {
    for ( j = i + 2; j != v2; j += 2 )
    {
      if ( (struct InputSiteElementProxy *)*j != a2 )
      {
        *i = *j;
        Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(i + 1, j + 1);
        a2 = v7;
        i += 2;
      }
    }
  }
  std::vector<InputSite::AttachedInputObjectEntry>::erase(v3, &v6, i, v2);
}
