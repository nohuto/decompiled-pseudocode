/*
 * XREFs of ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180029E8C
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x180029A30 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180093030 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x180093458 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CThumbnailData::UpdateProperties(CThumbnailData *this, const struct _DWM_THUMBNAIL_PROPERTIES *a2)
{
  DWORD dwFlags; // r8d
  unsigned int v3; // ebp
  int v4; // esi
  BOOL v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ecx
  signed int v15; // r8d
  int v16; // eax
  CSecondaryWindowRepresentation **v17; // rcx
  int updated; // eax
  int v20; // ecx
  BOOL v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  void *v25; // [rsp+28h] [rbp-20h]

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
    v21 = EqualRect((const RECT *)this + 4, &a2->rcSource);
    v22 = *((_DWORD *)this + 11);
    if ( !v21 || (v22 & 2) == 0 )
      v4 |= 2u;
    *((_DWORD *)this + 11) = v22 | 2;
    *((_OWORD *)this + 4) = a2->rcSource;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 4) != 0 )
  {
    v23 = *((_DWORD *)this + 11);
    if ( *((_BYTE *)this + 80) != a2->opacity || (v23 & 4) == 0 )
      v4 |= 4u;
    *((_DWORD *)this + 11) = v23 | 4;
    *((_BYTE *)this + 80) = a2->opacity;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 8) != 0 )
  {
    v9 = *((_DWORD *)this + 11);
    if ( *(_DWORD *)((char *)this + 81) != a2->fVisible || (v9 & 8) == 0 )
      v4 |= 8u;
    *((_DWORD *)this + 11) = v9 | 8;
    *(_DWORD *)((char *)this + 81) = a2->fVisible;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 0x10) != 0 )
  {
    v20 = *((_DWORD *)this + 11);
    if ( *(_DWORD *)((char *)this + 85) != a2->fSourceClientAreaOnly || (v20 & 0x10) == 0 )
      v4 |= 0x10u;
    *((_DWORD *)this + 11) = v20 | 0x10;
    *(_DWORD *)((char *)this + 85) = a2->fSourceClientAreaOnly;
    dwFlags = a2->dwFlags;
  }
  v10 = v4 | 0x80000;
  if ( (dwFlags & 0x80000) == 0 )
    v10 = v4;
  v11 = v10;
  if ( (dwFlags & 0x400000) != 0 )
  {
    v24 = *((_DWORD *)this + 11);
    if ( (v24 & 0x400000) == 0 )
    {
      v11 = v10 | 0x400000;
      *((_DWORD *)this + 11) = v24 | 0x400000;
      dwFlags = a2->dwFlags;
    }
  }
  v12 = dwFlags & 0x30000 | v11;
  if ( (dwFlags & 0x100000) != 0 )
  {
    v12 |= 0x100000u;
    *((_DWORD *)this + 11) |= 0x100000u;
    dwFlags = a2->dwFlags;
  }
  if ( (dwFlags & 0x800000) != 0 )
  {
    v12 |= 0x800000u;
    *((_DWORD *)this + 11) |= 0x800000u;
    dwFlags = a2->dwFlags;
  }
  v13 = dwFlags & 0xC000000;
  if ( (dwFlags & 0xC000000) != 0 )
  {
    v12 |= v13;
    *((_DWORD *)this + 11) = v13 | *((_DWORD *)this + 11) & 0xF3FFFFFF;
    dwFlags = a2->dwFlags;
  }
  v14 = dwFlags & 0x30000000;
  if ( (dwFlags & 0x30000000) != 0 )
  {
    v12 |= v14;
    *((_DWORD *)this + 11) = v14 | *((_DWORD *)this + 11) & 0xCFFFFFFF;
    dwFlags = a2->dwFlags;
  }
  v15 = dwFlags & 0xC0000000;
  if ( v15 )
  {
    v12 |= v15;
    v16 = v15 | *((_DWORD *)this + 11) & 0x3FFFFFFF;
    *((_DWORD *)this + 11) = v16;
    if ( v15 < 0 )
      *((_DWORD *)this + 11) = v16 & 0xFFEFFFFF;
  }
  v17 = (CSecondaryWindowRepresentation **)*((_QWORD *)this + 12);
  if ( v17 )
  {
    updated = CThumbnailVisual::UpdateProperties(v17, v12);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x21A5u, v25);
  }
  return v3;
}
