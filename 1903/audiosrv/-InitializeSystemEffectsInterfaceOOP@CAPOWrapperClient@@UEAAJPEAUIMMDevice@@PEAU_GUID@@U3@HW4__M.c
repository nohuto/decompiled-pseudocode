/*
 * XREFs of ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18003D8F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
        CAPOWrapperClient *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  void *v7; // rbx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v13; // edi
  __int64 *v14; // r10
  __int64 v15; // rax
  int v17; // [rsp+50h] [rbp-71h] BYREF
  int v18; // [rsp+54h] [rbp-6Dh] BYREF
  LPVOID pv; // [rsp+58h] [rbp-69h] BYREF
  __int128 v20; // [rsp+60h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  const char *v22; // [rsp+90h] [rbp-31h]
  __int64 v23; // [rsp+98h] [rbp-29h]
  int *v24; // [rsp+A0h] [rbp-21h]
  __int64 v25; // [rsp+A8h] [rbp-19h]
  int *v26; // [rsp+B0h] [rbp-11h]
  __int64 v27; // [rsp+B8h] [rbp-9h]

  v7 = 0LL;
  v17 = 0;
  pv = 0LL;
  if ( a2 && *((_QWORD *)this + 7) )
  {
    v17 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    v13 = v17;
    if ( v17 < 0 )
      goto LABEL_10;
    v14 = (__int64 *)*((_QWORD *)this + 7);
    v15 = *v14;
    v20 = (__int128)*a4;
    v17 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool, char *))(v15 + 32))(
            v14,
            pv,
            a3,
            &v20,
            a5,
            a6,
            a7 != 0LL,
            (char *)this + 72);
    v13 = v17;
    if ( v17 < 0 )
      goto LABEL_10;
    if ( a7 )
    {
      v13 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, struct IAudioSystemEffects2 **))this)(
              this,
              &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
              a7);
      v17 = v13;
    }
    if ( v13 < 0 )
    {
LABEL_10:
      if ( (unsigned int)dword_1801B64B8 > 2 )
      {
        v23 = 55LL;
        v22 = "CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP";
        v24 = &v18;
        v26 = &v17;
        v18 = 117;
        v25 = 4LL;
        v27 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CDBD, v11, v12, 5u, &pData);
        v13 = v17;
      }
    }
    v7 = pv;
  }
  else
  {
    v13 = -2147024809;
  }
  CoTaskMemFree(v7);
  return (unsigned int)v13;
}
