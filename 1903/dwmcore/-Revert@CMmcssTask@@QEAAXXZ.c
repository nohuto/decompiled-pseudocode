/*
 * XREFs of ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800D0BD4
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180098680 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800D0964 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800D0AAC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800D0AF4 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     _lambda_21d74d5478775f948634749288fbae48_::_lambda_invoker_cdecl_ @ 0x1800D9310 (_lambda_21d74d5478775f948634749288fbae48_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::Revert(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  EnterCriticalSection(this);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo && *(_QWORD *)&DebugInfo[2].Flags )
  {
    ((void (*)(void))this[1].LockSemaphore)();
    *(_QWORD *)&this[1].DebugInfo[2].Flags = 0LL;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
