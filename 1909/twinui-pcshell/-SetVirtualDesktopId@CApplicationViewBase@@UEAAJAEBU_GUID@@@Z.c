/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180073BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___ @ 0x1800901E8 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_af861fabadf2fb98547f9.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942@@@wil@@SA_NXZ @ 0x1800903F8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??I?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAPEAPEAGXZ @ 0x18011E5D4 (--I-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAPEAPEAGXZ.c)
 *     ??9@YA_NAEBU_GUID@@0@Z @ 0x18012DBF0 (--9@YA_NAEBU_GUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // rcx
  int (__fastcall **Ptr)(RTL_SRWLOCK *, __int64); // rbx
  __int64 v7; // rdx
  int (__fastcall **v8)(RTL_SRWLOCK *, __int64); // rbx
  __int64 v9; // rdx
  __int64 *v11; // [rsp+30h] [rbp-30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  *(struct _GUID *)&this[14].Ptr = *a2;
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_FixRegKeyLeak_34763942>::__private_IsEnabled(v5) )
  {
    if ( !(unsigned __int8)operator!=(&this[14], &GUID_NULL) )
      goto LABEL_9;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    Ptr = (int (__fastcall **)(RTL_SRWLOCK *, __int64))this[2].Ptr;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator&(&v13);
    if ( Ptr[4](this + 2, v7) >= 0 )
    {
      v11 = &v13;
      v12 = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___(&v11);
    }
  }
  else
  {
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v8 = (int (__fastcall **)(RTL_SRWLOCK *, __int64))this[2].Ptr;
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator&(&v13);
    if ( v8[4](this + 2, v9) >= 0 )
    {
      v11 = &v13;
      v12 = this;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___(&v11);
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
LABEL_9:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
