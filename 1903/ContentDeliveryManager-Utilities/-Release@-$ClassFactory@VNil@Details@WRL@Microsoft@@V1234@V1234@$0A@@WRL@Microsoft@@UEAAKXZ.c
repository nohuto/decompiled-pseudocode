/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004B5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  signed __int32 v1; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx
  bool v4; // zf

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( (v2 & 6) != 0 )
      return v3;
    v4 = v3 == 1;
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    v4 = (v2 & 5) == 5;
  }
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v3;
}
