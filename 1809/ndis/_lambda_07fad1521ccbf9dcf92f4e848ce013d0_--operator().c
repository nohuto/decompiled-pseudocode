/*
 * XREFs of _lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator() @ 0x1C00B32B4
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___ @ 0x1C00B31A4 (netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___.c)
 * Callees:
 *     ??1KRegKey@@QEAA@XZ @ 0x1C00099E4 (--1KRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Sd @ 0x1C0051C6C (WPP_SF_Sd.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00B3EDC (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator()(unsigned int *a1, const struct _GUID *a2)
{
  int v4; // eax
  int v5; // eax
  KRegKey v7; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey v8; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v9[256]; // [rsp+40h] [rbp-C0h] BYREF

  netsetupBuildObjectPath(2LL, a2, *a1);
  v8.m_ptr = 0LL;
  v4 = KRegKey::Open(&v8, 1u, v9, 0LL);
  if ( v4 >= 0 )
  {
    netsetupBuildObjectPath(2LL, a2, *a1);
    v7.m_ptr = 0LL;
    v5 = KRegKey::Open(&v7, 1u, v9, 0LL);
    if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
    {
      ndisLoadNetworkInterfaceFromPersistedState(a2, &v8, &v7);
    }
    else if ( (unsigned __int8)byte_1C00A0265 >= 2u )
    {
      WPP_SF_Sd(0x11u, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, v9, v5);
    }
    KRegKey::~KRegKey(&v7);
  }
  else if ( (unsigned __int8)byte_1C00A0265 >= 2u )
  {
    WPP_SF_Sd(0x10u, &WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids, v9, v4);
  }
  KRegKey::~KRegKey(&v8);
  return 0LL;
}
