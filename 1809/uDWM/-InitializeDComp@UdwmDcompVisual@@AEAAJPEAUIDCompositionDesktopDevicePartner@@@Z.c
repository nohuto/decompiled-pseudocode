/*
 * XREFs of ?InitializeDComp@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x1800220B4
 * Callers:
 *     ?Initialize@UdwmDcompVisual@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800223D4 (-Initialize@UdwmDcompVisual@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDcompVisual@@_N@Z @ 0x18002219C (-CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDc.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmDcompVisual::InitializeDComp(
        UdwmDcompVisual *this,
        struct IDCompositionDesktopDevicePartner *a2)
{
  __int64 *v4; // r14
  int SharedVisual; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
    return 0LL;
  v4 = (__int64 *)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    SharedVisual = UdwmDcompVisual::CreateSharedVisual(this, a2, (UdwmDcompVisual *)((char *)this + 16), 1);
    v6 = SharedVisual;
    if ( SharedVisual < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BB,
        (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)SharedVisual,
        v16);
      return v6;
    }
  }
  v7 = *((_QWORD *)this + 7);
  if ( !v7 )
  {
    v8 = UdwmDcompVisual::CreateSharedVisual(this, a2, (UdwmDcompVisual *)((char *)this + 56), 0);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C0,
        (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
        (const char *)(unsigned int)v8,
        v16);
      return v9;
    }
    v7 = *((_QWORD *)this + 7);
  }
  v10 = *v4;
  *(_QWORD *)(v10 + 240) = v7;
  *(_QWORD *)(v7 + 240) = v10;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 128LL))(
          *((_QWORD *)this + 3),
          *((_QWORD *)this + 8),
          1LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v11,
      v16);
    return v12;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 24LL))(a2);
    v14 = v13;
    if ( v13 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v13,
      v16);
    return v14;
  }
}
