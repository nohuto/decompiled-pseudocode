/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800575D0
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180057080 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180014870 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$As@UIMPCInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMPCInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180057318 (--$As@UIMPCInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     GetHandEventType @ 0x1800578B0 (GetHandEventType.c)
 *     GetInputEventType @ 0x180057910 (GetInputEventType.c)
 *     IsSubscribedForEventType @ 0x180057978 (IsSubscribedForEventType.c)
 *     IsSubscribedForEventType_0 @ 0x1800579EC (IsSubscribedForEventType_0.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x180057BF0 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rbx
  void (__fastcall *v17)(__int64, int *, _QWORD, char *, _OWORD *); // rsi
  unsigned int HandEventType; // eax
  __int64 InputEventType; // rbx
  __int64 v20; // rcx
  ISMTracing *v21; // rcx
  int v22; // [rsp+48h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  __int64 v24[2]; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v25[3]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v24[1] = -2LL;
  if ( (*(_DWORD *)a2 & 0x662600) == 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      216LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
    __debugbreak();
  }
  if ( (*(_DWORD *)a2 & 0x42600) == 0
    || (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 80LL))(this) && *((_BYTE *)a2 + 2026) )
  {
    return 0LL;
  }
  v7 = *((_QWORD *)this + 5);
  v8 = -2147417853;
  if ( v7 )
  {
    if ( !*((_BYTE *)a2 + 2026) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v7 + 24LL))(v7, a2);
      if ( v9 != -2147417853 && v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          240LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
    }
  }
  v10 = *((_QWORD *)this + 4);
  if ( !v10 )
    v10 = *((_QWORD *)this + 3);
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(v24, v10);
  v13 = 0LL;
  v23 = 0LL;
  v14 = *(_QWORD *)(v24[0] + 392);
  v15 = *(_QWORD *)(v24[0] + 400);
  if ( v14 != v15 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMPCInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                  &v23) >= 0 )
        break;
      v14 += 16LL;
    }
    while ( v14 != v15 );
    v13 = v23;
  }
  if ( v13 )
  {
    v22 = *((_DWORD *)a2 + 18);
    v25[0] = *((_OWORD *)a2 + 14);
    v25[1] = *((_OWORD *)a2 + 15);
    v25[2] = *((_OWORD *)a2 + 16);
    switch ( *(_DWORD *)a2 )
    {
      case 0x200:
        if ( (unsigned __int8)IsSubscribedForEventType_0(*((unsigned int *)a2 + 16)) )
        {
          v16 = v23;
          v17 = *(void (__fastcall **)(__int64, int *, _QWORD, char *, _OWORD *))(*(_QWORD *)v23 + 24LL);
          HandEventType = GetHandEventType(*((unsigned int *)a2 + 16));
          v17(v16, &v22, HandEventType, (char *)a2 + 704, v25);
        }
        break;
      case 0x40000:
        if ( (unsigned __int8)IsSubscribedForEventType(4LL, v13) )
          (*(void (__fastcall **)(__int64, int *, char *, char *, _OWORD *))(*(_QWORD *)v23 + 32LL))(
            v23,
            &v22,
            (char *)a2 + 704,
            (char *)a2 + 712,
            v25);
        break;
      case 0x400:
      case 0x2000:
        InputEventType = (unsigned int)GetInputEventType(*((unsigned int *)a2 + 17));
        if ( (unsigned __int8)IsSubscribedForEventType(InputEventType, v23) )
          (*(void (__fastcall **)(__int64, int *, _QWORD, char *, _QWORD, _OWORD *))(*(_QWORD *)v23 + 40LL))(
            v23,
            &v22,
            (unsigned int)InputEventType,
            (char *)a2 + 704,
            *((_QWORD *)a2 + 2),
            v25);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          308LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v12);
        __debugbreak();
    }
    v8 = 0;
  }
  if ( ISMTracing::IsEnabled(v11) )
  {
    wil::details::static_lazy<ISMTracing>::get(v20, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCTarget_DeliverInput_(v21, this, a2, v8);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v23);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v24);
  return v8;
}
