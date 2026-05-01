/*
 * XREFs of ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1802A496C
 * Callers:
 *     _lambda_6865f0ce4c3ba0d4b075ec8356cef312_::_lambda_invoker_cdecl_ @ 0x1802A48E0 (_lambda_6865f0ce4c3ba0d4b075ec8356cef312_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180293B24 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ @ 0x1802A493C (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyWindowWrapper@@AEBAKXZ.c)
 *     ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A7180 (-NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LegacyWindowWrapper::NavigationLevelHelper::HandleDebounceTimeout(
        LegacyWindowWrapper::NavigationLevelHelper *this,
        struct _TP_TIMER *a2)
{
  int v4; // edx
  struct _FILETIME *v5; // rdx
  struct _TP_TIMER *v6; // rcx
  __int64 NavigationLevel; // rdx
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+38h] [rbp-40h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this - 45) + 192LL))(*((_QWORD *)this - 45), SRWLock);
  if ( !IsThreadpoolTimerSet(*((PTP_TIMER *)this + 1)) )
    goto LABEL_10;
  v10[0] = _mm_load_si128((const __m128i *)&_xmm);
  v10[1] = _mm_load_si128((const __m128i *)&_xmm);
  v10[2] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *((_DWORD *)v10 + 2 * *(unsigned int *)this + 1);
  if ( *((_DWORD *)this + 1) == 1 )
    goto LABEL_6;
  if ( *((_DWORD *)this + 1) != 2 )
    goto LABEL_8;
  if ( v4 >= 1 )
  {
LABEL_6:
    *((_DWORD *)this + 1) = v4;
    v6 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
    v5 = 0LL;
  }
  else
  {
    *((_DWORD *)this + 1) = 1;
    v8 = -10000LL * (unsigned int)LegacyWindowWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(this);
    v5 = (struct _FILETIME *)&v8;
    v6 = a2;
  }
  SetThreadpoolTimer(v6, v5, 0, 0);
LABEL_8:
  if ( *((_DWORD *)this - 72) )
  {
    NavigationLevel = (unsigned int)LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)this);
    WindowWrapperBase::NavigateInternal((char *)this - 648, NavigationLevel);
  }
LABEL_10:
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
}
