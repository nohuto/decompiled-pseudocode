/*
 * XREFs of ?HandleDebounceTimeout@NavigationLevelHelper@LegacyViewWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x180293C00
 * Callers:
 *     _lambda_0d87a18e5f704446e4cb6a14906b73a9_::_lambda_invoker_cdecl_ @ 0x180293AE0 (_lambda_0d87a18e5f704446e4cb6a14906b73a9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyViewWrapper@@AEBAKXZ @ 0x180293AF4 (-GetDebounceDurationInMilliseconds@NavigationLevelHelper@LegacyViewWrapper@@AEBAKXZ.c)
 *     ?GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x180293B24 (-GetNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEBA-AW4NavigationLevel@ViewManag.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180298948 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LegacyViewWrapper::NavigationLevelHelper::HandleDebounceTimeout(
        LegacyViewWrapper::NavigationLevelHelper *this,
        struct _TP_TIMER *a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // edx
  struct _FILETIME *v6; // rdx
  struct _TP_TIMER *v7; // rcx
  __int64 NavigationLevel; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v10[3]; // [rsp+38h] [rbp-40h]

  v9[1] = -2LL;
  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this - 48) + 280LL);
  AcquireSRWLockExclusive(v4);
  v9[2] = v4;
  if ( !IsThreadpoolTimerSet(*((PTP_TIMER *)this + 1)) )
    goto LABEL_10;
  v10[0] = _mm_load_si128((const __m128i *)&_xmm);
  v10[1] = _mm_load_si128((const __m128i *)&_xmm);
  v10[2] = _mm_load_si128((const __m128i *)&_xmm);
  v5 = *((_DWORD *)v10 + 2 * *(unsigned int *)this + 1);
  if ( *((_DWORD *)this + 1) == 1 )
    goto LABEL_6;
  if ( *((_DWORD *)this + 1) != 2 )
    goto LABEL_8;
  if ( v5 >= 1 )
  {
LABEL_6:
    *((_DWORD *)this + 1) = v5;
    v7 = (struct _TP_TIMER *)*((_QWORD *)this + 1);
    v6 = 0LL;
  }
  else
  {
    *((_DWORD *)this + 1) = 1;
    v9[0] = -10000LL * (unsigned int)LegacyViewWrapper::NavigationLevelHelper::GetDebounceDurationInMilliseconds(this);
    v6 = (struct _FILETIME *)v9;
    v7 = a2;
  }
  SetThreadpoolTimer(v7, v6, 0, 0);
LABEL_8:
  if ( *((_DWORD *)this - 101) )
  {
    NavigationLevel = (unsigned int)LegacyWindowWrapper::NavigationLevelHelper::GetNavigationLevel((unsigned int *)this);
    ViewWrapperBase::NavigateInternal((char *)this - 552, NavigationLevel);
  }
LABEL_10:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
