/*
 * XREFs of ?v_OnViewCreated@LegacyViewWrapper@@EEAAXXZ @ 0x18023C7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LegacyViewWrapper::v_OnViewCreated(LegacyViewWrapper *this)
{
  if ( *((_QWORD *)this + 34) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 160LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 520LL),
      *((_QWORD *)this + 24));
}
