/*
 * XREFs of wil::ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03___ @ 0x18032BAEC
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180331CD0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F6438 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03___(__int64 *a1)
{
  __int64 v1; // r14
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *a1;
  v2 = *(__int64 **)(*a1 + 472);
  v3 = (__int64 *)(*(_QWORD *)a1[1] + 16LL);
  if ( v3 != v2 )
  {
    do
    {
      std::shared_ptr<KBViewInfo>::operator=(v3 - 2, v3);
      v3 += 2;
    }
    while ( v3 != v2 );
    v2 = *(__int64 **)(v1 + 472);
  }
  v4 = (std::_Ref_count_base *)*(v2 - 1);
  if ( v4 )
  {
    std::_Ref_count_base::_Decref(v4);
    v2 = *(__int64 **)(v1 + 472);
  }
  *(_QWORD *)(v1 + 472) = v2 - 2;
  return 0LL;
}
