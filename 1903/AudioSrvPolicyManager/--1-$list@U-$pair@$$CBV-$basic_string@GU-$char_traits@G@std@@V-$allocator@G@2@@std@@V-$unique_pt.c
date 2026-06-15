/*
 * XREFs of ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18002C920
 * Callers:
 *     _TSSession::Create_::_1_::dtor$11 @ 0x180037201 (_TSSession--Create_--_1_--dtor$11.c)
 * Callees:
 *     ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXXZ @ 0x18002C69C (-clear@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$uniqu.c)
 */

void __fastcall std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::~list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>(
        void **a1)
{
  std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::clear((__int64)a1);
  operator delete(*a1, (const struct std::nothrow_t *)0x38);
}
