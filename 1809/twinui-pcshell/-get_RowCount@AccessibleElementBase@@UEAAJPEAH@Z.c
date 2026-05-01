/*
 * XREFs of ?get_RowCount@AccessibleElementBase@@UEAAJPEAH@Z @ 0x180316A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180315EF8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_RowCount(AccessibleElementBase *this, int *a2)
{
  int Element; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 72),
              &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2,
              &v6);
  if ( Element >= 0 )
  {
    *a2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v6 + 88LL))(v6);
    Element = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  return (unsigned int)Element;
}
