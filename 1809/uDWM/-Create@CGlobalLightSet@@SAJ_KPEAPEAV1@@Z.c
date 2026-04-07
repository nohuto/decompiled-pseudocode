/*
 * XREFs of ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180043A28
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800438E4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x18008B440 (-OnInteropDeviceRecreated@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180043AC8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 *     ??0CGlobalLightSet@@AEAA@_K@Z @ 0x180044088 (--0CGlobalLightSet@@AEAA@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::Create(unsigned __int64 a1, struct CGlobalLightSet **a2)
{
  CGlobalLightSet *v4; // rax
  CGlobalLightSet *v5; // rax
  struct CGlobalLightSet *v6; // rsi
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (CGlobalLightSet *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            112LL);
  if ( !v4 )
  {
    v7 = 0LL;
    goto LABEL_10;
  }
  v5 = CGlobalLightSet::CGlobalLightSet(v4, a1);
  v6 = v5;
  v7 = v5;
  if ( !v5 )
  {
LABEL_10:
    v9 = -2147024882;
    v12 = 38LL;
    v11 = 2147942414LL;
    goto LABEL_11;
  }
  v8 = CGlobalLightSet::Initialize(v5);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v7 = 0LL;
    *a2 = v6;
    v9 = 0;
    goto LABEL_5;
  }
  v11 = (unsigned int)v8;
  v12 = 39LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)v11,
    v13);
LABEL_5:
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
