/*
 * XREFs of ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180084240
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180054600 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x180084744 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1800857DC (--$_Insert@AEAU-$pair@$$CBKV-$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@V-$_List_uncheck.c)
 *     ??$_Buynode@AEBKPEAVPointerInfoAdapter@@@?$_List_buy@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBK$$QEAPEAVPointerInfoAdapter@@@Z @ 0x180085F4C (--$_Buynode@AEBKPEAVPointerInfoAdapter@@@-$_List_buy@U-$pair@$$CBKV-$ComPtr@VPointerInfoAdapter@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverInputToTarget(
        Win32kInterop *this,
        struct InputInfo *a2,
        struct IInputTarget *a3)
{
  void *v7; // rdx
  int v8; // r13d
  int v9; // r9d
  __int64 v10; // rdx
  unsigned __int64 i; // r8
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // r10
  __int64 *v15; // rdx
  __int64 *v16; // rcx
  PointerInfoAdapter *v17; // rax
  int v18; // ecx
  PointerInfoAdapter *v19; // rdi
  PointerInfoAdapter *v20; // rax
  __int64 v21; // r15
  __int64 *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // rcx
  int v29[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v32; // [rsp+88h] [rbp+38h] BYREF
  __int64 v33; // [rsp+98h] [rbp+48h] BYREF

  v30 = -2LL;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    if ( a3 )
      return (*(__int64 (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 24LL))(a3);
    return 0LL;
  }
  v33 = 0LL;
  if ( !a3 )
  {
    v7 = 0LL;
    goto LABEL_30;
  }
  if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
         a3,
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         &v33) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 64LL))(v33);
    if ( v8 )
    {
      v9 = *((_DWORD *)a2 + 1);
      v32 = v9;
      v10 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 4; ++i )
        v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v32 + i) ^ (unsigned __int64)v10);
      v12 = *((_QWORD *)this + 34);
      v13 = *(__int64 **)(v12 + 16 * (v10 & *((_QWORD *)this + 37)));
      v14 = 2 * (v10 & *((_QWORD *)this + 37));
      v15 = (__int64 *)*((_QWORD *)this + 32);
      while ( 1 )
      {
        v16 = *(__int64 **)(v12 + 8 * v14) == v15
            ? (__int64 *)*((_QWORD *)this + 32)
            : **(__int64 ***)(v12 + 8 * v14 + 8);
        if ( v13 == v16 )
          break;
        if ( *((_DWORD *)v13 + 4) == v9 )
          goto LABEL_18;
        v13 = (__int64 *)*v13;
      }
      v13 = (__int64 *)*((_QWORD *)this + 32);
LABEL_18:
      if ( v13 == v15 )
      {
        v17 = (PointerInfoAdapter *)malloc(0xB0uLL);
        v19 = v17;
        if ( v17 )
          memset_0(v17, 0, 0xB0uLL);
        *(_QWORD *)v29 = v19;
        if ( v19 )
          v20 = PointerInfoAdapter::PointerInfoAdapter(
                  v19,
                  (struct IPointerInfoAdapterClient *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 8) >> 64)));
        else
          v20 = 0LL;
        *(_QWORD *)v29 = v20;
        v21 = **((_QWORD **)this + 32);
        v22 = *(__int64 **)(v21 + 8);
        v23 = std::_List_buy<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>::_Buynode<unsigned long const &,PointerInfoAdapter *>(
                v18,
                v21,
                (_DWORD)v22,
                (unsigned int)&v32,
                (__int64)v29);
        v24 = *((_QWORD *)this + 33);
        if ( v24 == 0x7FFFFFFFFFFFFFELL )
          std::_Xlength_error("list<T> too long");
        *((_QWORD *)this + 33) = v24 + 1;
        *(_QWORD *)(v21 + 8) = v23;
        *v22 = v23;
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Insert<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>>>>(
          (char *)this + 248,
          v29,
          **((_QWORD **)this + 32) + 16LL);
        v13 = *(__int64 **)v29;
      }
      *((_DWORD *)this + 483) = v8;
      *((_QWORD *)this + 242) = *((_QWORD *)a2 + 4);
      v25 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v13[3] + 24LL))(v13[3], a2);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x599,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v25);
        JUMPOUT(0x18008451BLL);
      }
      *((_DWORD *)this + 483) = 0;
      *((_QWORD *)this + 242) = 0LL;
      goto LABEL_31;
    }
    v7 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL))(v33);
LABEL_30:
    Win32kInterop::RoutePointerFrame(a2, v7);
LABEL_31:
    v26 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return 0LL;
  }
  Win32kInterop::RoutePointerFrame(a2, 0LL);
  v27 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a2);
  v28 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return v27;
}
