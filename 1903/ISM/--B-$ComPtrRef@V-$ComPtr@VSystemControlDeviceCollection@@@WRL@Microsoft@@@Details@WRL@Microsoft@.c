/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@VSystemControlDeviceCollection@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVSystemControlDeviceCollection@@XZ @ 0x180098D1C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020B84 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<SystemControlDeviceCollection>>::operator SystemControlDeviceCollection * *(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = *a1;
  v2 = **a1;
  if ( v2 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
