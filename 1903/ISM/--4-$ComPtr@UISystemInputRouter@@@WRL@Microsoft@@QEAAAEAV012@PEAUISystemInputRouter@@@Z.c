/*
 * XREFs of ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x18001E9E4
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18001D1D4 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18001E8E8 (--0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800839A4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v2 = *a1;
    }
    v6 = v2;
    *a1 = a2;
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v6);
  }
  return a1;
}
