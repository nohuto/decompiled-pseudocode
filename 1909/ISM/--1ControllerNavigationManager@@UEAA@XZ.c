/*
 * XREFs of ??1ControllerNavigationManager@@UEAA@XZ @ 0x180072118
 * Callers:
 *     ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x180072340 (--_GControllerNavigationManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x1800564BC (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 */

void __fastcall ControllerNavigationManager::~ControllerNavigationManager(ControllerNavigationManager *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  _QWORD **v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  Microsoft::BamoImpl::BamoImplObject *v16; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 26);
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
      v2 = (__int64 *)*((_QWORD *)this + 25);
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 27) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 19);
  if ( v6 )
  {
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 21) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
  }
  v7 = (_QWORD **)*((_QWORD *)this + 17);
  v8 = *v7;
  *v7 = v7;
  *(_QWORD *)(*((_QWORD *)this + 17) + 8LL) = *((_QWORD *)this + 17);
  *((_QWORD *)this + 18) = 0LL;
  v9 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v8 != v9 )
  {
    do
    {
      v10 = (_QWORD *)*v8;
      v11 = v8[3];
      if ( v11 )
      {
        v8[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x20);
      v8 = v10;
      v9 = (_QWORD *)*((_QWORD *)this + 17);
    }
    while ( v10 != v9 );
  }
  std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x20);
  v12 = (void *)*((_QWORD *)this + 11);
  if ( v12 )
  {
    std::_Deallocate<16,0>(
      v12,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 13) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)this + 72);
  std::_Deallocate<16,0>(*((void **)this + 9), (const struct std::nothrow_t *)0x20);
  v16 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v16 )
    Microsoft::BamoImpl::BamoImplObject::Release(v16, v13, v14, v15);
}
