/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1802019E8
 * Callers:
 *     ?GetCachedIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801FEEFC (-GetCachedIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShel.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>,std::less<Microsoft::WRL::Wrappers::HString>,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTabImage,wil::err_exception_policy>>>,0>>::find(
        __int64 *a1,
        _QWORD *a2,
        HSTRING *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // r9
  __int64 *v8; // rax
  __int64 *v9; // rdi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v11; // rax
  const WCHAR *v12; // rbx
  const WCHAR *v13; // rax
  _QWORD *result; // rax
  UINT32 v15[14]; // [rsp+30h] [rbp-38h] BYREF
  UINT32 v16; // [rsp+70h] [rbp+8h] BYREF
  UINT32 length; // [rsp+78h] [rbp+10h] BYREF
  UINT32 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = (__int64 *)*a1;
  v9 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v9 + 25) )
  {
    do
    {
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v9[4], &length);
      v11 = WindowsGetStringRawBuffer(*a3, &v16);
      if ( CompareStringOrdinal(StringRawBuffer, length, v11, v16, 0) == 1 )
      {
        v9 = (__int64 *)v9[2];
      }
      else
      {
        v3 = v9;
        v9 = (__int64 *)*v9;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    v7 = (__int64 *)*a1;
    v8 = (__int64 *)*a1;
  }
  if ( v3 == v7 )
    goto LABEL_10;
  v12 = WindowsGetStringRawBuffer(*a3, v15);
  v13 = WindowsGetStringRawBuffer((HSTRING)v3[4], &v18);
  if ( CompareStringOrdinal(v12, v15[0], v13, v18, 0) == 1 )
  {
    v8 = (__int64 *)*a1;
LABEL_10:
    v3 = v8;
  }
  result = a2;
  *a2 = v3;
  return result;
}
