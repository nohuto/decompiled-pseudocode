/*
 * XREFs of ?AddRef@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x1400173D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001D81C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::AddRef(__int64 a1, volatile int *a2)
{
  unsigned int v2; // ebx

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 8), a2);
  if ( v2 == 2 )
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return v2;
}
