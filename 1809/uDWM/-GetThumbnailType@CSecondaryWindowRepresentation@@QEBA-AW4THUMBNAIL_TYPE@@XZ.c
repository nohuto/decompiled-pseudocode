/*
 * XREFs of ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x18000A304
 * Callers:
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000984C (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x18008B880 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetThumbnailType(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v3; // rcx
  int v4; // ecx
  int v5; // ecx

  v1 = 2;
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      return 0;
    case 2:
      return 1;
    case 3:
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 432LL);
      if ( !v3 )
        return 4;
      v4 = *(_DWORD *)(v3 + 16);
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( !v5 )
          return 3;
        if ( v5 == 1 )
          return 4;
      }
      break;
  }
  return v1;
}
