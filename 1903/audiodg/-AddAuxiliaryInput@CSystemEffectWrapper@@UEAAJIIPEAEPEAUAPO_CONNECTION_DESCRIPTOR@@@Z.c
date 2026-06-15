/*
 * XREFs of ?AddAuxiliaryInput@CSystemEffectWrapper@@UEAAJIIPEAEPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140042C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140042E64 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::AddAuxiliaryInput(
        CSystemEffectWrapper *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        struct APO_CONNECTION_DESCRIPTOR *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int8 *, struct APO_CONNECTION_DESCRIPTOR *))(**((_QWORD **)this + 18) + 24LL))(
           *((_QWORD *)this + 18),
           a2,
           a3,
           a4,
           a5);
}
