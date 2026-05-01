/*
 * XREFs of ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1800BF99C
 * Callers:
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$48 @ 0x1800BF7D9 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1800BF7D9.c)
 * Callees:
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C0850 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 - a3;
    do
    {
      *(_OWORD *)v3 = *(_OWORD *)(v5 + v3);
      winrt::com_ptr<IUnknown>::operator=(v3 + 16, v3 + v5 + 16);
      *(_DWORD *)(v3 + 24) = *(_DWORD *)(v5 + v3 + 24);
      v3 += 32LL;
    }
    while ( v5 + v3 != a2 );
  }
  return v3;
}
