/*
 * XREFs of sub_180078B68 @ 0x180078B68
 * Callers:
 *     sub_1800153F0 @ 0x1800153F0 (sub_1800153F0.c)
 *     sub_1800155E4 @ 0x1800155E4 (sub_1800155E4.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 *     sub_1800797D4 @ 0x1800797D4 (sub_1800797D4.c)
 *     sub_18007A5B0 @ 0x18007A5B0 (sub_18007A5B0.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 * Callees:
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x18000F5A0 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_1800E2EE4 @ 0x1800E2EE4 (sub_1800E2EE4.c)
 *     sub_1800E32E8 @ 0x1800E32E8 (sub_1800E32E8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180078B68(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
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
    sub_1800E32E8(a1 + 368);
    LocaleT = _LocaleUpdate::GetLocaleT((_LocaleUpdate *)(a1 + 368));
    v12 = sub_1800E2EE4(LocaleT);
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
