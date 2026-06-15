/*
 * XREFs of ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180033454
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x1800328CC (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180033828 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::AssignedAccess::AAManagerHelper *__fastcall Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper(
        Windows::Internal::AssignedAccess::AAManagerHelper *this)
{
  HRESULT v2; // eax
  int v3; // edx
  unsigned int v4; // r8d
  HSTRING v5; // rcx
  int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v9; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v10; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)this = 0LL;
  v10 = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.AssignedAccess.AssignedAccessManager", 0x35u, &v9, &v10);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
    JUMPOUT(0x180033535LL);
  }
  v5 = v10;
  *(_QWORD *)this = 0LL;
  v6 = RoActivateInstance(v5, &v8);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)&GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *(_QWORD *)this = v8;
    }
    else
    {
      v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, Windows::Internal::AssignedAccess::AAManagerHelper *))v8)(
             v8,
             &GUID_3ea0718b_7dc4_4cb2_83fa_9f86d639fc6a,
             this);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  *((_DWORD *)this + 2) = v6;
  return this;
}
