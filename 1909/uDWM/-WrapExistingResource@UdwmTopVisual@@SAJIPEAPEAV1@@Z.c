/*
 * XREFs of ?WrapExistingResource@UdwmTopVisual@@SAJIPEAPEAV1@@Z @ 0x18000F4A8
 * Callers:
 *     ?CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDcompVisual@@_N@Z @ 0x18000F264 (-CreateSharedVisual@UdwmDcompVisual@@AEAAJPEAUIDCompositionDesktopDevicePartner@@AEAUSharedDwmDc.c)
 * Callees:
 *     ?InitializeFromExistingResource@CVisual@@MEAAJI@Z @ 0x18000F620 (-InitializeFromExistingResource@CVisual@@MEAAJI@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180019DE0 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UdwmTopVisual::WrapExistingResource(unsigned int a1, struct UdwmTopVisual **a2)
{
  __int64 v4; // rax
  CVisual *v5; // rsi
  CBaseObject *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)0x80070057LL,
      v12);
    return 2147942487LL;
  }
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         248LL);
  v5 = (CVisual *)v4;
  if ( !v4 )
  {
    v8 = -2147024882;
    v6 = 0LL;
    v10 = 2147942414LL;
    v11 = 232LL;
    goto LABEL_11;
  }
  memset_0((void *)(v4 + 8), 0, 0xE8uLL);
  CVisual::CVisual(v5);
  *((_QWORD *)v5 + 30) = 0LL;
  *(_QWORD *)v5 = &UdwmTopVisual::`vftable';
  v6 = v5;
  v7 = CVisual::InitializeFromExistingResource(v5, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 234LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)v10,
      v12);
    goto LABEL_5;
  }
  v6 = 0LL;
  *a2 = v5;
  v8 = 0;
LABEL_5:
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
