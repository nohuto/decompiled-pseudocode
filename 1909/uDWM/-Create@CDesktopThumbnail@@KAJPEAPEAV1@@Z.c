/*
 * XREFs of ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z @ 0x1800AE9E0
 * Callers:
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800AEF58 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800AE620 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 */

__int64 __fastcall CDesktopThumbnail::Create(struct CDesktopThumbnail **a1)
{
  CDesktopThumbnailBase *v1; // rax
  CDesktopThumbnailBase *v2; // rbx
  int v3; // edi
  int v4; // eax

  v1 = (CDesktopThumbnailBase *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                                  WPF::g_pProcessHeap,
                                  320LL);
  v2 = v1;
  if ( v1 )
  {
    memset_0(v1, 0, 0x140uLL);
    CDesktopThumbnailBase::CDesktopThumbnailBase(v2);
    *(_QWORD *)v2 = &CDesktopThumbnail::`vftable';
    *((_QWORD *)v2 + 35) = 0LL;
    *((_QWORD *)v2 + 36) = 0LL;
    *((_DWORD *)v2 + 74) = 0;
    *((_DWORD *)v2 + 75) = 0;
    *((_DWORD *)v2 + 76) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(CDesktopThumbnailBase *))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = v4;
    if ( v4 >= 0 )
    {
      CDesktopThumbnail::s_pThumbnailNoRef = v2;
      v2 = 0LL;
      v3 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3Fu);
    }
    if ( v3 >= 0 )
      goto LABEL_11;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Fu);
  }
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
LABEL_11:
  if ( v2 )
    CBaseObject::Release(v2);
  return (unsigned int)v3;
}
