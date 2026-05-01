/*
 * XREFs of ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18006D42C
 * Callers:
 *     _lambda_d38fe7d7cbebf305295b5d6636e8a4b7_::operator() @ 0x18002DB34 (_lambda_d38fe7d7cbebf305295b5d6636e8a4b7_--operator().c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18023E050 (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
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
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  void *v15; // [rsp+78h] [rbp-90h]
  int v16; // [rsp+80h] [rbp-88h]
  int v17; // [rsp+84h] [rbp-84h]
  int *v18; // [rsp+88h] [rbp-80h]
  __int64 v19; // [rsp+90h] [rbp-78h]
  const union _RM_ACTIVITY_IMPORTANCE *v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  char *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  __int16 *v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  __int16 *v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  __int16 *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  __int16 *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  WINBOOL *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  char *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  int v38; // [rsp+150h] [rbp+48h] BYREF

  v38 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending[1], &Context)
    && fPending[1] )
  {
    Context = &qword_18050FB08;
    qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
    qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *(_WORD *)a3;
    v18 = &v38;
    v19 = 4LL;
    v22 = (char *)a3 + 3;
    v20 = a3;
    v7 = (v5 >> 1) & 7;
    v21 = 4LL;
    v24 = &v7;
    v23 = 1LL;
    v8 = (v5 >> 4) & 3;
    v26 = &v8;
    v25 = 2LL;
    v9 = (v5 >> 6) & 1;
    v28 = &v9;
    v27 = 2LL;
    v10 = (v5 >> 7) & 1;
    v30 = &v10;
    LOWORD(fPending[0]) = v5 & 1;
    v29 = 2LL;
    v32 = fPending;
    v34 = (char *)fPending + 2;
    v36 = (char *)a3 + 2;
    v31 = 2LL;
    v33 = 2LL;
    HIWORD(fPending[0]) = HIBYTE(v5) & 1;
    v35 = 2LL;
    v37 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v4 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045F24D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v6 = *(_QWORD *)(v4 + 32);
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v15 = &unk_18045F258;
    UserData.Reserved = 2;
    v17 = 1;
    v16 = 175;
    EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}
