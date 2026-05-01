/*
 * XREFs of ?_GetFocusForRemovedChild@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x180366018
 * Callers:
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x180365520 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007CB58 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::_GetFocusForRemovedChild(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, _DWORD))(*(_QWORD *)a1 + 272LL))(a1, a2, a3, 5LL, 0);
  if ( !*a2 )
  {
    v6 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, _DWORD))(*(_QWORD *)a1 + 272LL))(
                      a1,
                      &v8,
                      a3,
                      6LL,
                      0);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  return a2;
}
