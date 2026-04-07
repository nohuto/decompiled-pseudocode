/*
 * XREFs of ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180008CA0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180022C10 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180022CA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180023D70 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180033190 (-ValidateVisual@CImage@@UEAAJXZ.c)
 *     ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003A990 (-ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ.c)
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x180083F70 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x18009B6A0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800AB860 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800AE210 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800886C4 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CRenderDataVisual::ValidateVisual(CRenderDataVisual *this)
{
  int v1; // eax
  int v2; // edi
  int updated; // eax
  __int64 result; // rax
  int v6; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 20);
  v2 = 0;
  if ( (v1 & 2) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(CRenderDataVisual *, _QWORD))(*(_QWORD *)this + 88LL))(this, 0LL);
    v2 = updated;
    if ( updated < 0 )
    {
      v8 = 131;
      goto LABEL_21;
    }
    *((_DWORD *)this + 20) &= ~2u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 8) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 176LL))(this);
    v2 = updated;
    if ( updated < 0 )
    {
      v8 = 138;
      goto LABEL_21;
    }
    *((_DWORD *)this + 20) &= ~8u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = CVisual::UpdateTransform(this);
    v2 = updated;
    if ( updated < 0 )
    {
      v8 = 145;
      goto LABEL_21;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x20) != 0 )
  {
    updated = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 160LL))(this);
    v2 = updated;
    if ( updated >= 0 )
    {
      *((_DWORD *)this + 20) &= ~0x20u;
      v1 = *((_DWORD *)this + 20);
      goto LABEL_7;
    }
    v8 = 152;
LABEL_21:
    v7 = updated;
    goto LABEL_23;
  }
LABEL_7:
  if ( (v1 & 0x40) == 0 )
    goto LABEL_8;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 408LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
         (char *)this + 196);
  v2 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3D9u);
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x40u;
    goto LABEL_8;
  }
  v8 = 159;
  v7 = v2;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8);
LABEL_8:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x94u);
  }
  else if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    result = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 192LL))(this);
    v2 = result;
    if ( (int)result >= 0 )
    {
      *((_DWORD *)this + 20) &= ~4u;
      return result;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x98u);
  }
  return (unsigned int)v2;
}
