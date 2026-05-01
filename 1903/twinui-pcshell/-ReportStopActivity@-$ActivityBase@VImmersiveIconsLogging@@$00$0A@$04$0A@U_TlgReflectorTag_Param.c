/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18040D7E4
 * Callers:
 *     ?Destroy@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18040AB20 (-Destroy@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18040DD60 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18007DC38 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x18040E6D8 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

__int64 __fastcall wil::ActivityBase<ImmersiveIconsLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rax
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  int v10; // ecx
  const WCHAR *v11; // rdx
  int v12; // ecx
  const CHAR *v13; // rdx
  DWORD v14; // ecx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  const struct _TlgProvider_t *v19; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v21; // rdx
  DWORD v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+84h] [rbp-84h]
  int *v33; // [rsp+88h] [rbp-80h]
  int v34; // [rsp+90h] [rbp-78h]
  int v35; // [rsp+94h] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  int *v37; // [rsp+A8h] [rbp-60h]
  int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+B8h] [rbp-50h] BYREF
  int *v41; // [rsp+C8h] [rbp-40h]
  int v42; // [rsp+D0h] [rbp-38h]
  int v43; // [rsp+D4h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v45; // [rsp+E8h] [rbp-20h]
  int v46; // [rsp+F0h] [rbp-18h]
  int v47; // [rsp+F4h] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+F8h] [rbp-10h] BYREF
  DWORD *v49; // [rsp+108h] [rbp+0h]
  int v50; // [rsp+110h] [rbp+8h]
  int v51; // [rsp+114h] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+128h] [rbp+20h] BYREF
  int *v54; // [rsp+138h] [rbp+30h]
  int v55; // [rsp+140h] [rbp+38h]
  int v56; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+158h] [rbp+50h] BYREF
  EVENT_DATA_DESCRIPTOR v59; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v60; // [rsp+188h] [rbp+80h]
  int v61; // [rsp+190h] [rbp+88h]
  int v62; // [rsp+194h] [rbp+8Ch]
  int *v63; // [rsp+198h] [rbp+90h]
  int v64; // [rsp+1A0h] [rbp+98h]
  int v65; // [rsp+1A4h] [rbp+9Ch]
  DWORD *v66; // [rsp+1A8h] [rbp+A0h]
  int v67; // [rsp+1B0h] [rbp+A8h]
  int v68; // [rsp+1B4h] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1B8h] [rbp+B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+1C8h] [rbp+C0h] BYREF

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = wil::details::static_lazy<ImmersiveIconsLogging>::get(
           a1,
           lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_);
    if ( v6 )
    {
      if ( **(_DWORD **)(v7 + 8) > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x200000000000uLL) )
      {
        v8 = (const CHAR *)*((_QWORD *)v6 + 6);
        v32 = 0;
        v35 = 0;
        v30 = &v28;
        v25 = v6[1];
        v33 = &v25;
        v28 = 0x1000000LL;
        v31 = 8;
        v34 = 4;
        TlgCreateSz(&pDesc, v8);
        v9 = (const CHAR *)*((_QWORD *)v6 + 15);
        v39 = 0;
        v37 = v6 + 14;
        v38 = 4;
        TlgCreateSz(&v40, v9);
        v10 = *v6;
        v11 = (const WCHAR *)*((_QWORD *)v6 + 2);
        v43 = 0;
        v26 = v10;
        v41 = &v26;
        v42 = 4;
        TlgCreateWsz(&v44, v11);
        v12 = v6[6];
        v13 = (const CHAR *)*((_QWORD *)v6 + 8);
        v47 = 0;
        LODWORD(v27) = v12;
        v45 = &v27;
        v46 = 4;
        TlgCreateSz(&v48, v13);
        v14 = v6[18];
        v15 = (const CHAR *)*((_QWORD *)v6 + 10);
        v51 = 0;
        v23 = v14;
        v49 = &v23;
        v50 = 4;
        TlgCreateSz(&v52, v15);
        TlgCreateWsz(&v53, *((LPCWSTR *)v6 + 11));
        v16 = v6[24];
        v17 = (const CHAR *)*((_QWORD *)v6 + 13);
        v56 = 0;
        v24 = v16;
        v54 = &v24;
        v55 = 4;
        TlgCreateSz(&v57, v17);
        TlgCreateWsz(&v58, *((LPCWSTR *)v6 + 14));
        TlgWrite(v18, &unk_1804BB808, (LPCGUID)(a1[6] + 8LL), 0LL, 0x11u, &pData);
      }
    }
    else
    {
      v19 = *(const struct _TlgProvider_t **)(v7 + 8);
      if ( *(_DWORD *)v19 > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x200000000000uLL) )
      {
        v62 = 0;
        v65 = 0;
        v60 = &v28;
        v24 = a2;
        v63 = &v24;
        v28 = 0x1000000LL;
        v61 = 8;
        v64 = 4;
        CurrentThreadId = GetCurrentThreadId();
        v21 = a1[6];
        v68 = 0;
        v23 = CurrentThreadId;
        v66 = &v23;
        v67 = 4;
        TlgCreateSz(&v69, *(LPCSTR *)(v21 + 48));
        TlgCreateWsz(&v70, *(LPCWSTR *)(a1[6] + 56LL));
        TlgWrite(v19, &unk_1804BB91F, (LPCGUID)(a1[6] + 8LL), 0LL, 7u, &v59);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
