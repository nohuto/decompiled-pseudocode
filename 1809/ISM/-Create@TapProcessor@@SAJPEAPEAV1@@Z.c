/*
 * XREFs of ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1800D2650
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800D2834 (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 *     CreateInputServiceProxy @ 0x1800D3270 (CreateInputServiceProxy.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TapProcessor::Create(struct TapProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  char *v4; // rax
  char *v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  int InteractionContext; // eax
  int v9; // eax
  __int64 v10; // rcx
  int InputServiceProxy; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0;
  if ( !a1 )
  {
    v2 = -2147024809;
    v3 = 38LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)v2);
    return v2;
  }
  v4 = (char *)malloc(0x58uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x58uLL);
  if ( v5 )
  {
    *((_QWORD *)v5 + 3) = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 8) = 1;
    *(_QWORD *)v5 = &TapProcessor::`vftable'{for `IContextualProcessor'};
    *((_QWORD *)v5 + 1) = &TapProcessor::`vftable'{for `IPointerInfoAdapterClient'};
    *((_QWORD *)v5 + 2) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
    *((_QWORD *)v5 + 3) = &TapProcessor::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v5 + 10) = 63;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 8) = 0LL;
    v5[80] = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v2 = -2147024882;
    v3 = 45LL;
    goto LABEL_10;
  }
  v6 = *((_QWORD *)v5 + 6);
  if ( v6 )
  {
    *((_QWORD *)v5 + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = CoreUICreate(v5 + 48);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  InteractionContext = CreateInteractionContext(v5 + 72);
  if ( InteractionContext < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InteractionContext);
    __debugbreak();
  }
  v9 = TapProcessor::ResetAndInitializeInteractionContext((TapProcessor *)v5);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x1800D282ALL);
  }
  v10 = *((_QWORD *)v5 + 8);
  if ( v10 )
  {
    *((_QWORD *)v5 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  InputServiceProxy = CreateInputServiceProxy((struct IInputServiceProxyOwner *)(v5 + 16));
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InputServiceProxy);
    __debugbreak();
  }
  *a1 = (struct TapProcessor *)v5;
  return v2;
}
