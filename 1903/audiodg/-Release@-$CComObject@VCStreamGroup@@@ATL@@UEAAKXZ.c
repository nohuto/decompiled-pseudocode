/*
 * XREFs of ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x1400137B0
 * Callers:
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x140017FF0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x140018000 (-Release@-$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x140018010 (-Release@-$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CStreamGroup>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(a1 + 86);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 104LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
