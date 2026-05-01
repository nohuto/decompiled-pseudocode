/*
 * XREFs of ??1ModernResourceEnforcer@@MEAA@XZ @ 0x180055430
 * Callers:
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180055480 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::~ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  v2 = *((_QWORD *)this + 34);
  if ( v2 )
    TpReleaseWork(v2);
  v3 = *((_QWORD *)this + 37);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
