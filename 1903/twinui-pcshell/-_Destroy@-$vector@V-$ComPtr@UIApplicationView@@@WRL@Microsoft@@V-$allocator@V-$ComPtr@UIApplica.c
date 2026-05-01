/*
 * XREFs of ?_Destroy@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@0@Z @ 0x180223B70
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch$32 @ 0x18021EA3A (_std--vector_Microsoft--WRL--ComPtr_IApplicationView__std--allocator_Microsoft--WRL--ComPtr_IApp.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180081550 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 *result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
      result = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFullScreenPositioner>>(v4++);
    while ( v4 != a3 );
  }
  return result;
}
