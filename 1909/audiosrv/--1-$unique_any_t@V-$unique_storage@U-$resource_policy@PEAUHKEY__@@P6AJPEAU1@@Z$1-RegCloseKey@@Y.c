/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3C44
 * Callers:
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180037E2C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$1 @ 0x18007458A (_CConstraintModel--Initialize_--_1_--dtor$1.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$2 @ 0x18007459C (_CConstraintModel--Initialize_--_1_--dtor$2.c)
 *     _GetContainerProperty_::_1_::dtor$1 @ 0x1800F7C6C (_GetContainerProperty_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(
        HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
