/*
 * XREFs of ?clear@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x1800BF5B8
 * Callers:
 *     ??1?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x1800BAAE8 (--1-$list@U-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CB_KUTargetin.c)
 *     ??1?$unordered_map@_KUTargetingInfo@Win32kInterop@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@@std@@QEAA@XZ @ 0x1800BADC8 (--1-$unordered_map@_KUTargetingInfo@Win32kInterop@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800BAF38 (--1Win32kInterop@@UEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800BF8C8 (-erase@-$_Hash@V-$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@_K_ea_1800BF8C8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??1InputContext@@QEAA@XZ @ 0x1800BAE1C (--1InputContext@@QEAA@XZ.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::clear(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  __int64 v4; // rcx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[16];
      if ( v4 )
      {
        v2[16] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      InputContext::~InputContext((InputContext *)(v2 + 3));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x90);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
