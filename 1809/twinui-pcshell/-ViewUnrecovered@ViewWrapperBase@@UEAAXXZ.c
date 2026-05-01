/*
 * XREFs of ?ViewUnrecovered@ViewWrapperBase@@UEAAXXZ @ 0x180245690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::ViewUnrecovered(ViewWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 20) + 520LL) + 48LL))(
    *(_QWORD *)(*((_QWORD *)this + 20) + 520LL),
    *((unsigned int *)this + 35),
    *((_QWORD *)this + 23),
    2LL);
  (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 792LL))(this);
}
