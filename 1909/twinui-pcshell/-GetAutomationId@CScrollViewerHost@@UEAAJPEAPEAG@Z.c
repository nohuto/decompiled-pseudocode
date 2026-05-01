/*
 * XREFs of ?GetAutomationId@CScrollViewerHost@@UEAAJPEAPEAG@Z @ 0x18038A4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CScrollViewerHost::GetAutomationId(CScrollViewerHost *this, unsigned __int16 **a2)
{
  __int64 v3; // rdi
  unsigned __int16 *v4; // rsi
  int v5; // ebx
  _WORD *v6; // rax
  _WORD *v7; // rcx
  __int64 v8; // rax
  __int16 v9; // r8
  _WORD *v10; // rax
  _WORD *v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  if ( (*((_BYTE *)this + 392) & 4) == 0 )
    return 2147500033LL;
  v12 = 0LL;
  v3 = 20LL;
  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  if ( !is_mul_ok(0x14uLL, 2uLL) )
  {
    v5 = -2147024362;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
      (const char *)(unsigned int)v5);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
    return (unsigned int)v5;
  }
  v5 = 0;
  v6 = CoTaskMemAlloc(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    v14 = 20LL;
    v4 = v6;
    v12 = v6;
    *v6 = 0;
  }
  else
  {
    v5 = -2147024882;
    v7 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_14;
  do
  {
    v8 = v3 - 1;
    if ( v3 == 1 )
      break;
    v9 = *(_WORD *)((char *)v7 + (char *)L"TaskSwitchingWindow" - (char *)v4);
    if ( !v9 )
      break;
    *v7 = v9;
    --v3;
    ++v7;
  }
  while ( v8 );
  v10 = v7 - 1;
  v12 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  if ( v3 )
    v10 = v7;
  *v10 = 0;
  *a2 = v4;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
  return 0LL;
}
