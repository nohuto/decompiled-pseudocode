/*
 * XREFs of ?get_HostRawElementProvider@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x180396790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180395DE8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_HostRawElementProvider(
        AccessibleElementBase *this,
        IRawElementProviderSimple **ppProvider)
{
  HRESULT Element; // ebx
  __int64 v5; // rbx
  HWND v6; // rax
  void *v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *ppProvider = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  Element = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v8);
  if ( Element >= 0 )
  {
    v5 = *(_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( v5 )
    {
      Element = 0;
    }
    else
    {
      v6 = (HWND)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 328LL))(v8);
      Element = UiaHostProviderFromHwnd(v6, ppProvider);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)Element;
}
