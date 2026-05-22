/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E018
 * Callers:
 *     ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x18001D800 (--_GInputSiteManager@@UEAAPEAXI@Z.c)
 *     ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x18002A070 (--_GInputDeliveryServer@@UEAAPEAXI@Z.c)
 *     ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x18002A168 (--1InputAttemptedTargetManager@@QEAA@XZ.c)
 *     ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x1800301F0 (--_GControllerNavigationManager@@UEAAPEAXI@Z.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$8 @ 0x18012F03B (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$8.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  const struct std::nothrow_t *v5; // rdx
  __int64 v6; // rcx

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *(__int64 **)a1;
    }
    v5 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v5 >= 0x1000 )
    {
      v5 = (const struct std::nothrow_t *)((char *)v5 + 39);
      v6 = *(v2 - 1);
      if ( (unsigned __int64)v2 - v6 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x18001E0C5LL);
      }
      v2 = (__int64 *)*(v2 - 1);
    }
    operator delete(v2, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
