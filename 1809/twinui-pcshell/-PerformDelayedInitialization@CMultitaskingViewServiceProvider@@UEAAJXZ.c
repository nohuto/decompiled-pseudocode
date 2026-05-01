/*
 * XREFs of ?PerformDelayedInitialization@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x1802DF0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802DFDF0 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1802E0194 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::PerformDelayedInitialization(
        CMultitaskingViewServiceProvider *this)
{
  CMultitaskingViewServiceProvider *v1; // rdi
  int started; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CMultitaskingViewServiceProvider *)((char *)this - 24);
  started = CMultitaskingViewServiceProvider::_StartMTVThread((CMultitaskingViewServiceProvider *)((char *)this - 24));
  if ( started < 0 )
  {
    v3 = 159LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)started);
    return (unsigned int)started;
  }
  started = CMultitaskingViewServiceProvider::_CreateHotKeyHandler(v1);
  if ( started < 0 )
  {
    v3 = 162LL;
    goto LABEL_5;
  }
  return (unsigned int)started;
}
