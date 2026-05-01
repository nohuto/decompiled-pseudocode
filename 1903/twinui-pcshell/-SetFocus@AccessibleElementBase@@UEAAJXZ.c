/*
 * XREFs of ?SetFocus@AccessibleElementBase@@UEAAJXZ @ 0x1803762F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803764F8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::SetFocus(AccessibleElementBase *this)
{
  int Element; // ebx
  __int64 v3; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 8),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v5);
  if ( Element >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v6);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 288LL))(v6, v5);
    }
    else
    {
      LOBYTE(v3) = 1;
      (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v5 + 296LL))(v5, v3);
    }
    Element = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return (unsigned int)Element;
}
