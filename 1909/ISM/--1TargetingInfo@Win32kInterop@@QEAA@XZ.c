/*
 * XREFs of ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x1800BADA4
 * Callers:
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$7 @ 0x1800BC645 (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::TargetingInfo::~TargetingInfo(Win32kInterop::TargetingInfo *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 13);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  InputContext::~InputContext(this);
}
