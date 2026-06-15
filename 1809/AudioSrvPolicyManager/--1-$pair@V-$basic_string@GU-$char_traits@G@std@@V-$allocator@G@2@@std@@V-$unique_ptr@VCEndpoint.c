/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x18002EF3C
 * Callers:
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$4 @ 0x180039C5F (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$4.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>::~pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 24) )
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 16) + 240LL))(*(_QWORD *)(v2 + 16), v2 + 32);
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    operator delete((void *)v2, (const struct std::nothrow_t *)0x30);
  }
  return std::wstring::~wstring(a1);
}
