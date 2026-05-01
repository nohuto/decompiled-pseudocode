/*
 * XREFs of ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x180138568
 * Callers:
 *     ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180138740 (--_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1800E2538 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall TaskbarLayoutPolicyManager::~TaskbarLayoutPolicyManager(TaskbarLayoutPolicyManager *this)
{
  OLECHAR *v2; // rcx
  OLECHAR *v3; // rcx
  OLECHAR *v4; // rcx
  OLECHAR *v5; // rcx
  HRESULT v6; // eax

  *(_QWORD *)this = &TaskbarLayoutPolicyManager::`vftable';
  v2 = (OLECHAR *)*((_QWORD *)this + 16);
  if ( v2 )
    SysFreeString(v2);
  v3 = (OLECHAR *)*((_QWORD *)this + 15);
  if ( v3 )
    SysFreeString(v3);
  v4 = (OLECHAR *)*((_QWORD *)this + 14);
  if ( v4 )
    SysFreeString(v4);
  v5 = (OLECHAR *)*((_QWORD *)this + 13);
  if ( v5 )
    SysFreeString(v5);
  v6 = VariantClear((VARIANTARG *)((char *)this + 80));
  if ( v6 < 0 )
    _com_issue_error((char *)(unsigned int)v6);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 56);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 32);
  *((_DWORD *)this + 7) = -1073741823;
}
