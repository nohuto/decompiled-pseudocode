/*
 * XREFs of ??4?$ComPtr@UIAgileReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180025CC8
 * Callers:
 *     ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x1800420A0 (-_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IAgileReference>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
