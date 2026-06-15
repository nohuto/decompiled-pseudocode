/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x1400035AC
 * Callers:
 *     ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x140001940 (-Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400018D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140003D18 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400137F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessServerMemory,ICrossProcessMemory,void *,unsigned int &>(
        void ***a1,
        void **a2,
        int *a3)
{
  void **v6; // rax
  void **v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  int v9; // edi
  const struct _GUID *v10; // rcx
  int IsEqualGUID; // eax
  __int64 v12; // rdx
  int v13; // edi
  void **v14; // rcx

  *a1 = 0LL;
  v6 = (void **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    *v6 = &CCrossProcessBaseMemory::`vftable';
    v6[2] = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    v6[4] = 0LL;
    *((_DWORD *)v6 + 11) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vftable';
    if ( v8 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
    *v7 = &CCrossProcessServerMemory::`vftable';
    v9 = *a3;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v7 + 2,
      *a2);
    *((_DWORD *)v7 + 6) = v9;
    *a1 = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(
                         &GUID_910f47db_d25f_4cf9_995e_f86c161b3eef,
                         &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v7;
      (*((void (__fastcall **)(void **))*v7 + 1))(v7);
      v13 = 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v10, v10);
      v12 = 2147500034LL;
      if ( IsEqualGUID )
      {
        *a1 = v7;
        v13 = 0;
        v14 = v7;
      }
      else
      {
        v13 = -2147467262;
        v14 = 0LL;
      }
      if ( v13 == -2147467262 )
        v13 = -2147467262;
      if ( v13 >= 0 )
        (*((void (__fastcall **)(void **, __int64))*v14 + 1))(v14, 2147500034LL);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>::Release(
      v7,
      v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
