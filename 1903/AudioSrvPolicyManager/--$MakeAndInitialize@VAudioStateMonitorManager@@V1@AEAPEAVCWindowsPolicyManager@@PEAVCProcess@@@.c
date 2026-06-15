/*
 * XREFs of ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x180015944
 * Callers:
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180014480 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x1800145B0 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@2@PEAU32@0@Z @ 0x180017284 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18001760C (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180034AFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  CWindowsPolicyManager *v9; // rdx

  v5 = 0;
  *a1 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &AudioStateMonitorManager::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 4), 0, 0);
    v7[14] = 0;
    *((_QWORD *)v7 + 8) = 0LL;
    *((_QWORD *)v7 + 9) = 0LL;
    *((_QWORD *)v7 + 8) = std::_List_alloc<std::_List_base_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>::_Buynode0(
                            v8,
                            0LL,
                            0LL);
    *((_QWORD *)v7 + 10) = 0LL;
    *((_QWORD *)v7 + 11) = 0LL;
    *((_QWORD *)v7 + 12) = 0LL;
    v7[14] = 1065353216;
    std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Init(
      v7 + 14,
      8LL);
    v9 = g_PolicyManager;
    *((_QWORD *)v7 + 16) = (*a3 + 16LL) & -(__int64)(*a3 != 0LL);
    *((_QWORD *)v7 + 15) = v9;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
