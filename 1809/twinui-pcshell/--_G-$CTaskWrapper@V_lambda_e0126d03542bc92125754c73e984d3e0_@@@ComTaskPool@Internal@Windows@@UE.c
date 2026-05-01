/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_e0126d03542bc92125754c73e984d3e0_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1802874F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F8F4 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e0126d03542bc92125754c73e984d3e0_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 4);
  v4 = a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
