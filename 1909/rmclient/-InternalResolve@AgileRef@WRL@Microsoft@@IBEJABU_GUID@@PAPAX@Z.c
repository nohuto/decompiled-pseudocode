/*
 * XREFs of ?InternalResolve@AgileRef@WRL@Microsoft@@IBEJABU_GUID@@PAPAX@Z @ 0x100074D1
 * Callers:
 *     _lambda_046e550ea9397cce661af54b6af0d395_::operator()_IInspectable___IInspectable___ @ 0x100079EF (_lambda_046e550ea9397cce661af54b6af0d395_--operator()_IInspectable___IInspectable___.c)
 *     _lambda_8fe8453917231015a81499f07f9fc156_::operator()_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___ @ 0x10007ADF (_lambda_8fe8453917231015a81499f07f9fc156_--operator()_IInspectable___Windows--System--IAppMemory.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Microsoft::WRL::AgileRef::InternalResolve(
        Microsoft::WRL::AgileRef *this,
        const struct _GUID *a2,
        void **a3)
{
  int v3; // ecx

  *a3 = 0;
  v3 = *(_DWORD *)this;
  if ( v3 )
    return (*(int (__thiscall **)(_DWORD, int, const struct _GUID *, void **))(*(_DWORD *)v3 + 12))(
             *(_DWORD *)(*(_DWORD *)v3 + 12),
             v3,
             a2,
             a3);
  else
    return 0;
}
