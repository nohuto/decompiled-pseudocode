/*
 * XREFs of ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18026ECEC
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180274CE0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180198D54 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180259968 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18025A534 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18026E4EC (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall XamlAllUpViewHost::CreateFrames(XamlAllUpViewHost *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  struct IImmersiveMonitor *v7; // rbx
  int FrameForMonitor; // eax
  __int64 v10; // [rsp+28h] [rbp-48h] BYREF
  int v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  struct IImmersiveMonitor *v13[2]; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v17; // [rsp+90h] [rbp+20h] BYREF
  __int64 v18; // [rsp+98h] [rbp+28h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+A8h] [rbp+38h] BYREF

  v18 = 0LL;
  v2 = *((_QWORD *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL))(v2, &v18);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 23))(
           *((_QWORD *)this + 23),
           &GUID_7f331592_08ca_41ff_a77d_f2138806e857,
           &v19);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 24LL))(v18, (char *)this + 696);
        v4 = v5;
        if ( v5 >= 0 )
        {
          details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
            (__int64)&v10,
            v18);
          details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
            (__int64)&v12,
            (__int64)&v10,
            0);
          details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
            (__int64)&v14,
            (__int64)&v10,
            v11);
          while ( 1 )
          {
            if ( (_DWORD)v12 == v14 && v13[1] == (struct IImmersiveMonitor *)v15[1] )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
              v4 = 0;
              goto LABEL_19;
            }
            v7 = v13[0];
            v20 = v13[0];
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
            if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v7 + 48LL))(v7, &v17) >= 0 )
            {
              if ( v17 )
              {
                FrameForMonitor = XamlAllUpViewHost::CreateFrameForMonitor(this, v7);
                v4 = FrameForMonitor;
                if ( FrameForMonitor < 0 )
                  break;
              }
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
            LODWORD(v12) = v12 + 1;
            details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v12);
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x289,
            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
            (const char *)(unsigned int)FrameForMonitor);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
          goto LABEL_19;
        }
        v6 = 642LL;
      }
      else
      {
        v6 = 640LL;
      }
    }
    else
    {
      v6 = 639LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)v5);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x279,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
    (const char *)(unsigned int)v3);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v4;
}
