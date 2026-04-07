/*
 * XREFs of ?Initialize@AcrylicHostBackdrop@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800224A4
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001B090 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@UdwmDcompVisual@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800223D4 (-Initialize@UdwmDcompVisual@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AcrylicHostBackdrop::Initialize(AcrylicHostBackdrop *this, struct IDwmChannel *a2)
{
  __int64 v4; // rax
  UdwmDcompVisual *v5; // rbx
  CBaseObject *v6; // rcx
  int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  v5 = (UdwmDcompVisual *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &UdwmDcompVisual::`vftable';
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_DWORD *)(v4 + 80) = 0;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 2) = v5;
  if ( v5 )
  {
    if ( *((_BYTE *)this + 24) )
      return 0LL;
    v7 = UdwmDcompVisual::Initialize(v5, a2);
    if ( v7 >= 0 )
      return 0LL;
    v9 = 12LL;
  }
  else
  {
    v7 = -2147024882;
    v9 = 9LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"windows\\dwm\\udwm\\acrylichostbackdrop.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return (unsigned int)v7;
}
