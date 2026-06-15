/*
 * XREFs of ?GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z @ 0x180139C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x180139A94 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetHeadTracking(CSystemEffectWrapper *this, int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19), a2);
}
