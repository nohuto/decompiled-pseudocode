/*
 * XREFs of ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14002B33C
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14002B0C8 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(
        ATL::_ATL_OBJMAP_ENTRY30 *this))(_QWORD, GUID *, LPUNKNOWN *)
{
  __int64 (__fastcall *result)(_QWORD, GUID *, LPUNKNOWN *); // rax
  HRESULT v3; // edi
  LPUNKNOWN pUnk; // [rsp+40h] [rbp+8h] BYREF

  pUnk = 0LL;
  result = (__int64 (__fastcall *)(_QWORD, GUID *, LPUNKNOWN *))*((_QWORD *)this + 2);
  if ( result )
  {
    v3 = result(*((_QWORD *)this + 3), &GUID_00000000_0000_0000_c000_000000000046, &pUnk);
    if ( v3 >= 0 )
      v3 = CoRegisterClassObject(*(const IID *const *)this, pUnk, 4u, 5u, (LPDWORD)this + 10);
    if ( pUnk )
      ((void (__fastcall *)(LPUNKNOWN))pUnk->lpVtbl->Release)(pUnk);
    return (__int64 (__fastcall *)(_QWORD, GUID *, LPUNKNOWN *))(unsigned int)v3;
  }
  return result;
}
