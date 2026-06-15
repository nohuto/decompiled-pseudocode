/*
 * XREFs of ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x18013A7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x180139A94 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDRelease(CSystemEffectWrapper *this)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 22);
  if ( !v2 )
  {
    v3 = *((_QWORD *)this + 12);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( this )
      (*(void (__fastcall **)(CSystemEffectWrapper *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v2;
}
