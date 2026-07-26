/*
 * XREFs of netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___ @ 0x1C00B31A4
 * Callers:
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00CB49C (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 * Callees:
 *     ??1KRegKey@@QEAA@XZ @ 0x1C00099E4 (--1KRegKey@@QEAA@XZ.c)
 *     ?_Delete@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEAAXXZ @ 0x1C0009A00 (-_Delete@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator() @ 0x1C00B32B4 (_lambda_07fad1521ccbf9dcf92f4e848ce013d0_--operator().c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B4068 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C00B4324 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0_(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v5; // edi
  __int64 i; // rdx
  unsigned int SubkeyName; // eax
  PCUNICODE_STRING GuidString; // [rsp+28h] [rbp-E0h] BYREF
  KRegKey v10; // [rsp+30h] [rbp-D8h] BYREF
  GUID Guid; // [rsp+38h] [rbp-D0h] BYREF
  wchar_t v12[256]; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+278h] [rbp+170h] BYREF

  v13 = a3;
  v3 = 0;
  v10.m_ptr = 0LL;
  netsetupBuildStorePath(2LL, a2, v12);
  v4 = KRegKey::Open(&v10, 8u, v12, 0LL);
  if ( v4 != -1073741772 )
  {
    if ( v4 )
    {
      v3 = v4;
    }
    else
    {
      v5 = 0;
      for ( i = 0LL; ; i = v5 )
      {
        GuidString = 0LL;
        SubkeyName = KRegKey::GetSubkeyName(&v10, i, &GuidString);
        if ( SubkeyName == -2147483622 )
          break;
        if ( SubkeyName )
          goto LABEL_11;
        if ( !RtlGUIDFromString(GuidString, &Guid) )
        {
          SubkeyName = lambda_07fad1521ccbf9dcf92f4e848ce013d0_::operator()(&v13, &Guid);
          if ( SubkeyName )
            goto LABEL_11;
        }
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::_Delete((void **)&GuidString);
        ++v5;
      }
      SubkeyName = 0;
LABEL_11:
      v3 = SubkeyName;
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::_Delete((void **)&GuidString);
    }
  }
  KRegKey::~KRegKey(&v10);
  return v3;
}
