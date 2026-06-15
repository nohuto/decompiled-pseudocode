/*
 * XREFs of ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180012440
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x1800059D0 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000E214 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015088 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800150F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??R?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x180015268 (--R-$less@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEBA_NAEBV-$basic_.c)
 *     ?GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z @ 0x18002DB14 (-GetApplicationName@ApplicationSpecificEndpointInfo@@SAPEBGPEAUIAudioProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800342C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::GetApplicationSpecificEndpointInfo(
        unsigned __int64 this,
        struct IApplicationSpecificEndpointInfo **a2)
{
  unsigned int v2; // edi
  __int64 v4; // r15
  unsigned __int16 *ApplicationName; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 *v9; // rsi
  struct IApplicationSpecificEndpointInfo *v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-68h] BYREF
  char v13; // [rsp+28h] [rbp-60h]
  _BYTE v14[32]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v4 = *(_QWORD *)(this + 240);
  ApplicationName = (unsigned __int16 *)ApplicationSpecificEndpointInfo::GetApplicationName((struct IAudioProcess *)(this & -(__int64)(this != 16)));
  *a2 = 0LL;
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  std::wstring::wstring(v14, ApplicationName);
  v7 = *(__int64 **)(v4 + 648);
  v8 = v7;
  v9 = (__int64 *)v7[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( (unsigned __int8)std::less<std::wstring>::operator()(v6, v9 + 4, v14) )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v7 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  if ( v7 == v8 || (unsigned __int8)std::less<std::wstring>::operator()(v6, v14, v7 + 4) )
    v7 = v8;
  std::wstring::~wstring(v14);
  if ( v7 == *(__int64 **)(v4 + 648) )
  {
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)-2147023728;
  }
  else
  {
    v10 = (struct IApplicationSpecificEndpointInfo *)v7[8];
    if ( v10 )
    {
      *a2 = v10;
      (*(void (__fastcall **)(struct IApplicationSpecificEndpointInfo *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      *a2 = 0LL;
    }
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v2;
}
