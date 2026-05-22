/*
 * XREFs of ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x180070590
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$2 @ 0x18003D025 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputAttemptedTargetManager::~InputAttemptedTargetManager(InputAttemptedTargetManager *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 3);
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
      v2 = (__int64 *)*((_QWORD *)this + 2);
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 4) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
