/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180039714
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180016C10 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001D8D0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x1800130E4 (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, struct _MARGINS *a2)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  struct _MARGINS *v6; // rdx
  __int64 v8; // rax
  void *v9; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = (_DWORD *)*((_QWORD *)this + 34);
  if ( a2 )
  {
    if ( !v4 )
      goto LABEL_5;
    if ( operator==(a2, v4) )
      return v3;
    if ( !v6 )
    {
LABEL_5:
      v6 = (struct _MARGINS *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                16LL);
      *((_QWORD *)this + 34) = v6;
      if ( !v6 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xF9u, v9);
        return v3;
      }
    }
    *v6 = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v3;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v8 = *(_QWORD *)this;
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v8 + 24))(this, 0x2000LL);
  }
  return v3;
}
