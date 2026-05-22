/*
 * XREFs of ?erase@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAttachedInputObjectEntry@InputSite@@@std@@@std@@@2@0@Z @ 0x1800670A4
 * Callers:
 *     ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180067014 (-RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800669B8 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 */

_QWORD *__fastcall std::vector<InputSite::AttachedInputObjectEntry>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  signed __int64 v10; // r12
  signed __int64 v11; // r13
  _QWORD *i; // rdi
  _QWORD *result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(_QWORD **)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      v10 = (char *)a4 - (char *)a3;
      v11 = (char *)a3 - (char *)a4;
      do
      {
        *v9 = *v4;
        Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(
          (_QWORD *)((char *)v4 + v11 + 8),
          (_QWORD *)((char *)v4 + v11 + v10 + 8));
        v9 += 2;
        v4 += 2;
      }
      while ( v4 != v8 );
      v8 = *(_QWORD **)(a1 + 8);
    }
    for ( i = v9; i != v8; i += 2 )
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(i + 1);
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
