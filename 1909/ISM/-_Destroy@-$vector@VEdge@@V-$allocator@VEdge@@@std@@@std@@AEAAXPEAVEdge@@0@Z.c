/*
 * XREFs of ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x1801005B4
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::catch$30 @ 0x18010127E (_std--vector_Edge_std--allocator_Edge___--_Emplace_reallocate_Edge_const_-__--_1_--catch$30.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::vector<Edge>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2 + 8;
    do
    {
      Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)(v4 + 32));
      std::wstring::_Tidy_deallocate(v4);
      v4 += 104LL;
      result = v4 - 8;
    }
    while ( v4 - 8 != a3 );
  }
  return result;
}
