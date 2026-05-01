/*
 * XREFs of ?QueueWork@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180037B80
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180037A14 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::QueueWork(
        ModernResourceEnforcer *this,
        struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  ModernResourceEnforcer *v5; // rbx
  ModernResourceEnforcer **v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 232));
  v5 = (struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)((char *)a2 + 136);
  v6 = (ModernResourceEnforcer **)*((_QWORD *)this + 36);
  if ( *v6 != (ModernResourceEnforcer *)((char *)this + 280) )
    __fastfail(3u);
  *(_QWORD *)v5 = (char *)this + 280;
  *((_QWORD *)v5 + 1) = v6;
  *v6 = v5;
  *((_QWORD *)this + 36) = v5;
  if ( (*((_BYTE *)this + 304) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 34));
    *((_DWORD *)this + 76) |= 1u;
  }
  RtlLeaveCriticalSection(v2);
}
