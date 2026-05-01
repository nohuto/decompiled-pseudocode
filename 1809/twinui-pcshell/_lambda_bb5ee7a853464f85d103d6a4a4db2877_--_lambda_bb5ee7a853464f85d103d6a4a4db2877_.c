/*
 * XREFs of _lambda_bb5ee7a853464f85d103d6a4a4db2877_::_lambda_bb5ee7a853464f85d103d6a4a4db2877_ @ 0x180268524
 * Callers:
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103d6a4a4db2877_____lambda_bb5ee7a853464f85d103d6a4a4db2877___ @ 0x180266930 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_bb5ee7a853464f85d103.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall lambda_bb5ee7a853464f85d103d6a4a4db2877_::_lambda_bb5ee7a853464f85d103d6a4a4db2877_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 8);
  v5 = (_QWORD *)(a1 + 8);
  *v5 = 0LL;
  if ( v5 != v4 )
  {
    *v5 = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 16));
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 56));
  *(_QWORD *)(a1 + 64) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 64));
  v6 = (_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( a1 + 72 != a2 + 72 )
  {
    *(_QWORD *)(a1 + 72) = *v6;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 80) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 80));
  *(_QWORD *)(a1 + 88) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 88));
  return a1;
}
