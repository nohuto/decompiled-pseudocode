/*
 * XREFs of ?get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z @ 0x180316970
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180315EF8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_IsSelected(AccessibleElementBase *this, int *a2)
{
  int Element; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 40),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v6);
  if ( Element >= 0 )
  {
    Element = 0;
    *a2 = (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v6 + 344LL))(v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
