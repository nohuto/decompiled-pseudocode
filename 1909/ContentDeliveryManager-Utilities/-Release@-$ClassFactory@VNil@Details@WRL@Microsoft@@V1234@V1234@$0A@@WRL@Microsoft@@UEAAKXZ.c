/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18004B970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  __int64 v1; // r8
  int v2; // edi
  unsigned int v3; // ebx
  bool v4; // zf

  do
    v1 = *(unsigned int *)(a1 + 12);
  while ( (_DWORD)v1 != 0x7FFFFFFF
       && (_DWORD)v1 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), v1 - 1, v1) );
  v2 = *(_DWORD *)(a1 + 20);
  v3 = v1 - 1;
  if ( (_DWORD)v1 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL, v1, 0x7FFFFFFFLL);
    v4 = (v2 & 5) == 5;
  }
  else
  {
    if ( (v2 & 6) != 0 )
      return v3;
    v4 = v3 == 1;
  }
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v3;
}
