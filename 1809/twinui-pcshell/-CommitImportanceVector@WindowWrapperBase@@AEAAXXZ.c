/*
 * XREFs of ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001F220
 * Callers:
 *     _lambda_c3b823257698a8a46ce2aa70921db56d_::operator() @ 0x18001E6B0 (_lambda_c3b823257698a8a46ce2aa70921db56d_--operator().c)
 *     _lambda_dd3f6d7ea91d00747dcff202126691de_::operator() @ 0x18001E8CC (_lambda_dd3f6d7ea91d00747dcff202126691de_--operator().c)
 *     _lambda_4bbaa23fff4f7893ed40dfc26589fcad_::operator() @ 0x18001EA14 (_lambda_4bbaa23fff4f7893ed40dfc26589fcad_--operator().c)
 *     ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x18001EE30 (-ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ.c)
 *     _lambda_175779e8aec8e508ceed20f7fb25cadd_::operator() @ 0x18001EEE4 (_lambda_175779e8aec8e508ceed20f7fb25cadd_--operator().c)
 *     _lambda_be4a23874ab7a75b5a94905273a4a2ff_::operator() @ 0x18001EF94 (_lambda_be4a23874ab7a75b5a94905273a4a2ff_--operator().c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180241644 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

void __fastcall WindowWrapperBase::CommitImportanceVector(WindowWrapperBase *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx
  _DWORD *v6; // rcx
  __int64 v7; // r10
  unsigned __int16 v8; // cx
  int UserDataCount; // [rsp+28h] [rbp-E0h]
  __int16 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v11; // [rsp+3Ah] [rbp-CEh] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v13; // [rsp+3Eh] [rbp-CAh] BYREF
  __int16 v14; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v15; // [rsp+42h] [rbp-C6h] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-C4h] BYREF
  WINBOOL v17; // [rsp+48h] [rbp-C0h] BYREF
  WINBOOL v18; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID v21; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID v22; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  void *v26; // [rsp+98h] [rbp-70h]
  int v27; // [rsp+A0h] [rbp-68h]
  int v28; // [rsp+A4h] [rbp-64h]
  __int64 *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  _DWORD *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  char *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  __int16 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int16 *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  __int16 *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  __int16 *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int16 *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int16 *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  char *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v24 = -2LL;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35));
  if ( !*((_BYTE *)this + 552) )
  {
    v2 = (_DWORD *)((char *)this + 252);
    if ( *((_DWORD *)this + 64) != *((_DWORD *)this + 63) )
    {
      v3 = *((_QWORD *)this + 13);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xAE4,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v4,
            UserDataCount);
        *((_DWORD *)this + 64) = *v2;
        v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 272LL))((char *)this + 16);
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = qword_18050FB50;
          qword_18050FB50[0] = &IamTraceLogging::`vftable';
          atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_18050FB50);
          InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_18050FB50);
        }
        v6 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v6 && *v6 )
        {
          v22 = 0LL;
          if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v17, &v22) && v17 )
          {
            v22 = qword_18050FB50;
            qword_18050FB50[0] = &IamTraceLogging::`vftable';
            atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_18050FB50);
            InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_18050FB50);
          }
          LODWORD(v19) = v5;
          v21 = 0LL;
          if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v18, &v21) && v18 )
          {
            v21 = &qword_18050FB08;
            qword_18050FB08 = &ShellScreenClippingLogging::`vftable';
            qword_18050FB20 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050FB08, qword_18050FB20);
            InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_18050FB08);
          }
          v7 = *((_QWORD *)v21 + 1);
          if ( *(_DWORD *)v7 > 5u )
          {
            v29 = &v19;
            v30 = 4LL;
            v31 = v2;
            v32 = 4LL;
            v33 = (char *)v2 + 3;
            v34 = 1LL;
            v8 = *(_WORD *)v2;
            v10 = (*(_WORD *)v2 >> 1) & 7;
            v35 = &v10;
            v36 = 2LL;
            v11 = (v8 >> 4) & 3;
            v37 = &v11;
            v38 = 2LL;
            v12 = (v8 >> 6) & 1;
            v39 = &v12;
            v40 = 2LL;
            v13 = (v8 >> 7) & 1;
            v41 = &v13;
            v42 = 2LL;
            v14 = v8 & 1;
            v43 = &v14;
            v44 = 2LL;
            v15 = HIBYTE(v8) & 1;
            v45 = &v15;
            v46 = 2LL;
            v47 = (char *)v2 + 2;
            v48 = 1LL;
            *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18045F24D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            *(_DWORD *)&EventDescriptor.Level = 5;
            EventDescriptor.Keyword = 0LL;
            UserData.Ptr = *(_QWORD *)(v7 + 8);
            UserData.Size = *(unsigned __int16 *)UserData.Ptr;
            UserData.Reserved = 2;
            v26 = &unk_18045F258;
            v27 = 175;
            v28 = 1;
            EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
          }
        }
      }
    }
  }
}
