/*
 * XREFs of ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x180044470
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x180043EC4 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180022E18 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopWindowReplacement::Create(struct CDesktopWindowReplacement **a1)
{
  __int64 v2; // rax
  CRenderDataVisual *v3; // rbx
  int v4; // eax
  int v5; // edi
  void *v7; // [rsp+28h] [rbp-10h]

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x3E3u, v7);
    return (unsigned int)v5;
  }
  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         280LL);
  v3 = (CRenderDataVisual *)v2;
  if ( v2 )
  {
    memset_0((void *)(v2 + 8), 0, 0x110uLL);
    CRenderDataVisual::CRenderDataVisual(v3);
    *(_QWORD *)v3 = &CDesktopWindowReplacement::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)v3 + 8LL))(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3E3u, v7);
    }
    else
    {
      *a1 = v3;
      v3 = 0LL;
      v5 = 0;
    }
    if ( v5 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3E3u, v7);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v5;
}
