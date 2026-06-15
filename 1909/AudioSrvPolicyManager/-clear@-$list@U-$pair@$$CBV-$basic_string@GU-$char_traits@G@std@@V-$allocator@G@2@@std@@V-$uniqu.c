/*
 * XREFs of ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXXZ @ 0x18002C59C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002BFB0 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??_ECEndpointVolumeStateManager@@UEAAPEAXI@Z @ 0x18002C740 (--_ECEndpointVolumeStateManager@@UEAAPEAXI@Z.c)
 *     ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18002C820 (--1-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_pt.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015088 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::clear(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[6];
      if ( v4 )
      {
        if ( *(_BYTE *)(v4 + 32) )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 24) + 240LL))(*(_QWORD *)(v4 + 24), v4 + 40);
        v5 = *(_QWORD *)(v4 + 24);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        operator delete((void *)v4, (const struct std::nothrow_t *)0x38);
      }
      std::wstring::~wstring((__int64)(v2 + 2));
      operator delete(v2, (const struct std::nothrow_t *)0x38);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
