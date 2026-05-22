/*
 * XREFs of ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000C500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800AC65C (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::OnTargetWithFocusChanged(
        LampArrayRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int32 v4; // edx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct LampArrayEndpoint *v8; // r14
  _DWORD *i; // rax
  struct LampArrayDevice **j; // rbx
  __int64 v12; // rdx
  int active; // eax
  unsigned int v14; // r15d
  UINT32 cData; // [rsp+20h] [rbp-59h]
  __int32 v16; // [rsp+30h] [rbp-49h] BYREF
  __int64 v17; // [rsp+38h] [rbp-41h] BYREF
  int v18; // [rsp+40h] [rbp-39h] BYREF
  __int32 v19; // [rsp+44h] [rbp-35h] BYREF
  __int64 v20; // [rsp+48h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  const char *v22; // [rsp+70h] [rbp-9h]
  __int64 v23; // [rsp+78h] [rbp-1h]
  int *v24; // [rsp+80h] [rbp+7h]
  __int64 v25; // [rsp+88h] [rbp+Fh]
  __int32 *v26; // [rsp+90h] [rbp+17h]
  __int64 v27; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v20 = -2LL;
  v4 = 0;
  v16 = 0;
  if ( !a3 )
    goto LABEL_7;
  v17 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
         a3,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 269LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      cData);
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v17);
    return v6;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int32 *))(*(_QWORD *)v17 + 32LL))(v17, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 271LL;
    goto LABEL_16;
  }
  v7 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v4 = v16;
LABEL_7:
  v8 = 0LL;
  for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64); i = *(_DWORD **)i )
  {
    if ( i[6] == v4 )
    {
      v8 = (struct LampArrayEndpoint *)(i + 4);
      break;
    }
  }
  if ( hProvider > 5u )
  {
    v22 = "FocusChanged";
    v23 = 13LL;
    v18 = *((_DWORD *)this + 8);
    v24 = &v18;
    v25 = 4LL;
    v19 = v16;
    v26 = &v19;
    v27 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D1BB, 0LL, 0LL, 5u, &pData);
    v4 = v16;
  }
  _InterlockedExchange((volatile __int32 *)this + 8, v4);
  for ( j = (struct LampArrayDevice **)*((_QWORD *)this + 5); ; j = (struct LampArrayDevice **)*j )
  {
    if ( j == (struct LampArrayDevice **)((char *)this + 40) )
      return 0LL;
    active = LampArrayRawInputProvider::SetActiveViewClient((LampArrayRawInputProvider *)((char *)this - 8), j[2], v8);
    v14 = active;
    if ( active < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x122,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)active,
    cData);
  return v14;
}
