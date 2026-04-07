/*
 * XREFs of ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001B660
 * Callers:
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18000F920 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180018E30 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001B090 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180085BA0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001B580 (-Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::Create(struct IDwmChannel *a1, struct CCanvasVisual **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  __int64 result; // rax
  unsigned int v7; // esi

  if ( a2 )
  {
    v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           280LL);
    v5 = (CBaseObject *)v4;
    if ( v4 )
    {
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 32) = &VisualCollection::`vftable';
      *(_QWORD *)(v4 + 48) = 0LL;
      *(_QWORD *)(v4 + 56) = 0LL;
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_DWORD *)(v4 + 72) = 0;
      *(_QWORD *)(v4 + 176) = 0x3FF0000000000000LL;
      *(_QWORD *)(v4 + 168) = 0x3FF0000000000000LL;
      *(_QWORD *)(v4 + 184) = 0x3FF0000000000000LL;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
      *(_QWORD *)(v4 + 104) = 0LL;
      *(_DWORD *)(v4 + 192) = -2;
      *(_QWORD *)(v4 + 40) = v4;
      *(_DWORD *)(v4 + 128) = 0x7FFFFFFF;
      *(_DWORD *)(v4 + 136) = 0x7FFFFFFF;
      *(_DWORD *)(v4 + 132) = 0x7FFFFFFF;
      *(_DWORD *)(v4 + 140) = 0x7FFFFFFF;
      *(_QWORD *)(v4 + 248) = 0LL;
      *(_QWORD *)(v4 + 256) = 0LL;
      *(_QWORD *)(v4 + 264) = 0LL;
      *(_DWORD *)(v4 + 272) = 0;
      *(_QWORD *)(v4 + 240) = 0LL;
      *(_QWORD *)v4 = &CCanvasVisual::`vftable';
      result = CCanvasVisual::Initialize((CCanvasVisual *)v4, a1);
      v7 = result;
      if ( (int)result < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x15u);
        CBaseObject::Release(v5);
        return v7;
      }
      else
      {
        *a2 = v5;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x15u);
      return 2147942414LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x15u);
    return 2147942487LL;
  }
  return result;
}
