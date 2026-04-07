/*
 * XREFs of ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180024840
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180002EAC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001A6B0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024510 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x1800245C0 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180037228 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EE1C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180019DE0 (--0CVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::Create(struct CCanvasVisual **a1)
{
  CVisual *v2; // rax
  struct CCanvasVisual *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edi
  void *v8; // [rsp+28h] [rbp-10h]

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x15u, v8);
    return (unsigned int)v6;
  }
  v2 = (CVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    280LL);
  v3 = v2;
  if ( v2 )
  {
    CVisual::CVisual(v2);
    *(_QWORD *)(v4 + 248) = 0LL;
    *(_QWORD *)(v4 + 256) = 0LL;
    *(_DWORD *)(v4 + 264) = 0;
    *(_DWORD *)(v4 + 268) = 0;
    *(_DWORD *)(v4 + 272) = 0;
    *(_QWORD *)(v4 + 240) = 0LL;
    *(_QWORD *)v4 = &CCanvasVisual::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CCanvasVisual *))(*(_QWORD *)v3 + 8LL))(v3);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x15u, v8);
    }
    else
    {
      *a1 = v3;
      v3 = 0LL;
      v6 = 0;
    }
    if ( v6 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15u, v8);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v6;
}
