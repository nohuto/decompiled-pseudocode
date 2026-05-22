/*
 * XREFs of ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x1800CFE70
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800806B8 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x1800CE594 (--$_Emplace_reallocate@AEBV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 *     ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE834 (--0-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AnimationDataProvider::DeferUntilBootstrapped(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rdi

  if ( a1[4] )
  {
    std::_Func_class<void,>::operator()(a2);
  }
  else
  {
    v4 = a1 + 5;
    if ( a1[7] == a1[6] )
    {
      std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        a1 + 5,
        a1[6],
        a2);
    }
    else
    {
      std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
        a1[6],
        a2);
      v4[1] += 64LL;
    }
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2, v3);
}
