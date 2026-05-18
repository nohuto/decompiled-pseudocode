/*
 * XREFs of sub_180078A58 @ 0x180078A58
 * Callers:
 *     sub_180015380 @ 0x180015380 (sub_180015380.c)
 *     sub_180015574 @ 0x180015574 (sub_180015574.c)
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_1800793E0 @ 0x1800793E0 (sub_1800793E0.c)
 *     sub_1800796C4 @ 0x1800796C4 (sub_1800796C4.c)
 *     sub_18007A4A0 @ 0x18007A4A0 (sub_18007A4A0.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F550 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_1800E2DD4 @ 0x1800E2DD4 (sub_1800E2DD4.c)
 *     sub_1800E31D8 @ 0x1800E31D8 (sub_1800E31D8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180078A58(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct __crt_locale_pointers *LocaleT; // rax
  __int64 v12; // r8
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h] BYREF

  result = (__int64)&retaddr;
  if ( *(_QWORD *)(a1 + 912) )
  {
    v9 = *(_QWORD *)(a4 + 8);
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    sub_1800E31D8(a1 + 368);
    LocaleT = _LocaleUpdate::GetLocaleT((_LocaleUpdate *)(a1 + 368));
    v12 = sub_1800E2DD4(LocaleT);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 912))(a1, a2, v12);
  }
  v13 = *(volatile signed __int32 **)(a3 + 8);
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = *(volatile signed __int32 **)(a4 + 8);
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
