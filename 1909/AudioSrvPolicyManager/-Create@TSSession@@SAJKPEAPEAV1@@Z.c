/*
 * XREFs of ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x180022708
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002488C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800175FC (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180022A38 (--1TSSession@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeS.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C440 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpoint.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@PEAU32@0@Z @ 0x18002CAE8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800349FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TSSession::Create(int a1, struct TSSession **a2)
{
  _QWORD *v4; // rax
  TSSession *v5; // r15
  TSSession *v6; // rdi
  int Interface; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct IVolumeProvider *v10; // r12
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (TSSession *)v4;
  if ( v4 )
  {
    v4[2] = 0LL;
    v4[3] = 0LL;
    *((_DWORD *)v4 + 8) = 0;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v4[8] = 0LL;
    v4[9] = 0LL;
    v4[10] = 0LL;
    v4[11] = 0LL;
    *((_DWORD *)v4 + 24) = 10;
    v4[13] = 0LL;
    v4[14] = 0LL;
    v4[15] = 0LL;
    v4[16] = 0LL;
    v4[17] = 0LL;
    *((_DWORD *)v4 + 36) = 10;
    v4[19] = 0LL;
    v4[20] = 0LL;
    *((_DWORD *)v4 + 42) = 0;
    v4[22] = 0LL;
    v4[23] = 0LL;
    v4[24] = 0LL;
    v4[25] = 0LL;
    v4[26] = 0LL;
    *((_DWORD *)v4 + 54) = 10;
    *((_DWORD *)v4 + 56) = 1065353216;
    *(_QWORD *)((char *)v4 + 228) = 1LL;
    v4[30] = 0LL;
    v4[31] = 0LL;
    v4[32] = 0LL;
    v4[33] = 0LL;
    v4[34] = 0LL;
    v4[35] = 0LL;
    v4[36] = 0LL;
    *((_DWORD *)v4 + 74) = 0;
    *((_DWORD *)v4 + 76) = 0;
    v4[39] = 0LL;
    *((_DWORD *)v4 + 80) = 1;
    *((_BYTE *)v4 + 324) = 0;
    v4[41] = 0LL;
    v4[42] = 0LL;
    *((_DWORD *)v4 + 86) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( !v5 )
  {
    Interface = -2147024882;
    v8 = 187LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)Interface);
    goto LABEL_20;
  }
  *(_DWORD *)v5 = a1;
  v9 = *((_QWORD *)v5 + 32);
  *((_QWORD *)v5 + 32) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = g_VolumeProvider;
  *((_QWORD *)v5 + 32) = 0LL;
  v11 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( !v11 )
  {
    Interface = -2147024882;
LABEL_17:
    v8 = 190LL;
    goto LABEL_18;
  }
  v11[3] = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointVolumeStateManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v12 = &CEndpointVolumeStateManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v12 + 4), 0, 0);
  v12[14] = 0;
  *((_QWORD *)v12 + 8) = 0LL;
  *((_QWORD *)v12 + 9) = 0LL;
  *((_QWORD *)v12 + 8) = std::_List_alloc<std::_List_base_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>::_Buynode0(
                           v13,
                           0LL,
                           0LL);
  *((_QWORD *)v12 + 10) = 0LL;
  *((_QWORD *)v12 + 11) = 0LL;
  *((_QWORD *)v12 + 12) = 0LL;
  v12[14] = 1065353216;
  std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Init(
    (_QWORD *)v12 + 7,
    8LL);
  *((_QWORD *)v12 + 15) = v10;
  if ( v10 )
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v10 + 8LL))(v10);
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::QueryInterface(
                v12,
                &GUID_59d5b9a9_5e6e_4cd4_baae_95ad8d257a28,
                (char *)v5 + 256);
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::Release(v12);
  if ( Interface < 0 )
    goto LABEL_17;
  v6 = 0LL;
  *a2 = v5;
  Interface = 0;
LABEL_20:
  if ( v6 )
  {
    TSSession::~TSSession(v6);
    operator delete(v6, (const struct std::nothrow_t *)0x160);
  }
  return (unsigned int)Interface;
}
