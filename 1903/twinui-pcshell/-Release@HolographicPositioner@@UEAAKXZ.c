/*
 * XREFs of ?Release@HolographicPositioner@@UEAAKXZ @ 0x180068FC0
 * Callers:
 *     ?Release@HolographicPositioner@@W7EAAKXZ @ 0x1800B7190 (-Release@HolographicPositioner@@W7EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDA@EAAKXZ @ 0x1800B71A0 (-Release@HolographicPositioner@@WDA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WDI@EAAKXZ @ 0x1800B71B0 (-Release@HolographicPositioner@@WDI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHA@EAAKXZ @ 0x1800B71C0 (-Release@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WHI@EAAKXZ @ 0x1800B71D0 (-Release@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WIA@EAAKXZ @ 0x1800B71E0 (-Release@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WII@EAAKXZ @ 0x1800B71F0 (-Release@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJA@EAAKXZ @ 0x1800B7200 (-Release@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WJI@EAAKXZ @ 0x1800B7210 (-Release@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WKI@EAAKXZ @ 0x1800B7220 (-Release@HolographicPositioner@@WKI@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLA@EAAKXZ @ 0x1800B7230 (-Release@HolographicPositioner@@WLA@EAAKXZ.c)
 *     ?Release@HolographicPositioner@@WLI@EAAKXZ @ 0x1800B7240 (-Release@HolographicPositioner@@WLI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::Release(HolographicPositioner *this)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 27);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 27, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v2 )
  {
    if ( this )
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 6) + 64LL))((char *)this + 48, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
