/*
 * XREFs of ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18001EB68
 * Callers:
 *     _lambda_1e50dd1581e01d6b2d5aa75be8ea3966_::operator() @ 0x18001B6E4 (_lambda_1e50dd1581e01d6b2d5aa75be8ea3966_--operator().c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001BEB8 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1802B371C (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector_(
        ViewManagerInteropTraceLogging *this,
        int a2,
        const union _RM_ACTIVITY_IMPORTANCE *a3)
{
  __int64 v4; // r10
  unsigned __int16 v5; // cx
  REGHANDLE v6; // rcx
  __int16 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v8; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v9; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v10; // [rsp+3Eh] [rbp-CAh] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-B8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  void *v16; // [rsp+78h] [rbp-90h]
  int v17; // [rsp+80h] [rbp-88h]
  int v18; // [rsp+84h] [rbp-84h]
  int *v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  const union _RM_ACTIVITY_IMPORTANCE *v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  char *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  __int16 *v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  __int16 *v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  __int16 *v29; // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  __int16 *v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  WINBOOL *v33; // [rsp+F8h] [rbp-10h]
  __int64 v34; // [rsp+100h] [rbp-8h]
  char *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  char *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  int v39; // [rsp+150h] [rbp+48h] BYREF

  v39 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending[1], &Context)
    && fPending[1] )
  {
    Context = qword_1805C2318;
    qword_1805C2318[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2330 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2318, qword_1805C2330);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805C2318);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *(_WORD *)a3;
    v19 = &v39;
    v20 = 4LL;
    v23 = (char *)a3 + 3;
    v21 = a3;
    v7 = (v5 >> 1) & 7;
    v22 = 4LL;
    v25 = &v7;
    v24 = 1LL;
    v8 = (v5 >> 4) & 3;
    v27 = &v8;
    v26 = 2LL;
    v9 = (v5 >> 6) & 1;
    v29 = &v9;
    v28 = 2LL;
    v10 = (v5 >> 7) & 1;
    v31 = &v10;
    LOWORD(fPending[0]) = v5 & 1;
    v30 = 2LL;
    v33 = fPending;
    v35 = (char *)fPending + 2;
    v37 = (char *)a3 + 2;
    v32 = 2LL;
    v34 = 2LL;
    HIWORD(fPending[0]) = HIBYTE(v5) & 1;
    v36 = 2LL;
    v38 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v16 = &unk_1804FAB02;
    UserData.Reserved = 2;
    v6 = *(_QWORD *)(v4 + 32);
    v18 = 1;
    v17 = 175;
    v13 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}
