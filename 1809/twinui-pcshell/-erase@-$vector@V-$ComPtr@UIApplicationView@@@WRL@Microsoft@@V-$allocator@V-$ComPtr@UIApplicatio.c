/*
 * XREFs of ?erase@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801CC414
 * Callers:
 *     ?RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801CB45C (-RemovePendingView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180080A50 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 + 8);
  v4 = (__int64 *)(a3 + 8);
  if ( (__int64 *)(a3 + 8) != v3 )
  {
    do
    {
      v8 = 0LL;
      if ( &v11 != v4 )
      {
        v8 = *v4;
        *v4 = 0LL;
      }
      v9 = *(v4 - 1);
      *(v4 - 1) = v8;
      v11 = v9;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      ++v4;
    }
    while ( v4 != v3 );
    v3 = *(__int64 **)(a1 + 8);
  }
  IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IObjectCollection>>(v3 - 1);
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
