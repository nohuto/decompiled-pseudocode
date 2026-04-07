/*
 * XREFs of ?Initialize@CLivePreview@@MEAAJPEAUIDwmChannel@@@Z @ 0x18003DC00
 * Callers:
 *     ?Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003DB70 (-Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x18003DC7C (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x18003DD5C (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLivePreview::Initialize(CLivePreview *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  CLivePreviewTimeline *v5; // rax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 74;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v7);
    return v4;
  }
  v5 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 96LL);
  if ( v5 )
    v5 = CLivePreviewTimeline::CLivePreviewTimeline(v5);
  *((_QWORD *)this + 58) = v5;
  if ( !v5 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4Du);
    return v4;
  }
  v3 = CLivePreview::_EnsureResources(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 79;
    goto LABEL_11;
  }
  return v4;
}
