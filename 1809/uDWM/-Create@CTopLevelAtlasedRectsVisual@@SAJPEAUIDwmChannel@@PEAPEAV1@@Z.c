/*
 * XREFs of ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180025AB0
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001B090 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180085BA0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001EF80 (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::Create(struct IDwmChannel *a1, struct CTopLevelAtlasedRectsVisual **a2)
{
  CVisual *v4; // rax
  struct CTopLevelAtlasedRectsVisual *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x20u);
    return v8;
  }
  v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    280LL);
  v5 = v4;
  if ( v4 )
  {
    CVisual::CVisual(v4);
    *(_QWORD *)(v6 + 240) = 0LL;
    *(_QWORD *)(v6 + 248) = 0LL;
    *(_DWORD *)(v6 + 256) = 0;
    *(_DWORD *)(v6 + 260) = 0;
    *(_DWORD *)(v6 + 264) = 0;
    *(_QWORD *)(v6 + 272) = 0LL;
    *(_QWORD *)v6 = &CTopLevelAtlasedRectsVisual::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v8 = -2147024882;
    goto LABEL_13;
  }
  v7 = (*(__int64 (__fastcall **)(struct CTopLevelAtlasedRectsVisual *, struct IDwmChannel *))(*(_QWORD *)v5 + 8LL))(
         v5,
         a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x20u);
  }
  else
  {
    *a2 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v8;
}
