/*
 * XREFs of ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180109BAC
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180108E68 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010A510 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18010D4E0 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801112A0 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180111B9C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(CMonitorManager::CaptureMonitor *this)
{
  int v2; // esi
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  CAudioSessionManager *v7; // rcx
  unsigned __int16 v8; // dx
  LPVOID pv; // [rsp+70h] [rbp+28h] BYREF
  LPVOID v11; // [rsp+78h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  v2 = 0;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  pv = 0LL;
  if ( !*((_QWORD *)this + 9) )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 24) + 64LL) + 32LL))(
           *(_QWORD *)(*((_QWORD *)this + 24) + 64LL),
           1LL,
           0LL,
           &v13) < 0 )
      goto LABEL_25;
    v3 = v13;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v11,
      0LL);
    if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v3 + 40LL))(v3, &v11) < 0 )
      goto LABEL_25;
    v4 = (_QWORD *)((char *)this + 128);
    if ( *((_QWORD *)this + 19) >= 8uLL )
      v4 = (_QWORD *)*v4;
    if ( (unsigned int)_o__wcsnicmp(v4, v11, *((_QWORD *)this + 18)) )
      goto LABEL_13;
  }
  if ( !*((_QWORD *)this + 13)
    && (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 24) + 64LL) + 32LL))(
         *(_QWORD *)(*((_QWORD *)this + 24) + 64LL),
         0LL,
         0LL,
         &v12) >= 0 )
  {
    v5 = v12;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 40LL))(v5, &pv) >= 0 )
    {
      v6 = (_QWORD *)((char *)this + 160);
      if ( *((_QWORD *)this + 23) >= 8uLL )
        v6 = (_QWORD *)*v6;
      if ( (unsigned int)_o__wcsnicmp(v6, pv, *((_QWORD *)this + 22)) )
      {
LABEL_13:
        CMonitor::Stop(*((CMonitor **)this + 25));
        CMonitorManager::CaptureMonitor::UninitializeSynchronously(this);
        v2 = CMonitorManager::CaptureMonitor::Initialize(this);
        if ( v2 >= 0 )
        {
          if ( *((_BYTE *)this + 49) )
          {
            v2 = CMonitor::Start(*((CMonitor **)this + 25));
            if ( v2 < 0 )
            {
              v7 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                v8 = 65;
                goto LABEL_24;
              }
            }
          }
        }
        else
        {
          v7 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            v8 = 64;
LABEL_24:
            WPP_SF_d(*((_QWORD *)v7 + 2), v8, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, v2);
          }
        }
      }
    }
  }
LABEL_25:
  if ( pv )
    CoTaskMemFree(pv);
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v2;
}
