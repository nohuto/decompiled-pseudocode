/*
 * XREFs of ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180022760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  signed __int32 v1; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v2 = *(_DWORD *)(a1 + 32);
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( (v2 & 4) == 0 && v3 == 1 )
      goto LABEL_7;
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v2 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_7:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v3;
}
