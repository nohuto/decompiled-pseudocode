/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180008670
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180008610 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18000A010 (-Initialize@CThumbnailVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x18000A034 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  CThumbnailVisual *v1; // rbx
  int v2; // edi
  struct IDwmChannel *v4; // rdi
  CThumbnailVisual *v5; // rax
  CThumbnailVisual *v6; // rsi
  int v7; // eax
  int updated; // eax
  CBaseObject *v10; // [rsp+40h] [rbp+8h]

  v1 = 0LL;
  v2 = 0;
  v10 = 0LL;
  if ( *((_QWORD *)this + 12) )
    return (unsigned int)v2;
  v4 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  v5 = (CThumbnailVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             568LL);
  if ( v5 )
    v6 = CThumbnailVisual::CThumbnailVisual(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu);
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x2117u);
    goto LABEL_12;
  }
  v7 = CThumbnailVisual::Initialize(v6, v4);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1Bu);
  }
  else
  {
    v1 = v6;
    v6 = 0LL;
    v10 = v1;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v2 < 0 )
    goto LABEL_17;
  *((_QWORD *)v1 + 46) = this;
  updated = CThumbnailVisual::UpdateProperties(v1, *((_DWORD *)this + 11));
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x211Bu);
  }
  else
  {
    *((_QWORD *)this + 12) = v1;
    _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    v1 = v10;
  }
LABEL_12:
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)v2;
}
