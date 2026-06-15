/*
 * XREFs of ?GetLatency@CSystemEffectWrapper@@UEAAJPEA_J@Z @ 0x140043120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140042E64 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetLatency(CSystemEffectWrapper *this, __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 17) + 32LL))(*((_QWORD *)this + 17), a2);
}
