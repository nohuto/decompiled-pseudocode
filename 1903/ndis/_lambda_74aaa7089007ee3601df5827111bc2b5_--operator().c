/*
 * XREFs of _lambda_74aaa7089007ee3601df5827111bc2b5_::operator() @ 0x1C00F912C
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___ @ 0x1C00F9008 (netsetupEnumerateObjectIds__lambda_74aaa7089007ee3601df5827111bc2b5___.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x1C002EFDC (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00FC168 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C00FC2EC (--1KRegKey@@QEAA@XZ.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall lambda_74aaa7089007ee3601df5827111bc2b5_::operator()(unsigned int *a1, const struct _GUID *a2)
{
  int v4; // eax
  int v5; // eax
  char v7[4]; // [rsp+30h] [rbp-D0h]
  char v8[4]; // [rsp+30h] [rbp-D0h]
  KRegKey v9; // [rsp+40h] [rbp-C0h] BYREF
  KRegKey v10; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t v11[256]; // [rsp+50h] [rbp-B0h] BYREF

  netsetupBuildObjectPath(2LL, a2, *a1);
  v10.m_ptr = 0LL;
  v4 = KRegKey::Open(&v10, 1u, v11, 0LL);
  if ( v4 >= 0 )
  {
    netsetupBuildObjectPath(2LL, a2, *a1);
    v9.m_ptr = 0LL;
    v5 = KRegKey::Open(&v9, 1u, v11, 0LL);
    if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
    {
      ndisLoadNetworkInterfaceFromPersistedState(a2, &v10, &v9);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v5;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x16u,
        0x11u,
        (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
        v11,
        *(_DWORD *)v8);
    }
    KRegKey::~KRegKey(&v9);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_8985ee5290703829cf3bcea0d1a921be_Traceguids,
      v11,
      *(_DWORD *)v7);
  }
  KRegKey::~KRegKey(&v10);
  return 0LL;
}
