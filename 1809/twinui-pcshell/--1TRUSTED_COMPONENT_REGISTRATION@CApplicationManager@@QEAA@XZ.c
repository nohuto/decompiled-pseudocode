/*
 * XREFs of ??1TRUSTED_COMPONENT_REGISTRATION@CApplicationManager@@QEAA@XZ @ 0x1800EBBD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::TRUSTED_COMPONENT_REGISTRATION::~TRUSTED_COMPONENT_REGISTRATION(
        CApplicationManager::TRUSTED_COMPONENT_REGISTRATION *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
