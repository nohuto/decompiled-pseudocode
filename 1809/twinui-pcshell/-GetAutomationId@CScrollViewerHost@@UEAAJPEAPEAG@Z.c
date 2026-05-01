/*
 * XREFs of ?GetAutomationId@CScrollViewerHost@@UEAAJPEAPEAG@Z @ 0x18030A610
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CScrollViewerHost::GetAutomationId(CScrollViewerHost *this, unsigned __int16 **a2)
{
  __int64 v3; // rbx
  unsigned int v4; // ebx
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rdx
  char *v7; // r8
  unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v10; // r9
  unsigned __int16 *v11; // rax
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  if ( (*((_BYTE *)this + 392) & 4) != 0 )
  {
    v3 = 20LL;
    *(_QWORD *)v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    if ( !is_mul_ok(0x14uLL, 2uLL) )
    {
      v4 = -2147024362;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
        (const char *)v4);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
      return v4;
    }
    v5 = (unsigned __int16 *)CoTaskMemAlloc(0x28uLL);
    v6 = v5;
    if ( !v5 )
    {
      v4 = -2147024882;
      goto LABEL_14;
    }
    *v5 = 0;
    v7 = (char *)((char *)L"TaskSwitchingWindow" - (char *)v5);
    v8 = v5;
    do
    {
      v9 = v3 - 1;
      if ( v3 == 1 )
        break;
      v10 = *(unsigned __int16 *)((char *)v8 + (_QWORD)v7);
      if ( !v10 )
        break;
      *v8 = v10;
      --v3;
      ++v8;
    }
    while ( v9 );
    v11 = v8 - 1;
    *(_QWORD *)v13 = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    if ( v3 )
      v11 = v8;
    *v11 = 0;
    *a2 = v6;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 2147500033LL;
  }
}
