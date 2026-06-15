/*
 * XREFs of ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18010A510
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x180108284 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180109BAC (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180009D4C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1800C889C (WPP_SF_dd.c)
 *     WPP_SF_qq @ 0x1800D2488 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1800D24D0 (WPP_SF_qqq.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z @ 0x180107368 (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@@Z.c)
 *     ?Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z @ 0x180108250 (-Create@CEvent@ATL@@QEAAHPEAU_SECURITY_ATTRIBUTES@@HHPEBG@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18010E5A0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize(char *pv)
{
  char *v1; // rsi
  __int64 v2; // rax
  bool v4; // zf
  __int64 v5; // rcx
  int v6; // eax
  _QWORD *v7; // rdx
  int v8; // ebx
  struct IMMDevice *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rdx
  struct IMMDevice *v15; // rbx
  LPVOID v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  CAudioSessionManager *v19; // rcx
  struct _SECURITY_ATTRIBUTES *v20; // rdx
  struct _TP_WAIT *ThreadpoolWait; // rax
  unsigned int v22; // r9d
  int v23; // eax
  char v24; // r15
  ATL::CAtlException *v25; // rbx
  LPVOID pva; // [rsp+30h] [rbp-68h] BYREF
  LPVOID Src; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v29; // [rsp+50h] [rbp-48h] BYREF
  PROPVARIANT pvar; // [rsp+58h] [rbp-40h] BYREF
  __int64 v31; // [rsp+60h] [rbp-38h]
  __int64 v32; // [rsp+68h] [rbp-30h]
  char *v33; // [rsp+A0h] [rbp+8h] BYREF
  LPVOID v34; // [rsp+A8h] [rbp+10h]
  struct IMMDevice *v35; // [rsp+B0h] [rbp+18h] BYREF
  struct IMMDevice *v36; // [rsp+B8h] [rbp+20h] BYREF

  v33 = pv;
  v28[1] = -2LL;
  v1 = pv;
  v36 = 0LL;
  v35 = 0LL;
  Src = 0LL;
  pva = 0LL;
  v28[0] = 0LL;
  pvar = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v2 = *((_QWORD *)pv + 25);
  if ( v2 && *(_DWORD *)(v2 + 56) != 6 )
  {
    PropVariantClear(&pvar);
    if ( v35 )
      ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->Release)(v35);
    if ( v36 )
      ((void (__fastcall *)(struct IMMDevice *))v36->lpVtbl->Release)(v36);
    return 2147943647LL;
  }
  v4 = *((_QWORD *)pv + 9) == 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)pv + 24) + 64LL);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v5 + 32LL))(
           v5,
           1LL,
           0LL,
           &v36);
  }
  else
  {
    v7 = v1 + 56;
    if ( *((_QWORD *)v1 + 10) >= 8uLL )
      v7 = (_QWORD *)*v7;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct IMMDevice **))(*(_QWORD *)v5 + 40LL))(v5, v7, &v36);
  }
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_70;
  v9 = v36;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &Src,
    0LL);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v9->lpVtbl->GetId)(v9, &Src);
  if ( v8 < 0 )
    goto LABEL_70;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)Src + v11) );
  std::wstring::assign(v1 + 128, Src, v11);
  v12 = *(_QWORD *)(*((_QWORD *)v1 + 24) + 64LL);
  if ( *((_QWORD *)v1 + 13) )
  {
    v14 = v1 + 88;
    if ( *((_QWORD *)v1 + 14) >= 8uLL )
      v14 = (_QWORD *)*v14;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *, struct IMMDevice **))(*(_QWORD *)v12 + 40LL))(v12, v14, &v35);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct IMMDevice **))(*(_QWORD *)v12 + 32LL))(
            v12,
            0LL,
            0LL,
            &v35);
  }
  v8 = v13;
  if ( v13 < 0 )
    goto LABEL_70;
  v15 = v35;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pva,
    0LL);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v15->lpVtbl->GetId)(v15, &pva);
  if ( v8 < 0 )
    goto LABEL_70;
  do
    ++v10;
  while ( *((_WORD *)pva + v10) );
  std::wstring::assign(v1 + 160, pva, v10);
  if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, _QWORD *))v36->lpVtbl->OpenPropertyStore)(v36, 0LL, v28) < 0 )
    goto LABEL_67;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)v28[0] + 40LL))(
         v28[0],
         &PKEY_MonitorStreamCategory,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    if ( (unsigned int)v31 >= 0x15 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x56u,
          (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
          v31);
      }
    }
    else
    {
      *((_DWORD *)v1 + 30) = v31;
    }
  }
  v16 = operator new(0x200uLL, (const struct std::nothrow_t *)&std::nothrow);
  v34 = v16;
  if ( v16 )
    v17 = CMonitor::CMonitor((__int64)v16, *((_DWORD *)v1 + 30));
  else
    v17 = 0LL;
  v18 = *((_QWORD *)v1 + 25);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  *((_QWORD *)v1 + 25) = v17;
  if ( !v17 )
  {
    v8 = -2147024882;
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
LABEL_75:
      if ( v1[48] )
      {
        (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 32LL))(*((_QWORD *)v1 + 5), v1);
        v1[48] = 0;
      }
      goto LABEL_77;
    }
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
LABEL_71:
      if ( v19 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v19 + 7) & 0x800000) != 0
        && *((_BYTE *)v19 + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)v19 + 2), 0x5Bu, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, v8);
      }
      goto LABEL_75;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x57u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
LABEL_70:
    v19 = WPP_GLOBAL_Control;
    goto LABEL_71;
  }
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v35->lpVtbl->Activate)(
         v35,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         1LL);
  if ( v8 < 0 )
    goto LABEL_70;
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 24LL))(*((_QWORD *)v1 + 5), v1);
  if ( v8 < 0 )
    goto LABEL_70;
  v1[48] = 1;
  try
  {
    ATL::CEvent::Create((ATL::CEvent *)(v1 + 32), v20);
  }
  catch ( ATL::CAtlException *v29 )
  {
    v25 = v29;
    if ( *(_DWORD *)v29 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v34) = *(_DWORD *)v25;
    v8 = (int)v34;
    v1 = v33;
    if ( (int)v34 < 0 )
      goto LABEL_70;
  }
  ThreadpoolWait = CreateThreadpoolWait(CMonitorManager::OnCaptureMonitorTerminated, v1, 0LL);
  *((_QWORD *)v1 + 2) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v8 = -2147024882;
    goto LABEL_70;
  }
  SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)v1 + 4), 0LL);
  *(_QWORD *)(*((_QWORD *)v1 + 25) + 272LL) = *((_QWORD *)v1 + 4);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x58u,
      (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
      v1,
      *((_QWORD *)v1 + 25));
  }
  v23 = CMonitor::Initialize(*((CMonitor **)v1 + 25), v36, v35, v22, (bool *)&v33);
  v8 = v23;
  if ( v23 >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qqq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x5Au,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        v1,
        v1,
        *((_QWORD *)v1 + 25));
    }
    *(_QWORD *)(*((_QWORD *)v1 + 24) + 304LL) = 0LL;
    *((_DWORD *)v1 + 6) = 0;
LABEL_67:
    v19 = WPP_GLOBAL_Control;
    goto LABEL_68;
  }
  v19 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
  {
    v24 = (char)v33;
  }
  else
  {
    v24 = (char)v33;
    WPP_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x59u,
      (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
      v23);
    v19 = WPP_GLOBAL_Control;
  }
  if ( !v24 )
  {
    v8 = 1;
    goto LABEL_77;
  }
LABEL_68:
  if ( v8 < 0 )
    goto LABEL_71;
LABEL_77:
  PropVariantClear(&pvar);
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  if ( pva )
    CoTaskMemFree(pva);
  if ( Src )
    CoTaskMemFree(Src);
  if ( v35 )
    ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->Release)(v35);
  if ( v36 )
    ((void (__fastcall *)(struct IMMDevice *))v36->lpVtbl->Release)(v36);
  return (unsigned int)v8;
}
