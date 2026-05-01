/*
 * XREFs of _anonymous_namespace_::GetTargetItem @ 0x180419B5C
 * Callers:
 *     ?IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z @ 0x180419CA4 (-IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SetNamedBoolean@ShellBindContextHelper@wil@@QEAAJPEBG@Z @ 0x180419E38 (-SetNamedBoolean@ShellBindContextHelper@wil@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall anonymous_namespace_::GetTargetItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  const unsigned __int16 *v5; // rdx
  int v6; // ebx
  LPBC ppbc; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  ppbc = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppbc);
  CreateBindCtx(0, &ppbc);
  v6 = wil::ShellBindContextHelper::SetNamedBoolean((wil::ShellBindContextHelper *)&ppbc, v5);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, LPBC, const GUID *, GUID *, _QWORD *))(*(_QWORD *)a1 + 24LL))(
           a1,
           ppbc,
           &BHID_LinkTargetItem,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppbc);
  return (unsigned int)v6;
}
