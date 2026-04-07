/*
 * XREFs of ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180008478
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180008000 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008D1F0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18008D500 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThumbnailData::UpdateProperties(CThumbnailData *this, const struct _DWM_THUMBNAIL_PROPERTIES *a2)
{
  DWORD dwFlags; // r8d
  unsigned int v3; // ebp
  int v4; // esi
  BOOL v7; // eax
  int v8; // ecx
  BOOL v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // ecx
  signed int v18; // r8d
  CThumbnailVisual *v19; // rcx
  int updated; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax

  dwFlags = a2->dwFlags;
  v3 = 0;
  v4 = 0;
  if ( (a2->dwFlags & 1) != 0 )
  {
    v7 = EqualRect((const RECT *)this + 3, &a2->rcDestination);
    v8 = *((_DWORD *)this + 11);
    if ( !v7 || (v8 & 1) == 0 )
      v4 = 1;
    *((_DWORD *)this + 11) = v8 | 1;
    *((_OWORD *)this + 3) = a2->rcDestination;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 2) != 0 )
  {
    v9 = EqualRect((const RECT *)this + 4, &a2->rcSource);
    v10 = *((_DWORD *)this + 11);
    if ( !v9 || (v10 & 2) == 0 )
      v4 |= 2u;
    *((_DWORD *)this + 11) = v10 | 2;
    *((_OWORD *)this + 4) = a2->rcSource;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 4) != 0 )
  {
    v22 = *((_DWORD *)this + 11);
    if ( *((_BYTE *)this + 80) != a2->opacity || (v22 & 4) == 0 )
      v4 |= 4u;
    *((_DWORD *)this + 11) = v22 | 4;
    *((_BYTE *)this + 80) = a2->opacity;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 8) != 0 )
  {
    v11 = *((_DWORD *)this + 11);
    if ( *(_DWORD *)((char *)this + 81) != a2->fVisible || (v11 & 8) == 0 )
      v4 |= 8u;
    *((_DWORD *)this + 11) = v11 | 8;
    *(_DWORD *)((char *)this + 81) = a2->fVisible;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 0x10) != 0 )
  {
    v12 = *((_DWORD *)this + 11);
    if ( *(_DWORD *)((char *)this + 85) != a2->fSourceClientAreaOnly || (v12 & 0x10) == 0 )
      v4 |= 0x10u;
    *((_DWORD *)this + 11) = v12 | 0x10;
    *(_DWORD *)((char *)this + 85) = a2->fSourceClientAreaOnly;
    dwFlags = a2->dwFlags;
  }
  v13 = v4 | 0x80000;
  if ( (dwFlags & 0x80000) == 0 )
    v13 = v4;
  v14 = v13;
  if ( (dwFlags & 0x400000) != 0 )
  {
    v23 = *((_DWORD *)this + 11);
    if ( (v23 & 0x400000) == 0 )
    {
      v14 = v13 | 0x400000;
      *((_DWORD *)this + 11) = v23 | 0x400000;
      dwFlags = a2->dwFlags;
    }
  }
  v15 = dwFlags & 0x30000 | v14;
  if ( (dwFlags & 0x100000) != 0 )
  {
    v15 |= 0x100000u;
    *((_DWORD *)this + 11) |= 0x100000u;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 0x800000) != 0 )
  {
    v15 |= 0x800000u;
    *((_DWORD *)this + 11) |= 0x800000u;
    dwFlags = a2->dwFlags;
  }
  v16 = dwFlags & 0xC000000;
  if ( (dwFlags & 0xC000000) != 0 )
  {
    v15 |= v16;
    *((_DWORD *)this + 11) = v16 | *((_DWORD *)this + 11) & 0xF3FFFFFF;
    dwFlags = a2->dwFlags;
  }
  v17 = dwFlags & 0x30000000;
  if ( (dwFlags & 0x30000000) != 0 )
  {
    v15 |= v17;
    *((_DWORD *)this + 11) = v17 | *((_DWORD *)this + 11) & 0xCFFFFFFF;
    dwFlags = a2->dwFlags;
  }
  v18 = dwFlags & 0xC0000000;
  if ( v18 )
  {
    v15 |= v18;
    v24 = v18 | *((_DWORD *)this + 11) & 0x3FFFFFFF;
    *((_DWORD *)this + 11) = v24;
    if ( v18 < 0 )
      *((_DWORD *)this + 11) = v24 & 0xFFEFFFFF;
  }
  v19 = (CThumbnailVisual *)*((_QWORD *)this + 12);
  if ( v19 )
  {
    updated = CThumbnailVisual::UpdateProperties(v19, v15);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x20FFu);
  }
  return v3;
}
