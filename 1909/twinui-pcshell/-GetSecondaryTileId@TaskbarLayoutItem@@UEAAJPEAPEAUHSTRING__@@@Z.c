/*
 * XREFs of ?GetSecondaryTileId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180189A20
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034DA4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskbarLayoutItem::GetSecondaryTileId(TaskbarLayoutItem *this, HSTRING *a2)
{
  _QWORD *v2; // rcx
  HRESULT String; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  HSTRING *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (_QWORD *)((char *)this + 64);
  if ( !*v2 )
  {
    String = -2147319767;
    v4 = 59LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v2);
  String = WindowsCreateString(*(PCNZWCH *)v6, *(_DWORD *)(v6 + 8), v7);
  if ( String < 0 )
  {
    v4 = 60LL;
    goto LABEL_3;
  }
  return 0LL;
}
