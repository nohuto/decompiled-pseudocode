/*
 * XREFs of ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000984C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180008CA0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000976C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x18000A304 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 */

char __fastcall CThumbnailVisual::_ShouldUseSecondaryWindowVisual(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // eax
  int v7; // ecx

  v2 = 1;
  if ( !EqualRect(
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 48LL),
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 196LL)) )
    return 0;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    return 0;
  v4 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v4 + 44) & 2) != 0
    && (*(_DWORD *)(v4 + 44) & 0x100000) == 0
    && !EqualRect((const RECT *)(*(_QWORD *)(v4 + 24) + 48LL), (const RECT *)(v4 + 64)) )
  {
    return 0;
  }
  v5 = *(_DWORD *)(*((_QWORD *)this + 46) + 44LL);
  if ( (v5 & 0x40000000) != 0 )
    return 0;
  if ( *((_QWORD *)this + 47)
    && (unsigned int)CSecondaryWindowRepresentation::GetThumbnailType() != 1
    && (v6 = *((_DWORD *)this + 131)) != 0
    && (v7 = *((_DWORD *)this + 132)) != 0 )
  {
    if ( (float)((float)*((int *)this + 127) / (float)v6) < 0.5
      || (float)((float)*((int *)this + 128) / (float)v7) < 0.5 )
    {
      return 0;
    }
  }
  else if ( (v5 & 0x4000000) != 0 )
  {
    return 0;
  }
  return v2;
}
