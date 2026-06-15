/*
 * XREFs of ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18010AEC4
 * Callers:
 *     wistd::__function::__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180107BF0 (wistd--__function--__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(en_ea_180107BF0.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18010AD38 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B980 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CMonitorManager::OnAudioMirrorEnabledChange(CMonitorManager *this)
{
  char v2; // si
  __int64 v3; // rcx
  unsigned int i; // edi
  struct IMMDevice *v5; // rbx
  struct IMMDevice *v6; // rbx
  __int64 v7; // rcx
  CMonitorManager *v8; // rcx
  bool v9; // zf
  __int64 v10[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _tagpropertykey v11; // [rsp+40h] [rbp-38h] BYREF
  PROPVARIANT pvar; // [rsp+58h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp-10h]
  unsigned int v15; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+50h] BYREF
  struct IMMDevice *v17; // [rsp+D0h] [rbp+58h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp+60h] BYREF

  v10[1] = -2LL;
  v2 = *((_BYTE *)this + 352);
  v3 = *((_QWORD *)this + 8);
  v10[0] = 0LL;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, 0LL, 15LL, v10) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10[0] + 24LL))(v10[0], &v15) >= 0 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v16 = 0LL;
      pv = 0LL;
      pvar = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v17 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v10[0] + 32LL))(v10[0], i, &v17) >= 0 )
      {
        v5 = v17;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))v5->lpVtbl->GetId)(v5, &pv) >= 0 )
        {
          v6 = v17;
          v7 = v16;
          v16 = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          if ( ((int (__fastcall *)(struct IMMDevice *, __int64, __int64 *))v6->lpVtbl->OpenPropertyStore)(
                 v6,
                 2LL,
                 &v16) >= 0
            && CMonitorManager::IsMonitorMirrorEligible(v8, v17)
            && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
                 v16,
                 &PKEY_MonitorEnabled,
                 &pvar) >= 0 )
          {
            v9 = (_WORD)pvar == 11 ? (_WORD)v13 == 0xFFFF : v2 == 0;
            if ( v9 != v2 )
            {
              LOWORD(pvar) = 11;
              LOWORD(v13) = -1;
              if ( !v2 )
                LOWORD(v13) = 0;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
                     v16,
                     &PKEY_MonitorEnabled,
                     &pvar) >= 0 )
                CMonitorManager::OnMonitorEnabledChanged(this, (const unsigned __int16 *)pv, &v11);
            }
          }
        }
      }
      PropVariantClear(&pvar);
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v10);
}
