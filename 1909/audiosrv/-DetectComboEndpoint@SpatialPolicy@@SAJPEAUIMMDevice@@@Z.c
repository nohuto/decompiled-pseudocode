/*
 * XREFs of ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180062E58
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052044 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetEndpointFormFactor @ 0x1800088B8 (GetEndpointFormFactor.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18004362C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     GetContainerId @ 0x180047D00 (GetContainerId.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180062F4C (IsSpatialComboEndpointDeterminationDisabled.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18011C8A0 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x18011C9B0 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialPolicy::DetectComboEndpoint(struct IMMDevice *a1)
{
  char v2; // di
  int ContainerId; // eax
  unsigned int v4; // ebx
  int EndpointFormFactor; // r14d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rdx
  int v10; // eax
  LPVOID v11; // rbx
  LPVOID v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // rbx
  ARM_EVENT *v15; // rdi
  LPVOID pv; // [rsp+28h] [rbp-49h] BYREF
  __int64 v17; // [rsp+30h] [rbp-41h] BYREF
  int v18; // [rsp+38h] [rbp-39h]
  __int128 v19; // [rsp+40h] [rbp-31h]
  __int64 v20; // [rsp+50h] [rbp-21h]
  __int128 v21; // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+68h] [rbp-9h] BYREF
  __int128 v23; // [rsp+70h] [rbp-1h]
  __int64 (__fastcall ***v24)(); // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v20 = -2LL;
  v2 = 0;
  v18 = 0;
  if ( !(unsigned __int8)IsSpatialComboEndpointDeterminationDisabled() )
  {
    v17 = 0LL;
    ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                    a1,
                    0LL,
                    &v17);
    v4 = ContainerId;
    if ( ContainerId < 0 )
    {
      v9 = 502LL;
    }
    else
    {
      EndpointFormFactor = GetEndpointFormFactor(v17);
      v6 = (unsigned int)(EndpointFormFactor - 1);
      if ( (v6 & 0xFFFFFFFD) != 0 )
      {
LABEL_8:
        v4 = 0;
LABEL_9:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
        return v4;
      }
      ContainerId = GetContainerId(v6, v17, &v21);
      v4 = ContainerId;
      if ( ContainerId >= 0 )
      {
        v7 = v21;
        if ( !(_QWORD)v21 )
          v7 = *((_QWORD *)&v21 + 1) + 1LL;
        if ( !v7 )
        {
          pv = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          v10 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
          v4 = v10;
          if ( v10 >= 0 )
          {
            v11 = pv;
            v12 = operator new(0x48uLL);
            *(_QWORD *)&v21 = v12;
            if ( v12 )
            {
              LODWORD(v19) = EndpointFormFactor;
              *((_QWORD *)&v19 + 1) = v11;
              v22 = off_18015D280;
              v23 = v19;
              v24 = &v22;
              v2 = 1;
              v18 = 1;
              v14 = ARM_EVENT::ARM_EVENT(v12, &v22);
            }
            else
            {
              v14 = 0LL;
            }
            if ( (v2 & 1) != 0 )
              std::_Func_class<void,>::_Tidy((__int64)&v22, v13);
            v15 = (ARM_EVENT *)v14;
            if ( v14 && PostQueuedCompletionStatus(g_WorkerEventPort, 0, v14, 0LL) )
            {
              pv = 0LL;
              v15 = 0LL;
            }
            v4 = 0;
            if ( v15 )
              ARM_EVENT::`scalar deleting destructor'(v15, 1u);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x209,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (const char *)(unsigned int)v10);
          }
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_9;
        }
        goto LABEL_8;
      }
      v9 = 512LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_9;
  }
  return 0LL;
}
