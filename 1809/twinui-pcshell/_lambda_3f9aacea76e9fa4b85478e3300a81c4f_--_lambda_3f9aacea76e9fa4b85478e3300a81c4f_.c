/*
 * XREFs of _lambda_3f9aacea76e9fa4b85478e3300a81c4f_::_lambda_3f9aacea76e9fa4b85478e3300a81c4f_ @ 0x1801B0828
 * Callers:
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemPropertyChangedArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemPropertyChangedArgs@@@Z @ 0x1801AEFA0 (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemProperty.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 *__fastcall lambda_3f9aacea76e9fa4b85478e3300a81c4f_::_lambda_3f9aacea76e9fa4b85478e3300a81c4f_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  v5 = *a3;
  a1[1] = *a3;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 88);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 88), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      return a1;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v6 + 16),
      (volatile int *)v5);
  }
  return a1;
}
