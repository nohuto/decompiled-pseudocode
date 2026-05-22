/*
 * XREFs of ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x180009904
 * Callers:
 *     ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x1800079B0 (-SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180009DF0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180009EAC (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(
        ISMTracing *this,
        int a2,
        struct IUnknown *a3)
{
  __int64 v3; // rbx
  struct IInputTarget *v4; // rcx
  struct IInputTarget *v5; // [rsp+38h] [rbp-29h] BYREF
  unsigned int PIDOfTarget; // [rsp+40h] [rbp-21h] BYREF
  unsigned int VIDOfTarget; // [rsp+44h] [rbp-1Dh] BYREF
  __int64 v8; // [rsp+48h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v10; // [rsp+78h] [rbp+17h]
  int v11; // [rsp+80h] [rbp+1Fh]
  int v12; // [rsp+84h] [rbp+23h]
  unsigned int *p_PIDOfTarget; // [rsp+88h] [rbp+27h]
  int v14; // [rsp+90h] [rbp+2Fh]
  int v15; // [rsp+94h] [rbp+33h]
  unsigned int *p_VIDOfTarget; // [rsp+98h] [rbp+37h]
  int v17; // [rsp+A0h] [rbp+3Fh]
  int v18; // [rsp+A4h] [rbp+43h]
  int v19; // [rsp+D0h] [rbp+6Fh] BYREF

  v19 = a2;
  v8 = -2LL;
  v5 = 0LL;
  if ( a3 )
    ((void (__fastcall *)(struct IUnknown *, GUID *, struct IInputTarget **))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
      &v5);
  v3 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    v10 = &v19;
    v11 = 4;
    v12 = 0;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(v5);
    p_PIDOfTarget = &PIDOfTarget;
    v14 = 4;
    v15 = 0;
    VIDOfTarget = ISMTracing::GetVIDOfTarget(v5);
    p_VIDOfTarget = &VIDOfTarget;
    v17 = 4;
    v18 = 0;
    TlgWrite((TraceLoggingHProvider)v3, &unk_180165FD2, 0LL, 0LL, 5u, &pData);
  }
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
