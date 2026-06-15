/*
 * XREFs of ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039D64
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039C0C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180004C34 (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180029F18 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18002C350 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     WPP_SF_qSSq @ 0x1800E3E00 (WPP_SF_qSSq.c)
 */

__int64 __fastcall CAudioSessionStore::OpenStoreKey(CAudioSessionStore *this, unsigned __int16 *a2)
{
  int LowRightsRegistryKey; // edi
  HKEY *v3; // r15
  unsigned __int16 *v4; // rbx
  int v5; // r14d
  int v7; // r13d
  RPC_STATUS v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // r8d
  int ThreadUserStringSid; // eax
  unsigned __int16 *v14; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF

  LowRightsRegistryKey = 0;
  v3 = (HKEY *)((char *)this + 32);
  hKey = 0LL;
  v4 = 0LL;
  v5 = 0;
  v14 = 0LL;
  v7 = (int)this;
  if ( *((_QWORD *)this + 4) )
    return (unsigned int)LowRightsRegistryKey;
  v8 = RpcImpersonateClient(0LL);
  LowRightsRegistryKey = v8;
  if ( v8 )
  {
    if ( v8 != 1725 && v8 != 1765 )
    {
      if ( v8 > 0 )
        LowRightsRegistryKey = (unsigned __int16)v8 | 0x80070000;
      goto LABEL_14;
    }
  }
  else
  {
    v5 = 1;
  }
  if ( a2 )
    goto LABEL_5;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &v14,
    0LL);
  ThreadUserStringSid = GetThreadUserStringSid(&v14);
  v4 = v14;
  LowRightsRegistryKey = ThreadUserStringSid;
  if ( ThreadUserStringSid >= 0 )
  {
    a2 = v14;
LABEL_5:
    LowRightsRegistryKey = StringCbPrintfW(
                             SubKey,
                             0x208uLL,
                             L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry",
                             a2);
    if ( LowRightsRegistryKey >= 0 )
    {
      v9 = 131103;
      LowRightsRegistryKey = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, &hKey);
      if ( LowRightsRegistryKey == 5 )
      {
        v9 = 25;
        LowRightsRegistryKey = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x19u, &hKey);
      }
      if ( LowRightsRegistryKey )
      {
        if ( LowRightsRegistryKey > 0 )
          LowRightsRegistryKey = (unsigned __int16)LowRightsRegistryKey | 0x80070000;
      }
      else
      {
        LowRightsRegistryKey = CreateLowRightsRegistryKey(hKey, L"Audio\\PolicyConfig\\PropertyStore", v9, v3);
        if ( LowRightsRegistryKey >= 0
          && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qSSq(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, v7, (__int64)SubKey);
        }
      }
    }
  }
  if ( v5 )
    RpcRevertToSelf();
LABEL_14:
  if ( hKey )
    RegCloseKey(hKey);
  if ( LowRightsRegistryKey < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenStoreKey", 4234, LowRightsRegistryKey);
  if ( v4 )
    CoTaskMemFree(v4);
  return (unsigned int)LowRightsRegistryKey;
}
