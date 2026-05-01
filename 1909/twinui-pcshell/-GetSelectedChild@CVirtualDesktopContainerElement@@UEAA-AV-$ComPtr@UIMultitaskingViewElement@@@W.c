/*
 * XREFs of ?GetSelectedChild@CVirtualDesktopContainerElement@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@XZ @ 0x1803A13E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CVirtualDesktopContainerElement::GetSelectedChild(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi

  v2 = *(__int64 **)(a1 + 792);
  v4 = &v2[*(_QWORD *)(a1 + 800)];
  while ( 1 )
  {
    if ( v2 == v4 )
    {
      *a2 = 0LL;
      return a2;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v2 + 344LL))(*v2) )
      break;
    ++v2;
  }
  *a2 = *v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
