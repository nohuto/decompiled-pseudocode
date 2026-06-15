/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800EB5EC
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x1800EBBD0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DCDD0 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800DFBC4 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_45ca10f83369d44ceedcca5d39762dce__void_ @ 0x1800EB3D0 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_45ca10f83369d44ceedcca5d.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int i; // esi
  unsigned __int16 *v11; // rax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rdi
  const WCHAR **v15; // rbx
  std::_Ref_count_base *v16; // rax
  std::_Ref_count_base *v17; // rcx
  void *v18; // r8
  const WCHAR *v19; // rdx
  LPCGUID v20; // r8
  TraceLoggingHProvider v21; // r9
  std::_Ref_count_base *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // eax
  int v27; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-CCh] BYREF
  __int128 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL fPending[2]; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h] BYREF
  PROPVARIANT pvar; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 *v38; // [rsp+90h] [rbp-78h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h] BYREF
  std::_Ref_count_base *v41; // [rsp+A8h] [rbp-60h]
  int v42; // [rsp+B0h] [rbp-58h] BYREF
  const WCHAR **v43; // [rsp+B8h] [rbp-50h]
  std::_Ref_count_base *v44; // [rsp+C0h] [rbp-48h]
  std::_Ref_count_base *v45[2]; // [rsp+C8h] [rbp-40h] BYREF
  PROPVARIANT *p_pvar; // [rsp+D8h] [rbp-30h]
  char v47; // [rsp+E0h] [rbp-28h]
  __int64 v48; // [rsp+E8h] [rbp-20h]
  _BYTE *v49; // [rsp+F0h] [rbp-18h]
  _BYTE v50[64]; // [rsp+100h] [rbp-8h] BYREF
  _DWORD v51[6]; // [rsp+140h] [rbp+38h] BYREF
  _DWORD v52[8]; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+178h] [rbp+70h] BYREF
  int *v54; // [rsp+198h] [rbp+90h]
  __int64 v55; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v48 = -2LL;
  v2 = *((_QWORD *)this + 4);
  v36 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 96LL))(v2, &v36);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_57;
  }
  pv = 0LL;
  v5 = v36;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 64LL))(v5, &pv);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 125LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_55;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, WINBOOL *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), fPending);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 128LL;
    goto LABEL_7;
  }
  v32 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, bool, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         *((_DWORD *)this + 2) != 0,
         1879048207LL,
         &v32);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 24LL))(v32, &v28);
    v4 = v8;
    if ( v8 >= 0 )
    {
      for ( i = 0; i < v28; ++i )
      {
        v31 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 32LL))(v32, i, &v31) >= 0 )
        {
          v30 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 32LL))(v31, 0LL, &v30) >= 0 )
          {
            v51[0] = 590439624;
            v51[1] = 1283267372;
            v51[2] = 1907779772;
            v51[3] = 1730509416;
            v51[4] = 1;
            pvar = 0LL;
            v38 = 0LL;
            v39 = 0LL;
            p_pvar = &pvar;
            v47 = 1;
            if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(v30, v51, &pvar) >= 0
              && (_WORD)pvar == 31 )
            {
              v11 = v38;
              do
              {
                v12 = *(unsigned __int16 *)((char *)v11 + (_BYTE *)pv - (_BYTE *)v38);
                v13 = *v11 - v12;
                if ( v13 )
                  break;
                ++v11;
              }
              while ( v12 );
              if ( !v13 )
              {
                v52[0] = -1702713381;
                v52[1] = 1102331579;
                v52[2] = -1223116157;
                v52[3] = -65530063;
                v52[4] = 1;
                PropVariantClear(&pvar);
                if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(v30, v52, &pvar) >= 0
                  && (_WORD)pvar == 19
                  && (_DWORD)v38 == fPending[0] )
                {
                  v29 = 0LL;
                  v14 = v31;
                  *(_OWORD *)v45 = 0LL;
                  std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
                    &v29,
                    (__int64 *)v45);
                  if ( v45[1] )
                    std::_Ref_count_base::_Decref(v45[1]);
                  v15 = (const WCHAR **)v29;
                  if ( !(_QWORD)v29 )
                  {
                    v16 = (std::_Ref_count_base *)operator new(0x18uLL);
                    v17 = v16;
                    if ( v16 )
                    {
                      *((_DWORD *)v16 + 2) = 1;
                      *((_DWORD *)v16 + 3) = 1;
                      *(_QWORD *)v16 = &std::_Ref_count_obj<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::`vftable';
                      *((_QWORD *)v16 + 2) = 0LL;
                    }
                    else
                    {
                      v17 = 0LL;
                    }
                    v40 = (__int64)v17 + 16;
                    v41 = v17;
                    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
                      &v29,
                      &v40);
                    if ( v41 )
                      std::_Ref_count_base::_Decref(v41);
                    v15 = (const WCHAR **)v29;
                  }
                  if ( (*(int (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v14 + 40LL))(v14, v15) < 0 )
                  {
                    v22 = (std::_Ref_count_base *)*((_QWORD *)&v29 + 1);
                  }
                  else
                  {
                    v27 = dword_1801B889C++;
                    Context = 0LL;
                    if ( InitOnceBeginInitialize(
                           &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
                           0,
                           &fPending[1],
                           &Context)
                      && fPending[1] )
                    {
                      Context = &qword_1801B7588;
                      qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
                      qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                      wil::TraceLoggingProvider::Register(
                        (wil::TraceLoggingProvider *)&qword_1801B7588,
                        qword_1801B75A0,
                        v18);
                      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
                    }
                    if ( **((_DWORD **)Context + 1) > 4u )
                    {
                      v54 = &v27;
                      v55 = 4LL;
                      if ( v15 )
                        v19 = *v15;
                      else
                        v19 = 0LL;
                      TlgCreateWsz(&pDesc, v19);
                      TlgWrite(v21, &unk_1801773A6, v20, (LPCGUID)v21, 4u, &pData);
                    }
                    v49 = v50;
                    v42 = v27;
                    v22 = (std::_Ref_count_base *)*((_QWORD *)&v29 + 1);
                    if ( *((_QWORD *)&v29 + 1) )
                    {
                      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 1u);
                      v22 = (std::_Ref_count_base *)*((_QWORD *)&v29 + 1);
                      v15 = (const WCHAR **)v29;
                    }
                    v43 = v15;
                    v44 = v22;
                    v23 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_45ca10f83369d44ceedcca5d39762dce__void_(
                            (__int64)v50,
                            (__int64)&v42);
                    v24 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
                    v25 = CSerialWorkQueue::QueueWorkItem(v24, v23);
                    if ( v25 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0xC0,
                        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
                        (const char *)(unsigned int)v25);
                  }
                  if ( v22 )
                    std::_Ref_count_base::_Decref(v22);
                }
              }
            }
            v47 = 0;
            PropVariantClear(&pvar);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
      }
      v4 = 0;
      goto LABEL_54;
    }
    v9 = 138LL;
  }
  else
  {
    v9 = 135LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
    (const char *)(unsigned int)v8);
LABEL_54:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
LABEL_55:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_57:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
  return v4;
}
