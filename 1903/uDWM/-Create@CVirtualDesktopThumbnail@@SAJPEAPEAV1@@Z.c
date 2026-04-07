/*
 * XREFs of ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18008FA88
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180090610 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800AE980 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 */

__int64 __fastcall CVirtualDesktopThumbnail::Create(struct CVirtualDesktopThumbnail **a1)
{
  int v2; // edi
  __int64 v3; // rax
  CDesktopThumbnailBase *v4; // rbx
  int v5; // eax

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xFEu);
    return (unsigned int)v2;
  }
  v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         288LL);
  v4 = (CDesktopThumbnailBase *)v3;
  if ( v3 )
  {
    memset_0((void *)(v3 + 8), 0, 0x118uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v4);
    *(_QWORD *)v4 = &CVirtualDesktopThumbnail::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(CDesktopThumbnailBase *))(*(_QWORD *)v4 + 8LL))(v4);
    v2 = v5;
    if ( v5 >= 0 )
    {
      *a1 = v4;
      v4 = 0LL;
      v2 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xFEu);
    }
    if ( v2 >= 0 )
      goto LABEL_13;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xFEu);
  }
  *a1 = 0LL;
LABEL_13:
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v2;
}
