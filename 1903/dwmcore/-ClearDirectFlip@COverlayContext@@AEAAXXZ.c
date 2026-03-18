/*
 * XREFs of ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800B0D7C
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x18004B230 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800B0BE0 (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 */

void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1663);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 68) != 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 32) + 296LL))(*(_QWORD *)(v2 + 32), 1LL);
      v2 = *((_QWORD *)this + 1663);
    }
    if ( v2 )
      (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
    *((_QWORD *)this + 1663) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xq(v2, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *((_QWORD *)this + 11), 0LL);
  }
}
