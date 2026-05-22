/*
 * XREFs of ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x180108810
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800199E8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014ED0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x180108908 (-Initialize@TapProcessor@@IEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::Create(struct TapProcessor **a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r9
  TapProcessor *v5; // rax
  TapProcessor *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TapProcessor *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( a1 )
  {
    v5 = (TapProcessor *)RefCountedObject::operator new(0x48uLL);
    v6 = v5;
    if ( v5 )
    {
      *((_QWORD *)v5 + 2) = &RefCountedObject::`vftable';
      *((_DWORD *)v5 + 6) = 1;
      *(_QWORD *)v5 = &TapProcessor::`vftable'{for `IContextualProcessor'};
      *((_QWORD *)v5 + 1) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
      *((_QWORD *)v5 + 2) = &TapProcessor::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v5 + 8) = 63;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_QWORD *)v5 + 6) = 0LL;
      *((_BYTE *)v5 + 64) = 0;
    }
    else
    {
      v6 = 0LL;
    }
    v10 = v6;
    if ( v6 )
    {
      v7 = TapProcessor::Initialize(v6);
      v2 = v7;
      if ( v7 >= 0 )
      {
        v10 = 0LL;
        v2 = 0;
        *a1 = v6;
        goto LABEL_12;
      }
      v4 = (unsigned int)v7;
      v3 = 48LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 45LL;
      v4 = 2147942414LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 38LL;
    v4 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
    (const char *)v4);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v10);
  return v2;
}
