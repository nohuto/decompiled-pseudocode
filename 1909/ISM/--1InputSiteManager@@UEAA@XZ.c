/*
 * XREFs of ??1InputSiteManager@@UEAA@XZ @ 0x180066078
 * Callers:
 *     ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x180066190 (--_GInputSiteManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18002A8F0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputSiteManager::~InputSiteManager(InputSiteManager *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rcx
  void *v8; // rcx
  Microsoft::BamoImpl::BamoImplObject *v9; // rcx

  v5 = (__int64 *)*((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 11);
    if ( v5 != v6 )
    {
      do
      {
        v7 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        }
        ++v5;
      }
      while ( v5 != v6 );
      v5 = (__int64 *)*((_QWORD *)this + 10);
    }
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 12) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 7);
  if ( v8 )
  {
    std::_Deallocate<16,0>(
      v8,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  v9 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9, a2, a3, a4);
}
