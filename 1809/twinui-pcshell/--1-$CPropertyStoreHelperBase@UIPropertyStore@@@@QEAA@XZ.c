/*
 * XREFs of ??1?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEAA@XZ @ 0x180107BA8
 * Callers:
 *     _ShellPositionerManager::PresentationRequested_::_1_::dtor$18 @ 0x1803356E0 (_ShellPositionerManager--PresentationRequested_--_1_--dtor$18.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::~CPropertyStoreHelperBase<IPropertyStore>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
