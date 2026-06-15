/*
 * XREFs of ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x180139F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x180139A94 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetRegistrationProperties(
        CSystemEffectWrapper *this,
        struct APO_REG_PROPERTIES **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct APO_REG_PROPERTIES **))(**((_QWORD **)this + 17) + 40LL))(
           *((_QWORD *)this + 17),
           a2);
}
