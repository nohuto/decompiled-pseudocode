/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1af5501008b02ab9650fb6024cece8bf___::_scalar_deleting_destructor_ @ 0x1802B5FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1af5501008b02ab9650fb6024cece8bf___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 3);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
