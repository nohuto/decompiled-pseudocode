/*
 * XREFs of ?SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180182978
 * Callers:
 *     ?OnViewCreated@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801805F0 (-OnViewCreated@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z @ 0x18018242C (-SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::SizeViewOnCreation(CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  int SystemMetrics; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  LPVOID Context[2]; // [rsp+30h] [rbp-40h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_180452B0F, 0LL, 0LL, 2u, &pData);
  SystemMetrics = GetSystemMetrics(76);
  v4 = GetSystemMetrics(77);
  Context[0] = (LPVOID)__PAIR64__(v4, SystemMetrics);
  v5 = v4;
  LODWORD(Context[1]) = SystemMetrics + GetSystemMetrics(78);
  HIDWORD(Context[1]) = v5 + GetSystemMetrics(79);
  v6 = CScreenClippingExperienceManager::SetViewSizeAndPosition(this, (struct tagRECT *)Context);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3BD,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
