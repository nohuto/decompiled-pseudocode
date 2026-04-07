/*
 * XREFs of ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180027A90
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180027A30 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800101B0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180027910 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x180027934 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailData::EnsureThumbnailVisual(CThumbnailData *this)
{
  CThumbnailVisual *v1; // rbx
  int v2; // edi
  CThumbnailVisual *v4; // rax
  CThumbnailVisual *v5; // rsi
  int v6; // eax
  int updated; // eax
  void *v9; // [rsp+28h] [rbp-10h]
  CBaseObject *v10; // [rsp+40h] [rbp+8h]

  v1 = 0LL;
  v2 = 0;
  v10 = 0LL;
  if ( *((_QWORD *)this + 12) )
    return (unsigned int)v2;
  v4 = (CThumbnailVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             568LL);
  if ( v4 )
    v5 = CThumbnailVisual::CThumbnailVisual(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = CThumbnailVisual::Initialize(v5);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1Bu, v9);
    }
    else
    {
      v1 = v5;
      v5 = 0LL;
      v2 = 0;
      v10 = v1;
    }
    if ( v2 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu, v9);
  }
  v1 = 0LL;
  v10 = 0LL;
LABEL_8:
  if ( v5 )
    CBaseObject::Release(v5);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x21BDu, v9);
  }
  else
  {
    *((_QWORD *)v1 + 46) = this;
    updated = CThumbnailVisual::UpdateProperties((CSecondaryWindowRepresentation **)v1, *((_DWORD *)this + 11));
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x21C1u, v9);
    }
    else
    {
      *((_QWORD *)this + 12) = v1;
      _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
      v1 = v10;
    }
  }
  if ( v1 )
    CBaseObject::Release(v1);
  return (unsigned int)v2;
}
